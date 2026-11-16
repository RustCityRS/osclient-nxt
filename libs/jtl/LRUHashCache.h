// libs/jtl/LRUHashCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag {
    template <
        typename...> // 68 instantiations, e.g. <int, 16ul, 17ul, false, unsigned long long>, <Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>, <audio::SoundResource, 128ul, 129ul, true, unsigned long long>
    class LRUHashCache {
    public:
        void Clean(unsigned long long);
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* Find(unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::DBTableIndex> const&, unsigned int, unsigned long long const&);
        void RemoveInner(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*);
        void Remove(unsigned long long const&);
        void RemoveInner(
            eastl::hashtable_iterator<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
                false, false>&);
        LRUHashCache(unsigned int, char const*);
        ~LRUHashCache();
        void Reset();
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::ClientScript> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*
        Find(eastl::basic_string<char, BucketAllocatorEASTL> const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*
        Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int,
            eastl::basic_string<char, BucketAllocatorEASTL> const&);
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* Find(eastl::string const&);
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*
        Put(shared_ptr<oldscape::rs2lib::HttpSpriteData> const&, unsigned int, eastl::string const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::jstring::PixfontGeneric> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::dash3d::ModelLit> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::rs2lib::InterfaceGraphicMask> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* Put(shared_ptr<int> const&, unsigned int,
                                                                                unsigned long long const&);
        void Remove(eastl::basic_string<char, BucketAllocatorEASTL> const&);
        void
        RemoveInner(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*);
        void RemoveInner(
            eastl::hashtable_iterator<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                  LRUHashCacheWrapper<oldscape::graphics::Pix32,
                                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                      false, false>&);
        void Remove(eastl::string const&);
        void RemoveInner(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*);
        void RemoveInner(
            eastl::hashtable_iterator<
                eastl::pair<eastl::string const, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>,
                false, false>&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::InvType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::LocType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::dash3d::ModelSource> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::dash3d::ModelUnlit> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::MesAnimType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::NpcType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::ObjType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
        Find(oldscape::configdecoder::ObjSpriteCacheKey const&);
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
        Put(shared_ptr<oldscape::configdecoder::ObjSprite> const&, unsigned int,
            oldscape::configdecoder::ObjSpriteCacheKey const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::ParamType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::SeqType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::dash3d::AnimFrameSet> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, unsigned int,
            unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::SpotType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::StructType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarBitType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarConBitType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarConType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarGlobalType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarObjType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarcType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarnBitType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarnType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VarpType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::VeccType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::DBRowType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::DBTableType> const&, unsigned int, unsigned long long const&);
        void Remove(oldscape::configdecoder::ObjSpriteCacheKey const&);
        void RemoveInner(
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*);
        void RemoveInner(
            eastl::hashtable_iterator<eastl::pair<oldscape::configdecoder::ObjSpriteCacheKey const,
                                                  LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                                                      oldscape::configdecoder::ObjSpriteCacheKey>>,
                                      false, false>&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::AreaType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::BugTemplateType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::ControllerType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::EnumType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::HeadbarType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::HitmarkType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::HuntType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<oldscape::configdecoder::IdkType> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<game::MapSquareWorldAreaCompositeInner> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<graphics::AnimFrameset> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<graphics::AnimKeyFrameSet> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<graphics::Animation> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<graphics::Model> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<graphics::SpriteAtlasReference> const&, unsigned int, unsigned long long const&);
        void RemoveInner(eastl::hashtable_iterator<
                         eastl::pair<unsigned long long const,
                                     LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>>,
                         false, false>&);
        void RemoveInner(LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>*);
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* GetAsLinkedList() const;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<audio::SoundResource> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<game::AnimationWrapper> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<graphics::Font> const&, unsigned int, unsigned long long const&);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(shared_ptr<Js5MemoryCacheWrapper> const&, unsigned int, unsigned long long const&);
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

    template <
        typename...> // 5 instantiations, e.g. <oldscape::DBTableIndex, unsigned long long>, <oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>, <oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >
    class LRUHashCacheWrapper {
    public:
        void Unlink();
        void InsertAfter(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>&);
        LRUHashCacheWrapper(shared_ptr<oldscape::DBTableIndex> const&, unsigned long long const&, unsigned long long,
                            unsigned int);
        LRUHashCacheWrapper();
        ~LRUHashCacheWrapper();
        void
        InsertAfter(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>&);
        LRUHashCacheWrapper(shared_ptr<oldscape::graphics::Pix32> const&,
                            eastl::basic_string<char, BucketAllocatorEASTL> const&, unsigned long long, unsigned int);
        void InsertAfter(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>&);
        LRUHashCacheWrapper(shared_ptr<oldscape::rs2lib::HttpSpriteData> const&, eastl::string const&,
                            unsigned long long, unsigned int);
        void InsertAfter(
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>&);
        LRUHashCacheWrapper(shared_ptr<oldscape::configdecoder::ObjSprite> const&,
                            oldscape::configdecoder::ObjSpriteCacheKey const&, unsigned long long, unsigned int);
    };

    // 0x100f36ee0, 16 bytes, __data; set at startup by ___cxx_global_var_init.233
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f36f00, 16 bytes, __data; set at startup by ___cxx_global_var_init.235
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::NullCacheObj;

    // 0x100f370b8, 16 bytes, __data; set at startup by ___cxx_global_var_init.592
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37350, 16 bytes, __data; set at startup by ___cxx_global_var_init.267
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::NullCacheObj;

    // 0x100f375f0, 16 bytes, __data; set at startup by ___cxx_global_var_init.157
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37608, 16 bytes, __data; set at startup by ___cxx_global_var_init.158
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUHashCache<
        oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::NullCacheObj;

    // 0x100f37620, 16 bytes, __data; set at startup by ___cxx_global_var_init.159
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::NullCacheObj;

    // 0x100f37640, 16 bytes, __data; set at startup by ___cxx_global_var_init.161
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37658, 16 bytes, __data; set at startup by ___cxx_global_var_init.162
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37670, 16 bytes, __data; set at startup by ___cxx_global_var_init.163
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37688, 16 bytes, __data; set at startup by ___cxx_global_var_init.164
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::NullCacheObj;

    // 0x100f376c8, 16 bytes, __data; set at startup by ___cxx_global_var_init.112
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f376e8, 16 bytes, __data; set at startup by ___cxx_global_var_init.122
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37700, 16 bytes, __data; set at startup by ___cxx_global_var_init.123
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37718, 16 bytes, __data; set at startup by ___cxx_global_var_init.124
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37730, 16 bytes, __data; set at startup by ___cxx_global_var_init.125
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37748, 16 bytes, __data; set at startup by ___cxx_global_var_init.126
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37760, 16 bytes, __data; set at startup by ___cxx_global_var_init.127
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37778, 16 bytes, __data; set at startup by ___cxx_global_var_init.128
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37790, 16 bytes, __data; set at startup by ___cxx_global_var_init.129
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f377a8, 16 bytes, __data; set at startup by ___cxx_global_var_init.130
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f377c8, 16 bytes, __data; set at startup by ___cxx_global_var_init.132
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                     oldscape::configdecoder::ObjSpriteCacheKey>::NullCacheObj;

    // 0x100f377e0, 16 bytes, __data; set at startup by ___cxx_global_var_init.133
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f377f8, 16 bytes, __data; set at startup by ___cxx_global_var_init.134
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37810, 16 bytes, __data; set at startup by ___cxx_global_var_init.135
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37828, 16 bytes, __data; set at startup by ___cxx_global_var_init.136
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUHashCache<
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37840, 16 bytes, __data; set at startup by ___cxx_global_var_init.137
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37858, 16 bytes, __data; set at startup by ___cxx_global_var_init.138
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37870, 16 bytes, __data; set at startup by ___cxx_global_var_init.139
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37888, 16 bytes, __data; set at startup by ___cxx_global_var_init.140
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f378a0, 16 bytes, __data; set at startup by ___cxx_global_var_init.141
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f378b8, 16 bytes, __data; set at startup by ___cxx_global_var_init.142
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f378d0, 16 bytes, __data; set at startup by ___cxx_global_var_init.143
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f378e8, 16 bytes, __data; set at startup by ___cxx_global_var_init.144
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37900, 16 bytes, __data; set at startup by ___cxx_global_var_init.145
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37918, 16 bytes, __data; set at startup by ___cxx_global_var_init.146
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37930, 16 bytes, __data; set at startup by ___cxx_global_var_init.147
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37948, 16 bytes, __data; set at startup by ___cxx_global_var_init.148
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37960, 16 bytes, __data; set at startup by ___cxx_global_var_init.149
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f379c8, 16 bytes, __data; set at startup by ___cxx_global_var_init.154
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37a28, 16 bytes, __data; set at startup by ___cxx_global_var_init.156
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37b00, 16 bytes, __data; set at startup by ___cxx_global_var_init.1134
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37b18, 16 bytes, __data; set at startup by ___cxx_global_var_init.1135
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37b30, 16 bytes, __data; set at startup by ___cxx_global_var_init.1136
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37b48, 16 bytes, __data; set at startup by ___cxx_global_var_init.1137
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37b68, 16 bytes, __data; set at startup by ___cxx_global_var_init.1145
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37b80, 16 bytes, __data; set at startup by ___cxx_global_var_init.1146
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37b98, 16 bytes, __data; set at startup by ___cxx_global_var_init.1147
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37bb0, 16 bytes, __data; set at startup by ___cxx_global_var_init.160
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37bc8, 16 bytes, __data; set at startup by ___cxx_global_var_init.1149
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f37be0, 16 bytes, __data; set at startup by ___cxx_global_var_init.1150
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3c100, 16 bytes, __data; set at startup by ___cxx_global_var_init.41
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3c448, 16 bytes, __data; set at startup by ___cxx_global_var_init.53
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3c4c8, 16 bytes, __data; set at startup by ___cxx_global_var_init.57
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3c4e8, 16 bytes, __data; set at startup by ___cxx_global_var_init.59
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3c738, 16 bytes, __data; set at startup by ___cxx_global_var_init.47
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3c750, 16 bytes, __data; set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3c7d8, 16 bytes, __data; set at startup by ___cxx_global_var_init.55
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3c7f0, 16 bytes, __data; set at startup by ___cxx_global_var_init.56
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3cac8, 16 bytes, __data; set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3d010, 16 bytes, __data; set at startup by ___cxx_global_var_init.46
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3d330, 16 bytes, __data; set at startup by ___cxx_global_var_init.56
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::NullCacheObj;

    // 0x100f3d370, 16 bytes, __data; set at startup by ___cxx_global_var_init.61
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::NullCacheObj;

    // 0x100f3e5d0, 16 bytes, __data; set at startup by ___cxx_global_var_init.73
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::NullCacheObj;

    // 0x100f3e5f0, 16 bytes, __data; set at startup by ___cxx_global_var_init.80
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::NullCacheObj;

    // 0x100f443c8, 16 bytes, __data; set at startup by ___cxx_global_var_init.232
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::NullCacheObj;

    // 0x100f45460, 16 bytes, __data; set at startup by ___cxx_global_var_init.191
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::NullCacheObj;

    // 0x1000242b0, 144 bytes, inline, placed by class name and debug map
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Clean(unsigned long long)
    /* LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Clean(unsigned
   long long) */

    void LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Clean(
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 5368) = *(long*)(this + 5368) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 5360);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 5312) &&
                                      (param_1 <= (ulong)(*(long*)(this + 5368) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100024340, 144 bytes, inline, placed by class name and debug map
    // LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Clean(unsigned long long)
    /* LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long
   long>::Clean(unsigned long long) */

    void LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Clean(
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>* this,
        ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 2808) = *(long*)(this + 2808) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 2800);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 2752) &&
                                      (param_1 <= (ulong)(*(long*)(this + 2808) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100024530, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5630;
        }
        return this;
    }

    // 0x1000246c0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::DBTableIndex> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>**)(this + 5360) ==
                        this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x1000248e0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[351];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[349]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5628;
        }
        return this;
    }

    // 0x100024980, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Put(shared_ptr<oldscape::DBTableIndex> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>**)(this + 2800) ==
                        this + 2752) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUHashCacheWrapper**)(this + 2800));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 2808), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 2792));
        return this_00;
    }

    // 0x100054d40, 80 bytes, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::RemoveInner(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)
    /* LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long
   long>::RemoveInner(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*) */

    void LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::RemoveInner(
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>* this,
        LRUHashCacheWrapper* param_1) {
        ulonglong local_20;

        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        local_20 = *(ulonglong*)(param_1 + 16);
        ((this + 8))->erase(&local_20);
    }

    // 0x100055860, 96 bytes, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Remove(unsigned long long const&)
    /* LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long
   long>::Remove(unsigned long long const&) */

    void LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove(ulonglong* param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            RemoveInner((LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>*)param_1,
                        (hashtable_iterator*)local_38);
        }
    }

    // 0x100055900, 112 bytes, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::RemoveInner(eastl::hashtable_iterator<eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long> >, false, false>&)
    /* LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long
   long>::RemoveInner(eastl::hashtable_iterator<eastl::pair<unsigned long long const,
   LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long> >, false, false>&) */

    void LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::RemoveInner(
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>* this,
        hashtable_iterator* param_1) {
        long lVar1;
        undefined1 local_38[16];
        undefined8 local_28;
        undefined8 local_20;

        if (*(int*)this != 0) {
            lVar1 = param_1->HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 32);
        }
        lVar1 = param_1->HeapBeginPtr();
        ((lVar1 + 8))->Unlink();
        new (&local_28) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(param_1);
        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(local_38, this + 8,
                                                                                              local_28, local_20);
    }

    // 0x10005a530, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.233
    void ___cxx_global_var_init_233(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5630;
        puVar1 = PTR_NullCacheObj_100ee40f0;
        if (*PTR_NullCacheObj_100ee40f0 == '\0') {
            new (PTR_NullCacheObj_100ee5630) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a5b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.235
    void ___cxx_global_var_init_235(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5628;
        puVar1 = PTR_NullCacheObj_100ee40e8;
        if (*PTR_NullCacheObj_100ee40e8 == '\0') {
            new (PTR_NullCacheObj_100ee5628) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1000c4650, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1000c4880, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1000d77f0, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Reset()
    /* LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long
   long>::Reset() */

    void LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>**)(this + 880) =
            this + 832;
        *(LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>**)(this + 872) =
            this + 832;
    }

    // 0x1000e6750, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Reset()
    void LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>**)(this + 40240) =
            this + 40192;
        *(LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>**)(this + 40232) =
            this + 40192;
    }

    // 0x1000f36b0, 144 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Clean(unsigned long long)
    void LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Clean(
        LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 888) = *(long*)(this + 888) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 880);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 832) &&
                                      (param_1 <= (ulong)(*(long*)(this + 888) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100110e10, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[111];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[109]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58f8;
        }
        return this;
    }

    // 0x100110eb0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>**)(this + 880) ==
                        this + 832) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 880));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<10ul, 72ul, 8ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<10ul, 72ul, 8ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 888), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 872));
        return this_00;
    }

    // 0x10012e5b0, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::Reset()
    /* LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long
   long>::Reset() */

    void LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>**)(this + 5360) =
            this + 5312;
        *(LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>**)(this + 5352) =
            this + 5312;
    }

    // 0x1001393e0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>, 8ul, 9ul, false,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38,
                                                                                                           local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 832);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 888) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 880) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 872) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100139e60, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>* this) {
        Reset();
        ((this + 832))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10013bbe0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x10013bbf0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x10013bc00, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>* this) {
        Reset();
        ((this + 2752))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10013bc50, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Reset()
    /* LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long
   long>::Reset() */

    void LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Reset(
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>**)(this + 2800) =
            this + 2752;
        *(LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>**)(this + 2792) =
            this + 2752;
    }

    // 0x10013bc90, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10013e730, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10013e740, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10013e750, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>,
                                  64ul, 65ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10013eaf0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>,
                                  32ul, 33ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 2752);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 2808) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2800) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2792) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100159170, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.592
    void ___cxx_global_var_init_592(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee58f8;
        puVar1 = PTR_NullCacheObj_100ee4260;
        if (*PTR_NullCacheObj_100ee4260 == '\0') {
            new (PTR_NullCacheObj_100ee58f8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5530, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100180eb0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100180ec0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100180ff0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1311];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1309]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5618;
        }
        return this;
    }

    // 0x100181430, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::Put(shared_ptr<oldscape::ClientScript> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>**)(this +
                                                                                                           10480) ==
                        this + 10432) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 10480));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 10488), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 10472));
        return this_00;
    }

    // 0x1001a9de0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>,
                                  128ul, 129ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10432);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 10488) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10480) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10472) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1001aa380, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>* this) {
        Reset();
        ((this + 10432))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1001aa3d0, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::Reset()
    /* LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long
   long>::Reset() */

    void LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>**)(this + 10480) =
            this + 10432;
        *(LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>**)(this + 10472) =
            this + 10432;
    }

    // 0x1001b76f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.267
    void ___cxx_global_var_init_267(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5618;
        puVar1 = PTR_NullCacheObj_100ee40e0;
        if (*PTR_NullCacheObj_100ee40e0 == '\0') {
            new (PTR_NullCacheObj_100ee5618) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53b8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1001ff580, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1001ff590, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1001ff5a0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1001ff5b0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1001ff5c0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1001ff5d0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1001ff5e0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1001ff5f0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1001ff600, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1001ff610, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1001ff620, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1001ff630, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100201930, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[2031];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[2029]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58c8;
        }
        return this;
    }

    // 0x100201a90, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>**)(this +
                                                                                                              16240) ==
                        this + 16192) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 16240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<202ul, 72ul, 200ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<202ul, 72ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 16248), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 16232));
        return this_00;
    }

    // 0x100201d50, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::Find(eastl::basic_string<char, BucketAllocatorEASTL> const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*
    jag::LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                      eastl::basic_string<char, BucketAllocatorEASTL>>::Find(basic_string* param_1) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this;
        hashtable_iterator_base local_48[16];
        basic_string local_38[16];

        eastl::hashtable<
            eastl::basic_string<char, BucketAllocatorEASTL>,
            eastl::pair<
                eastl::basic_string<char, BucketAllocatorEASTL> const,
                LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>>,
            eastl::fixed_hashtable_allocator<12ul, 104ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<eastl::pair<
                eastl::basic_string<char, BucketAllocatorEASTL> const,
                LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>>>,
            eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
            eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)local_38, local_48, extraout_RDX);
        if (bVar1) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUHashCacheWrapper<oldscape::graphics::Pix32,
                                        eastl::basic_string<char, BucketAllocatorEASTL>>*)(lVar2 + 24);
            Unlink();
            *(undefined8*)(lVar2 + 72) = *(undefined8*)(param_1 + 1416);
            InsertAfter(*(LRUHashCacheWrapper**)(param_1 + 1400));
        } else {
            this = (LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*)
                PTR_NullCacheObj_100ee58b8;
        }
        return this;
    }

    // 0x100201df0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int, eastl::basic_string<char, BucketAllocatorEASTL> const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*
    jag::LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::
        Put(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                         eastl::basic_string<char, BucketAllocatorEASTL>>* this,
            shared_ptr* param_1, uint param_2, basic_string* param_3) {
        LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>*
            pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this_00;

        Remove((basic_string*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                                       eastl::basic_string<char, BucketAllocatorEASTL>>**)(this + 1408) ==
                        this + 1344) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUHashCacheWrapper**)(this + 1408));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*)
            eastl::hash_map<
                eastl::basic_string<char, BucketAllocatorEASTL>,
                LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>,
                eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                eastl::fixed_hashtable_allocator<12ul, 104ul, 10ul, 8ul, 0ul, false, eastl::allocator>, false>::
            operator[](
                (hash_map<
                    eastl::basic_string<char, BucketAllocatorEASTL>,
                    LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>,
                    eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
                    eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
                    eastl::fixed_hashtable_allocator<12ul, 104ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
                    false>*)(this + 8),
                param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32,
                            eastl::basic_string<char, BucketAllocatorEASTL>>::LRUHashCacheWrapper(this_00, param_1,
                                                                                                  param_3,
                                                                                                  *(ulonglong*)(this +
                                                                                                                1416),
                                                                                                  param_2);
        this_00->InsertAfter(*(LRUHashCacheWrapper**)(this + 1400));
        return this_00;
    }

    // 0x100201ee0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::Find(eastl::string const&)
    LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*
    jag::LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::Find(basic_string* param_1) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this;
        hashtable_iterator_base local_48[16];
        basic_string local_38[16];

        eastl::hashtable<
            eastl::string,
            eastl::pair<eastl::stringconst, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>,
            eastl::fixed_hashtable_allocator<12ul, 120ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<eastl::stringconst, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>>,
            eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)local_38, local_48, extraout_RDX);
        if (bVar1) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*)(lVar2 + 32);
            Unlink();
            *(undefined8*)(lVar2 + 88) = *(undefined8*)(param_1 + 1600);
            InsertAfter(*(LRUHashCacheWrapper**)(param_1 + 1584));
        } else {
            this = (LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*)PTR_NullCacheObj_100ee5888;
        }
        return this;
    }

    // 0x100201f80, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::Put(shared_ptr<oldscape::rs2lib::HttpSpriteData> const&, unsigned int, eastl::string const&)
    LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*
    jag::LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::Put(
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>* this, shared_ptr* param_1,
        uint param_2, basic_string* param_3) {
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>* pLVar1;
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this_00;

        Remove((basic_string*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>**)(this +
                                                                                                              1592) ==
                        this + 1520) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUHashCacheWrapper**)(this + 1592));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*)eastl::hash_map<
            eastl::string, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>,
            eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
            eastl::fixed_hashtable_allocator<12ul, 120ul, 10ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<eastl::string, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>,
                             eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                             eastl::fixed_hashtable_allocator<12ul, 120ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 1600), param_2);
        this_00->InsertAfter(*(LRUHashCacheWrapper**)(this + 1584));
        return this_00;
    }

    // 0x1002022a0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[231];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[229]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58a8;
        }
        return this;
    }

    // 0x100202340, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Put(shared_ptr<oldscape::jstring::PixfontGeneric> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false,
                                       unsigned long long>**)(this + 1840) == this + 1792) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 1840));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::jstring::PixfontGeneric, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<22ul, 72ul, 20ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::jstring::PixfontGeneric, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<22ul, 72ul, 20ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 1848), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 1832));
        return this_00;
    }

    // 0x100202a30, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[531];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[529]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5868;
        }
        return this;
    }

    // 0x100203020, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Put(shared_ptr<oldscape::dash3d::ModelLit> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>**)(this +
                                                                                                             4240) ==
                        this + 4192) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 4240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<52ul, 72ul, 50ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<52ul, 72ul, 50ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 4248), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 4232));
        return this_00;
    }

    // 0x100203430, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[111];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[109]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5898;
        }
        return this;
    }

    // 0x1002035a0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::Put(shared_ptr<oldscape::rs2lib::InterfaceGraphicMask> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false,
                                       unsigned long long>**)(this + 880) == this + 832) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 880));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::rs2lib::InterfaceGraphicMask, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<10ul, 72ul, 8ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<
                unsigned long long, LRUHashCacheWrapper<oldscape::rs2lib::InterfaceGraphicMask, unsigned long long>,
                eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                eastl::fixed_hashtable_allocator<10ul, 72ul, 8ul, 8ul, 0ul, false, eastl::allocator>, false>*)(this +
                                                                                                               8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 888), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 872));
        return this_00;
    }

    // 0x1002036d0, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Reset()
    void LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>**)(this + 16240) =
            this + 16192;
        *(LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>**)(this + 16232) =
            this + 16192;
    }

    // 0x100203710, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Reset()
    void LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>**)(this + 4240) = this + 4192;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>**)(this + 4232) = this + 4192;
    }

    // 0x100203750, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Reset()
    void LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>**)(this + 1840) =
            this + 1792;
        *(LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>**)(this + 1832) =
            this + 1792;
    }

    // 0x100204850, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100204860, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100204870, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100204880, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100205e90, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[2631];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[2629]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5848;
        }
        return this;
    }

    // 0x100206090, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Put(shared_ptr<oldscape::dash3d::ModelLit> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>**)(this +
                                                                                                               21040) ==
                        this + 20992) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 21040));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<262ul, 72ul, 260ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<262ul, 72ul, 260ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 21048), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 21032));
        return this_00;
    }

    // 0x1002062c0, 160 bytes, inline, placed by class name
    // LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[191];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[189]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5910;
        }
        return this;
    }

    // 0x100206360, 240 bytes, inline, placed by class name
    // LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Put(shared_ptr<int> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Put(
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>* this, shared_ptr* param_1, uint param_2,
        ulonglong* param_3) {
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<int, 16ul, 17ul, false, unsigned long long>**)(this + 1520) == this + 1472) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 1520));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<int, unsigned long long>, eastl::hash<unsigned long long>,
            eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<18ul, 72ul, 16ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<int, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<18ul, 72ul, 16ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 1528), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 1512));
        return this_00;
    }

    // 0x100206550, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Reset()
    void LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>**)(this + 21040) =
            this + 20992;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>**)(this + 21032) =
            this + 20992;
    }

    // 0x100219c70, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>, 200ul, 201ul, false,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38,
                                                                                                           local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 16192);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 16248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 16240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 16232) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10021a120, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 16192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021a170, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 50ul, 51ul, false,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38,
                                                                                                           local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 4192);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 4248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 4240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 4232) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10021a630, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 4192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021a680, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::jstring::PixfontGeneric, unsigned long long>, 20ul, 21ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1792);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 1848) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1840) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1832) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10021ab40, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 1792))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021ab90, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::rs2lib::InterfaceGraphicMask, unsigned long long>, 8ul,
            9ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 832);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 888) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 880) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 872) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10021af30, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 832))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021af80, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::LRUHashCache(unsigned int, char const*)
    void jag::LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::LRUHashCache(
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<eastl::string, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>,
                                  10ul, 11ul, false, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, false,
                                  eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*)(this + 1520);
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 1600) = 0;
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>**)(this + 1592) = this_00;
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>**)(this + 1584) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10021b020, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >::LRUHashCacheWrapper(): jumps straight to the base-object constructor

    // 0x10021b030, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >::~LRUHashCacheWrapper(): jumps straight to the base-object destructor

    // 0x10021b5e0, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >::LRUHashCacheWrapper()
    void jag::LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::LRUHashCacheWrapper(
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this) {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        new ((this + 16)) eastl::string();
        *(undefined4*)(this + 48) = 0;
        *(undefined8*)(this + 56) = 0;
        *(undefined8*)(this + 64) = 0;
        *(undefined8*)(this + 72) = 0;
    }

    // 0x10021b630, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >::~LRUHashCacheWrapper()
    void jag::LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::~LRUHashCacheWrapper(
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this) {
        ((this + 16))->~basic_string();
        ~shared_ptr();
    }

    // 0x10021b670, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::~LRUHashCache()
    void jag::LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::~LRUHashCache(
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>* this) {
        Reset(this);
        ((this + 1520))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021b6c0, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::Reset()
    void jag::LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::Reset(
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>**)(this + 1592) =
            this + 1520;
        *(LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>**)(this + 1584) =
            this + 1520;
    }

    // 0x10021b700, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::LRUHashCache(unsigned int, char const*)
    void
    jag::LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::
        LRUHashCache(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                                  eastl::basic_string<char, BucketAllocatorEASTL>>* this,
                     uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            eastl::basic_string<char, BucketAllocatorEASTL>,
            LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>, 10ul, 11ul,
            false, eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
            eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, false, eastl::allocator>(local_38,
                                                                                                       local_30);
        this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*)(this +
                                                                                                               1344);
        LRUHashCacheWrapper<oldscape::graphics::Pix32,
                            eastl::basic_string<char, BucketAllocatorEASTL>>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 1416) = 0;
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>**)(this +
                                                                                                             1408) =
            this_00;
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>**)(this +
                                                                                                             1400) =
            this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10021b7a0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >::LRUHashCacheWrapper(): jumps straight to the base-object constructor

    // 0x10021b7b0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >::~LRUHashCacheWrapper(): jumps straight to the base-object destructor

    // 0x10021bd60, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >::LRUHashCacheWrapper()
    void jag::LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>::
        LRUHashCacheWrapper(
            LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this) {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        *(undefined4*)(this + 40) = 0;
        *(undefined8*)(this + 48) = 0;
        *(undefined8*)(this + 56) = 0;
        *(undefined8*)(this + 64) = 0;
    }

    // 0x10021bdb0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >::~LRUHashCacheWrapper()
    void jag::LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>::
        ~LRUHashCacheWrapper(
            LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this) {
        ((this + 16))->~basic_string();
        ~shared_ptr();
    }

    // 0x10021bdf0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::~LRUHashCache()
    void jag::LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                           eastl::basic_string<char, BucketAllocatorEASTL>>::
        ~LRUHashCache(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                                   eastl::basic_string<char, BucketAllocatorEASTL>>* this) {
        Reset(this);
        ((this + 1344))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021be40, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::Reset()
    void
    jag::LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::
        Reset(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                           eastl::basic_string<char, BucketAllocatorEASTL>>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                       eastl::basic_string<char, BucketAllocatorEASTL>>**)(this + 1408) = this + 1344;
        *(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                       eastl::basic_string<char, BucketAllocatorEASTL>>**)(this + 1400) = this + 1344;
    }

    // 0x10021c420, 32 bytes, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >::Unlink()
    void jag::LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>::Unlink(
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this) {
        long lVar1;

        lVar1 = *(long*)(this + 56);
        *(undefined8*)(lVar1 + 64) = *(undefined8*)(this + 64);
        *(long*)(*(long*)(this + 64) + 56) = lVar1;
    }

    // 0x10021c440, 32 bytes, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >::InsertAfter(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >&)
    void
    jag::LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>::InsertAfter(
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this,
        LRUHashCacheWrapper* param_1) {
        long lVar1;

        lVar1 = *(long*)(param_1 + 64);
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>**)(lVar1 +
                                                                                                             56) = this;
        *(long*)(this + 64) = lVar1;
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>**)(param_1 +
                                                                                                             64) = this;
        *(LRUHashCacheWrapper**)(this + 56) = param_1;
    }

    // 0x10021c4b0, 96 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::Remove(eastl::basic_string<char, BucketAllocatorEASTL> const&)
    void jag::LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                           eastl::basic_string<char, BucketAllocatorEASTL>>::Remove(basic_string* param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        basic_string local_38[16];

        eastl::hashtable<
            eastl::basic_string<char, BucketAllocatorEASTL>,
            eastl::pair<
                eastl::basic_string<char, BucketAllocatorEASTL> const,
                LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>>,
            eastl::fixed_hashtable_allocator<12ul, 104ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<eastl::pair<
                eastl::basic_string<char, BucketAllocatorEASTL> const,
                LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>>>,
            eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
            eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_38, local_48, extraout_RDX)) {
            RemoveInner((LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                                      eastl::basic_string<char, BucketAllocatorEASTL>>*)param_1,
                        (hashtable_iterator*)local_38);
        }
    }

    // 0x10021c510, 128 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::RemoveInner(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >*)
    void
    jag::LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::
        RemoveInner(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                                 eastl::basic_string<char, BucketAllocatorEASTL>>* this,
                    LRUHashCacheWrapper* param_1) {
        basic_string local_38[24];

        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 40);
        }
        param_1->Unlink();
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(local_38);
        ((this + 8))->erase(local_38);
        local_38->~basic_string();
    }

    // 0x10021c5c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >::LRUHashCacheWrapper(shared_ptr<oldscape::graphics::Pix32> const&, eastl::basic_string<char, BucketAllocatorEASTL> const&, unsigned long long, unsigned int): jumps straight to the base-object constructor

    // 0x10021c5d0, 112 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL> >::RemoveInner(eastl::hashtable_iterator<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const, LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> > >, false, false>&)
    void
    jag::LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::
        RemoveInner(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                                 eastl::basic_string<char, BucketAllocatorEASTL>>* this,
                    hashtable_iterator* param_1) {
        long lVar1;
        undefined1 local_38[16];
        undefined8 local_28;
        undefined8 local_20;

        if (*(int*)this != 0) {
            lVar1 = param_1->HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 64);
        }
        lVar1 = param_1->HeapBeginPtr();
        ((lVar1 + 24))->Unlink();
        new (&local_28) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(param_1);
        eastl::hashtable<
            eastl::basic_string<char, BucketAllocatorEASTL>,
            eastl::pair<
                eastl::basic_string<char, BucketAllocatorEASTL> const,
                LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>>,
            eastl::fixed_hashtable_allocator<12ul, 104ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<eastl::pair<
                eastl::basic_string<char, BucketAllocatorEASTL> const,
                LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>>>,
            eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>,
            eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(local_38, this + 8,
                                                                                              local_28, local_20);
    }

    // 0x10021cad0, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> >::LRUHashCacheWrapper(shared_ptr<oldscape::graphics::Pix32> const&, eastl::basic_string<char, BucketAllocatorEASTL> const&, unsigned long long, unsigned int)
    void jag::LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>::
        LRUHashCacheWrapper(
            LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this,
            shared_ptr* param_1, basic_string* param_2, ulonglong param_3, uint param_4) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new ((this + 16)) eastl::basic_string<char, BucketAllocatorEASTL>();
        *(uint*)(this + 40) = param_4;
        *(ulonglong*)(this + 48) = param_3;
        *(undefined8*)(this + 56) = 0;
        *(undefined8*)(this + 64) = 0;
    }

    // 0x10021cbc0, 32 bytes, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >::Unlink()
    void jag::LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::Unlink(
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this) {
        long lVar1;

        lVar1 = *(long*)(this + 64);
        *(undefined8*)(lVar1 + 72) = *(undefined8*)(this + 72);
        *(long*)(*(long*)(this + 72) + 64) = lVar1;
    }

    // 0x10021cbe0, 32 bytes, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >::InsertAfter(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >&)
    void jag::LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::InsertAfter(
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this, LRUHashCacheWrapper* param_1) {
        long lVar1;

        lVar1 = *(long*)(param_1 + 72);
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>**)(lVar1 + 64) = this;
        *(long*)(this + 72) = lVar1;
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>**)(param_1 + 72) = this;
        *(LRUHashCacheWrapper**)(this + 64) = param_1;
    }

    // 0x10021cc50, 96 bytes, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::Remove(eastl::string const&)
    void jag::LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::Remove(
        basic_string* param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        basic_string local_38[16];

        eastl::hashtable<
            eastl::string,
            eastl::pair<eastl::stringconst, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>,
            eastl::fixed_hashtable_allocator<12ul, 120ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<eastl::stringconst, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>>,
            eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find(local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_38, local_48, extraout_RDX)) {
            RemoveInner((LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>*)param_1,
                        (hashtable_iterator*)local_38);
        }
    }

    // 0x10021ccb0, 128 bytes, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::RemoveInner(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >*)
    void jag::LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::RemoveInner(
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>* this,
        LRUHashCacheWrapper* param_1) {
        eastl::string local_40[32];

        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 48);
        }
        param_1->Unlink();
        eastl::string::basic_string(local_40, (basic_string*)(param_1 + 16));
        ((this + 8))->erase(local_40);
        eastl::string::~basic_string(local_40);
    }

    // 0x10021cd60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >::LRUHashCacheWrapper(shared_ptr<oldscape::rs2lib::HttpSpriteData> const&, eastl::string const&, unsigned long long, unsigned int): jumps straight to the base-object constructor

    // 0x10021cd70, 112 bytes, inline, placed by class name
    // LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string >::RemoveInner(eastl::hashtable_iterator<eastl::pair<eastl::string const, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string > >, false, false>&)
    void jag::LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::RemoveInner(
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>* this,
        hashtable_iterator* param_1) {
        long lVar1;
        undefined1 local_38[16];
        undefined8 local_28;
        undefined8 local_20;

        if (*(int*)this != 0) {
            lVar1 = param_1->HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 80);
        }
        lVar1 = param_1->HeapBeginPtr();
        ((lVar1 + 32))->Unlink();
        new (&local_28) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(param_1);
        eastl::hashtable<
            eastl::string,
            eastl::pair<eastl::stringconst, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>,
            eastl::fixed_hashtable_allocator<12ul, 120ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<eastl::stringconst, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>>,
            eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(local_38, this + 8,
                                                                                              local_28, local_20);
    }

    // 0x10021d270, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string >::LRUHashCacheWrapper(shared_ptr<oldscape::rs2lib::HttpSpriteData> const&, eastl::string const&, unsigned long long, unsigned int)
    void jag::LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::LRUHashCacheWrapper(
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this, shared_ptr* param_1,
        basic_string* param_2, ulonglong param_3, uint param_4) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new ((this + 16)) eastl::string(param_2);
        *(uint*)(this + 48) = param_4;
        *(ulonglong*)(this + 56) = param_3;
        *(undefined8*)(this + 64) = 0;
        *(undefined8*)(this + 72) = 0;
    }

    // 0x10021eac0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 260ul, 261ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20992);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 21048) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 21040) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 21032) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10021ef80, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 20992))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021efd0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<int, unsigned long long>, 16ul, 17ul, false,
                                  eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false,
                                  eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1472);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 1528) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1520) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1512) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10021f490, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>* this) {
        Reset();
        ((this + 1472))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021f4e0, 64 bytes, inline, placed by class name
    // LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Reset()
    /* LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Reset() */

    void LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Reset(
        LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>**)(this + 1520) = this + 1472;
        *(LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>**)(this + 1512) = this + 1472;
    }

    // 0x1002280c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.157
    void ___cxx_global_var_init_157(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee58c8;
        puVar1 = PTR_NullCacheObj_100ee4248;
        if (*PTR_NullCacheObj_100ee4248 == '\0') {
            new (PTR_NullCacheObj_100ee58c8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5530, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228100, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.158
    void ___cxx_global_var_init_158(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee58b8;
        puVar1 = PTR_NullCacheObj_100ee4240;
        if (*PTR_NullCacheObj_100ee4240 == '\0') {
            new (PTR_NullCacheObj_100ee58b8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5530, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228140, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.159
    void ___cxx_global_var_init_159(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5888;
        puVar1 = PTR_NullCacheObj_100ee4228;
        if (*PTR_NullCacheObj_100ee4228 == '\0') {
            new (PTR_NullCacheObj_100ee5888) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54f8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228180, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.160
    void ___cxx_global_var_init_160(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee58a8;
        puVar1 = PTR_NullCacheObj_100ee4238;
        if (*PTR_NullCacheObj_100ee4238 == '\0') {
            new (PTR_NullCacheObj_100ee58a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5520, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002281c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.161
    void ___cxx_global_var_init_161(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5868;
        puVar1 = PTR_NullCacheObj_100ee4218;
        if (*PTR_NullCacheObj_100ee4218 == '\0') {
            new (PTR_NullCacheObj_100ee5868) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228200, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.162
    void ___cxx_global_var_init_162(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5898;
        puVar1 = PTR_NullCacheObj_100ee4230;
        if (*PTR_NullCacheObj_100ee4230 == '\0') {
            new (PTR_NullCacheObj_100ee5898) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5500, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228240, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.163
    void ___cxx_global_var_init_163(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5848;
        puVar1 = PTR_NullCacheObj_100ee4208;
        if (*PTR_NullCacheObj_100ee4208 == '\0') {
            new (PTR_NullCacheObj_100ee5848) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228280, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.164
    void ___cxx_global_var_init_164(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5910;
        puVar1 = PTR_NullCacheObj_100ee4270;
        if (*PTR_NullCacheObj_100ee4270 == '\0') {
            new (PTR_NullCacheObj_100ee5910) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5550, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100228520, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5718;
        }
        return this;
    }

    // 0x100228710, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::InvType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::InvType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::InvType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100228880, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100228890, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100228910, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100228920, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100228930, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100228940, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100228950, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100228960, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100228970, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100228980, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100228e00, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[40991];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[40989]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5728;
        }
        return this;
    }

    // 0x100229040, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::LocType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false,
                                       unsigned long long>**)(this + 327920) == this + 327872) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 327920));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::LocType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<4098ul, 72ul, 4096ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::LocType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<4098ul, 72ul, 4096ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 327928), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 327912));
        return this_00;
    }

    // 0x10022a600, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1311];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1309]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5818;
        }
        return this;
    }

    // 0x10022ae40, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::Put(shared_ptr<oldscape::dash3d::ModelSource> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false,
                                       unsigned long long>**)(this + 10480) == this + 10432) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 10480));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelSource, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelSource, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 10488), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 10472));
        return this_00;
    }

    // 0x10022b1b0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1311];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1309]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5838;
        }
        return this;
    }

    // 0x10022b250, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::Put(shared_ptr<oldscape::dash3d::ModelLit> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>**)(this +
                                                                                                               10480) ==
                        this + 10432) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 10480));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 10488), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 10472));
        return this_00;
    }

    // 0x10022b930, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[5031];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[5029]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5808;
        }
        return this;
    }

    // 0x10022b9f0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Put(shared_ptr<oldscape::dash3d::ModelUnlit> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false,
                                       unsigned long long>**)(this + 40240) == this + 40192) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 40240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelUnlit, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<502ul, 72ul, 500ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelUnlit, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<502ul, 72ul, 500ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 40248), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 40232));
        return this_00;
    }

    // 0x10022bec0, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Reset()
    void LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>**)(this + 327920) =
            this + 327872;
        *(LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>**)(this + 327912) =
            this + 327872;
    }

    // 0x10022c020, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10022c030, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x10022cd20, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[2591];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[2589]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58d8;
        }
        return this;
    }

    // 0x10022cdc0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>**)(this +
                                                                                                              20720) ==
                        this + 20672) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 20720));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<258ul, 72ul, 256ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<258ul, 72ul, 256ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 20728), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 20712));
        return this_00;
    }

    // 0x10022cf40, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Reset()
    /* LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long
   long>::Reset() */

    void LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Reset(
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>**)(this + 20720) =
            this + 20672;
        *(LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>**)(this + 20712) =
            this + 20672;
    }

    // 0x10022cf80, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10022cf90, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x10022d0d0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56a8;
        }
        return this;
    }

    // 0x10022d2b0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::MesAnimType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::MesAnimType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::MesAnimType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x10022d540, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10022d550, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x10022d560, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10022d570, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x10022d6f0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5738;
        }
        return this;
    }

    // 0x10022d8c0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::NpcType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::NpcType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::NpcType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x10022ead0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5878;
        }
        return this;
    }

    // 0x10022f030, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::dash3d::ModelLit> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>**)(this +
                                                                                                             5360) ==
                        this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100230150, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5748;
        }
        return this;
    }

    // 0x100230940, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::ObjType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ObjType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ObjType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100232790, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::Find(oldscape::configdecoder::ObjSpriteCacheKey const&)
    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
    jag::LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                      oldscape::configdecoder::ObjSpriteCacheKey>::Find(ObjSpriteCacheKey* param_1) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this;
        hashtable_iterator_base local_48[16];
        Layout local_38[16];

        eastl::hashtable<
            oldscape::configdecoder::ObjSpriteCacheKey,
            eastl::pair<
                oldscape::configdecoder::ObjSpriteCacheKey_const,
                LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>>,
            eastl::fixed_hashtable_allocator<212ul, 152ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<eastl::pair<
                oldscape::configdecoder::ObjSpriteCacheKey_const,
                LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>>>,
            eastl::equal_to<oldscape::configdecoder::ObjSpriteCacheKey>,
            eastl::hash<oldscape::configdecoder::ObjSpriteCacheKey>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ObjSpriteCacheKey*)
                                                                                                 local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=((eastl*)local_38, local_48, extraout_RDX);
        if (bVar1) {
            lVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_38);
            this = (LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                        oldscape::configdecoder::ObjSpriteCacheKey>*)(lVar2 + 48);
            Unlink();
            *(undefined8*)(lVar2 + 120) = *(undefined8*)(param_1 + 1352);
            InsertAfter(*(LRUHashCacheWrapper**)&param_1[1351].field_8);
        } else {
            this =
                (LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*)
                    PTR_NullCacheObj_100ee57f0;
        }
        return this;
    }

    // 0x100232bb0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::Put(shared_ptr<oldscape::configdecoder::ObjSprite> const&, unsigned int, oldscape::configdecoder::ObjSpriteCacheKey const&)
    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
    jag::LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                      oldscape::configdecoder::ObjSpriteCacheKey>::
        Put(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                         oldscape::configdecoder::ObjSpriteCacheKey>* this,
            shared_ptr* param_1, uint param_2, ObjSpriteCacheKey* param_3) {
        LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                     oldscape::configdecoder::ObjSpriteCacheKey>* pLVar1;
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this_00;

        Remove((ObjSpriteCacheKey*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                                       oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32440) == this + 32352) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUHashCacheWrapper**)(this + 32440));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*)
            eastl::hash_map<
                oldscape::configdecoder::ObjSpriteCacheKey,
                LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>,
                eastl::hash<oldscape::configdecoder::ObjSpriteCacheKey>,
                eastl::equal_to<oldscape::configdecoder::ObjSpriteCacheKey>,
                eastl::fixed_hashtable_allocator<212ul, 152ul, 200ul, 8ul, 0ul, false, eastl::allocator>, false>::
            operator[](
                (hash_map<
                    oldscape::configdecoder::ObjSpriteCacheKey,
                    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>,
                    eastl::hash<oldscape::configdecoder::ObjSpriteCacheKey>,
                    eastl::equal_to<oldscape::configdecoder::ObjSpriteCacheKey>,
                    eastl::fixed_hashtable_allocator<212ul, 152ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
                    false>*)(this + 8),
                param_3);
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                            oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCacheWrapper(this_00, param_1, param_3,
                                                                                             *(ulonglong*)(this +
                                                                                                           32448),
                                                                                             param_2);
        this_00->InsertAfter(*(LRUHashCacheWrapper**)(this + 32432));
        return this_00;
    }

    // 0x100233b90, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::Reset()
    void jag::LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                           oldscape::configdecoder::ObjSpriteCacheKey>::
        Reset(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                           oldscape::configdecoder::ObjSpriteCacheKey>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                       oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32440) = this + 32352;
        *(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                       oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32432) = this + 32352;
    }

    // 0x1002342d0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57f8;
        }
        return this;
    }

    // 0x1002344d0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::ParamType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ParamType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ParamType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100234720, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100234730, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100234810, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100234820, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100234830, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100234840, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100234850, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100234860, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1002349c0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5750;
        }
        return this;
    }

    // 0x100234bc0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::SeqType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::SeqType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::SeqType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100235a70, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1031];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1029]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5828;
        }
        return this;
    }

    // 0x100235b10, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Put(shared_ptr<oldscape::dash3d::AnimFrameSet> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false,
                                       unsigned long long>**)(this + 8240) == this + 8192) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 8240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::AnimFrameSet, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<102ul, 72ul, 100ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::AnimFrameSet, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<102ul, 72ul, 100ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 8248), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 8232));
        return this_00;
    }

    // 0x100235d00, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    jag::LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                      unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1031];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1029]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5900;
        }
        return this;
    }

    // 0x100235ec0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::Put(shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    jag::LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                      unsigned long long>::Put(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet,
                                                            100ul, 101ul, false, unsigned long long>* this,
                                               shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>*
            pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                                       unsigned long long>**)(this + 8240) == this + 8192) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 8240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long,
            LRUHashCacheWrapper<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<102ul, 72ul, 100ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long,
                      LRUHashCacheWrapper<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<102ul, 72ul, 100ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 8248), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 8232));
        return this_00;
    }

    // 0x100235fe0, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Reset()
    /* LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul,
   false, unsigned long long>::Reset() */

    void
    jag::LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                      unsigned long long>::Reset(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet,
                                                              100ul, 101ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                       unsigned long long>**)(this + 8240) = this + 8192;
        *(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                       unsigned long long>**)(this + 8232) = this + 8192;
    }

    // 0x100236060, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100236070, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100236080, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100236090, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1002361f0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5790;
        }
        return this;
    }

    // 0x1002363a0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::SpotType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::SpotType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::SpotType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100236c30, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[331];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[329]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5858;
        }
        return this;
    }

    // 0x100236cd0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Put(shared_ptr<oldscape::dash3d::ModelLit> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>**)(this +
                                                                                                             2640) ==
                        this + 2592) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 2640));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<32ul, 72ul, 30ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<32ul, 72ul, 30ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 2648), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 2632));
        return this_00;
    }

    // 0x100236de0, 64 bytes, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Reset()
    void LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Reset(
        LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>**)(this + 2640) = this + 2592;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>**)(this + 2632) = this + 2592;
    }

    // 0x100236f70, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5638;
        }
        return this;
    }

    // 0x100237170, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::StructType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::StructType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::StructType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100237320, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100237330, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100237340, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100237350, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1002374a0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5648;
        }
        return this;
    }

    // 0x100237610, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarBitType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarBitType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarBitType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x1002379b0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56c8;
        }
        return this;
    }

    // 0x100237b90, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarConBitType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarConBitType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<
                unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarConBitType, unsigned long long>,
                eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>*)(this +
                                                                                                                8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100237ce0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100237cf0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100237d00, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100237d10, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100237e50, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5658;
        }
        return this;
    }

    // 0x100238030, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarConType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarConType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarConType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100238180, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100238190, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1002382d0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56d8;
        }
        return this;
    }

    // 0x1002384b0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarGlobalType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarGlobalType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<
                unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarGlobalType, unsigned long long>,
                eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>*)(this +
                                                                                                                8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100238730, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5668;
        }
        return this;
    }

    // 0x100238910, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarObjType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarObjType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarObjType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100238a60, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100238a70, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100238a80, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100238a90, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100238bf0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57a0;
        }
        return this;
    }

    // 0x100238d50, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarcType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarcType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarcType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100238e90, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100238ea0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100238fe0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56b8;
        }
        return this;
    }

    // 0x1002391c0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarnBitType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarnBitType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarnBitType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100239440, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57b0;
        }
        return this;
    }

    // 0x100239620, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarnType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarnType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarnType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100239770, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100239780, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100239790, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1002397a0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1002398d0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57c0;
        }
        return this;
    }

    // 0x100239a40, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VarpType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarpType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarpType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100239b90, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100239ba0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100239d00, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57d0;
        }
        return this;
    }

    // 0x100239e60, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::VeccType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VeccType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VeccType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100239fa0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100239fb0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x10023a0f0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57e0;
        }
        return this;
    }

    // 0x10023a2a0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::DBRowType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::DBRowType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::DBRowType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x10023b1c0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x10023b1d0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x10023b310, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5678;
        }
        return this;
    }

    // 0x10023b4c0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::DBTableType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::DBTableType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::DBTableType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100242d80, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100242d90, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100242da0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100242db0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ObjType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100243140, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCache(unsigned int, char const*)
    void jag::LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                           oldscape::configdecoder::ObjSpriteCacheKey>::
        LRUHashCache(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                                  oldscape::configdecoder::ObjSpriteCacheKey>* this,
                     uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            oldscape::configdecoder::ObjSpriteCacheKey,
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>, 200ul,
            211ul, false, eastl::hash<oldscape::configdecoder::ObjSpriteCacheKey>,
            eastl::equal_to<oldscape::configdecoder::ObjSpriteCacheKey>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                       oldscape::configdecoder::ObjSpriteCacheKey>*)(this + 32352);
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                            oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 32448) = 0;
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                              oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32440) = this_00;
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                              oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32432) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1002431e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCacheWrapper(): jumps straight to the base-object constructor

    // 0x1002431f0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::~LRUHashCacheWrapper(): jumps straight to the base-object destructor

    // 0x100243830, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCacheWrapper()
    void jag::LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::
        LRUHashCacheWrapper(
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this) {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        *(undefined8*)(this + 48) = 0;
        *(undefined8*)(this + 56) = 0;
        *(undefined8*)(this + 32) = 0;
        *(undefined8*)(this + 40) = 0;
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        new ((this + 16)) oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam();
        *(undefined4*)(this + 64) = 0;
        *(undefined8*)(this + 72) = 0;
        *(undefined8*)(this + 80) = 0;
        *(undefined8*)(this + 88) = 0;
    }

    // 0x1002438b0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::~LRUHashCacheWrapper()
    void jag::LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>::
        ~LRUHashCacheWrapper(
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this) {
        ((this + 16))->~ObjSpriteCacheKey();
        ~shared_ptr();
    }

    // 0x1002438f0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100243970, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100243980, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::~LRUHashCache()
    void jag::LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                           oldscape::configdecoder::ObjSpriteCacheKey>::
        ~LRUHashCache(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                                   oldscape::configdecoder::ObjSpriteCacheKey>* this) {
        Reset(this);
        ((this + 32352))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100244f00, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::InvType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100245180, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100245730, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::configdecoder::LocType, unsigned long long>, 4096ul,
                                  4097ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 327872);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 327928) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 327920) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 327912) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100245bf0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 327872))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100245c40, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelUnlit, unsigned long long>, 500ul, 501ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 40192);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 40248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 40240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 40232) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100246100, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 40192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100246150, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelSource, unsigned long long>, 128ul, 129ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10432);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 10488) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10480) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10472) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1002464f0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 10432))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100246540, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 128ul, 129ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10432);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 10488) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10480) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10472) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1002468e0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>* this) {
        Reset();
        ((this + 10432))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100247750, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>, 256ul, 257ul, false,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38,
                                                                                                           local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20672);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 20728) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20720) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20712) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100247c10, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>* this) {
        Reset();
        ((this + 20672))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002482e0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::MesAnimType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100248670, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002489c0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::NpcType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100248d50, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100248da0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 64ul, 65ul, false,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38,
                                                                                                           local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100249130, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024aaf0, 96 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::Remove(oldscape::configdecoder::ObjSpriteCacheKey const&)
    void jag::LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                           oldscape::configdecoder::ObjSpriteCacheKey>::Remove(ObjSpriteCacheKey* param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        hashtable_iterator local_38[16];

        eastl::hashtable<
            oldscape::configdecoder::ObjSpriteCacheKey,
            eastl::pair<
                oldscape::configdecoder::ObjSpriteCacheKey_const,
                LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>>,
            eastl::fixed_hashtable_allocator<212ul, 152ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<eastl::pair<
                oldscape::configdecoder::ObjSpriteCacheKey_const,
                LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>>>,
            eastl::equal_to<oldscape::configdecoder::ObjSpriteCacheKey>,
            eastl::hash<oldscape::configdecoder::ObjSpriteCacheKey>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ObjSpriteCacheKey*)
                                                                                                 local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_38, local_48, extraout_RDX)) {
            RemoveInner((LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                                      oldscape::configdecoder::ObjSpriteCacheKey>*)param_1,
                        local_38);
        }
    }

    // 0x10024ab50, 128 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::RemoveInner(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*)
    void jag::LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                           oldscape::configdecoder::ObjSpriteCacheKey>::
        RemoveInner(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                                 oldscape::configdecoder::ObjSpriteCacheKey>* this,
                    LRUHashCacheWrapper* param_1) {
        ObjSpriteCacheKey local_50[2];

        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 64);
        }
        param_1->Unlink();
        oldscape::configdecoder::ObjSpriteCacheKey::ObjSpriteCacheKey(local_50, (ObjSpriteCacheKey*)(param_1 + 16));
        ((this + 8))->erase(local_50);
        local_50->~ObjSpriteCacheKey();
    }

    // 0x10024ac10, 112 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::RemoveInner(eastl::hashtable_iterator<eastl::pair<oldscape::configdecoder::ObjSpriteCacheKey const, LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey> >, false, false>&)
    void jag::LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                           oldscape::configdecoder::ObjSpriteCacheKey>::
        RemoveInner(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                                 oldscape::configdecoder::ObjSpriteCacheKey>* this,
                    hashtable_iterator* param_1) {
        long lVar1;
        undefined1 local_38[16];
        undefined8 local_28;
        undefined8 local_20;

        if (*(int*)this != 0) {
            lVar1 = param_1->HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 112);
        }
        lVar1 = param_1->HeapBeginPtr();
        ((lVar1 + 48))->Unlink();
        new (&local_28) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(param_1);
        eastl::hashtable<oldscape::configdecoder::ObjSpriteCacheKey,
                         eastl::pair<oldscape::configdecoder::ObjSpriteCacheKey_const,
                                     LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                                         oldscape::configdecoder::ObjSpriteCacheKey>>,
                         eastl::fixed_hashtable_allocator<212ul, 152ul, 200ul, 8ul, 0ul, false, eastl::allocator>,
                         eastl::use_first<eastl::pair<oldscape::configdecoder::ObjSpriteCacheKey_const,
                                                      LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                                                          oldscape::configdecoder::ObjSpriteCacheKey>>>,
                         eastl::equal_to<oldscape::configdecoder::ObjSpriteCacheKey>,
                         eastl::hash<oldscape::configdecoder::ObjSpriteCacheKey>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(local_38,
                                                                                                           this + 8,
                                                                                                           local_28,
                                                                                                           local_20);
    }

    // 0x10024bdf0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ParamType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10024c070, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024c440, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::SeqType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10024c7d0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024c820, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::AnimFrameSet, unsigned long long>, 100ul, 101ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 8192);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 8248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8232) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10024cce0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>* this) {
        Reset();
        ((this + 8192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024cd30, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void
    jag::LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::
        LRUHashCache(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                                  unsigned long long>* this,
                     uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long,
            LRUHashCacheWrapper<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, unsigned long long>, 100ul,
            101ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false,
            eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 8192);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 8248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8232) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10024d0d0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::~LRUHashCache()
    void jag::LRUHashCache<
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
        unsigned long long>::~LRUHashCache(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul,
                                                        101ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 8192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024dd60, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::SpotType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10024e0f0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024e140, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 30ul, 31ul, false,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38,
                                                                                                           local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 2592);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 2648) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2640) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2632) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10024e600, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 2592))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024f2e0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::StructType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10024f560, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024f5b0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarBitType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10024f940, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100250040, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarConBitType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1002502c0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100250310, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarConType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1002506a0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002509f0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarGlobalType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100250d80, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002514e0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarObjType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100251760, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002517b0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarcType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100251b40, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100251e50, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarnBitType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1002521e0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100252940, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarnType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100252bc0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100252c10, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarpType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100252fa0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100253270, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VeccType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100253600, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002538d0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::DBRowType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100253c60, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100257180, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::DBTableType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100257510, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100258270, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.112
    void ___cxx_global_var_init_112(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5718;
        puVar1 = PTR_NullCacheObj_100ee4168;
        if (*PTR_NullCacheObj_100ee4168 == '\0') {
            new (PTR_NullCacheObj_100ee5718) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5440, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002584e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.122
    void ___cxx_global_var_init_122(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5728;
        puVar1 = PTR_NullCacheObj_100ee4170;
        if (*PTR_NullCacheObj_100ee4170 == '\0') {
            new (PTR_NullCacheObj_100ee5728) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5448, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258520, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.123
    void ___cxx_global_var_init_123(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5818;
        puVar1 = PTR_NullCacheObj_100ee41f0;
        if (*PTR_NullCacheObj_100ee41f0 == '\0') {
            new (PTR_NullCacheObj_100ee5818) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54d0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258560, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.124
    void ___cxx_global_var_init_124(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5838;
        puVar1 = PTR_NullCacheObj_100ee4200;
        if (*PTR_NullCacheObj_100ee4200 == '\0') {
            new (PTR_NullCacheObj_100ee5838) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002585a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.125
    void ___cxx_global_var_init_125(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5808;
        puVar1 = PTR_NullCacheObj_100ee41e8;
        if (*PTR_NullCacheObj_100ee41e8 == '\0') {
            new (PTR_NullCacheObj_100ee5808) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54c8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002585e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.126
    void ___cxx_global_var_init_126(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee58d8;
        puVar1 = PTR_NullCacheObj_100ee4250;
        if (*PTR_NullCacheObj_100ee4250 == '\0') {
            new (PTR_NullCacheObj_100ee58d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5530, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258620, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.127
    void ___cxx_global_var_init_127(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee56a8;
        puVar1 = PTR_NullCacheObj_100ee4130;
        if (*PTR_NullCacheObj_100ee4130 == '\0') {
            new (PTR_NullCacheObj_100ee56a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5400, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258660, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.128
    void ___cxx_global_var_init_128(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5738;
        puVar1 = PTR_NullCacheObj_100ee4178;
        if (*PTR_NullCacheObj_100ee4178 == '\0') {
            new (PTR_NullCacheObj_100ee5738) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5450, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002586a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.129
    void ___cxx_global_var_init_129(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5878;
        puVar1 = PTR_NullCacheObj_100ee4220;
        if (*PTR_NullCacheObj_100ee4220 == '\0') {
            new (PTR_NullCacheObj_100ee5878) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002586e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.130
    void ___cxx_global_var_init_130(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5748;
        puVar1 = PTR_NullCacheObj_100ee4180;
        if (*PTR_NullCacheObj_100ee4180 == '\0') {
            new (PTR_NullCacheObj_100ee5748) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5458, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258760, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.132
    void ___cxx_global_var_init_132(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee57f0;
        puVar1 = PTR_NullCacheObj_100ee41d8;
        if (*PTR_NullCacheObj_100ee41d8 == '\0') {
            new (PTR_NullCacheObj_100ee57f0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54b0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002587a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.133
    void ___cxx_global_var_init_133(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee57f8;
        puVar1 = PTR_NullCacheObj_100ee41e0;
        if (*PTR_NullCacheObj_100ee41e0 == '\0') {
            new (PTR_NullCacheObj_100ee57f8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54b8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002587e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.134
    void ___cxx_global_var_init_134(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5750;
        puVar1 = PTR_NullCacheObj_100ee4188;
        if (*PTR_NullCacheObj_100ee4188 == '\0') {
            new (PTR_NullCacheObj_100ee5750) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5460, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258820, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.135
    void ___cxx_global_var_init_135(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5828;
        puVar1 = PTR_NullCacheObj_100ee41f8;
        if (*PTR_NullCacheObj_100ee41f8 == '\0') {
            new (PTR_NullCacheObj_100ee5828) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258860, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.136
    void ___cxx_global_var_init_136(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5900;
        puVar1 = PTR_NullCacheObj_100ee4268;
        if (*PTR_NullCacheObj_100ee4268 == '\0') {
            new (PTR_NullCacheObj_100ee5900) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5540, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002588a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.137
    void ___cxx_global_var_init_137(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5790;
        puVar1 = PTR_NullCacheObj_100ee41a8;
        if (*PTR_NullCacheObj_100ee41a8 == '\0') {
            new (PTR_NullCacheObj_100ee5790) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5480, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002588e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.138
    void ___cxx_global_var_init_138(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5858;
        puVar1 = PTR_NullCacheObj_100ee4210;
        if (*PTR_NullCacheObj_100ee4210 == '\0') {
            new (PTR_NullCacheObj_100ee5858) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258920, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5638;
        puVar1 = PTR_NullCacheObj_100ee40f8;
        if (*PTR_NullCacheObj_100ee40f8 == '\0') {
            new (PTR_NullCacheObj_100ee5638) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53c8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258960, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.140
    void ___cxx_global_var_init_140(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5648;
        puVar1 = PTR_NullCacheObj_100ee4100;
        if (*PTR_NullCacheObj_100ee4100 == '\0') {
            new (PTR_NullCacheObj_100ee5648) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53d0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002589a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee56c8;
        puVar1 = PTR_NullCacheObj_100ee4140;
        if (*PTR_NullCacheObj_100ee4140 == '\0') {
            new (PTR_NullCacheObj_100ee56c8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5410, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002589e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5658;
        puVar1 = PTR_NullCacheObj_100ee4108;
        if (*PTR_NullCacheObj_100ee4108 == '\0') {
            new (PTR_NullCacheObj_100ee5658) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258a20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.143
    void ___cxx_global_var_init_143(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee56d8;
        puVar1 = PTR_NullCacheObj_100ee4148;
        if (*PTR_NullCacheObj_100ee4148 == '\0') {
            new (PTR_NullCacheObj_100ee56d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5418, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258a60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.144
    void ___cxx_global_var_init_144(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5668;
        puVar1 = PTR_NullCacheObj_100ee4110;
        if (*PTR_NullCacheObj_100ee4110 == '\0') {
            new (PTR_NullCacheObj_100ee5668) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258aa0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.145
    void ___cxx_global_var_init_145(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee57a0;
        puVar1 = PTR_NullCacheObj_100ee41b0;
        if (*PTR_NullCacheObj_100ee41b0 == '\0') {
            new (PTR_NullCacheObj_100ee57a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5488, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258ae0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee56b8;
        puVar1 = PTR_NullCacheObj_100ee4138;
        if (*PTR_NullCacheObj_100ee4138 == '\0') {
            new (PTR_NullCacheObj_100ee56b8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5408, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258b20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.147
    void ___cxx_global_var_init_147(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee57b0;
        puVar1 = PTR_NullCacheObj_100ee41b8;
        if (*PTR_NullCacheObj_100ee41b8 == '\0') {
            new (PTR_NullCacheObj_100ee57b0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5490, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258b60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.148
    void ___cxx_global_var_init_148(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee57c0;
        puVar1 = PTR_NullCacheObj_100ee41c0;
        if (*PTR_NullCacheObj_100ee41c0 == '\0') {
            new (PTR_NullCacheObj_100ee57c0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5498, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258ba0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.149
    void ___cxx_global_var_init_149(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee57d0;
        puVar1 = PTR_NullCacheObj_100ee41c8;
        if (*PTR_NullCacheObj_100ee41c8 == '\0') {
            new (PTR_NullCacheObj_100ee57d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258ce0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.154
    void ___cxx_global_var_init_154(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee57e0;
        puVar1 = PTR_NullCacheObj_100ee41d0;
        if (*PTR_NullCacheObj_100ee41d0 == '\0') {
            new (PTR_NullCacheObj_100ee57e0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258d60, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.156
    void ___cxx_global_var_init_156(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5678;
        puVar1 = PTR_NullCacheObj_100ee4118;
        if (*PTR_NullCacheObj_100ee4118 == '\0') {
            new (PTR_NullCacheObj_100ee5678) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100265000, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100265010, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100265160, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5760;
        }
        return this;
    }

    // 0x100265350, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::AreaType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::AreaType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::AreaType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x1002654a0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1002654b0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100265600, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56f8;
        }
        return this;
    }

    // 0x1002657f0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::BugTemplateType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::BugTemplateType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<
                unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::BugTemplateType, unsigned long long>,
                eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>*)(this +
                                                                                                                8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100265940, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100265950, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100265aa0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56e8;
        }
        return this;
    }

    // 0x100265c90, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::ControllerType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ControllerType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<
                unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ControllerType, unsigned long long>,
                eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>*)(this +
                                                                                                                8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100265de0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100265df0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100265f30, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5770;
        }
        return this;
    }

    // 0x1002660a0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::EnumType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::EnumType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::EnumType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100267060, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100267070, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100267080, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100267090, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1002671f0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5688;
        }
        return this;
    }

    // 0x1002673a0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::HeadbarType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HeadbarType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HeadbarType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x1002675b0, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58e8;
        }
        return this;
    }

    // 0x100267650, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::graphics::Pix32> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>**)(this +
                                                                                                            5360) ==
                        this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x1002679a0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1002679b0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100267b00, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5698;
        }
        return this;
    }

    // 0x100267c70, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::HitmarkType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HitmarkType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HitmarkType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100268840, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100268850, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100268990, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5780;
        }
        return this;
    }

    // 0x100268b70, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::HuntType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HuntType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HuntType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100268cc0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100268cd0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100268e30, 160 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5708;
        }
        return this;
    }

    // 0x100268fe0, 240 bytes, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<oldscape::configdecoder::IdkType> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::IdkType, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::IdkType, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x10027e920, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::AreaType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10027ecb0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10027f000, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>* this,
        uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::BugTemplateType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10027f390, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10027f6e0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>* this,
        uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ControllerType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10027fa70, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10027fdc0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::EnumType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100280150, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100281670, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HeadbarType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100281a00, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100281a50, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>, 64ul, 65ul, false,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38,
                                                                                                           local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100281de0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100282390, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HitmarkType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100282720, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100282bc0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HuntType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100282f50, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002832a0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::IdkType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100283630, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100291100, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1134
    void ___cxx_global_var_init_1134(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5760;
        puVar1 = PTR_NullCacheObj_100ee4190;
        if (*PTR_NullCacheObj_100ee4190 == '\0') {
            new (PTR_NullCacheObj_100ee5760) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5468, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100291140, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1135
    void ___cxx_global_var_init_1135(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee56f8;
        puVar1 = PTR_NullCacheObj_100ee4158;
        if (*PTR_NullCacheObj_100ee4158 == '\0') {
            new (PTR_NullCacheObj_100ee56f8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5428, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100291180, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1136
    void ___cxx_global_var_init_1136(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee56e8;
        puVar1 = PTR_NullCacheObj_100ee4150;
        if (*PTR_NullCacheObj_100ee4150 == '\0') {
            new (PTR_NullCacheObj_100ee56e8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5420, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002911c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1137
    void ___cxx_global_var_init_1137(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5770;
        puVar1 = PTR_NullCacheObj_100ee4198;
        if (*PTR_NullCacheObj_100ee4198 == '\0') {
            new (PTR_NullCacheObj_100ee5770) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5470, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002913b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1145
    void ___cxx_global_var_init_1145(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5688;
        puVar1 = PTR_NullCacheObj_100ee4120;
        if (*PTR_NullCacheObj_100ee4120 == '\0') {
            new (PTR_NullCacheObj_100ee5688) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002913f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1146
    void ___cxx_global_var_init_1146(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee58e8;
        puVar1 = PTR_NullCacheObj_100ee4258;
        if (*PTR_NullCacheObj_100ee4258 == '\0') {
            new (PTR_NullCacheObj_100ee58e8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5530, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100291430, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1147
    void ___cxx_global_var_init_1147(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5698;
        puVar1 = PTR_NullCacheObj_100ee4128;
        if (*PTR_NullCacheObj_100ee4128 == '\0') {
            new (PTR_NullCacheObj_100ee5698) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53f8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002914b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1149
    void ___cxx_global_var_init_1149(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5780;
        puVar1 = PTR_NullCacheObj_100ee41a0;
        if (*PTR_NullCacheObj_100ee41a0 == '\0') {
            new (PTR_NullCacheObj_100ee5780) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5478, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002914f0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.1150
    void ___cxx_global_var_init_1150(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5708;
        puVar1 = PTR_NullCacheObj_100ee4160;
        if (*PTR_NullCacheObj_100ee4160 == '\0') {
            new (PTR_NullCacheObj_100ee5708) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5438, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004990d0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>* this) {
        Reset();
        ((this + 8192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10049a040, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 100ul,
                                  101ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 8192);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 8248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8232) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1004c0950, 160 bytes, inline, placed by class name
    // LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Find(
        ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[351];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[349]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55a8;
        }
        return this;
    }

    // 0x1004c0bc0, 240 bytes, inline, placed by class name
    // LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Put(shared_ptr<game::MapSquareWorldAreaCompositeInner> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Put(
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false,
                                       unsigned long long>**)(this + 2800) == this + 2752) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 2800));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<game::MapSquareWorldAreaCompositeInner, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<
                unsigned long long, LRUHashCacheWrapper<game::MapSquareWorldAreaCompositeInner, unsigned long long>,
                eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>, false>*)(this +
                                                                                                                8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 2808), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 2792));
        return this_00;
    }

    // 0x1004c2da0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1004c2de0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 2752))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004c56b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.41
    void ___cxx_global_var_init_41(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55a8;
        puVar1 = PTR_NullCacheObj_100ee4070;
        if (*PTR_NullCacheObj_100ee4070 == '\0') {
            new (PTR_NullCacheObj_100ee55a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5248, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004df240, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[191];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[189]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5610;
        }
        return this;
    }

    // 0x1004dfef0, 144 bytes, inline, placed by class name
    // LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Clean(unsigned long long)
    /* LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Clean(unsigned
   long long) */

    void LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Clean(
        LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 1528) = *(long*)(this + 1528) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 1520);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 1472) &&
                                      (param_1 <= (ulong)(*(long*)(this + 1528) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1004e02c0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004e02d0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1004e02e0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1004e0330, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[2591];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[2589]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55b8;
        }
        return this;
    }

    // 0x1004e0560, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Put(shared_ptr<graphics::AnimFrameset> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>**)(this +
                                                                                                           20720) ==
                        this + 20672) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 20720));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::AnimFrameset, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<258ul, 72ul, 256ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::AnimFrameset, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<258ul, 72ul, 256ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 20728), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 20712));
        return this_00;
    }

    // 0x1004e0690, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[2591];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[2589]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55c0;
        }
        return this;
    }

    // 0x1004e0880, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Put(shared_ptr<graphics::AnimKeyFrameSet> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>**)(this +
                                                                                                              20720) ==
                        this + 20672) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 20720));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::AnimKeyFrameSet, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<258ul, 72ul, 256ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::AnimKeyFrameSet, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<258ul, 72ul, 256ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 20728), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 20712));
        return this_00;
    }

    // 0x1004e16c0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 1472))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004e5a00, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Put(shared_ptr<graphics::Animation> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>**)(this + 1520) ==
                        this + 1472) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 1520));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::Animation, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<18ul, 72ul, 16ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Animation, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<18ul, 72ul, 16ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 1528), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 1512));
        return this_00;
    }

    // 0x1004ec7f0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Animation, unsigned long long>,
                                  16ul, 17ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1472);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 1528) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1520) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1512) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1004eff10, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::AnimKeyFrameSet, unsigned long long>, 256ul, 257ul, false,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38,
                                                                                                           local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20672);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 20728) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20720) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20712) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1004f02b0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::AnimFrameset, unsigned long long>,
                                  256ul, 257ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20672);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 20728) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20720) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20712) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1004f0650, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 20672))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004f1f50, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1004f1f60, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>* this) {
        Reset();
        ((this + 20672))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004f1fb0, 144 bytes, inline, placed by class name
    // LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Clean(unsigned long long)
    /* LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long
   long>::Clean(unsigned long long) */

    void LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::Clean(
        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>* this,
        ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 20728) = *(long*)(this + 20728) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 20720);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 20672) &&
                                      (param_1 <= (ulong)(*(long*)(this + 20728) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1004f2040, 144 bytes, inline, placed by class name
    // LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Clean(unsigned long long)
    void LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Clean(
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<graphics::AnimKeyFrameSet>* psVar1;
        shared_ptr<graphics::AnimKeyFrameSet>* this_00;
        char cVar2;

        *(long*)(this + 20728) = *(long*)(this + 20728) + 1;
        psVar1 = *(shared_ptr<graphics::AnimKeyFrameSet>**)(this + 20720);
        while ((this_00 = psVar1, this_00 != (shared_ptr<graphics::AnimKeyFrameSet>*)(this + 20672) &&
                                      (param_1 <= (ulong)(*(long*)(this + 20728) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<graphics::AnimKeyFrameSet>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1004f2a20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.53
    void ___cxx_global_var_init_53(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5610;
        puVar1 = PTR_NullCacheObj_100ee40d8;
        if (*PTR_NullCacheObj_100ee40d8 == '\0') {
            new (PTR_NullCacheObj_100ee5610) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee53a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2b20, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55b8;
        puVar1 = PTR_NullCacheObj_100ee4080;
        if (*PTR_NullCacheObj_100ee4080 == '\0') {
            new (PTR_NullCacheObj_100ee55b8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5350, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f2ba0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.59
    void ___cxx_global_var_init_59(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55c0;
        puVar1 = PTR_NullCacheObj_100ee4088;
        if (*PTR_NullCacheObj_100ee4088 == '\0') {
            new (PTR_NullCacheObj_100ee55c0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5368, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f6cf0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 992))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004f6d70, 64 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Reset()
    void LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Reset(
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>**)(this + 1040) = this + 992;
        *(LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>**)(this + 1032) = this + 992;
    }

    // 0x1004f71d0, 144 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Clean(unsigned long long)
    void LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Clean(
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 1048) = *(long*)(this + 1048) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 1040);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 992) &&
                                      (param_1 <= (ulong)(*(long*)(this + 1048) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1004fc690, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 10ul,
                                  11ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 992);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 1048) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1040) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1032) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005048e0, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1311];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1309]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55f8;
        }
        return this;
    }

    // 0x100504b20, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[191];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[189]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5600;
        }
        return this;
    }

    // 0x1005080b0, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1031];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1029]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55e8;
        }
        return this;
    }

    // 0x1005082f0, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[131];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[129]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55f0;
        }
        return this;
    }

    // 0x10050ad00, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>* this) {
        Reset();
        ((this + 10432))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10050d9d0, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Put(shared_ptr<graphics::Model> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>* this, shared_ptr* param_1, uint param_2,
        ulonglong* param_3) {
        LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>**)(this + 10480) ==
                        this + 10432) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 10480));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 10488), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 10472));
        return this_00;
    }

    // 0x10050dff0, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Put(shared_ptr<graphics::Model> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>* this, shared_ptr* param_1, uint param_2,
        ulonglong* param_3) {
        LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>**)(this + 1520) ==
                        this + 1472) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 1520));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<18ul, 72ul, 16ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<18ul, 72ul, 16ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 1528), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 1512));
        return this_00;
    }

    // 0x100512e80, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 128ul,
                                  129ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10432);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 10488) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10480) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10472) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100513160, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 16ul,
                                  17ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1472);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 1528) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1520) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1512) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005131f0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>* this) {
        Reset();
        ((this + 1472))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100513f40, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::Put(shared_ptr<graphics::Model> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>* this, shared_ptr* param_1, uint param_2,
        ulonglong* param_3) {
        LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>**)(this + 8240) ==
                        this + 8192) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 8240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<102ul, 72ul, 100ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<102ul, 72ul, 100ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 8248), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 8232));
        return this_00;
    }

    // 0x100514250, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Put(shared_ptr<graphics::Model> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>* this, shared_ptr* param_1, uint param_2,
        ulonglong* param_3) {
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>**)(this + 1040) ==
                        this + 992) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 1040));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<12ul, 72ul, 10ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 1048), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 1032));
        return this_00;
    }

    // 0x100514db0, 144 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Clean(unsigned long long)
    void LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Clean(
        LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 10488) = *(long*)(this + 10488) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 10480);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 10432) &&
                                      (param_1 <= (ulong)(*(long*)(this + 10488) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100515610, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.47
    void ___cxx_global_var_init_47(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55f8;
        puVar1 = PTR_NullCacheObj_100ee40c0;
        if (*PTR_NullCacheObj_100ee40c0 == '\0') {
            new (PTR_NullCacheObj_100ee55f8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5398, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515650, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5600;
        puVar1 = PTR_NullCacheObj_100ee40c8;
        if (*PTR_NullCacheObj_100ee40c8 == '\0') {
            new (PTR_NullCacheObj_100ee5600) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5398, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515810, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55e8;
        puVar1 = PTR_NullCacheObj_100ee40b0;
        if (*PTR_NullCacheObj_100ee40b0 == '\0') {
            new (PTR_NullCacheObj_100ee55e8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5398, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100515850, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55f0;
        puVar1 = PTR_NullCacheObj_100ee40b8;
        if (*PTR_NullCacheObj_100ee40b8 == '\0') {
            new (PTR_NullCacheObj_100ee55f0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5398, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100518960, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1313];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1311]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55c8;
        }
        return this;
    }

    // 0x100518ae0, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Put(shared_ptr<graphics::SpriteAtlasReference> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Put(
        LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true,
                                       unsigned long long>**)(this + 10496) == this + 10448) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 10496));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 10504), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 10488));
        return this_00;
    }

    // 0x100518bd0, 96 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Remove(unsigned long long const&)
    /* LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long
   long>::Remove(unsigned long long const&) */

    void LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Remove(ulonglong* param_1) {
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            RemoveInner((LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>*)param_1,
                        (hashtable_iterator*)local_38);
        }
    }

    // 0x100518c60, 112 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::RemoveInner(eastl::hashtable_iterator<eastl::pair<unsigned long long const, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long> >, false, false>&)
    /* LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long
   long>::RemoveInner(eastl::hashtable_iterator<eastl::pair<unsigned long long const,
   LRUHashCacheWrapper<audio::SoundResource, unsigned long long> >, false, false>&) */

    void LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::RemoveInner(
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* this, hashtable_iterator* param_1) {
        long lVar1;
        undefined1 local_38[16];
        undefined8 local_28;
        undefined8 local_20;

        if (*(int*)this != 0) {
            lVar1 = param_1->HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 32);
        }
        lVar1 = param_1->HeapBeginPtr();
        ((lVar1 + 8))->Unlink();
        new (&local_28) eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(param_1);
        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<audio::SoundResource, unsigned long long>>,
            eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<audio::SoundResource, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(local_38, this + 8,
                                                                                              local_28, local_20);
    }

    // 0x1005190e0, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[2591];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[2589]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55d0;
        }
        return this;
    }

    // 0x100519180, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::Put(shared_ptr<graphics::SpriteAtlasReference> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>* this,
        shared_ptr* param_1, uint param_2, ulonglong* param_3) {
        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false,
                                       unsigned long long>**)(this + 20720) == this + 20672) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 20720));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<258ul, 72ul, 256ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<258ul, 72ul, 256ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 20728), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 20712));
        return this_00;
    }

    // 0x10051e9f0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 1024ul,
                                  1025ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 82112);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 82168) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 82160) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 82152) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10051ea80, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>* this) {
        Reset(this);
        ((this + 82112))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10051eef0, 64 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::Reset()
    void LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::Reset(
        LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>**)(this + 82160) = this + 82112;
        *(LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>**)(this + 82152) = this + 82112;
    }

    // 0x100521aa0, 144 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::Clean(unsigned long long)
    void LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::Clean(
        LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 82168) = *(long*)(this + 82168) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 82160);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 82112) &&
                                      (param_1 <= (ulong)(*(long*)(this + 82168) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100522620, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55c8;
        puVar1 = PTR_NullCacheObj_100ee4090;
        if (*PTR_NullCacheObj_100ee4090 == '\0') {
            new (PTR_NullCacheObj_100ee55c8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100522760, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55d0;
        puVar1 = PTR_NullCacheObj_100ee4098;
        if (*PTR_NullCacheObj_100ee4098 == '\0') {
            new (PTR_NullCacheObj_100ee55d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100548970, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[351];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[349]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55d8;
        }
        return this;
    }

    // 0x100548af0, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::Put(shared_ptr<graphics::SpriteAtlasReference> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false,
                                       unsigned long long>**)(this + 2800) == this + 2752) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 2800));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>,
                      eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                      eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
                      false>*)(this + 8),
            param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 2808), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 2792));
        return this_00;
    }

    // 0x10054df70, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55d8;
        puVar1 = PTR_NullCacheObj_100ee40a0;
        if (*PTR_NullCacheObj_100ee40a0 == '\0') {
            new (PTR_NullCacheObj_100ee55d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5378, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10054fb80, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5608;
        }
        return this;
    }

    // 0x10054fc20, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<graphics::Model> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>* this, shared_ptr* param_1, uint param_2,
        ulonglong* param_3) {
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>**)(this + 5360) ==
                        this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100551540, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.48
    void ___cxx_global_var_init_48(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5608;
        puVar1 = PTR_NullCacheObj_100ee40d0;
        if (*PTR_NullCacheObj_100ee40d0 == '\0') {
            new (PTR_NullCacheObj_100ee5608) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5398, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10059c040, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005a0a30, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>, 32ul, 33ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 2752);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 2808) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2800) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2792) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005a0df0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1005a0e00, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>* this) {
        Reset();
        ((this + 2752))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1005abff0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005b1fc0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>, 128ul, 129ul,
            true, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10448);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 10504) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10496) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10488) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005b23b0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1005b23c0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>* this) {
        Reset();
        ((this + 10448))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1005b2410, 64 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Reset()
    /* LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Reset() */

    void LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Reset(
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>**)(this + 10496) = this + 10448;
        *(LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>**)(this + 10488) = this + 10448;
    }

    // 0x1005b2450, 144 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Clean(unsigned long long)
    /* LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long
   long>::Clean(unsigned long long) */

    void LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Clean(
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 10504) = *(long*)(this + 10504) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 10496);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 10448) &&
                                      (param_1 <= (ulong)(*(long*)(this + 10504) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this, (LRUHashCacheWrapper*)this_00);
            }
        }
    }

    // 0x1005b24e0, 80 bytes, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::RemoveInner(LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>*)
    /* LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long
   long>::RemoveInner(LRUHashCacheWrapper<audio::SoundResource, unsigned long long>*) */

    void LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::RemoveInner(
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* this,
        LRUHashCacheWrapper* param_1) {
        ulonglong local_20;

        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 24);
        }
        param_1->Unlink();
        local_20 = *(ulonglong*)(param_1 + 16);
        ((this + 8))->erase(&local_20);
    }

    // 0x1005b2870, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005b7d20, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>, 256ul, 257ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20672);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 20728) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20720) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20712) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005b80f0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1005b8100, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>* this) {
        Reset();
        ((this + 20672))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1005d8620, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005dd960, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<game::MapSquareWorldAreaCompositeInner, unsigned long long>, 32ul,
            33ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false, eastl::allocator>(
            local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 2752);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 2808) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2800) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2792) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005e40d0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1005e96c0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 64ul,
                                  65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x1005e9a90, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1005e9aa0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100663730, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100663a00, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1006640e0, 16 bytes, inline, placed by class name
    // LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::GetAsLinkedList() const
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>*
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::GetAsLinkedList(
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* this) {
        return this + 10448;
    }

    // 0x100664130, 240 bytes, inline, placed by class name
    // LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Put(shared_ptr<audio::SoundResource> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Put(
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>**)(this + 10496) ==
                        this + 10448) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this, *(LRUHashCacheWrapper**)(this + 10496));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<audio::SoundResource, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<audio::SoundResource, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<130ul, 72ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 10504), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 10488));
        return this_00;
    }

    // 0x100664840, 160 bytes, inline, placed by class name
    // LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[1313];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[1311]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55b0;
        }
        return this;
    }

    // 0x100666ea0, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x100667020, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100667ec0, 160 bytes, inline, placed by class name
    // LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[191];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[189]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55a0;
        }
        return this;
    }

    // 0x100667fe0, 240 bytes, inline, placed by class name
    // LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::Put(shared_ptr<game::AnimationWrapper> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::Put(
        LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>**)(this + 1520) ==
                        this + 1472) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 1520));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<game::AnimationWrapper, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<18ul, 72ul, 16ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<game::AnimationWrapper, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<18ul, 72ul, 16ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 1528), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 1512));
        return this_00;
    }

    // 0x10066b0d0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::LRUHashCache(
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<audio::SoundResource, unsigned long long>,
                                  128ul, 129ul, true, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10448);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 10504) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10496) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10488) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x10066b6d0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::~LRUHashCache()
    void LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::~LRUHashCache(
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* this) {
        Reset(this);
        ((this + 10448))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100670db0, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<game::AnimationWrapper, unsigned long long>,
                                  16ul, 17ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1472);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 1528) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1520) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1512) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100671dd0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>* this) {
        Reset();
        ((this + 1472))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100674150, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.73
    void ___cxx_global_var_init_73(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55b0;
        puVar1 = PTR_NullCacheObj_100ee4078;
        if (*PTR_NullCacheObj_100ee4078 == '\0') {
            new (PTR_NullCacheObj_100ee55b0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5300, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100674330, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.80
    void ___cxx_global_var_init_80(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55a0;
        puVar1 = PTR_NullCacheObj_100ee4068;
        if (*PTR_NullCacheObj_100ee4068 == '\0') {
            new (PTR_NullCacheObj_100ee55a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5200, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1008e5990, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1008e5a30, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x1008e5df0, 160 bytes, inline, placed by class name
    // LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[671];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[669]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55e0;
        }
        return this;
    }

    // 0x1008e61e0, 240 bytes, inline, placed by class name
    // LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::Put(shared_ptr<graphics::Font> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::Put(
        LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>* this, shared_ptr* param_1, uint param_2,
        ulonglong* param_3) {
        LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>**)(this + 5360) ==
                        this + 5312) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<graphics::Font, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Font, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<66ul, 72ul, 64ul, 8ul, 0ul, false, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 5368), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 5352));
        return this_00;
    }

    // 0x100906a70, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>* this, uint param_1, char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Font, unsigned long long>, 64ul,
                                  65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100906fe0, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::~LRUHashCache()
    void LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::~LRUHashCache(
        LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>* this) {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1009175c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.232
    void ___cxx_global_var_init_232(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee55e0;
        puVar1 = PTR_NullCacheObj_100ee40a8;
        if (*PTR_NullCacheObj_100ee40a8 == '\0') {
            new (PTR_NullCacheObj_100ee55e0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5390, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1009ef380, 16 bytes, complete-object constructor, inline, placed by class name
    // LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::LRUHashCache(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1009ef440, 240 bytes, inline, placed by class name
    // LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Put(shared_ptr<Js5MemoryCacheWrapper> const&, unsigned int, unsigned long long const&)
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Put(
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>* this, shared_ptr* param_1,
        uint param_2, ulonglong* param_3) {
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>* pLVar1;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00;

        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Remove((ulonglong*)this);
        if (*(uint*)this != 0) {
            if (*(uint*)this < param_2) {
                /* WARNING: Subroutine does not return */
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(uint*)pLVar1 = *(int*)pLVar1 - param_2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>**)(this +
                                                                                                           327936) ==
                        this + 327888) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper**)(this + 327936));
                } while (*(int*)(this + 4) < 0);
            }
        }
        this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)eastl::hash_map<
            unsigned long long, LRUHashCacheWrapper<Js5MemoryCacheWrapper, unsigned long long>,
            eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
            eastl::fixed_hashtable_allocator<4098ul, 72ul, 4096ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[]((hash_map<unsigned long long, LRUHashCacheWrapper<Js5MemoryCacheWrapper, unsigned long long>,
                             eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                             eastl::fixed_hashtable_allocator<4098ul, 72ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                             false>*)(this + 8),
                   param_3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
            this_00, param_1, param_3, *(ulonglong*)(this + 327944), param_2);
        this_00->InsertAfter(*(LRUCacheWrapper**)(this + 327928));
        return this_00;
    }

    // 0x1009ef900, 160 bytes, inline, placed by class name
    // LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Find(unsigned long long const&)
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Find(ulonglong* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        eastl::hashtable<
            unsigned long long,
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            eastl::fixed_hashtable_allocator<34ul, 72ul, 32ul, 8ul, 0ul, false, eastl::allocator>,
            eastl::use_first<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>>,
            eastl::equal_to<unsigned long long>, eastl::hash<unsigned long long>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((ulonglong*)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink(this);
            *(ulonglong*)(lVar2 + 40) = param_1[40993];
            LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(this,
                                                                                   (LRUCacheWrapper*)param_1[40991]);
        } else {
            this = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5598;
        }
        return this;
    }

    // 0x1009f8630, 144 bytes, inline, placed by class name
    // LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Clean(unsigned long long)
    void LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Clean(
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>* this, ulonglong param_1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        char cVar2;

        *(long*)(this + 327944) = *(long*)(this + 327944) + 1;
        psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 327936);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 327888) &&
                                      (param_1 <= (ulong)(*(long*)(this + 327944) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2 != '\0') {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1009f86c0, 64 bytes, inline, placed by class name
    // LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Reset()
    void LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Reset(
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>* this) {
        ((this + 8))->clear();
        *(undefined4*)(this + 4) = *(undefined4*)this;
        *(LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>**)(this + 327936) =
            this + 327888;
        *(LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>**)(this + 327928) =
            this + 327888;
    }

    // 0x100a009f0, 16 bytes, complete-object destructor, inline, placed by class name
    // LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::~LRUHashCache(): jumps straight to the base-object destructor

    // 0x100a00a00, 80 bytes, base-object destructor, inline, placed by class name
    // LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::~LRUHashCache()
    void LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::~LRUHashCache(
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>* this) {
        Reset(this);
        ((this + 327888))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100a05f50, 144 bytes, base-object constructor, inline, placed by class name
    // LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::LRUHashCache(unsigned int, char const*)
    void LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::LRUHashCache(
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>* this, uint param_1,
        char* param_2) {
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00;
        hash local_38[8];
        equal_to local_30[8];

        *(uint*)this = param_1;
        *(uint*)(this + 4) = param_1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<Js5MemoryCacheWrapper, unsigned long long>,
                                  4096ul, 4097ul, true, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false, eastl::allocator>(local_38, local_30);
        this_00 = (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 327888);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(this_00);
        *(undefined8*)(this + 327944) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 327936) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 327928) = this_00;
        ~AutoSingleton(param_2);
    }

    // 0x100a0bab0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.191
    void ___cxx_global_var_init_191(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5598;
        puVar1 = PTR_NullCacheObj_100ee4060;
        if (*PTR_NullCacheObj_100ee4060 == '\0') {
            new (PTR_NullCacheObj_100ee5598) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5170, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag
