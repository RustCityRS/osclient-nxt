// libs/jtl/LRUHashCache.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag {
    template <
        typename...> // 68 instantiations, e.g. <int, 16ul, 17ul, false, unsigned long long>, <Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>, <audio::SoundResource, 128ul, 129ul, true, unsigned long long>
    class LRUHashCache {
    public:
        void Clean(unsigned long long arg1);
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* Find(const unsigned long long& arg1);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::DBTableIndex>& dbTableIndex, unsigned int arg2, const unsigned long long& arg3);
        void RemoveInner(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* lruHashCacheWrapper);
        void Remove(const unsigned long long& arg1);
        void RemoveInner(
            eastl::hashtable_iterator<
                eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
                false, false>& hashtable_iterator);
        LRUHashCache(unsigned int arg1, const char* str);
        ~LRUHashCache();
        void Reset();
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::graphics::Pix32>& pix32, unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::ClientScript>& clientScript, unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::string>* Find(const eastl::string& str);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::string>*
        Put(const shared_ptr<oldscape::graphics::Pix32>& pix32, unsigned int arg2, const eastl::string& str);
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* Find(const eastl::string& str);
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*
        Put(const shared_ptr<oldscape::rs2lib::HttpSpriteData>& httpSpriteData, unsigned int arg2,
            const eastl::string& str);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::jstring::PixfontGeneric>& pixfontGeneric, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::dash3d::ModelLit>& modelLit, unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::rs2lib::InterfaceGraphicMask>& interfaceGraphicMask, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<int>& arg1, unsigned int arg2, const unsigned long long& arg3);
        void Remove(const eastl::string& str);
        void RemoveInner(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::string>* lruHashCacheWrapper);
        void
        RemoveInner(eastl::hashtable_iterator<
                    eastl::pair<eastl::string const, LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::string>>,
                    false, false>& hashtable_iterator);
        void Remove(const eastl::string& str);
        void RemoveInner(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* lruHashCacheWrapper);
        void RemoveInner(
            eastl::hashtable_iterator<
                eastl::pair<eastl::string const, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>,
                false, false>& hashtable_iterator);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::InvType>& invType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::LocType>& locType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::dash3d::ModelSource>& modelSource, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::dash3d::ModelUnlit>& modelUnlit, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::MesAnimType>& mesAnimType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::NpcType>& npcType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::ObjType>& objType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
        Find(const oldscape::configdecoder::ObjSpriteCacheKey& objSpriteCacheKey);
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
        Put(const shared_ptr<oldscape::configdecoder::ObjSprite>& objSprite, unsigned int arg2,
            const oldscape::configdecoder::ObjSpriteCacheKey& objSpriteCacheKey);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::ParamType>& paramType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::SeqType>& seqType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
            unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::SpotType>& spotType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::StructType>& structType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarBitType>& varBitType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarConBitType>& varConBitType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarConType>& varConType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarGlobalType>& varGlobalType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarObjType>& varObjType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarcType>& varcType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarnBitType>& varnBitType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarnType>& varnType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VarpType>& varpType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::VeccType>& veccType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::DBRowType>& dbRowType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::DBTableType>& dbTableType, unsigned int arg2,
            const unsigned long long& arg3);
        void Remove(const oldscape::configdecoder::ObjSpriteCacheKey& objSpriteCacheKey);
        void RemoveInner(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                             oldscape::configdecoder::ObjSpriteCacheKey>* lruHashCacheWrapper);
        void RemoveInner(
            eastl::hashtable_iterator<eastl::pair<oldscape::configdecoder::ObjSpriteCacheKey const,
                                                  LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                                                      oldscape::configdecoder::ObjSpriteCacheKey>>,
                                      false, false>& hashtable_iterator);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::AreaType>& areaType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::BugTemplateType>& bugTemplateType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::ControllerType>& controllerType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::EnumType>& enumType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::HeadbarType>& headbarType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::HitmarkType>& hitmarkType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::HuntType>& huntType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<oldscape::configdecoder::IdkType>& idkType, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<game::MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner,
            unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<graphics::AnimFrameset>& animFrameset, unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<graphics::AnimKeyFrameSet>& animKeyFrameSet, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<graphics::Animation>& animation, unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<graphics::Model>& model, unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, unsigned int arg2,
            const unsigned long long& arg3);
        void RemoveInner(eastl::hashtable_iterator<
                         eastl::pair<unsigned long long const,
                                     LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>>,
                         false, false>& hashtable_iterator);
        void RemoveInner(LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>* lruHashCacheWrapper);
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* GetAsLinkedList() const;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<audio::SoundResource>& soundResource, unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<game::AnimationWrapper>& animationWrapper, unsigned int arg2,
            const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<graphics::Font>& font, unsigned int arg2, const unsigned long long& arg3);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
        Put(const shared_ptr<Js5MemoryCacheWrapper>& js5MemoryCacheWrapper, unsigned int arg2,
            const unsigned long long& arg3);
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

    template <
        typename...> // 5 instantiations, e.g. <oldscape::DBTableIndex, unsigned long long>, <oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>, <oldscape::graphics::Pix32, eastl::string >
    class LRUHashCacheWrapper {
    public:
        void Unlink();
        void InsertAfter(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>& lruHashCacheWrapper);
        LRUHashCacheWrapper(const shared_ptr<oldscape::DBTableIndex>& pixfontGeneric, const unsigned long long& arg2,
                            unsigned long long arg3, unsigned int arg4);
        LRUHashCacheWrapper();
        ~LRUHashCacheWrapper();
        void InsertAfter(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::string>& lruHashCacheWrapper);
        LRUHashCacheWrapper(const shared_ptr<oldscape::graphics::Pix32>& pix32, const eastl::string& str,
                            unsigned long long arg3, unsigned int arg4);
        void InsertAfter(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>& lruHashCacheWrapper);
        LRUHashCacheWrapper(const shared_ptr<oldscape::rs2lib::HttpSpriteData>& httpSpriteData,
                            const eastl::string& str, unsigned long long arg3, unsigned int arg4);
        void InsertAfter(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                             oldscape::configdecoder::ObjSpriteCacheKey>& lruHashCacheWrapper);
        LRUHashCacheWrapper(const shared_ptr<oldscape::configdecoder::ObjSprite>& objSprite,
                            const oldscape::configdecoder::ObjSpriteCacheKey& objSpriteCacheKey,
                            unsigned long long arg3, unsigned int arg4);
    };

    // 0x100f36ee0, set at startup by ___cxx_global_var_init.233
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f36f00, set at startup by ___cxx_global_var_init.235
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f370b8, set at startup by ___cxx_global_var_init.592
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37350, set at startup by ___cxx_global_var_init.267
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f375f0, set at startup by ___cxx_global_var_init.157
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37608, set at startup by ___cxx_global_var_init.158
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUHashCache<
        oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37620, set at startup by ___cxx_global_var_init.159
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37640, set at startup by ___cxx_global_var_init.161
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37658, set at startup by ___cxx_global_var_init.162
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37670, set at startup by ___cxx_global_var_init.163
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37688, set at startup by ___cxx_global_var_init.164
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f376c8, set at startup by ___cxx_global_var_init.112
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f376e8, set at startup by ___cxx_global_var_init.122
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37700, set at startup by ___cxx_global_var_init.123
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37718, set at startup by ___cxx_global_var_init.124
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37730, set at startup by ___cxx_global_var_init.125
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37748, set at startup by ___cxx_global_var_init.126
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37760, set at startup by ___cxx_global_var_init.127
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37778, set at startup by ___cxx_global_var_init.128
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37790, set at startup by ___cxx_global_var_init.129
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f377a8, set at startup by ___cxx_global_var_init.130
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f377c8, set at startup by ___cxx_global_var_init.132
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                     oldscape::configdecoder::ObjSpriteCacheKey>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f377e0, set at startup by ___cxx_global_var_init.133
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f377f8, set at startup by ___cxx_global_var_init.134
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37810, set at startup by ___cxx_global_var_init.135
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37828, set at startup by ___cxx_global_var_init.136
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> LRUHashCache<
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::NullCacheObj =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37840, set at startup by ___cxx_global_var_init.137
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37858, set at startup by ___cxx_global_var_init.138
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37870, set at startup by ___cxx_global_var_init.139
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37888, set at startup by ___cxx_global_var_init.140
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f378a0, set at startup by ___cxx_global_var_init.141
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f378b8, set at startup by ___cxx_global_var_init.142
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f378d0, set at startup by ___cxx_global_var_init.143
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f378e8, set at startup by ___cxx_global_var_init.144
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37900, set at startup by ___cxx_global_var_init.145
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37918, set at startup by ___cxx_global_var_init.146
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37930, set at startup by ___cxx_global_var_init.147
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37948, set at startup by ___cxx_global_var_init.148
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37960, set at startup by ___cxx_global_var_init.149
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f379c8, set at startup by ___cxx_global_var_init.154
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37a28, set at startup by ___cxx_global_var_init.156
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37b00, set at startup by ___cxx_global_var_init.1134
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37b18, set at startup by ___cxx_global_var_init.1135
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37b30, set at startup by ___cxx_global_var_init.1136
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37b48, set at startup by ___cxx_global_var_init.1137
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37b68, set at startup by ___cxx_global_var_init.1145
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37b80, set at startup by ___cxx_global_var_init.1146
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37b98, set at startup by ___cxx_global_var_init.1147
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37bb0, set at startup by ___cxx_global_var_init.160
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37bc8, set at startup by ___cxx_global_var_init.1149
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f37be0, set at startup by ___cxx_global_var_init.1150
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c100, set at startup by ___cxx_global_var_init.41
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c448, set at startup by ___cxx_global_var_init.53
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c4c8, set at startup by ___cxx_global_var_init.57
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c4e8, set at startup by ___cxx_global_var_init.59
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c738, set at startup by ___cxx_global_var_init.47
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c750, set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c7d8, set at startup by ___cxx_global_var_init.55
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3c7f0, set at startup by ___cxx_global_var_init.56
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3cac8, set at startup by ___cxx_global_var_init.48
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d010, set at startup by ___cxx_global_var_init.46
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d330, set at startup by ___cxx_global_var_init.56
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3d370, set at startup by ___cxx_global_var_init.61
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3e5d0, set at startup by ___cxx_global_var_init.73
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f3e5f0, set at startup by ___cxx_global_var_init.80
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f443c8, set at startup by ___cxx_global_var_init.232
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f45460, set at startup by ___cxx_global_var_init.191
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::NullCacheObj =
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1000242b0
    void LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 5368) = *(long*)(this + 5368) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 5360);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 5312) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 5368) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100024340
    void LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 2808) = *(long*)(this + 2808) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 2800);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 2752) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 2808) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100024530
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5630;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1000246c0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::DBTableIndex>& dbTableIndex, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>**)(this + 5360) ==
                        this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(dbTableIndex, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1000248e0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5628;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 2808);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2792)));
        }
        return this_00;
    }

    // 0x100024980
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::DBTableIndex>& dbTableIndex, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>**)(this + 2800) ==
                        this + 2752) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this,
                                *(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2800));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(dbTableIndex, arg3, *(unsigned long long*)(this + 2808), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2792)));
        return this_00;
    }

    // 0x100054d40
    void LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::RemoveInner(
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* lruHashCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruHashCacheWrapper + 24);
        }
        lruHashCacheWrapper->Unlink();
        unsigned long long local_20 = *(unsigned long long*)(lruHashCacheWrapper + 16);
        ((this + 8))->erase(local_20);
    }

    // 0x100055860
    void LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::Remove(
        const unsigned long long& arg1) {

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 != '\0') {
            RemoveInner(this, &local_38);
        }
    }

    // 0x100055900
    void LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::RemoveInner(
        eastl::hashtable_iterator<
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>>,
            false, false>& hashtable_iterator) {
        long lVar1;
        hashtable_iterator<
            eastl::pair<unsigned long long const, LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long> _>,
            true, false>* local_28[2];

        if (*(int*)this != 0) {
            lVar1 = hashtable_iterator.HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 32);
        }
        lVar1 = hashtable_iterator.HeapBeginPtr();
        ((lVar1 + 8))->Unlink();
        new (local_28) eastl::hashtable_iterator(hashtable_iterator);
        auto local_38 = ((this + 8))->erase(local_28[0]);
    }

    // 0x1000d77f0
    void LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>**)(this + 880) =
            this + 832;
        *(LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>**)(this + 872) =
            this + 832;
    }

    // 0x1000e6750
    void LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>**)(this + 40240) =
            this + 40192;
        *(LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>**)(this + 40232) =
            this + 40192;
    }

    // 0x1000f36b0
    void LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 888) = *(long*)(this + 888) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 880);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 832) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 888) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100110e10
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58f8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 888);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 872)));
        }
        return this_00;
    }

    // 0x100110eb0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::graphics::Pix32>& pix32, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>**)(this + 880) ==
                        this + 832) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 880));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(pix32, arg3, *(unsigned long long*)(this + 888), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 872)));
        return this_00;
    }

    // 0x10012e5b0
    void LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>**)(this + 5360) =
            this + 5312;
        *(LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>**)(this + 5352) =
            this + 5312;
    }

    // 0x1001393e0
    LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                               const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>, 8ul, 9ul, false,
                                  eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 832);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 888) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 880) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 872) = this_00;
        ~AutoSingleton();
    }

    // 0x100139e60
    LRUHashCache<oldscape::graphics::Pix32, 8ul, 9ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 832))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10013bc00
    LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 2752))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10013bc50
    void LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>**)(this + 2800) =
            this + 2752;
        *(LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>**)(this + 2792) =
            this + 2752;
    }

    // 0x10013bc90
    LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10013e750
    LRUHashCache<oldscape::DBTableIndex, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                              const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>,
                                  64ul, 65ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10013eaf0
    LRUHashCache<oldscape::DBTableIndex, 32ul, 33ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                              const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>,
                                  32ul, 33ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 2752);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 2808) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2800) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2792) = this_00;
        ~AutoSingleton();
    }

    // 0x100180ff0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5618;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 10488);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10472)));
        }
        return this_00;
    }

    // 0x100181430
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::ClientScript>& clientScript, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>**)(this +
                                                                                                           10480) ==
                        this + 10432) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10480));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(clientScript, arg3, *(unsigned long long*)(this + 10488), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10472)));
        return this_00;
    }

    // 0x1001a9de0
    LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>,
                                  128ul, 129ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10432);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 10488) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10480) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10472) = this_00;
        ~AutoSingleton();
    }

    // 0x1001aa380
    LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 10432))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1001aa3d0
    void LRUHashCache<oldscape::ClientScript, 128ul, 129ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>**)(this + 10480) =
            this + 10432;
        *(LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>**)(this + 10472) =
            this + 10432;
    }

    // 0x100201930
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58c8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 16248);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 16232)));
        }
        return this_00;
    }

    // 0x100201a90
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::graphics::Pix32>& pix32, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>**)(this +
                                                                                                              16240) ==
                        this + 16192) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 16240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(pix32, arg3, *(unsigned long long*)(this + 16248), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 16232)));
        return this_00;
    }

    // 0x100201d50
    LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*
    LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::Find(
        const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        long lVar2;
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this_00;

        auto local_38 = ((this + 8))->find(str);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*)
                PTR_NullCacheObj_100ee58b8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUHashCacheWrapper<oldscape::graphics::Pix32,
                                           eastl::basic_string<char, BucketAllocatorEASTL>>*)(lVar2 + 24);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 72) = *(uint64_t*)(this + 1416);
            this_00->InsertAfter(
                *(*(LRUHashCacheWrapper<oldscape::graphics::Pix32,
                                        eastl::basic_string<char, BucketAllocatorEASTL> _>**)(this + 1400)));
        }
        return this_00;
    }

    // 0x100201df0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*
    LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::Put(
        const shared_ptr<oldscape::graphics::Pix32>& pix32, unsigned int arg2,
        const eastl::basic_string<char, BucketAllocatorEASTL>& str) {
        LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>*
            pLVar1;

        Remove(this, str);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                                       eastl::basic_string<char, BucketAllocatorEASTL>>**)(this + 1408) ==
                        this + 1344) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(
                        this, *(LRUHashCacheWrapper<oldscape::graphics::Pix32,
                                                    eastl::basic_string<char, BucketAllocatorEASTL> _>**)(this + 1408));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*)(*(
                (this + 8)))[str];
        new (this_00) LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>(
            pix32, str, *(unsigned long long*)(this + 1416), arg2);
        this_00->InsertAfter(
            *(*(LRUHashCacheWrapper<oldscape::graphics::Pix32,
                                    eastl::basic_string<char, BucketAllocatorEASTL> _>**)(this + 1400)));
        return this_00;
    }

    // 0x100201ee0
    LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*
    LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::Find(const eastl::string& str) {
        long lVar2;
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this_00;

        auto local_38 = ((this + 8))->find(str);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*)PTR_NullCacheObj_100ee5888;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*)(lVar2 + 32);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 88) = *(uint64_t*)(this + 1600);
            this_00->InsertAfter(
                *(*(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string_>**)(this + 1584)));
        }
        return this_00;
    }

    // 0x100201f80
    LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*
    LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::Put(
        const shared_ptr<oldscape::rs2lib::HttpSpriteData>& httpSpriteData, unsigned int arg2,
        const eastl::string& str) {
        LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>* pLVar1;

        Remove(this, str);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>**)(this +
                                                                                                              1592) ==
                        this + 1520) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(
                        this, *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string_>**)(this + 1592));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this_00 =
            (LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*)(*((this + 8)))[str];
        new (this_00) LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>(
            httpSpriteData, str, *(unsigned long long*)(this + 1600), arg2);
        this_00->InsertAfter(
            *(*(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string_>**)(this + 1584)));
        return this_00;
    }

    // 0x1002022a0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58a8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 1848);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1832)));
        }
        return this_00;
    }

    // 0x100202340
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::jstring::PixfontGeneric>& pixfontGeneric, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false,
                                       unsigned long long>**)(this + 1840) == this + 1792) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1840));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(pixfontGeneric, arg3, *(unsigned long long*)(this + 1848), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1832)));
        return this_00;
    }

    // 0x100202a30
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5868;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 4248);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 4232)));
        }
        return this_00;
    }

    // 0x100203020
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::dash3d::ModelLit>& modelLit, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>**)(this +
                                                                                                             4240) ==
                        this + 4192) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 4240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(modelLit, arg3, *(unsigned long long*)(this + 4248), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 4232)));
        return this_00;
    }

    // 0x100203430
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5898;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 888);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 872)));
        }
        return this_00;
    }

    // 0x1002035a0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::rs2lib::InterfaceGraphicMask>& interfaceGraphicMask, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false,
                                       unsigned long long>**)(this + 880) == this + 832) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 880));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(interfaceGraphicMask, arg3, *(unsigned long long*)(this + 888), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 872)));
        return this_00;
    }

    // 0x1002036d0
    void LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>**)(this + 16240) =
            this + 16192;
        *(LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>**)(this + 16232) =
            this + 16192;
    }

    // 0x100203710
    void LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>**)(this + 4240) = this + 4192;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>**)(this + 4232) = this + 4192;
    }

    // 0x100203750
    void LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>**)(this + 1840) =
            this + 1792;
        *(LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>**)(this + 1832) =
            this + 1792;
    }

    // 0x100205e90
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5848;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 21048);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 21032)));
        }
        return this_00;
    }

    // 0x100206090
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::dash3d::ModelLit>& modelLit, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>**)(this +
                                                                                                               21040) ==
                        this + 20992) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 21040));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(modelLit, arg3, *(unsigned long long*)(this + 21048), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 21032)));
        return this_00;
    }

    // 0x1002062c0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5910;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 1528);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1512)));
        }
        return this_00;
    }

    // 0x100206360
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Put(const shared_ptr<int>& arg1, unsigned int arg2,
                                                                  const unsigned long long& arg3) {
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<int, 16ul, 17ul, false, unsigned long long>**)(this + 1520) == this + 1472) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1520));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(arg1, arg3, *(unsigned long long*)(this + 1528), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1512)));
        return this_00;
    }

    // 0x100206550
    void LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>**)(this + 21040) =
            this + 20992;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>**)(this + 21032) =
            this + 20992;
    }

    // 0x100219c70
    LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                   const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>, 200ul, 201ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 16192);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 16248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 16240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 16232) = this_00;
        ~AutoSingleton();
    }

    // 0x10021a120
    LRUHashCache<oldscape::graphics::Pix32, 200ul, 201ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 16192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021a170
    LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                  const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 50ul, 51ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 4192);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 4248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 4240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 4232) = this_00;
        ~AutoSingleton();
    }

    // 0x10021a630
    LRUHashCache<oldscape::dash3d::ModelLit, 50ul, 51ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 4192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021a680
    LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::jstring::PixfontGeneric, unsigned long long>, 20ul, 21ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1792);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 1848) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1840) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1832) = this_00;
        ~AutoSingleton();
    }

    // 0x10021ab40
    LRUHashCache<oldscape::jstring::PixfontGeneric, 20ul, 21ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 1792))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021ab90
    LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::rs2lib::InterfaceGraphicMask, unsigned long long>, 8ul,
            9ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                     local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 832);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 888) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 880) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 872) = this_00;
        ~AutoSingleton();
    }

    // 0x10021af30
    LRUHashCache<oldscape::rs2lib::InterfaceGraphicMask, 8ul, 9ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 832))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021af80
    LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::LRUHashCache(unsigned int arg1,
                                                                                                   const char* str) {
        hash<eastl::string_> local_38;
        equal_to<eastl::string_> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<eastl::string, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>,
                                  10ul, 11ul, false, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* this_00 =
            (LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>*)(this + 1520);
        new (this_00) LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>();
        *(uint64_t*)(this + 1600) = 0;
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>**)(this + 1592) = this_00;
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>**)(this + 1584) = this_00;
        ~AutoSingleton();
    }

    // 0x10021b5e0
    LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::LRUHashCacheWrapper() : shared_ptr() {
        new ((this + 16)) eastl::string();
        *(uint32_t*)(this + 48) = 0;
        *(uint64_t*)(this + 56) = 0;
        *(uint64_t*)(this + 64) = 0;
        *(uint64_t*)(this + 72) = 0;
    }

    // 0x10021b630
    LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::~LRUHashCacheWrapper() {
        ((this + 16))->~basic_string();
    }

    // 0x10021b670
    LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::~LRUHashCache() {
        Reset(this);
        ((this + 1520))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021b6c0
    void LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>**)(this + 1592) =
            this + 1520;
        *(LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>**)(this + 1584) =
            this + 1520;
    }

    // 0x10021b700
    LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                 eastl::basic_string<char, BucketAllocatorEASTL>>::LRUHashCache(unsigned int arg1, const char* str) {
        hash<eastl::basic_string<char, BucketAllocatorEASTL> _> local_38;
        equal_to<eastl::basic_string<char, BucketAllocatorEASTL> _> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            eastl::basic_string<char, BucketAllocatorEASTL>,
            LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>, 10ul, 11ul,
            false, eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>,
            eastl::equal_to<eastl::basic_string<char, BucketAllocatorEASTL>>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*)(this +
                                                                                                               1344);
        new (this_00) LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>();
        *(uint64_t*)(this + 1416) = 0;
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>**)(this +
                                                                                                             1408) =
            this_00;
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>**)(this +
                                                                                                             1400) =
            this_00;
        ~AutoSingleton();
    }

    // 0x10021bd60
    LRUHashCacheWrapper<oldscape::graphics::Pix32,
                        eastl::basic_string<char, BucketAllocatorEASTL>>::LRUHashCacheWrapper()
        : shared_ptr() {
        new ((this + 16)) eastl::basic_string<char, BucketAllocatorEASTL>();
        *(uint32_t*)(this + 40) = 0;
        *(uint64_t*)(this + 48) = 0;
        *(uint64_t*)(this + 56) = 0;
        *(uint64_t*)(this + 64) = 0;
    }

    // 0x10021bdb0
    LRUHashCacheWrapper<oldscape::graphics::Pix32,
                        eastl::basic_string<char, BucketAllocatorEASTL>>::~LRUHashCacheWrapper() {
        ((this + 16))->~basic_string();
    }

    // 0x10021bdf0
    LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                 eastl::basic_string<char, BucketAllocatorEASTL>>::~LRUHashCache() {
        Reset(this);
        ((this + 1344))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021be40
    void LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                      eastl::basic_string<char, BucketAllocatorEASTL>>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                       eastl::basic_string<char, BucketAllocatorEASTL>>**)(this + 1408) = this + 1344;
        *(LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false,
                       eastl::basic_string<char, BucketAllocatorEASTL>>**)(this + 1400) = this + 1344;
    }

    // 0x10021c420
    void LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>::Unlink() {
        long lVar1 = *(long*)(this + 56);
        *(uint64_t*)(lVar1 + 64) = *(uint64_t*)(this + 64);
        *(long*)(*(long*)(this + 64) + 56) = lVar1;
    }

    // 0x10021c440
    void LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>::InsertAfter(
        LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>&
            lruHashCacheWrapper) {
        long lVar1 = *(long*)(lruHashCacheWrapper + 64);
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>**)(lVar1 +
                                                                                                             56) = this;
        *(long*)(this + 64) = lVar1;
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32,
                              eastl::basic_string<char, BucketAllocatorEASTL>>**)(lruHashCacheWrapper + 64) = this;
        *(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> _>**)(this +
                                                                                                               56) =
            lruHashCacheWrapper;
    }

    // 0x10021c4b0
    void
    LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::Remove(
        const eastl::basic_string<char, BucketAllocatorEASTL>& str) {

        auto local_38 = ((this + 8))->find(str);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 != '\0') {
            RemoveInner(this, &local_38);
        }
    }

    // 0x10021c510
    void LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::
        RemoveInner(LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>*
                        lruHashCacheWrapper) {
        basic_string<char, BucketAllocatorEASTL> local_38;

        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruHashCacheWrapper + 40);
        }
        lruHashCacheWrapper->Unlink();
        new (&local_38) eastl::basic_string<char, BucketAllocatorEASTL>(*((lruHashCacheWrapper + 16)));
        ((this + 8))->erase(local_38);
    }

    // 0x10021c5d0
    void LRUHashCache<oldscape::graphics::Pix32, 10ul, 11ul, false, eastl::basic_string<char, BucketAllocatorEASTL>>::
        RemoveInner(
            eastl::hashtable_iterator<eastl::pair<eastl::basic_string<char, BucketAllocatorEASTL> const,
                                                  LRUHashCacheWrapper<oldscape::graphics::Pix32,
                                                                      eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                      false, false>& hashtable_iterator) {
        long lVar1;
        hashtable_iterator<
            eastl::pair<
                eastl::basic_string<char, BucketAllocatorEASTL> const,
                LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL> _> _>,
            true, false>* local_28[2];

        if (*(int*)this != 0) {
            lVar1 = hashtable_iterator.HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 64);
        }
        lVar1 = hashtable_iterator.HeapBeginPtr();
        ((lVar1 + 24))->Unlink();
        new (local_28) eastl::hashtable_iterator(hashtable_iterator);
        auto local_38 = ((this + 8))->erase(local_28[0]);
    }

    // 0x10021cad0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, eastl::basic_string<char, BucketAllocatorEASTL>>::
        LRUHashCacheWrapper(const shared_ptr<oldscape::graphics::Pix32>& pix32,
                            const eastl::basic_string<char, BucketAllocatorEASTL>& str, unsigned long long arg3,
                            unsigned int arg4)
        : shared_ptr(pix32) {
        new ((this + 16)) eastl::basic_string<char, BucketAllocatorEASTL>(str);
        *(unsigned int*)(this + 40) = arg4;
        *(unsigned long long*)(this + 48) = arg3;
        *(uint64_t*)(this + 56) = 0;
        *(uint64_t*)(this + 64) = 0;
    }

    // 0x10021cbc0
    void LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::Unlink() {
        long lVar1 = *(long*)(this + 64);
        *(uint64_t*)(lVar1 + 72) = *(uint64_t*)(this + 72);
        *(long*)(*(long*)(this + 72) + 64) = lVar1;
    }

    // 0x10021cbe0
    void LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::InsertAfter(
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>& lruHashCacheWrapper) {
        long lVar1 = *(long*)(lruHashCacheWrapper + 72);
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>**)(lVar1 + 64) = this;
        *(long*)(this + 72) = lVar1;
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>**)(lruHashCacheWrapper + 72) = this;
        *(LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string_>**)(this + 64) = lruHashCacheWrapper;
    }

    // 0x10021cc50
    void
    LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::Remove(const eastl::string& str) {

        auto local_38 = ((this + 8))->find(str);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 != '\0') {
            RemoveInner(this, &local_38);
        }
    }

    // 0x10021ccb0
    void LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::RemoveInner(
        LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>* lruHashCacheWrapper) {

        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruHashCacheWrapper + 48);
        }
        lruHashCacheWrapper->Unlink();
        eastl::string local_40(*((lruHashCacheWrapper + 16)));
        ((this + 8))->erase(local_40);
    }

    // 0x10021cd70
    void LRUHashCache<oldscape::rs2lib::HttpSpriteData, 10ul, 11ul, false, eastl::string>::RemoveInner(
        eastl::hashtable_iterator<
            eastl::pair<eastl::string const, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>>,
            false, false>& hashtable_iterator) {
        long lVar1;
        hashtable_iterator<
            eastl::pair<eastl::string const, LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string_> _>,
            true, false>* local_28[2];

        if (*(int*)this != 0) {
            lVar1 = hashtable_iterator.HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 80);
        }
        lVar1 = hashtable_iterator.HeapBeginPtr();
        ((lVar1 + 32))->Unlink();
        new (local_28) eastl::hashtable_iterator(hashtable_iterator);
        auto local_38 = ((this + 8))->erase(local_28[0]);
    }

    // 0x10021d270
    LRUHashCacheWrapper<oldscape::rs2lib::HttpSpriteData, eastl::string>::LRUHashCacheWrapper(
        const shared_ptr<oldscape::rs2lib::HttpSpriteData>& httpSpriteData, const eastl::string& str,
        unsigned long long arg3, unsigned int arg4)
        : shared_ptr(httpSpriteData) {
        new ((this + 16)) eastl::string(str);
        *(unsigned int*)(this + 48) = arg4;
        *(unsigned long long*)(this + 56) = arg3;
        *(uint64_t*)(this + 64) = 0;
        *(uint64_t*)(this + 72) = 0;
    }

    // 0x10021eac0
    LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                    const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 260ul, 261ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20992);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 21048) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 21040) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 21032) = this_00;
        ~AutoSingleton();
    }

    // 0x10021ef80
    LRUHashCache<oldscape::dash3d::ModelLit, 260ul, 261ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 20992))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021efd0
    LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<int, unsigned long long>, 16ul, 17ul, false,
                                  eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1472);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 1528) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1520) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1512) = this_00;
        ~AutoSingleton();
    }

    // 0x10021f490
    LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 1472))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10021f4e0
    void LRUHashCache<int, 16ul, 17ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>**)(this + 1520) = this + 1472;
        *(LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>**)(this + 1512) = this + 1472;
    }

    // 0x100228520
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5718;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100228710
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::InvType>& invType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(invType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100228e00
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5728;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 327928);
            this_00->InsertAfter(
                *(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 327912)));
        }
        return this_00;
    }

    // 0x100229040
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::LocType>& locType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false,
                                       unsigned long long>**)(this + 327920) == this + 327872) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 327920));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(locType, arg3, *(unsigned long long*)(this + 327928), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 327912)));
        return this_00;
    }

    // 0x10022a600
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5818;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 10488);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10472)));
        }
        return this_00;
    }

    // 0x10022ae40
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::dash3d::ModelSource>& modelSource, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false,
                                       unsigned long long>**)(this + 10480) == this + 10432) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10480));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(modelSource, arg3, *(unsigned long long*)(this + 10488), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10472)));
        return this_00;
    }

    // 0x10022b1b0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5838;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 10488);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10472)));
        }
        return this_00;
    }

    // 0x10022b250
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::dash3d::ModelLit>& modelLit, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>**)(this +
                                                                                                               10480) ==
                        this + 10432) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10480));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(modelLit, arg3, *(unsigned long long*)(this + 10488), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10472)));
        return this_00;
    }

    // 0x10022b930
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5808;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 40248);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 40232)));
        }
        return this_00;
    }

    // 0x10022b9f0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::dash3d::ModelUnlit>& modelUnlit, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false,
                                       unsigned long long>**)(this + 40240) == this + 40192) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 40240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(modelUnlit, arg3, *(unsigned long long*)(this + 40248), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 40232)));
        return this_00;
    }

    // 0x10022bec0
    void LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>**)(this + 327920) =
            this + 327872;
        *(LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>**)(this + 327912) =
            this + 327872;
    }

    // 0x10022cd20
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58d8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 20728);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20712)));
        }
        return this_00;
    }

    // 0x10022cdc0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::graphics::Pix32>& pix32, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>**)(this +
                                                                                                              20720) ==
                        this + 20672) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20720));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(pix32, arg3, *(unsigned long long*)(this + 20728), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20712)));
        return this_00;
    }

    // 0x10022cf40
    void LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>**)(this + 20720) =
            this + 20672;
        *(LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>**)(this + 20712) =
            this + 20672;
    }

    // 0x10022d0d0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56a8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x10022d2b0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::MesAnimType>& mesAnimType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(mesAnimType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x10022d6f0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5738;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x10022d8c0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::NpcType>& npcType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(npcType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x10022ead0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5878;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x10022f030
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::dash3d::ModelLit>& modelLit, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>**)(this +
                                                                                                             5360) ==
                        this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(modelLit, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100230150
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5748;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100230940
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::ObjType>& objType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(objType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100232790
    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
    LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::
        Find(const oldscape::configdecoder::ObjSpriteCacheKey& objSpriteCacheKey) {
        long lVar2;
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this_00;

        auto local_38 = ((this + 8))->find(objSpriteCacheKey);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 =
                (LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*)
                    PTR_NullCacheObj_100ee57f0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                           oldscape::configdecoder::ObjSpriteCacheKey>*)(lVar2 + 48);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 120) = *(uint64_t*)(this + 32448);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                                         oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32432)));
        }
        return this_00;
    }

    // 0x100232bb0
    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
    LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::
        Put(const shared_ptr<oldscape::configdecoder::ObjSprite>& objSprite, unsigned int arg2,
            const oldscape::configdecoder::ObjSpriteCacheKey& objSpriteCacheKey) {
        LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                     oldscape::configdecoder::ObjSpriteCacheKey>* pLVar1;

        Remove(this, objSpriteCacheKey);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                                       oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32440) == this + 32352) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(this,
                                *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                                      oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32440));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this_00 =
            (LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*)(*(
                (this + 8)))[objSpriteCacheKey];
        new (this_00)
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>(
                objSprite, objSpriteCacheKey, *(unsigned long long*)(this + 32448), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                                     oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32432)));
        return this_00;
    }

    // 0x100233b90
    void LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                      oldscape::configdecoder::ObjSpriteCacheKey>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                       oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32440) = this + 32352;
        *(LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                       oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32432) = this + 32352;
    }

    // 0x1002342d0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57f8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1002344d0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::ParamType>& paramType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(paramType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1002349c0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5750;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100234bc0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::SeqType>& seqType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(seqType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100235a70
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5828;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 8248);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8232)));
        }
        return this_00;
    }

    // 0x100235b10
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::dash3d::AnimFrameSet>& animFrameSet, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false,
                                       unsigned long long>**)(this + 8240) == this + 8192) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(animFrameSet, arg3, *(unsigned long long*)(this + 8248), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8232)));
        return this_00;
    }

    // 0x100235d00
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5900;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 8248);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8232)));
        }
        return this_00;
    }

    // 0x100235ec0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
        unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>*
            pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                                       unsigned long long>**)(this + 8240) == this + 8192) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(oldscapeAnimKeyFrameSet, arg3, *(unsigned long long*)(this + 8248), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8232)));
        return this_00;
    }

    // 0x100235fe0
    void LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                       unsigned long long>**)(this + 8240) = this + 8192;
        *(LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                       unsigned long long>**)(this + 8232) = this + 8192;
    }

    // 0x1002361f0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5790;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1002363a0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::SpotType>& spotType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(spotType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100236c30
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5858;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 2648);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2632)));
        }
        return this_00;
    }

    // 0x100236cd0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::dash3d::ModelLit>& modelLit, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>**)(this +
                                                                                                             2640) ==
                        this + 2592) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2640));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(modelLit, arg3, *(unsigned long long*)(this + 2648), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2632)));
        return this_00;
    }

    // 0x100236de0
    void LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>**)(this + 2640) = this + 2592;
        *(LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>**)(this + 2632) = this + 2592;
    }

    // 0x100236f70
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5638;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100237170
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::StructType>& structType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(structType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1002374a0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5648;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100237610
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarBitType>& varBitType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varBitType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1002379b0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56c8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100237b90
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarConBitType>& varConBitType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varConBitType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100237e50
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5658;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100238030
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarConType>& varConType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varConType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1002382d0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56d8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1002384b0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarGlobalType>& varGlobalType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varGlobalType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100238730
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5668;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100238910
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarObjType>& varObjType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varObjType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100238bf0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57a0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100238d50
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarcType>& varcType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varcType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100238fe0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56b8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1002391c0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarnBitType>& varnBitType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varnBitType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100239440
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57b0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100239620
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarnType>& varnType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varnType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1002398d0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57c0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100239a40
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VarpType>& varpType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(varpType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100239d00
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57d0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100239e60
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::VeccType>& veccType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(veccType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x10023a0f0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee57e0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x10023a2a0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::DBRowType>& dbRowType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(dbRowType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x10023b310
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5678;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x10023b4c0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::DBTableType>& dbTableType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(dbTableType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100242db0
    LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::configdecoder::ObjType, unsigned long long>, 64ul, 65ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100243140
    LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                 oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCache(unsigned int arg1, const char* str) {
        hash<oldscape::configdecoder::ObjSpriteCacheKey> local_38;
        equal_to<oldscape::configdecoder::ObjSpriteCacheKey> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            oldscape::configdecoder::ObjSpriteCacheKey,
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>, 200ul,
            211ul, false, eastl::hash<oldscape::configdecoder::ObjSpriteCacheKey>,
            eastl::equal_to<oldscape::configdecoder::ObjSpriteCacheKey>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>* this_00 =
            (LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                 oldscape::configdecoder::ObjSpriteCacheKey>*)(this + 32352);
        new (this_00)
            LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>();
        *(uint64_t*)(this + 32448) = 0;
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                              oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32440) = this_00;
        *(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                              oldscape::configdecoder::ObjSpriteCacheKey>**)(this + 32432) = this_00;
        ~AutoSingleton();
    }

    // 0x100243830
    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                        oldscape::configdecoder::ObjSpriteCacheKey>::LRUHashCacheWrapper()
        : shared_ptr() {
        *(uint64_t*)(this + 48) = 0;
        *(uint64_t*)(this + 56) = 0;
        *(uint64_t*)(this + 32) = 0;
        *(uint64_t*)(this + 40) = 0;
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        new ((this + 16)) oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam();
        *(uint32_t*)(this + 64) = 0;
        *(uint64_t*)(this + 72) = 0;
        *(uint64_t*)(this + 80) = 0;
        *(uint64_t*)(this + 88) = 0;
    }

    // 0x1002438b0
    LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                        oldscape::configdecoder::ObjSpriteCacheKey>::~LRUHashCacheWrapper() {
        ((this + 16))->~ObjSpriteCacheKey();
    }

    // 0x1002438f0
    LRUHashCache<oldscape::configdecoder::ObjType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100243980
    LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false,
                 oldscape::configdecoder::ObjSpriteCacheKey>::~LRUHashCache() {
        Reset(this);
        ((this + 32352))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100244f00
    LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::configdecoder::InvType, unsigned long long>, 64ul, 65ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100245180
    LRUHashCache<oldscape::configdecoder::InvType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100245730
    LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::LocType, unsigned long long>, 4096ul,
            4097ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                        local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 327872);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 327928) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 327920) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 327912) = this_00;
        ~AutoSingleton();
    }

    // 0x100245bf0
    LRUHashCache<oldscape::configdecoder::LocType, 4096ul, 4097ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 327872))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100245c40
    LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                      const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::dash3d::ModelUnlit, unsigned long long>, 500ul, 501ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 40192);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 40248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 40240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 40232) = this_00;
        ~AutoSingleton();
    }

    // 0x100246100
    LRUHashCache<oldscape::dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 40192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100246150
    LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::dash3d::ModelSource, unsigned long long>, 128ul, 129ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10432);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 10488) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10480) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10472) = this_00;
        ~AutoSingleton();
    }

    // 0x1002464f0
    LRUHashCache<oldscape::dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 10432))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100246540
    LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                    const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 128ul, 129ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10432);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 10488) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10480) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10472) = this_00;
        ~AutoSingleton();
    }

    // 0x1002468e0
    LRUHashCache<oldscape::dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 10432))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100247750
    LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                   const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>, 256ul, 257ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20672);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 20728) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20720) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20712) = this_00;
        ~AutoSingleton();
    }

    // 0x100247c10
    LRUHashCache<oldscape::graphics::Pix32, 256ul, 257ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 20672))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002482e0
    LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::MesAnimType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100248670
    LRUHashCache<oldscape::configdecoder::MesAnimType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002489c0
    LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::configdecoder::NpcType, unsigned long long>, 64ul, 65ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100248d50
    LRUHashCache<oldscape::configdecoder::NpcType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100248da0
    LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                  const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 64ul, 65ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100249130
    LRUHashCache<oldscape::dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024aaf0
    void
    LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::
        Remove(const oldscape::configdecoder::ObjSpriteCacheKey& objSpriteCacheKey) {

        auto local_38 = ((this + 8))->find(objSpriteCacheKey);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 != '\0') {
            RemoveInner(this, &local_38);
        }
    }

    // 0x10024ab50
    void
    LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::
        RemoveInner(LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey>*
                        lruHashCacheWrapper) {

        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruHashCacheWrapper + 64);
        }
        lruHashCacheWrapper->Unlink();
        ObjSpriteCacheKey local_50(*((lruHashCacheWrapper + 16)));
        ((this + 8))->erase(local_50);
    }

    // 0x10024ac10
    void
    LRUHashCache<oldscape::configdecoder::ObjSprite, 200ul, 211ul, false, oldscape::configdecoder::ObjSpriteCacheKey>::
        RemoveInner(
            eastl::hashtable_iterator<eastl::pair<oldscape::configdecoder::ObjSpriteCacheKey const,
                                                  LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite,
                                                                      oldscape::configdecoder::ObjSpriteCacheKey>>,
                                      false, false>& hashtable_iterator) {
        long lVar1;
        hashtable_iterator<
            eastl::pair<
                oldscape::configdecoder::ObjSpriteCacheKey const,
                LRUHashCacheWrapper<oldscape::configdecoder::ObjSprite, oldscape::configdecoder::ObjSpriteCacheKey> _>,
            true, false>* local_28[2];

        if (*(int*)this != 0) {
            lVar1 = hashtable_iterator.HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 112);
        }
        lVar1 = hashtable_iterator.HeapBeginPtr();
        ((lVar1 + 48))->Unlink();
        new (local_28) eastl::hashtable_iterator(hashtable_iterator);
        auto local_38 = ((this + 8))->erase(local_28[0]);
    }

    // 0x10024bdf0
    LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ParamType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10024c070
    LRUHashCache<oldscape::configdecoder::ParamType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024c440
    LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::configdecoder::SeqType, unsigned long long>, 64ul, 65ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10024c7d0
    LRUHashCache<oldscape::configdecoder::SeqType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024c820
    LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::dash3d::AnimFrameSet, unsigned long long>, 100ul, 101ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 8192);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 8248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8232) = this_00;
        ~AutoSingleton();
    }

    // 0x10024cce0
    LRUHashCache<oldscape::dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 8192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024cd30
    LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                 unsigned long long>::LRUHashCache(unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long,
            LRUHashCacheWrapper<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, unsigned long long>, 100ul,
            101ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                       local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 8192);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 8248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8232) = this_00;
        ~AutoSingleton();
    }

    // 0x10024d0d0
    LRUHashCache<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false,
                 unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 8192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024dd60
    LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::SpotType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10024e0f0
    LRUHashCache<oldscape::configdecoder::SpotType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024e140
    LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                  const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::dash3d::ModelLit, unsigned long long>, 30ul, 31ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 2592);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 2648) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2640) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2632) = this_00;
        ~AutoSingleton();
    }

    // 0x10024e600
    LRUHashCache<oldscape::dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 2592))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024f2e0
    LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::StructType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10024f560
    LRUHashCache<oldscape::configdecoder::StructType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10024f5b0
    LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarBitType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10024f940
    LRUHashCache<oldscape::configdecoder::VarBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100250040
    LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarConBitType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x1002502c0
    LRUHashCache<oldscape::configdecoder::VarConBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100250310
    LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarConType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x1002506a0
    LRUHashCache<oldscape::configdecoder::VarConType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002509f0
    LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarGlobalType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100250d80
    LRUHashCache<oldscape::configdecoder::VarGlobalType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002514e0
    LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarObjType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100251760
    LRUHashCache<oldscape::configdecoder::VarObjType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002517b0
    LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarcType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100251b40
    LRUHashCache<oldscape::configdecoder::VarcType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100251e50
    LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarnBitType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x1002521e0
    LRUHashCache<oldscape::configdecoder::VarnBitType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100252940
    LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarnType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100252bc0
    LRUHashCache<oldscape::configdecoder::VarnType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100252c10
    LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VarpType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100252fa0
    LRUHashCache<oldscape::configdecoder::VarpType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100253270
    LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::VeccType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100253600
    LRUHashCache<oldscape::configdecoder::VeccType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002538d0
    LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::DBRowType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100253c60
    LRUHashCache<oldscape::configdecoder::DBRowType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100257180
    LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::DBTableType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100257510
    LRUHashCache<oldscape::configdecoder::DBTableType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100265160
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5760;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100265350
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::AreaType>& areaType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(areaType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100265600
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56f8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1002657f0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::BugTemplateType>& bugTemplateType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(bugTemplateType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100265aa0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee56e8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100265c90
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::ControllerType>& controllerType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(controllerType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100265f30
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5770;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1002660a0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::EnumType>& enumType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(enumType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1002671f0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5688;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1002673a0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::HeadbarType>& headbarType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(headbarType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1002675b0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee58e8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100267650
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::graphics::Pix32>& pix32, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>**)(this +
                                                                                                            5360) ==
                        this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(pix32, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100267b00
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5698;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100267c70
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::HitmarkType>& hitmarkType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(hitmarkType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100268990
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5780;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100268b70
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::HuntType>& huntType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(huntType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100268e30
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5708;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x100268fe0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::Put(
        const shared_ptr<oldscape::configdecoder::IdkType>& idkType, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false,
                                       unsigned long long>**)(this + 5360) == this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(idkType, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x10027e920
    LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::AreaType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10027ecb0
    LRUHashCache<oldscape::configdecoder::AreaType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10027f000
    LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::BugTemplateType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10027f390
    LRUHashCache<oldscape::configdecoder::BugTemplateType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10027f6e0
    LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::ControllerType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x10027fa70
    LRUHashCache<oldscape::configdecoder::ControllerType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10027fdc0
    LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::EnumType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100280150
    LRUHashCache<oldscape::configdecoder::EnumType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100281670
    LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HeadbarType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100281a00
    LRUHashCache<oldscape::configdecoder::HeadbarType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100281a50
    LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                 const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>, 64ul, 65ul, false,
                                  eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100281de0
    LRUHashCache<oldscape::graphics::Pix32, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100282390
    LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HitmarkType, unsigned long long>, 64ul,
            65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100282720
    LRUHashCache<oldscape::configdecoder::HitmarkType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100282bc0
    LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<oldscape::configdecoder::HuntType, unsigned long long>, 64ul, 65ul,
            false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100282f50
    LRUHashCache<oldscape::configdecoder::HuntType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1002832a0
    LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<oldscape::configdecoder::IdkType, unsigned long long>, 64ul, 65ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100283630
    LRUHashCache<oldscape::configdecoder::IdkType, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004990d0
    LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 8192))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10049a040
    LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                         const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 100ul,
                                  101ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 8192);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 8248) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8240) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 8232) = this_00;
        ~AutoSingleton();
    }

    // 0x1004c0950
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55a8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 2808);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2792)));
        }
        return this_00;
    }

    // 0x1004c0bc0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Put(
        const shared_ptr<game::MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false,
                                       unsigned long long>**)(this + 2800) == this + 2752) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2800));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00)
            LRUHashCacheWrapper(mapSquareWorldAreaCompositeInner, arg3, *(unsigned long long*)(this + 2808), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2792)));
        return this_00;
    }

    // 0x1004c2de0
    LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 2752))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004df240
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5610;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 1528);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1512)));
        }
        return this_00;
    }

    // 0x1004dfef0
    void LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 1528) = *(long*)(this + 1528) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 1520);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 1472) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 1528) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1004e0330
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55b8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 20728);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20712)));
        }
        return this_00;
    }

    // 0x1004e0560
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Put(
        const shared_ptr<graphics::AnimFrameset>& animFrameset, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>**)(this +
                                                                                                           20720) ==
                        this + 20672) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20720));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(animFrameset, arg3, *(unsigned long long*)(this + 20728), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20712)));
        return this_00;
    }

    // 0x1004e0690
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55c0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 20728);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20712)));
        }
        return this_00;
    }

    // 0x1004e0880
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Put(
        const shared_ptr<graphics::AnimKeyFrameSet>& animKeyFrameSet, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>**)(this +
                                                                                                              20720) ==
                        this + 20672) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20720));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(animKeyFrameSet, arg3, *(unsigned long long*)(this + 20728), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20712)));
        return this_00;
    }

    // 0x1004e16c0
    LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 1472))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004e5a00
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Put(
        const shared_ptr<graphics::Animation>& animation, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>**)(this + 1520) ==
                        this + 1472) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1520));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(animation, arg3, *(unsigned long long*)(this + 1528), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1512)));
        return this_00;
    }

    // 0x1004ec7f0
    LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                           const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Animation, unsigned long long>,
                                  16ul, 17ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1472);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 1528) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1520) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1512) = this_00;
        ~AutoSingleton();
    }

    // 0x1004eff10
    LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                   const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<graphics::AnimKeyFrameSet, unsigned long long>, 256ul, 257ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20672);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 20728) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20720) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20712) = this_00;
        ~AutoSingleton();
    }

    // 0x1004f02b0
    LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::AnimFrameset, unsigned long long>,
                                  256ul, 257ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20672);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 20728) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20720) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20712) = this_00;
        ~AutoSingleton();
    }

    // 0x1004f0650
    LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 20672))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004f1f60
    LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 20672))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004f1fb0
    void LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 20728) = *(long*)(this + 20728) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 20720);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 20672) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 20728) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1004f2040
    void
    LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<graphics::AnimKeyFrameSet>* this_00;
        bool cVar2;

        *(long*)(this + 20728) = *(long*)(this + 20728) + 1;
        shared_ptr<graphics::AnimKeyFrameSet>* psVar1 = *(shared_ptr<graphics::AnimKeyFrameSet>**)(this + 20720);
        while ((this_00 = psVar1, this_00 != (shared_ptr<graphics::AnimKeyFrameSet>*)(this + 20672) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 20728) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<graphics::AnimKeyFrameSet>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1004f6cf0
    LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 992))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1004f6d70
    void LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>**)(this + 1040) = this + 992;
        *(LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>**)(this + 1032) = this + 992;
    }

    // 0x1004f71d0
    void LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 1048) = *(long*)(this + 1048) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 1040);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 992) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 1048) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1004fc690
    LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                       const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 10ul,
                                  11ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 992);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 1048) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1040) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1032) = this_00;
        ~AutoSingleton();
    }

    // 0x1005048e0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55f8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 10488);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10472)));
        }
        return this_00;
    }

    // 0x100504b20
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5600;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 1528);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1512)));
        }
        return this_00;
    }

    // 0x1005080b0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55e8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 8248);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8232)));
        }
        return this_00;
    }

    // 0x1005082f0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55f0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 1048);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1032)));
        }
        return this_00;
    }

    // 0x10050ad00
    LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 10432))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10050d9d0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Put(
        const shared_ptr<graphics::Model>& model, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>**)(this + 10480) ==
                        this + 10432) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10480));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(model, arg3, *(unsigned long long*)(this + 10488), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10472)));
        return this_00;
    }

    // 0x10050dff0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Put(const shared_ptr<graphics::Model>& model,
                                                                              unsigned int arg2,
                                                                              const unsigned long long& arg3) {
        LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>**)(this + 1520) ==
                        this + 1472) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1520));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(model, arg3, *(unsigned long long*)(this + 1528), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1512)));
        return this_00;
    }

    // 0x100512e80
    LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                         const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 128ul,
                                  129ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10432);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 10488) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10480) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10472) = this_00;
        ~AutoSingleton();
    }

    // 0x100513160
    LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                       const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 16ul,
                                  17ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1472);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 1528) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1520) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1512) = this_00;
        ~AutoSingleton();
    }

    // 0x1005131f0
    LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 1472))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100513f40
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>::Put(
        const shared_ptr<graphics::Model>& model, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 100ul, 101ul, false, unsigned long long>**)(this + 8240) ==
                        this + 8192) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8240));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(model, arg3, *(unsigned long long*)(this + 8248), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 8232)));
        return this_00;
    }

    // 0x100514250
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>::Put(const shared_ptr<graphics::Model>& model,
                                                                              unsigned int arg2,
                                                                              const unsigned long long& arg3) {
        LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 10ul, 11ul, false, unsigned long long>**)(this + 1040) ==
                        this + 992) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1040));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(model, arg3, *(unsigned long long*)(this + 1048), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1032)));
        return this_00;
    }

    // 0x100514db0
    void LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 10488) = *(long*)(this + 10488) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 10480);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 10432) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 10488) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100518960
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55c8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 10504);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10488)));
        }
        return this_00;
    }

    // 0x100518ae0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Put(
        const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true,
                                       unsigned long long>**)(this + 10496) == this + 10448) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(
                        *(LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>**)(this + 10496));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(spriteAtlasReference, arg3, *(unsigned long long*)(this + 10504), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10488)));
        return this_00;
    }

    // 0x100518bd0
    void LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Remove(
        const unsigned long long& arg1) {

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 != '\0') {
            RemoveInner(this, &local_38);
        }
    }

    // 0x100518c60
    void LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::RemoveInner(
        eastl::hashtable_iterator<eastl::pair<unsigned long long const,
                                              LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>>,
                                  false, false>& hashtable_iterator) {
        long lVar1;
        hashtable_iterator<eastl::pair<unsigned long long const,
                                       LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long> _>,
                           true, false>* local_28[2];

        if (*(int*)this != 0) {
            lVar1 = hashtable_iterator.HeapBeginPtr();
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lVar1 + 32);
        }
        lVar1 = hashtable_iterator.HeapBeginPtr();
        ((lVar1 + 8))->Unlink();
        new (local_28) eastl::hashtable_iterator(hashtable_iterator);
        auto local_38 = ((this + 8))->erase(local_28[0]);
    }

    // 0x1005190e0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55d0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 20728);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20712)));
        }
        return this_00;
    }

    // 0x100519180
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::Put(
        const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false,
                                       unsigned long long>**)(this + 20720) == this + 20672) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20720));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(spriteAtlasReference, arg3, *(unsigned long long*)(this + 20728), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 20712)));
        return this_00;
    }

    // 0x10051e9f0
    LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                           const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 1024ul,
                                  1025ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 82112);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 82168) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 82160) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 82152) = this_00;
        ~AutoSingleton();
    }

    // 0x10051ea80
    LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 82112))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x10051eef0
    void LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>**)(this + 82160) = this + 82112;
        *(LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>**)(this + 82152) = this + 82112;
    }

    // 0x100521aa0
    void LRUHashCache<graphics::Model, 1024ul, 1025ul, false, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 82168) = *(long*)(this + 82168) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 82160);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 82112) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 82168) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x100548970
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55d8;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 2808);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2792)));
        }
        return this_00;
    }

    // 0x100548af0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::Put(
        const shared_ptr<graphics::SpriteAtlasReference>& spriteAtlasReference, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false,
                                       unsigned long long>**)(this + 2800) == this + 2752) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2800));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(spriteAtlasReference, arg3, *(unsigned long long*)(this + 2808), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 2792)));
        return this_00;
    }

    // 0x10054fb80
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5608;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x10054fc20
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::Put(const shared_ptr<graphics::Model>& model,
                                                                              unsigned int arg2,
                                                                              const unsigned long long& arg3) {
        LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>**)(this + 5360) ==
                        this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(model, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x1005a0a30
    LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                      const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>, 32ul, 33ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 2752);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 2808) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2800) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2792) = this_00;
        ~AutoSingleton();
    }

    // 0x1005a0e00
    LRUHashCache<graphics::SpriteAtlasReference, 32ul, 33ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 2752))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1005b1fc0
    LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>, 128ul, 129ul,
                                  true, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10448);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 10504) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10496) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10488) = this_00;
        ~AutoSingleton();
    }

    // 0x1005b23c0
    LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 10448))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1005b2410
    void LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>**)(this + 10496) = this + 10448;
        *(LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>**)(this + 10488) = this + 10448;
    }

    // 0x1005b2450
    void LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::Clean(
        unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 10504) = *(long*)(this + 10504) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 10496);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 10448) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 10504) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this, (LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>*)this_00);
            }
        }
    }

    // 0x1005b24e0
    void LRUHashCache<graphics::SpriteAtlasReference, 128ul, 129ul, true, unsigned long long>::RemoveInner(
        LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>* lruHashCacheWrapper) {
        if (*(int*)this != 0) {
            *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(lruHashCacheWrapper + 24);
        }
        lruHashCacheWrapper->Unlink();
        unsigned long long local_20 = *(unsigned long long*)(lruHashCacheWrapper + 16);
        ((this + 8))->erase(local_20);
    }

    // 0x1005b7d20
    LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long,
                                  LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>, 256ul, 257ul,
                                  false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(
                local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 20672);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 20728) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20720) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 20712) = this_00;
        ~AutoSingleton();
    }

    // 0x1005b8100
    LRUHashCache<graphics::SpriteAtlasReference, 256ul, 257ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 20672))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1005dd960
    LRUHashCache<game::MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::LRUHashCache(
        unsigned int arg1, const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8)) eastl::fixed_hash_map<
            unsigned long long, LRUHashCacheWrapper<game::MapSquareWorldAreaCompositeInner, unsigned long long>, 32ul,
            33ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>, false>(local_38,
                                                                                                      local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 2752);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 2808) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2800) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 2792) = this_00;
        ~AutoSingleton();
    }

    // 0x1005e96c0
    LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                       const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Model, unsigned long long>, 64ul,
                                  65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x1005e9aa0
    LRUHashCache<graphics::Model, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1006640e0
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>*
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::GetAsLinkedList() const {
        return this + 10448;
    }

    // 0x100664130
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Put(
        const shared_ptr<audio::SoundResource>& soundResource, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>* pLVar1;

        Remove(this, arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>**)(this + 10496) ==
                        this + 10448) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(
                        this,
                        *(LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>**)(this + 10496));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(soundResource, arg3, *(unsigned long long*)(this + 10504), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10488)));
        return this_00;
    }

    // 0x100664840
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55b0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 10504);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 10488)));
        }
        return this_00;
    }

    // 0x100667ec0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55a0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 1528);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1512)));
        }
        return this_00;
    }

    // 0x100667fe0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::Put(
        const shared_ptr<game::AnimationWrapper>& animationWrapper, unsigned int arg2, const unsigned long long& arg3) {
        LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>**)(this + 1520) ==
                        this + 1472) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1520));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(animationWrapper, arg3, *(unsigned long long*)(this + 1528), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 1512)));
        return this_00;
    }

    // 0x10066b0d0
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                             const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<audio::SoundResource, unsigned long long>,
                                  128ul, 129ul, true, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 10448);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 10504) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10496) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 10488) = this_00;
        ~AutoSingleton();
    }

    // 0x10066b6d0
    LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 10448))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100670db0
    LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                              const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<game::AnimationWrapper, unsigned long long>,
                                  16ul, 17ul, false, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 1472);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 1528) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1520) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 1512) = this_00;
        ~AutoSingleton();
    }

    // 0x100671dd0
    LRUHashCache<game::AnimationWrapper, 16ul, 17ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 1472))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1008e5df0
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::Find(const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee55e0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 5368);
            this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        }
        return this_00;
    }

    // 0x1008e61e0
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::Put(const shared_ptr<graphics::Font>& font,
                                                                             unsigned int arg2,
                                                                             const unsigned long long& arg3) {
        LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>**)(this + 5360) ==
                        this + 5312) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5360));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(font, arg3, *(unsigned long long*)(this + 5368), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 5352)));
        return this_00;
    }

    // 0x100906a70
    LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                      const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<graphics::Font, unsigned long long>, 64ul,
                                  65ul, false, eastl::hash<unsigned long long>, eastl::equal_to<unsigned long long>,
                                  false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 5312);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 5368) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5360) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 5352) = this_00;
        ~AutoSingleton();
    }

    // 0x100906fe0
    LRUHashCache<graphics::Font, 64ul, 65ul, false, unsigned long long>::~LRUHashCache() {
        Reset();
        ((this + 5312))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x1009ef440
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*
    LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Put(
        const shared_ptr<Js5MemoryCacheWrapper>& js5MemoryCacheWrapper, unsigned int arg2,
        const unsigned long long& arg3) {
        LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>* pLVar1;

        Remove(arg3);
        if (*(unsigned int*)this != 0) {
            if (*(unsigned int*)this < arg2) {
                LogAssert("itemSize <= m_cacheSize",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                          198, "LRUHashCache: Tried to Put item bigger than entire cache!");
            }
            pLVar1 = this + 4;
            *(unsigned int*)pLVar1 = *(int*)pLVar1 - arg2;
            if (*(int*)pLVar1 < 0) {
                do {
                    if (*(LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>**)(this +
                                                                                                           327936) ==
                        this + 327888) {
                        LogAssert(
                            "m_listDummy.m_next != &m_listDummy",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/LRUHashCache.h",
                            202, "LRUCache: Ran out of space, but nothing in cache!");
                    }
                    RemoveInner(
                        *(LRUHashCacheWrapper<graphics::SpriteAtlasReference, unsigned long long>**)(this + 327936));
                } while (*(int*)(this + 4) < 0);
            }
        }
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>*)(*((this + 8)))[arg3];
        new (this_00) LRUHashCacheWrapper(js5MemoryCacheWrapper, arg3, *(unsigned long long*)(this + 327944), arg2);
        this_00->InsertAfter(*(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 327928)));
        return this_00;
    }

    // 0x1009ef900
    LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*
    LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Find(
        const unsigned long long& arg1) {
        long lVar2;
        LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>* this_00;

        auto local_38 = ((this + 8))->find(arg1);
        auto local_48 = ((this + 8))->end();
        if (local_38 != local_48 == '\0') {
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)PTR_NullCacheObj_100ee5598;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            this_00 = (LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>*)(lVar2 + 8);
            this_00->Unlink();
            *(uint64_t*)(lVar2 + 40) = *(uint64_t*)(this + 327944);
            this_00->InsertAfter(
                *(*(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 327928)));
        }
        return this_00;
    }

    // 0x1009f8630
    void LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Clean(unsigned long long arg1) {
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* this_00;
        bool cVar2;

        *(long*)(this + 327944) = *(long*)(this + 327944) + 1;
        shared_ptr<oldscape::configdecoder::OldscapeVarType>* psVar1 =
            *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this + 327936);
        while ((this_00 = psVar1, this_00 != (shared_ptr<oldscape::configdecoder::OldscapeVarType>*)(this + 327888) &&
                                      (arg1 <= (unsigned long)(*(long*)(this + 327944) - *(long*)(this_00 + 32))))) {
            cVar2 = this_00->unique();
            psVar1 = *(shared_ptr<oldscape::configdecoder::OldscapeVarType>**)(this_00 + 48);
            if (cVar2) {
                RemoveInner(this_00);
            }
        }
    }

    // 0x1009f86c0
    void LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::Reset() {
        ((this + 8))->clear();
        *(uint32_t*)(this + 4) = *(uint32_t*)this;
        *(LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>**)(this + 327936) =
            this + 327888;
        *(LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>**)(this + 327928) =
            this + 327888;
    }

    // 0x100a00a00
    LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::~LRUHashCache() {
        Reset(this);
        ((this + 327888))->~LRUHashCacheWrapper();
        ((this + 8))->~fixed_hash_map();
    }

    // 0x100a05f50
    LRUHashCache<Js5MemoryCacheWrapper, 4096ul, 4097ul, true, unsigned long long>::LRUHashCache(unsigned int arg1,
                                                                                                const char* str) {
        hash<unsigned long long> local_38;
        equal_to<unsigned long long> local_30;

        *(unsigned int*)this = arg1;
        *(unsigned int*)(this + 4) = arg1;
        new ((this + 8))
            eastl::fixed_hash_map<unsigned long long, LRUHashCacheWrapper<Js5MemoryCacheWrapper, unsigned long long>,
                                  4096ul, 4097ul, true, eastl::hash<unsigned long long>,
                                  eastl::equal_to<unsigned long long>, false>(local_38, local_30);
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this_00 =
            (LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>*)(this + 327888);
        new (this_00) LRUHashCacheWrapper();
        *(uint64_t*)(this + 327944) = 0;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 327936) = this_00;
        *(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>**)(this + 327928) = this_00;
        ~AutoSingleton();
    }

} // namespace jag
