// libs/jtl/pool/FastPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 121 instantiations, e.g. <MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>, <MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>, <MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>
    class FastPool {
    public:
        long allocate();
        uint64_t is_owner(const MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(unsigned long arg1);
        long operator[](int arg1) const;
        FastPool(unsigned long arg1, unsigned long arg2);
        void resize(unsigned long arg1, unsigned long arg2);
        void clear();
        void Reset();
        long operator[](unsigned long arg1);
        FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>&&
                     fastPool);
        ~FastPool();
        void
        deallocate(const MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData* refCounterAndData);
        long GetTotalSize(unsigned long arg1);
        uint64_t is_owner(const MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData*
                              refCounterAndData) const;
        void deallocate(
            const MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const graphics::GeometryBatchInstance* geometryBatchInstance) const;
        void deallocate(const graphics::GeometryBatchInstance* geometryBatchInstance);
        uint64_t
        is_owner(const MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData* refCounterAndData);
        unsigned long GetTotalSize(unsigned long arg1);
        uint64_t is_owner(const MakeSharedPool<graphics::Model, 3072>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::Model, 3072>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const SpotAnimation* spotAnimation) const;
        void deallocate(const SpotAnimation* spotAnimation);
        uint64_t is_owner(const MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::Location, 256>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::Location, 256>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const game::EnvironmentLoader* environmentLoader) const;
        void deallocate(const game::EnvironmentLoader* environmentLoader);
        uint64_t is_owner(const game::Terrain* terrain) const;
        void deallocate(const game::Terrain* terrain);
        uint64_t is_owner(const MakeSharedPool<game::LightSource, 1024>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::LightSource, 1024>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::MapSquare, 32>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::MapSquare, 32>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::VarType, 5504>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::VarType, 5504>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<graphics::Animation, 512>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::Animation, 512>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::SeqType, 96>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::SeqType, 96>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::ObjType, 96>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::ObjType, 96>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::NPCType, 216>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::NPCType, 216>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::LocType, 256>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::LocType, 256>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(
            const MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData* refCounterAndData) const;
        void
        deallocate(const MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<ui::Interface, 128>::RefCounterAndData* polygon) const;
        void deallocate(const MakeSharedPool<ui::Interface, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::ParamType, 640>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::DBRowType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::DBTableType, 4>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::InvType, 32>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::BASType, 96>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::BASType, 96>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::IDKType, 32>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::IDKType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const game::MapElementType::Polygon* polygon);
        uint64_t is_owner(const MakeSharedPool<game::MapElementType, 512>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::MapElementType, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::MSIType, 32>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::QuestType, 128>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::QuestType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::LightType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::WaterType, 16>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::WaterType, 16>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::CursorType, 64>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::CursorType, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::EnumType, 128>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::EnumType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::StructType, 1024>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::StructType, 1024>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<game::AchievementType, 256>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::AchievementType, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(
            const MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(
            const MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData* refCounterAndData) const;
        void
        deallocate(const MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData* refCounterAndData);
        void
        deallocate(const MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(
            const MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData* refCounterAndData);
        FastPool(int arg1, int arg2);
        bool empty() const;
        uint8_t[16] begin();
        uint8_t[16] end();
        audio::SoundInstance* Create<>();
        void resize(int arg1, int arg2);
        long operator[](int arg1);
        void Destroy(audio::SoundInstance* soundInstance);
        uint64_t is_owner(const audio::SoundInstance* soundInstance) const;
        void deallocate(const audio::SoundInstance* soundInstance);
        void deallocate(int arg1);
        uint64_t
        is_owner(const MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const graphics::AnimationParameters* animationParameters) const;
        void deallocate(const graphics::AnimationParameters* animationParameters);
        void deallocate(const MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const ui::ConsoleSnow::SnowFlake* snowFlake);
        ui::ConsoleSnow::SnowFlake* Create<int, int, float>(int&& arg1, int&& arg2, float&& arg3);
        ui::ConsoleSnow::SnowFlake* Create<int, int>(int&& arg1, int&& arg2);
        uint64_t is_owner(const ui::ConsoleSnow::SnowFlake* snowFlake) const;
        graphics::TerrainPatch_DE*
        Create<graphics::TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
               render::InputAssemblerState*>(graphics::TerrainPatch& terrainPatch,
                                             const eastl::fixed_vector<unsigned char, 256ul>& arg2, math::OBB& obb,
                                             float& arg4, render::InputAssemblerState*&& arg5);
        uint64_t is_owner(const graphics::TerrainPatch_DE* terrainPatch_DE) const;
        void Destroy(graphics::TerrainPatch_DE* terrainPatch_DE);
        void deallocate(const graphics::TerrainPatch_DE* terrainPatch_DE);
        graphics::WaterPatch_DE* Create<graphics::WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(
            graphics::WaterPatch& waterPatch, math::OBB& obb, float& arg3, render::InputAssemblerState*&& arg4);
        void Destroy(graphics::WaterPatch_DE* waterPatch_DE);
        void deallocate(const graphics::WaterPatch_DE* waterPatch_DE);
        graphics::ParticleSystem_DE*
        Create<shared_ptr<graphics::ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
            shared_ptr<graphics::ParticleSystem>&& particleSystem, math::OBB& obb, float& arg3, unsigned int&& arg4,
            bool&& arg5);
        uint64_t is_owner(const graphics::ParticleSystem_DE* particleSystem_DE) const;
        void Destroy(graphics::ParticleSystem_DE* particleSystem_DE);
        void deallocate(const graphics::ParticleSystem_DE* particleSystem_DE);
        uint64_t
        is_owner(const MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData* refCounterAndData);
        graphics::GeometryBatch_DE*
        Create<math::OBB&, float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks> const*&, unsigned int,
               graphics::GeometryBatchInstance&>(math::OBB& obb, float& arg2,
                                                 const eastl::vector_map<int, graphics::FaceGroupRenderMasks>*& arg3,
                                                 unsigned int&& arg4,
                                                 graphics::GeometryBatchInstance& geometryBatchInstance);
        uint64_t is_owner(const graphics::GeometryBatch_DE* geometryBatch_DE) const;
        void Destroy(graphics::GeometryBatch_DE* geometryBatch_DE);
        void deallocate(const graphics::GeometryBatch_DE* geometryBatch_DE);
        uint64_t is_owner(const graphics::BillboardBatchInstance* billboardBatchInstance) const;
        void deallocate(const graphics::BillboardBatchInstance* billboardBatchInstance);
        void deallocate(const MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData* refCounterAndData);
        graphics::ParticleSystem_DE*
        Create<graphics::ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(
            graphics::ModularParticleSystemDrawable& modularParticleSystemDrawable, const math::OBB& obb, float& arg3,
            unsigned int&& arg4, bool&& arg5, bool&& arg6);
        uint64_t is_owner(
            const MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData* refCounterAndData) const;
        void
        deallocate(const MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData* refCounterAndData);
        uint64_t
        is_owner(const MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData* refCounterAndData);
        graphics::BillboardBatch_DE*
        Create<float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks> const*&,
               graphics::BillboardBatchInstance&>(float& arg1,
                                                  const eastl::vector_map<int, graphics::FaceGroupRenderMasks>*& arg2,
                                                  graphics::BillboardBatchInstance& billboardBatchInstance);
        uint64_t is_owner(const graphics::BillboardBatch_DE* billboardBatch_DE) const;
        void Destroy(graphics::BillboardBatch_DE* billboardBatch_DE);
        void deallocate(const graphics::BillboardBatch_DE* billboardBatch_DE);
        uint64_t is_owner(
            const MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData* refCounterAndData) const;
        void
        deallocate(const MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(
            const MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData* refCounterAndData) const;
        void
        deallocate(const MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData* refCounterAndData);
        graphics::GUIAnimationInstance*
        Create<shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&,
               unsigned int&, float&, game::Hook>(const shared_ptr<graphics::GUIAnimation>& guiAnimation,
                                                  const shared_ptr<ui::Component>& component, float& arg3, float& arg4,
                                                  unsigned int& arg5, float& arg6, game::Hook&& hook);
        graphics::GUIAnimationInstance*
        Create<shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&,
               unsigned int&, float&>(const shared_ptr<graphics::GUIAnimation>& guiAnimation,
                                      const shared_ptr<ui::Component>& component, float& arg3, float& arg4,
                                      unsigned int& arg5, float& arg6);
        void Destroy(graphics::GUIAnimationInstance* guiAnimationInstance);
        uint64_t is_owner(const MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData* refCounterAndData);
        uint64_t is_owner(const graphics::GUIAnimationInstance* guiAnimationInstance) const;
        void deallocate(const graphics::GUIAnimationInstance* guiAnimationInstance);
        graphics::SkyBox_DE* Create<>();
        uint64_t is_owner(const MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData* refCounterAndData);
        void Destroy(graphics::SkyBox_DE* skyBox_DE);
        void deallocate(const graphics::SkyBox_DE* skyBox_DE);
        graphics::LightProbe_DE* Create<>();
        uint64_t is_owner(const graphics::LightProbe_DE* lightProbe_DE) const;
        void Destroy(graphics::LightProbe_DE* lightProbe_DE);
        void deallocate(const graphics::LightProbe_DE* lightProbe_DE);
        void deallocate(const graphics::AnimState* animState);
        uint64_t is_owner(const MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData* refCounterAndData) const;
        void deallocate(const MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData* refCounterAndData);
        // ... 29 more instantiated members
    };

    template <
        typename...> // 3 instantiations, e.g. <MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>, <MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>, <audio::SoundInstance, int>
    class FastPool_iterator {
    public:
        uint32_t operator!=(const FastPool_iterator<audio::SoundInstance, int>& fastPool_iterator) const;
        void operator*() const;
        void destroy(audio::SoundInstance* soundInstance);
        FastPool_iterator<audio::SoundInstance, int>* operator++();
        FastPool_iterator(FastPool<audio::SoundInstance, int>* fastPool, int arg2);
        void Increment();
        uint64_t
        operator!=(const FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                           unsigned long>& fastPool_iterator) const;
        FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>*
        operator++();
        uint64_t operator!=(const FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData,
                                                    unsigned long>& fastPool_iterator) const;
        FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* operator++();
    };

    // 0x100055720
    uint64_t FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 64;
        return refCounterAndData < pRVar1;
    }

    // 0x100055c10
    LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(
        const shared_ptr<oldscape::DBTableIndex>& pixfontGeneric, const unsigned long long& arg2,
        unsigned long long arg3, unsigned int arg4)
        : shared_ptr(pixfontGeneric) {
        *(unsigned long long*)(this + 16) = arg2;
        *(unsigned int*)(this + 24) = arg4;
        *(unsigned long long*)(this + 32) = arg3;
        *(uint64_t*)(this + 40) = 0;
        *(uint64_t*)(this + 48) = 0;
    }

    // 0x1000671a0
    long FastPool<game::console::Snow::SnowFlake, int>::operator[](int arg1) const {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 141,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 32 + *(long*)this;
    }

    // 0x10019f620
    FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10019f740
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10019f7d0
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::Reset() {
        long lVar1;
        unsigned long uVar2;

        if (*(long*)(this + 32) != 0) {
            lVar1 = *(long*)(this + 8);
            uVar2 = 0;
            do {
                *(unsigned long*)(lVar1 + uVar2 * 8) = uVar2;
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(unsigned long*)(this + 32));
        }
        *(uint64_t*)(this + 24) = 0;
    }

    // 0x10019f810
    long FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 64 + *(long*)this;
    }

    // 0x10019fa50
    FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>&& fastPool) {
        *(uint64_t*)this = *(uint64_t*)fastPool;
        *(uint64_t*)(this + 8) = *(uint64_t*)(fastPool + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)(fastPool + 16);
        *(uint64_t*)(this + 24) = *(uint64_t*)(fastPool + 24);
        *(uint64_t*)(this + 32) = *(uint64_t*)(fastPool + 32);
        *(uint64_t*)(fastPool + 16) = 0;
        *(uint64_t*)(fastPool + 24) = 0;
        *(uint64_t*)fastPool = 0;
        *(uint64_t*)(fastPool + 8) = 0;
        *(uint64_t*)(fastPool + 32) = 0;
    }

    // 0x10019fae0
    FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1001e53e0
    FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1001e54f0
    void
    FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset(this);
    }

    // 0x1001e5550
    long FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                  unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 12640 + *(long*)this;
    }

    // 0x1001e5930
    FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
             unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1001e6610
    long FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                  unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 12656 + 40;
    }

    // 0x1001e6c40
    uint64_t
    FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData* refCounterAndData)
        const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 12640;
        return refCounterAndData < pRVar1;
    }

    // 0x1001ee200
    FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1001ee310
    void FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1001ee370
    long FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 240 + *(long*)this;
    }

    // 0x1001ee4d0
    FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1001ee760
    uint64_t FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 240;
        return refCounterAndData < pRVar1;
    }

    // 0x1001f3f70
    long FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 256 + 40;
    }

    // 0x100255040
    long FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 80 + 40;
    }

    // 0x100255210
    FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100255330
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100255390
    long FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 64 + *(long*)this;
    }

    // 0x100255510
    FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100338d50
    long FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                  unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 248 + 40;
    }

    // 0x100339020
    FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
             unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100339140
    void FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                  unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1003391a0
    long FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                  unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 232 + *(long*)this;
    }

    // 0x100339300
    FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
             unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100388730
    FastPool<graphics::GeometryBatchInstance, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100388840
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::clear() {
        long* plVar2;
        unsigned long uVar3;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                plVar2 = (long*)operator[](this, arg1);
                (**(void (**)(...))(*plVar2 + 32))(plVar2);
                arg1 = arg1 + 1;
                uVar3 = size();
            } while (arg1 < uVar3);
        }
        Reset();
    }

    // 0x1003888a0
    long FastPool<graphics::GeometryBatchInstance, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 896 + *(long*)this;
    }

    // 0x1003889c0
    FastPool<graphics::GeometryBatchInstance, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100388a50
    uint64_t FastPool<graphics::GeometryBatchInstance, unsigned long>::is_owner(
        const graphics::GeometryBatchInstance* geometryBatchInstance) const {
        if (geometryBatchInstance < *(GeometryBatchInstance**)this) {
            return 0;
        }
        GeometryBatchInstance* pGVar1 =
            (GeometryBatchInstance*)((*(GeometryBatchInstance**)this)->field_24 + *(long*)(this + 32) * 896 - 24);
        return geometryBatchInstance < pGVar1;
    }

    // 0x1003e0d60
    long FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 72 + 40;
    }

    // 0x1003e3150
    uint64_t FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 704;
        return refCounterAndData < pRVar1;
    }

    // 0x1003e3d80
    FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1003e3ea0
    void FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1003e3f00
    long FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 120 + *(long*)this;
    }

    // 0x1003e4080
    FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1003e4ce0
    long FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 136 + 40;
    }

    // 0x1003e4eb0
    uint64_t FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 120;
        return refCounterAndData < pRVar1;
    }

    // 0x100402c80
    unsigned long
    FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 384 | 40;
    }

    // 0x100403880
    uint64_t FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::Model, 3072>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 976;
        return refCounterAndData < pRVar1;
    }

    // 0x100406650
    FastPool<SpotAnimation, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100406760
    void FastPool<SpotAnimation, unsigned long>::clear() {
        uint64_t* puVar2;
        unsigned long uVar3;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                puVar2 = (uint64_t*)operator[](this, arg1);
                (**(void (**)(...))*puVar2)(puVar2);
                arg1 = arg1 + 1;
                uVar3 = size();
            } while (arg1 < uVar3);
        }
        Reset();
    }

    // 0x1004067c0
    long FastPool<SpotAnimation, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 464 + *(long*)this;
    }

    // 0x1004068e0
    FastPool<SpotAnimation, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100406970
    uint64_t FastPool<SpotAnimation, unsigned long>::is_owner(const SpotAnimation* spotAnimation) const {
        if (spotAnimation < *(SpotAnimation**)this) {
            return 0;
        }
        SpotAnimation* pSVar1 = (SpotAnimation*)((long)*(SpotAnimation**)this + *(long*)(this + 32) * 464);
        return spotAnimation < pSVar1;
    }

    // 0x1004087b0
    long FastPool<SpotAnimation, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 480 + 40;
    }

    // 0x100409430
    long FastPool<game::Terrain, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1712 + 40;
    }

    // 0x10040a6d0
    uint64_t FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1664;
        return refCounterAndData < pRVar1;
    }

    // 0x10041f6c0
    uint64_t FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::Location, 256>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 912;
        return refCounterAndData < pRVar1;
    }

    // 0x100420a00
    long
    FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1296 + 40;
    }

    // 0x100421140
    FastPool<game::EnvironmentLoader, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100421260
    void FastPool<game::EnvironmentLoader, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((EnvironmentLoader*)operator[](this, arg1))->~EnvironmentLoader();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004212c0
    long FastPool<game::EnvironmentLoader, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 56 + *(long*)this;
    }

    // 0x1004213e0
    FastPool<game::EnvironmentLoader, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100421470
    uint64_t
    FastPool<game::EnvironmentLoader, unsigned long>::is_owner(const game::EnvironmentLoader* environmentLoader) const {
        if (environmentLoader < *(EnvironmentLoader**)this) {
            return 0;
        }
        EnvironmentLoader* pEVar1 = (EnvironmentLoader*)((long)*(EnvironmentLoader**)this + *(long*)(this + 32) * 56);
        return environmentLoader < pEVar1;
    }

    // 0x100421a90
    FastPool<game::Terrain, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100421ba0
    void FastPool<game::Terrain, unsigned long>::clear() {
        uint64_t* puVar2;
        unsigned long uVar3;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                puVar2 = (uint64_t*)operator[](this, arg1);
                (**(void (**)(...))*puVar2)(puVar2);
                arg1 = arg1 + 1;
                uVar3 = size();
            } while (arg1 < uVar3);
        }
        Reset();
    }

    // 0x100421c00
    long FastPool<game::Terrain, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1696 + *(long*)this;
    }

    // 0x100421d20
    FastPool<game::Terrain, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100421db0
    uint64_t FastPool<game::Terrain, unsigned long>::is_owner(const game::Terrain* terrain) const {
        if (terrain < *(Terrain**)this) {
            return 0;
        }
        Terrain* pTVar1 = (Terrain*)((long)*(Terrain**)this + *(long*)(this + 32) * 1696);
        return terrain < pTVar1;
    }

    // 0x100423030
    uint64_t FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::LightSource, 1024>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 496;
        return refCounterAndData < pRVar1;
    }

    // 0x100424fa0
    unsigned long
    FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 4480 | 40;
    }

    // 0x100425270
    FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                        unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100425380
    void FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004253e0
    long FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 4464 + *(long*)this;
    }

    // 0x100425540
    FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100434e90
    long FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 512 + 40;
    }

    // 0x100435050
    FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100435160
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004351c0
    long FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 496 + *(long*)this;
    }

    // 0x100435320
    FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004378e0
    long
    FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 928 + 40;
    }

    // 0x100437a40
    FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                              unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100437b50
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100437bb0
    long
    FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 912 + *(long*)this;
    }

    // 0x100437d10
    FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100438550
    FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100438670
    void FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004386d0
    long FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 152 + *(long*)this;
    }

    // 0x100438880
    FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004394c0
    long FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 168 + 40;
    }

    // 0x100439670
    uint64_t FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 152;
        return refCounterAndData < pRVar1;
    }

    // 0x10044e8d0
    long FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 240 + 40;
    }

    // 0x10044eba0
    FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10044ecb0
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10044ed10
    long FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 224 + *(long*)this;
    }

    // 0x10044ee70
    FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004514c0
    FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1004515e0
    void FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100451640
    long FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 9872 + *(long*)this;
    }

    // 0x1004519b0
    FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004525b0
    long FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 9888 + 40;
    }

    // 0x100452940
    uint64_t FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 9872;
        return refCounterAndData < pRVar1;
    }

    // 0x100454c60
    long FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 720 + 40;
    }

    // 0x100454dc0
    FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100454ed0
    void FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100454f30
    long FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 704 + *(long*)this;
    }

    // 0x1004551d0
    FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100456120
    FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                              unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100456240
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004562a0
    long
    FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1280 + *(long*)this;
    }

    // 0x100456400
    FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100456640
    uint64_t FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::MapSquare, 32>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1280;
        return refCounterAndData < pRVar1;
    }

    // 0x10045c130
    unsigned long FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 704 | 40;
    }

    // 0x10045c400
    FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10045c510
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10045c570
    long FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 688 + *(long*)this;
    }

    // 0x10045c6d0
    FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10045d000
    FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10045d110
    void FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10045d170
    long FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 368 + *(long*)this;
    }

    // 0x10045d2d0
    FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10045d510
    uint64_t FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 368;
        return refCounterAndData < pRVar1;
    }

    // 0x100487000
    FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                              unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100487110
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100487170
    long
    FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 368 + *(long*)this;
    }

    // 0x1004872d0
    FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10049af30
    long FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 9744 + 40;
    }

    // 0x10049b270
    FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10049b390
    void FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10049b3f0
    long
    FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 9728 + *(long*)this;
    }

    // 0x10049b610
    FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10049cc50
    FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10049cd70
    void FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10049cdd0
    long FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 64 + *(long*)this;
    }

    // 0x10049cf50
    FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10049e090
    uint64_t FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 224;
        return refCounterAndData < pRVar1;
    }

    // 0x1004ca530
    long FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 128 + 40;
    }

    // 0x1004ca860
    FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1004ca980
    void FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004ca9e0
    long
    FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 112 + *(long*)this;
    }

    // 0x1004cab40
    FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004cb880
    long
    FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 600 + 40;
    }

    // 0x1004cbb50
    FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                              unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1004cbc70
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004cbcd0
    long
    FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 584 + *(long*)this;
    }

    // 0x1004cbe30
    FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004d7b30
    long
    FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 144 + 40;
    }

    // 0x1004d7e70
    FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                              unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1004d7f90
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004d7ff0
    long
    FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 128 + *(long*)this;
    }

    // 0x1004d8150
    FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004d93d0
    uint64_t FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::VarType, 5504>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 128;
        return refCounterAndData < pRVar1;
    }

    // 0x1004e3760
    unsigned long
    FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 192 | 40;
    }

    // 0x1004e3aa0
    FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1004e3bc0
    void FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004e3c20
    long FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 176 + *(long*)this;
    }

    // 0x1004e3dd0
    FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004e6c60
    uint64_t FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::Animation, 512>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 232;
        return refCounterAndData < pRVar1;
    }

    // 0x1004eb6e0
    FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                            unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1004eb800
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004eb860
    long FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1872 + *(long*)this;
    }

    // 0x1004eb9c0
    FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004ec760
    long
    FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1888 + 40;
    }

    // 0x1004ecda0
    uint64_t FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::SeqType, 96>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1872;
        return refCounterAndData < pRVar1;
    }

    // 0x1004f0b30
    uint64_t FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 168;
        return refCounterAndData < pRVar1;
    }

    // 0x1004f1390
    uint64_t FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 184;
        return refCounterAndData < pRVar1;
    }

    // 0x1004f8c50
    FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                            unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1004f8d70
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004f8dd0
    long FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1040 + *(long*)this;
    }

    // 0x1004f9080
    FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1004f9320
    uint64_t FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::ObjType, 96>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1040;
        return refCounterAndData < pRVar1;
    }

    // 0x1004ffa40
    long FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 152 + 40;
    }

    // 0x1004ffd10
    FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1004ffe30
    void FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1004ffe90
    long FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 136 + *(long*)this;
    }

    // 0x100500030
    FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10050c3d0
    long
    FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1192 + 40;
    }

    // 0x10050c710
    FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                             unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10050c830
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10050c890
    long
    FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1176 + *(long*)this;
    }

    // 0x10050c9f0
    FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10050fcd0
    uint64_t FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::NPCType, 216>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1176;
        return refCounterAndData < pRVar1;
    }

    // 0x100513e80
    long
    FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1056 + 40;
    }

    // 0x10051ae30
    FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                             unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10051af50
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10051afb0
    long
    FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1064 + *(long*)this;
    }

    // 0x10051b530
    FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10051b7d0
    uint64_t FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::LocType, 256>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1064;
        return refCounterAndData < pRVar1;
    }

    // 0x100520260
    long FastPool<game::MapElementType::Polygon, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 160 + 40;
    }

    // 0x10052aee0
    FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10052b000
    void FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10052b060
    long FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 136 + *(long*)this;
    }

    // 0x10052b1e0
    FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10052c0f0
    uint64_t
    FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 136;
        return refCounterAndData < pRVar1;
    }

    // 0x1005339d0
    long
    FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1080 + 40;
    }

    // 0x10053ef60
    FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                             unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10053f080
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10053f0e0
    long
    FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 144 + *(long*)this;
    }

    // 0x10053f280
    FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10053f570
    uint64_t FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<ui::Interface, 128>::RefCounterAndData* polygon) const {
        if (polygon < *(Polygon**)this) {
            return 0;
        }
        Polygon* pPVar1 = (Polygon*)((long)*(Polygon**)this + *(long*)(this + 32) * 144);
        return polygon < pPVar1;
    }

    // 0x10054c850
    long FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 232 + 40;
    }

    // 0x10055fc60
    FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10055fd80
    void FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10055fde0
    long
    FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 64 + *(long*)this;
    }

    // 0x10055ff00
    FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100572900
    FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                               unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100572a20
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100572a80
    long
    FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 144 + *(long*)this;
    }

    // 0x100572c60
    FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100578230
    FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                               unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100578350
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005783b0
    long
    FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 144 + *(long*)this;
    }

    // 0x100578960
    FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10057dd00
    FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                               unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10057de20
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10057de80
    long
    FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 136 + *(long*)this;
    }

    // 0x10057e070
    FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005833f0
    FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                            unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100583510
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100583570
    long FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 152 + *(long*)this;
    }

    // 0x100583750
    FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005888c0
    uint64_t FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 112;
        return refCounterAndData < pRVar1;
    }

    // 0x10058ce70
    FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                            unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10058cf90
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10058cff0
    long FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 288 + *(long*)this;
    }

    // 0x10058d1f0
    FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10058dee0
    long
    FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 304 + 40;
    }

    // 0x10058e060
    uint64_t FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::BASType, 96>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 288;
        return refCounterAndData < pRVar1;
    }

    // 0x1005925e0
    FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100592700
    void FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100592760
    long FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 104 + *(long*)this;
    }

    // 0x100592920
    FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100593580
    long FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 120 + 40;
    }

    // 0x100593710
    uint64_t FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 104;
        return refCounterAndData < pRVar1;
    }

    // 0x100597ca0
    FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100597dc0
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100597e20
    long FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 136 + *(long*)this;
    }

    // 0x100597fe0
    FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10059d420
    FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10059d540
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10059d5a0
    long
    FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 216 + *(long*)this;
    }

    // 0x10059d790
    FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10059da20
    uint64_t FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 216;
        return refCounterAndData < pRVar1;
    }

    // 0x1005a2470
    FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005a2590
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005a25f0
    long
    FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 152 + *(long*)this;
    }

    // 0x1005a27b0
    FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005a7a40
    FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                            unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005a7b60
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005a7bc0
    long FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 296 + *(long*)this;
    }

    // 0x1005a7df0
    FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005a8bd0
    long
    FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 312 + 40;
    }

    // 0x1005a8d90
    uint64_t FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::IDKType, 32>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 296;
        return refCounterAndData < pRVar1;
    }

    // 0x1005ad3d0
    FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005ad4f0
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005ad550
    long FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 384 + *(long*)this;
    }

    // 0x1005adae0
    FastPool<game::MapElementType::Polygon, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005adc00
    void FastPool<game::MapElementType::Polygon, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((Polygon*)operator[](this, arg1))->~Polygon();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005adc60
    long FastPool<game::MapElementType::Polygon, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 144 + *(long*)this;
    }

    // 0x1005add80
    FastPool<game::MapElementType::Polygon, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005ae070
    FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005aedc0
    long FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 400 + 40;
    }

    // 0x1005aeff0
    uint64_t FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::MapElementType, 512>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 384;
        return refCounterAndData < pRVar1;
    }

    // 0x1005b3c60
    FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                            unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005b3d80
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005b3de0
    long FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 104 + *(long*)this;
    }

    // 0x1005b3fa0
    FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005b9690
    FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                               unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005b97b0
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005b9810
    long
    FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 376 + *(long*)this;
    }

    // 0x1005b9cd0
    FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005baab0
    long
    FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 392 + 40;
    }

    // 0x1005bacf0
    uint64_t FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::QuestType, 128>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 376;
        return refCounterAndData < pRVar1;
    }

    // 0x1005bf280
    FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005bf3a0
    void FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005bf400
    long
    FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 152 + *(long*)this;
    }

    // 0x1005bf600
    FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005c49b0
    FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                              unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005c4ad0
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005c4b30
    long
    FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 144 + *(long*)this;
    }

    // 0x1005c4cf0
    FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005ca140
    FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                               unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005ca260
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005ca2c0
    long
    FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 136 + *(long*)this;
    }

    // 0x1005ca4a0
    FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005cfd00
    uint64_t FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::WaterType, 16>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 584;
        return refCounterAndData < pRVar1;
    }

    // 0x1005d4270
    FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                               unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005d4390
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005d43f0
    long
    FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 96 + *(long*)this;
    }

    // 0x1005d45b0
    FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005d51f0
    long
    FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 112 + 40;
    }

    // 0x1005d5370
    uint64_t FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::CursorType, 64>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 96;
        return refCounterAndData < pRVar1;
    }

    // 0x1005d9830
    FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005d9950
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005d99b0
    long FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 240 + *(long*)this;
    }

    // 0x1005d9b10
    FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005df150
    FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                              unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005df270
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005df2d0
    long
    FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 312 + *(long*)this;
    }

    // 0x1005df850
    FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005e05d0
    long
    FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 328 + 40;
    }

    // 0x1005e0ca0
    uint64_t FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::EnumType, 128>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 312;
        return refCounterAndData < pRVar1;
    }

    // 0x1005e54e0
    FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005e5600
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005e5660
    long FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 224 + *(long*)this;
    }

    // 0x1005e5860
    FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005eb210
    FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                 unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005eb330
    void FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005eb390
    long
    FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 88 + *(long*)this;
    }

    // 0x1005eb550
    FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005ec190
    long FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 104 + 40;
    }

    // 0x1005ec320
    uint64_t FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::StructType, 1024>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 88;
        return refCounterAndData < pRVar1;
    }

    // 0x1005f08a0
    FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1005f09c0
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1005f0a20
    long FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 728 + *(long*)this;
    }

    // 0x1005f1000
    FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1005f1f90
    long FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 744 + 40;
    }

    // 0x1005f2260
    uint64_t FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::AchievementType, 256>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 728;
        return refCounterAndData < pRVar1;
    }

    // 0x100634c30
    FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100634d40
    void FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100634da0
    long
    FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 128 + *(long*)this;
    }

    // 0x100634f00
    FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006382f0
    FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100638410
    void FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100638470
    long FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 128 + *(long*)this;
    }

    // 0x100638660
    FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100639a30
    FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100639b40
    void FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100639ba0
    long FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 12704 + *(long*)this;
    }

    // 0x100639d80
    FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10063aa60
    long
    FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 12720 + 40;
    }

    // 0x10063ac10
    uint64_t
    FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 12704;
        return refCounterAndData < pRVar1;
    }

    // 0x10063c2c0
    FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10063c3e0
    void FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10063c440
    long FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 144 + *(long*)this;
    }

    // 0x10063c5e0
    FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10063e940
    FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10063ea60
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10063eac0
    long FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 112 + *(long*)this;
    }

    // 0x10063ec70
    FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100646160
    FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100646280
    void FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006462e0
    long FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 40 + *(long*)this;
    }

    // 0x100646410
    FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100647020
    long FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 56 + 40;
    }

    // 0x100647200
    uint64_t FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 40;
        return refCounterAndData < pRVar1;
    }

    // 0x100647e40
    long FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 64 + 40;
    }

    // 0x100648100
    FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100648220
    void FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100648280
    long FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 48 + *(long*)this;
    }

    // 0x1006483a0
    FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100649100
    uint64_t FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 48;
        return refCounterAndData < pRVar1;
    }

    // 0x100652ae0
    uint64_t FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 688;
        return refCounterAndData < pRVar1;
    }

    // 0x1006534d0
    FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006535f0
    void
    FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100653650
    long
    FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 128 + *(long*)this;
    }

    // 0x1006538e0
    FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10065c4b0
    long FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 208 + 40;
    }

    // 0x100661a90
    FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100661bb0
    void FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100661c10
    long FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 48 + *(long*)this;
    }

    // 0x100661d30
    FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100663fd0
    bool FastPool<audio::SoundInstance, int>::empty() const {
        return *(int*)(this + 24) == 0;
    }

    // 0x100664320
    uint8_t[16] FastPool<audio::SoundInstance, int>::begin() {
        uint8_t auVar1[16];

        ImGuiPlotArrayGetterData local_18(this, 0);
        auVar1._12_4_ = 0;
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        return auVar1;
    }

    // 0x1006643a0
    uint8_t[16] FastPool<audio::SoundInstance, int>::end() {
        uint8_t auVar1[16];

        ImGuiPlotArrayGetterData local_18(this, *(int*)(this + 24));
        auVar1._12_4_ = 0;
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        return auVar1;
    }

    // 0x100665330
    audio::SoundInstance* FastPool<audio::SoundInstance, int>::Create<>() {
        auto this_00 = allocate(this);
        new (this_00) audio::SoundInstance();
        return this_00;
    }

    // 0x100665a00
    void FastPool<audio::SoundInstance, int>::clear() {
        int iVar2;
        uint64_t* puVar3;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (uint64_t*)operator[](this, iVar1);
                (**(void (**)(...))*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x10066af70
    FastPool<audio::SoundInstance, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10066b0a0
    void FastPool<audio::SoundInstance, int>::Reset() {
        long lVar1;
        long lVar2;

        if (0 < *(int*)(this + 28)) {
            lVar1 = *(long*)(this + 8);
            lVar2 = 0;
            do {
                *(int*)(lVar1 + lVar2 * 4) = (int)lVar2;
                lVar2 = lVar2 + 1;
            } while (lVar2 < *(int*)(this + 28));
        }
        *(uint32_t*)(this + 24) = 0;
    }

    // 0x10066b690
    FastPool<audio::SoundInstance, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10066ed50
    long FastPool<audio::SoundInstance, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 192 + *(long*)this;
    }

    // 0x10066ee00
    uint64_t FastPool<audio::SoundInstance, int>::is_owner(const audio::SoundInstance* soundInstance) const {
        if (soundInstance < *(SoundInstance**)this) {
            return 0;
        }
        SoundInstance* pSVar1 =
            (SoundInstance*)((*(SoundInstance**)this)->field_24 + (long)*(int*)(this + 28) * 192 - 24);
        return soundInstance < pSVar1;
    }

    // 0x100671620
    FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100671740
    void FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006717a0
    long FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 3816 + *(long*)this;
    }

    // 0x100671900
    FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100671b40
    uint64_t FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 3816;
        return refCounterAndData < pRVar1;
    }

    // 0x100672510
    FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100672630
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100672690
    long FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 192 + *(long*)this;
    }

    // 0x100672b60
    FastPool<graphics::AnimationParameters, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100672c80
    void FastPool<graphics::AnimationParameters, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((AnimationParameters*)operator[](this, arg1))->~AnimationParameters();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100672ce0
    long FastPool<graphics::AnimationParameters, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 192 + *(long*)this;
    }

    // 0x100672e00
    FastPool<graphics::AnimationParameters, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100672e90
    uint64_t FastPool<graphics::AnimationParameters, unsigned long>::is_owner(
        const graphics::AnimationParameters* animationParameters) const {
        if (animationParameters < *(AnimationParameters**)this) {
            return 0;
        }
        AnimationParameters* pAVar1 =
            (AnimationParameters*)((long)*(AnimationParameters**)this + *(long*)(this + 32) * 192);
        return animationParameters < pAVar1;
    }

    // 0x100673090
    FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100682c00
    long FastPool<ui::ConsoleSnow::SnowFlake, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 32 + *(long*)this;
    }

    // 0x100682d70
    ui::ConsoleSnow::SnowFlake*
    FastPool<ui::ConsoleSnow::SnowFlake, int>::Create<int, int, float>(int&& arg1, int&& arg2, float&& arg3) {
        auto this_00 = allocate(this);
        new (this_00) ui::ConsoleSnow::SnowFlake(arg1, arg2, arg3);
        return this_00;
    }

    // 0x100682db0
    ui::ConsoleSnow::SnowFlake* FastPool<ui::ConsoleSnow::SnowFlake, int>::Create<int, int>(int&& arg1, int&& arg2) {
        auto this_00 = allocate(this);
        new (this_00) ui::ConsoleSnow::SnowFlake(arg1, arg2, 0.0);
        return this_00;
    }

    // 0x1006b3a00
    FastPool<ui::ConsoleSnow::SnowFlake, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006b3b20
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::clear() {
        int iVar2;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                operator[](this, iVar1);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset(this);
    }

    // 0x1006b3b70
    FastPool<ui::ConsoleSnow::SnowFlake, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006b3bb0
    uint64_t FastPool<ui::ConsoleSnow::SnowFlake, int>::is_owner(const ui::ConsoleSnow::SnowFlake* snowFlake) const {
        if (snowFlake < *(SnowFlake**)this) {
            return 0;
        }
        SnowFlake* pSVar1 = (SnowFlake*)((long)*(SnowFlake**)this + (long)*(int*)(this + 28) * 32);
        return snowFlake < pSVar1;
    }

    // 0x1006c4f90
    long
    FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1048 + 40;
    }

    // 0x1006c52c0
    FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                           unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006c53e0
    void FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006c5440
    long FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1032 + *(long*)this;
    }

    // 0x1006c55a0
    FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006c6d80
    FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                         unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006c6ea0
    void FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006c6f00
    long FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 584 + *(long*)this;
    }

    // 0x1006c7060
    FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006c7c50
    long
    FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1584 + 40;
    }

    // 0x1006c7f20
    FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                             unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006c8040
    void FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006c80a0
    long
    FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1568 + *(long*)this;
    }

    // 0x1006c8200
    FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006d1e30
    long
    FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 792 + 40;
    }

    // 0x1006d2100
    FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                           unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006d2220
    void FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006d2280
    long FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 776 + *(long*)this;
    }

    // 0x1006d23e0
    FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006d2f70
    long
    FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 984 + 40;
    }

    // 0x1006d3240
    FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                              unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006d3360
    void FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006d33c0
    long
    FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 968 + *(long*)this;
    }

    // 0x1006d3520
    FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006d4270
    long FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 1456 + 40;
    }

    // 0x1006d4540
    FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                       unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006d4660
    void FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006d46c0
    long FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1440 + *(long*)this;
    }

    // 0x1006d4820
    FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006d75f0
    long FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 536 + 40;
    }

    // 0x1006d78c0
    FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006d79e0
    void FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006d7a40
    long FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 520 + *(long*)this;
    }

    // 0x1006d7ba0
    FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006d8780
    long
    FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 664 + 40;
    }

    // 0x1006d8a50
    FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                             unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006d8b70
    void FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006d8bd0
    long
    FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 648 + *(long*)this;
    }

    // 0x1006d8d30
    FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1006da740
    long FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 880 + 40;
    }

    // 0x1006daa10
    FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                         unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1006dab30
    void FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1006dab90
    long FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 864 + *(long*)this;
    }

    // 0x1006dacf0
    FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1007a36a0
    FastPool<graphics::WaterPatch_DE, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1007a37d0
    void FastPool<graphics::WaterPatch_DE, int>::clear() {
        int iVar2;
        uint64_t* puVar3;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (uint64_t*)operator[](this, iVar1);
                (**(void (**)(...))*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x1007a3820
    long FastPool<graphics::WaterPatch_DE, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 192 + *(long*)this;
    }

    // 0x1007a3870
    FastPool<graphics::WaterPatch_DE, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1007c5d90
    graphics::TerrainPatch_DE* FastPool<graphics::TerrainPatch_DE, int>::Create<
        graphics::TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
        render::InputAssemblerState*>(graphics::TerrainPatch& terrainPatch,
                                      const eastl::fixed_vector<unsigned char, 256ul>& arg2, math::OBB& obb,
                                      float& arg4, render::InputAssemblerState*&& arg5) {
        auto this_00 = allocate(this);
        new (this_00) graphics::TerrainPatch_DE(terrainPatch, arg2, obb, arg4, arg5, nullptr);
        return this_00;
    }

    // 0x1007c6490
    uint64_t
    FastPool<graphics::TerrainPatch_DE, int>::is_owner(const graphics::TerrainPatch_DE* terrainPatch_DE) const {
        if (terrainPatch_DE < *(TerrainPatch_DE**)this) {
            return 0;
        }
        TerrainPatch_DE* pTVar1 =
            (TerrainPatch_DE*)((*(TerrainPatch_DE**)this)->field_112 + (long)*(int*)(this + 28) * 544 - 112);
        return terrainPatch_DE < pTVar1;
    }

    // 0x1007c6c80
    FastPool<graphics::TerrainPatch_DE, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1007c6da0
    void FastPool<graphics::TerrainPatch_DE, int>::clear() {
        int iVar2;
        uint64_t* puVar3;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (uint64_t*)operator[](this, iVar1);
                (**(void (**)(...))*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x1007c6df0
    long FastPool<graphics::TerrainPatch_DE, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 544 + *(long*)this;
    }

    // 0x1007c6e40
    FastPool<graphics::TerrainPatch_DE, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1007c7ba0
    long FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 1680 + 40;
    }

    // 0x1007c7d00
    FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1007c7e10
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1007c7e70
    long FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1664 + *(long*)this;
    }

    // 0x1007c7fd0
    FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1007c8970
    graphics::WaterPatch_DE* FastPool<graphics::WaterPatch_DE, int>::Create<graphics::WaterPatch&, math::OBB&, float&,
                                                                            render::InputAssemblerState*>(
        graphics::WaterPatch& waterPatch, math::OBB& obb, float& arg3, render::InputAssemblerState*&& arg4) {
        auto this_00 = allocate(this);
        new (this_00) graphics::WaterPatch_DE(waterPatch, obb, arg3, arg4);
        return this_00;
    }

    // 0x1007e9de0
    long FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 272 + 40;
    }

    // 0x1007ea0e0
    FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1007ea1f0
    void FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1007ea250
    long FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 256 + *(long*)this;
    }

    // 0x1007ea3b0
    FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1007f50f0
    long FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 42992 + 40;
    }

    // 0x1007f53c0
    FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1007f54d0
    void FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1007f5530
    long FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 42976 + *(long*)this;
    }

    // 0x1007f5690
    FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1007f6da0
    graphics::ParticleSystem_DE*
    FastPool<graphics::ParticleSystem_DE, int>::Create<shared_ptr<graphics::ParticleSystem>, math::OBB&, float&,
                                                       unsigned int, bool>(
        shared_ptr<graphics::ParticleSystem>&& particleSystem, math::OBB& obb, float& arg3, unsigned int&& arg4,
        bool&& arg5) {
        auto this_00 = allocate(this);
        new (this_00) graphics::ParticleSystem_DE(particleSystem, obb, arg3, arg4, arg5);
        return this_00;
    }

    // 0x1007f7030
    uint64_t
    FastPool<graphics::ParticleSystem_DE, int>::is_owner(const graphics::ParticleSystem_DE* particleSystem_DE) const {
        if (particleSystem_DE < *(ParticleSystem_DE**)this) {
            return 0;
        }
        ParticleSystem_DE* pPVar1 = *(ParticleSystem_DE**)this + *(int*)(this + 28);
        return particleSystem_DE < pPVar1;
    }

    // 0x1007f77a0
    uint64_t FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 42976;
        return refCounterAndData < pRVar1;
    }

    // 0x1007f7b70
    FastPool<graphics::ParticleSystem_DE, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1007f7ca0
    void FastPool<graphics::ParticleSystem_DE, int>::clear() {
        int iVar2;
        uint64_t* puVar3;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (uint64_t*)operator[](this, iVar1);
                (**(void (**)(...))*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x1007f7cf0
    long FastPool<graphics::ParticleSystem_DE, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 144 + *(long*)this;
    }

    // 0x1007f7d40
    FastPool<graphics::ParticleSystem_DE, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100830ee0
    long FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 2256 + 40;
    }

    // 0x1008311f0
    FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100831300
    void FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100831360
    long FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 2240 + *(long*)this;
    }

    // 0x1008314c0
    FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1008364d0
    FastPool<graphics::GeometryBatch_DE, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100836600
    void FastPool<graphics::GeometryBatch_DE, int>::clear() {
        int iVar2;
        uint64_t* puVar3;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (uint64_t*)operator[](this, iVar1);
                (**(void (**)(...))*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x100836650
    long FastPool<graphics::GeometryBatch_DE, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 160 + *(long*)this;
    }

    // 0x1008366a0
    FastPool<graphics::GeometryBatch_DE, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100836a00
    uint64_t FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 2240;
        return refCounterAndData < pRVar1;
    }

    // 0x100837570
    long FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 912 + 40;
    }

    // 0x100838220
    graphics::GeometryBatch_DE* FastPool<graphics::GeometryBatch_DE, int>::Create<
        math::OBB&, float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks> const*&, unsigned int,
        graphics::GeometryBatchInstance&>(math::OBB& obb, float& arg2,
                                          const eastl::vector_map<int, graphics::FaceGroupRenderMasks>*& arg3,
                                          unsigned int&& arg4, graphics::GeometryBatchInstance& geometryBatchInstance) {
        auto this_00 = allocate(this);
        new (this_00) graphics::GeometryBatch_DE(obb, arg2, arg3, arg4, geometryBatchInstance);
        return this_00;
    }

    // 0x100838470
    uint64_t
    FastPool<graphics::GeometryBatch_DE, int>::is_owner(const graphics::GeometryBatch_DE* geometryBatch_DE) const {
        if (geometryBatch_DE < *(GeometryBatch_DE**)this) {
            return 0;
        }
        GeometryBatch_DE* pGVar1 = *(GeometryBatch_DE**)this + *(int*)(this + 28);
        return geometryBatch_DE < pGVar1;
    }

    // 0x10083a3a0
    long FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 992 + 40;
    }

    // 0x100843190
    uint64_t FastPool<graphics::BillboardBatchInstance, unsigned long>::is_owner(
        const graphics::BillboardBatchInstance* billboardBatchInstance) const {
        if (billboardBatchInstance < *(BillboardBatchInstance**)this) {
            return 0;
        }
        BillboardBatchInstance* pBVar1 =
            (BillboardBatchInstance*)((*(BillboardBatchInstance**)this)->field_32 + *(long*)(this + 32) * 768 - 32);
        return billboardBatchInstance < pBVar1;
    }

    // 0x100844d00
    FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100844e20
    void FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100844e80
    long FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 112 + *(long*)this;
    }

    // 0x100844fe0
    FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100845850
    uint64_t FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 256;
        return refCounterAndData < pRVar1;
    }

    // 0x10084b100
    long FastPool<graphics::Billboard, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 84 + 40;
    }

    // 0x10084b3c0
    FastPool<graphics::Billboard, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10084b4e0
    void FastPool<graphics::Billboard, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                operator[](this, arg1);
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10084b530
    long FastPool<graphics::Billboard, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 68 + *(long*)this;
    }

    // 0x10084b650
    FastPool<graphics::Billboard, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100850cb0
    graphics::ParticleSystem_DE*
    FastPool<graphics::ParticleSystem_DE, int>::Create<graphics::ModularParticleSystemDrawable&, math::OBB const&,
                                                       float&, unsigned int, bool, bool>(
        graphics::ModularParticleSystemDrawable& modularParticleSystemDrawable, const math::OBB& obb, float& arg3,
        unsigned int&& arg4, bool&& arg5, bool&& arg6) {
        uint64_t in_stack_00000008;

        auto particleSystem_DE = allocate((FastPool<graphics::ParticleSystem_DE, int>*)modularParticleSystemDrawable);
        new (particleSystem_DE)
            graphics::ParticleSystem_DE(obb, arg3, (float)*arg4, *(unsigned int*)arg5, arg6, *(bool*)in_stack_00000008);
        return particleSystem_DE;
    }

    // 0x10086cb80
    long
    FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 96 + 40;
    }

    // 0x100873880
    uint64_t
    FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 80;
        return refCounterAndData < pRVar1;
    }

    // 0x100881100
    long FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 816 + 40;
    }

    // 0x1008813d0
    FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1008814e0
    void FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100881540
    long FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 800 + *(long*)this;
    }

    // 0x1008816a0
    FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100884aa0
    FastPool<graphics::BillboardBatch_DE, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100884bc0
    void FastPool<graphics::BillboardBatch_DE, int>::clear() {
        int iVar2;
        uint64_t* puVar3;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (uint64_t*)operator[](this, iVar1);
                (**(void (**)(...))*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x100884c10
    long FastPool<graphics::BillboardBatch_DE, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 128 + *(long*)this;
    }

    // 0x100884c60
    FastPool<graphics::BillboardBatch_DE, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100884f80
    uint64_t FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 800;
        return refCounterAndData < pRVar1;
    }

    // 0x100885ba0
    long FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 784 + 40;
    }

    // 0x100885d00
    FastPool<graphics::BillboardBatchInstance, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100885e20
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::clear() {
        uint64_t* puVar2;
        unsigned long uVar3;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                puVar2 = (uint64_t*)operator[](this, arg1);
                (**(void (**)(...))*puVar2)(puVar2);
                arg1 = arg1 + 1;
                uVar3 = size();
            } while (arg1 < uVar3);
        }
        Reset();
    }

    // 0x100885e80
    long FastPool<graphics::BillboardBatchInstance, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 768 + *(long*)this;
    }

    // 0x100885fa0
    FastPool<graphics::BillboardBatchInstance, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100887a90
    graphics::BillboardBatch_DE* FastPool<graphics::BillboardBatch_DE, int>::Create<
        float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks> const*&, graphics::BillboardBatchInstance&>(
        float& arg1, const eastl::vector_map<int, graphics::FaceGroupRenderMasks>*& arg2,
        graphics::BillboardBatchInstance& billboardBatchInstance) {
        auto this_00 = allocate(this);
        new (this_00) graphics::BillboardBatch_DE(arg1, arg2, billboardBatchInstance);
        return this_00;
    }

    // 0x100887cc0
    uint64_t
    FastPool<graphics::BillboardBatch_DE, int>::is_owner(const graphics::BillboardBatch_DE* billboardBatch_DE) const {
        if (billboardBatch_DE < *(BillboardBatch_DE**)this) {
            return 0;
        }
        BillboardBatch_DE* pBVar1 = *(BillboardBatch_DE**)this + *(int*)(this + 28);
        return billboardBatch_DE < pBVar1;
    }

    // 0x10089a000
    long FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 88 + 40;
    }

    // 0x1008d2f50
    uint64_t
    FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 160;
        return refCounterAndData < pRVar1;
    }

    // 0x1008d7960
    long FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 352 + 40;
    }

    // 0x1008d7c30
    FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1008d7d50
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1008d7db0
    long FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 336 + *(long*)this;
    }

    // 0x1008d7f80
    FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1008dc960
    FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1008dca80
    void FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1008dcae0
    long FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 72 + *(long*)this;
    }

    // 0x1008dcc40
    FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1008dced0
    uint64_t FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 72;
        return refCounterAndData < pRVar1;
    }

    // 0x1008dd4f0
    uint64_t FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 336;
        return refCounterAndData < pRVar1;
    }

    // 0x1008f81f0
    graphics::GUIAnimationInstance* FastPool<graphics::GUIAnimationInstance, int>::Create<
        shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&, unsigned int&,
        float&, game::Hook>(const shared_ptr<graphics::GUIAnimation>& guiAnimation,
                            const shared_ptr<ui::Component>& component, float& arg3, float& arg4, unsigned int& arg5,
                            float& arg6, game::Hook&& hook) {
        auto this_00 = allocate(this);
        new (this_00) graphics::GUIAnimationInstance(guiAnimation, component, arg3, arg4, arg5, arg6, hook);
        return this_00;
    }

    // 0x1008f8250
    graphics::GUIAnimationInstance* FastPool<graphics::GUIAnimationInstance, int>::Create<
        shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&, unsigned int&,
        float&>(const shared_ptr<graphics::GUIAnimation>& guiAnimation, const shared_ptr<ui::Component>& component,
                float& arg3, float& arg4, unsigned int& arg5, float& arg6) {
        float* in_stack_00000008;

        auto gUIAnimationInstance = allocate((FastPool<graphics::GUIAnimationInstance, int>*)guiAnimation);
        new (gUIAnimationInstance) graphics::GUIAnimationInstance(component, arg3, arg4, (float)*arg5,
                                                                  (unsigned int)*arg6, *in_stack_00000008);
        return gUIAnimationInstance;
    }

    // 0x100907c90
    FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100907db0
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100907e10
    long FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 13728 + *(long*)this;
    }

    // 0x100907f70
    FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100908210
    uint64_t FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 13728;
        return refCounterAndData < pRVar1;
    }

    // 0x1009092b0
    long FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 13744 + 40;
    }

    // 0x10090e820
    FastPool<graphics::GUIAnimationInstance, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10090e860
    void FastPool<graphics::GUIAnimationInstance, int>::clear() {
        int iVar2;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                ((GUIAnimationInstance*)operator[](this, iVar1))->~GUIAnimationInstance();
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x10090e8b0
    long FastPool<graphics::GUIAnimationInstance, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 368 + *(long*)this;
    }

    // 0x10090e950
    FastPool<graphics::GUIAnimationInstance, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1009110a0
    uint64_t FastPool<graphics::GUIAnimationInstance, int>::is_owner(
        const graphics::GUIAnimationInstance* guiAnimationInstance) const {
        if (guiAnimationInstance < *(GUIAnimationInstance**)this) {
            return 0;
        }
        GUIAnimationInstance* pGVar1 =
            (GUIAnimationInstance*)((long)*(GUIAnimationInstance**)this + (long)*(int*)(this + 28) * 368);
        return guiAnimationInstance < pGVar1;
    }

    // 0x100922820
    graphics::SkyBox_DE* FastPool<graphics::SkyBox_DE, int>::Create<>() {
        auto this_00 = allocate(this);
        this_00->_vptr = nullptr;
        *(uint64_t*)&this_00->field_8 = 0;
        *(uint64_t*)&this_00->field_16 = 0;
        *(uint64_t*)&this_00->field_24 = 0;
        *(uint64_t*)&this_00->field_32 = 0;
        *(uint64_t*)&this_00->field_40 = 0;
        *(uint64_t*)&this_00->field_48 = 0;
        *(uint64_t*)&this_00->field_56 = 0;
        *(uint64_t*)&this_00->field_64 = 0;
        *(uint64_t*)&this_00->field_72 = 0;
        *(uint64_t*)&this_00->field_80 = 0;
        *(uint64_t*)&this_00->field_88 = 0;
        *(uint64_t*)&this_00->field_96 = 0;
        this_00->field_104 = nullptr;
        *(uint64_t*)&this_00->field_112 = 0;
        *(uint64_t*)&this_00->field_120 = 0;
        new (this_00) graphics::SkyBox_DE();
        return this_00;
    }

    // 0x100927070
    long
    FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long arg1) {
        return arg1 * 800 + 40;
    }

    // 0x100927370
    FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                               unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100927480
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1009274e0
    long
    FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 784 + *(long*)this;
    }

    // 0x100927640
    FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100928300
    FastPool<graphics::SkyBox_DE, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100928420
    void FastPool<graphics::SkyBox_DE, int>::clear() {
        int iVar2;
        uint64_t* puVar3;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (uint64_t*)operator[](this, iVar1);
                (**(void (**)(...))*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x100928470
    long FastPool<graphics::SkyBox_DE, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 128 + *(long*)this;
    }

    // 0x1009284c0
    FastPool<graphics::SkyBox_DE, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100928ae0
    uint64_t FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 784;
        return refCounterAndData < pRVar1;
    }

    // 0x10093f010
    graphics::LightProbe_DE* FastPool<graphics::LightProbe_DE, int>::Create<>() {
        auto this_00 = allocate(this);
        this_00->_vptr = nullptr;
        *(uint64_t*)&this_00->field_8 = 0;
        *(uint64_t*)&this_00->field_16 = 0;
        *(uint64_t*)&this_00->field_24 = 0;
        *(uint64_t*)&this_00->field_32 = 0;
        *(uint64_t*)&this_00->field_40 = 0;
        *(uint64_t*)&this_00->field_48 = 0;
        *(uint64_t*)&this_00->field_56 = 0;
        *(uint64_t*)&this_00->field_64 = 0;
        *(uint64_t*)&this_00->field_72 = 0;
        *(uint64_t*)&this_00->field_80 = 0;
        *(uint64_t*)&this_00->field_88 = 0;
        *(uint64_t*)&this_00->field_96 = 0;
        this_00->field_104 = nullptr;
        new (this_00) graphics::LightProbe_DE();
        return this_00;
    }

    // 0x10093f250
    uint64_t FastPool<graphics::LightProbe_DE, int>::is_owner(const graphics::LightProbe_DE* lightProbe_DE) const {
        if (lightProbe_DE < *(LightProbe_DE**)this) {
            return 0;
        }
        LightProbe_DE* pLVar1 = *(LightProbe_DE**)this + *(int*)(this + 28);
        return lightProbe_DE < pLVar1;
    }

    // 0x10093f480
    FastPool<graphics::LightProbe_DE, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10093f5a0
    void FastPool<graphics::LightProbe_DE, int>::clear() {
        int iVar2;
        uint64_t* puVar3;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (uint64_t*)operator[](this, iVar1);
                (**(void (**)(...))*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x10093f5f0
    long FastPool<graphics::LightProbe_DE, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 112 + *(long*)this;
    }

    // 0x10093f640
    FastPool<graphics::LightProbe_DE, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10094bc80
    long
    FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 176 + 40;
    }

    // 0x10094be10
    FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10094bf30
    void FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10094bf90
    long FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 160 + *(long*)this;
    }

    // 0x10094c0f0
    FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100967f50
    FastPool<graphics::AnimState, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100968070
    void FastPool<graphics::AnimState, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((AnimState*)operator[](this, arg1))->~AnimState();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1009680d0
    long FastPool<graphics::AnimState, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 160 + *(long*)this;
    }

    // 0x1009681f0
    FastPool<graphics::AnimState, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100993a40
    unsigned long FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 320 | 40;
    }

    // 0x100993d40
    FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                  unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100993e60
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100993ec0
    long FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 304 + *(long*)this;
    }

    // 0x1009940a0
    FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100995b20
    long FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 184 + 40;
    }

    // 0x100995c80
    FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100995da0
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100995e00
    long FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 168 + *(long*)this;
    }

    // 0x100996030
    FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100996620
    uint64_t FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::is_owner(
        const MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData* refCounterAndData) const {
        if (refCounterAndData < *(RefCounterAndData**)this) {
            return 0;
        }
        RefCounterAndData* pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 304;
        return refCounterAndData < pRVar1;
    }

    // 0x100996ec0
    FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100996fe0
    void FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100997040
    long FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 96 + *(long*)this;
    }

    // 0x1009971e0
    FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100999b30
    FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                   unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100999c50
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100999cb0
    long FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 232 + *(long*)this;
    }

    // 0x100999e10
    FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10099ba70
    uint8_t[16] FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                         unsigned long>::begin() {
        uint8_t auVar1[16];

        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_18(this, 0);
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

    // 0x10099baa0
    uint8_t[16] FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                         unsigned long>::end() {
        uint8_t auVar1[16];

        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_18(this,
                                                                                        *(unsigned long*)(this + 24));
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

    // 0x10099bca0
    FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10099bdc0
    void FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10099be20
    long FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 80 + *(long*)this;
    }

    // 0x10099bf80
    FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10099c2e0
    FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::FastPool(unsigned long arg1,
                                                                                                unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10099c3f0
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10099c450
    long
    FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 976 + *(long*)this;
    }

    // 0x10099c5b0
    FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10099e010
    FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10099e130
    void FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10099e190
    long FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 112 + *(long*)this;
    }

    // 0x10099e2f0
    FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x10099ef40
    long FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 200 + 40;
    }

    // 0x10099f0a0
    FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x10099f1c0
    void FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x10099f220
    long FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 184 + *(long*)this;
    }

    // 0x10099f3d0
    FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1009a2640
    FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1009a2760
    void FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1009a27c0
    long FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 160 + *(long*)this;
    }

    // 0x1009a2920
    FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x1009a5200
    long FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        unsigned long arg1) {
        return arg1 * 3832 + 40;
    }

    // 0x1009fab80
    FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x1009faca0
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x1009fad00
    long FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 104 + *(long*)this;
    }

    // 0x1009fae60
    FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100b98d20
    FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100b98e40
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100b98ea0
    long FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 64 + *(long*)this;
    }

    // 0x100b98fc0
    FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100b9a0d0
    FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100b9a1f0
    void FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100b9a250
    long FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 64 + *(long*)this;
    }

    // 0x100b9a370
    FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100c0b600
    render::ComputePipelineState*
    FastPool<render::ComputePipelineState, unsigned long>::Create<render::ComputePipelineState const&>(
        const render::ComputePipelineState& computePipelineState) {
        auto this_00 = allocate(this);
        new (this_00) render::ComputePipelineState(computePipelineState);
        return this_00;
    }

    // 0x100c0b630
    uint64_t FastPool<render::ComputePipelineState, unsigned long>::is_owner(
        const render::ComputePipelineState* computePipelineState) const {
        if (computePipelineState < *(ComputePipelineState**)this) {
            return 0;
        }
        ComputePipelineState* pCVar1 = *(ComputePipelineState**)this + *(long*)(this + 32);
        return computePipelineState < pCVar1;
    }

    // 0x100c0b7c0
    render::ComputePipelineState* FastPool<render::ComputePipelineState, unsigned long>::Create<>() {
        auto this_00 = allocate(this);
        new (this_00) render::ComputePipelineState();
        return this_00;
    }

    // 0x100c0b7e0
    render::InputAssemblerState*
    FastPool<render::InputAssemblerState, unsigned long>::Create<render::InputAssemblerState const&>(
        const render::InputAssemblerState& inputAssemblerState) {
        auto this_00 = allocate(this);
        new (this_00) render::InputAssemblerState(inputAssemblerState);
        return this_00;
    }

    // 0x100c0b810
    render::RenderPipelineState*
    FastPool<render::RenderPipelineState, unsigned long>::Create<render::RenderPipelineState const&>(
        const render::RenderPipelineState& renderPipelineState) {
        auto this_00 = allocate(this);
        new (this_00) render::RenderPipelineState(renderPipelineState);
        return this_00;
    }

    // 0x100c0b840
    render::OutputMergerState*
    FastPool<render::OutputMergerState, unsigned long>::Create<render::OutputMergerState const&>(
        const render::OutputMergerState& outputMergerState) {
        auto this_00 = allocate(this);
        new (this_00) render::OutputMergerState(outputMergerState);
        return this_00;
    }

    // 0x100c0b9d0
    uint64_t FastPool<render::RenderPipelineState, unsigned long>::is_owner(
        const render::RenderPipelineState* renderPipelineState) const {
        if (renderPipelineState < *(RenderPipelineState**)this) {
            return 0;
        }
        RenderPipelineState* pRVar1 =
            (RenderPipelineState*)((long)*(RenderPipelineState**)this + *(long*)(this + 32) * 1104);
        return renderPipelineState < pRVar1;
    }

    // 0x100c0bb60
    uint64_t FastPool<render::OutputMergerState, unsigned long>::is_owner(
        const render::OutputMergerState* outputMergerState) const {
        if (outputMergerState < *(OutputMergerState**)this) {
            return 0;
        }
        OutputMergerState* pOVar1 = *(OutputMergerState**)this + *(long*)(this + 32);
        return outputMergerState < pOVar1;
    }

    // 0x100c0bcf0
    render::InputAssemblerState* FastPool<render::InputAssemblerState, unsigned long>::Create<>() {
        auto this_00 = allocate(this);
        new (this_00) render::InputAssemblerState();
        return this_00;
    }

    // 0x100c0bd10
    render::RenderPipelineState* FastPool<render::RenderPipelineState, unsigned long>::Create<>() {
        auto this_00 = allocate(this);
        new (this_00) render::RenderPipelineState();
        return this_00;
    }

    // 0x100c0bd30
    render::OutputMergerState* FastPool<render::OutputMergerState, unsigned long>::Create<>() {
        auto this_00 = allocate(this);
        new (this_00) render::OutputMergerState();
        return this_00;
    }

    // 0x100c322b0
    FastPool<render::OutputMergerState, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100c322f0
    void FastPool<render::OutputMergerState, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((OutputMergerState*)operator[](this, arg1))->~OutputMergerState();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100c32350
    long FastPool<render::OutputMergerState, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 208 + *(long*)this;
    }

    // 0x100c32560
    FastPool<render::ComputePipelineState, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100c325a0
    void FastPool<render::ComputePipelineState, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((ComputePipelineState*)operator[](this, arg1))->~ComputePipelineState();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100c32600
    long FastPool<render::ComputePipelineState, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 640 + *(long*)this;
    }

    // 0x100c32710
    FastPool<render::RenderPipelineState, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100c32750
    void FastPool<render::RenderPipelineState, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RenderPipelineState*)operator[](this, arg1))->~RenderPipelineState();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100c327b0
    long FastPool<render::RenderPipelineState, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 1104 + *(long*)this;
    }

    // 0x100c328c0
    FastPool<render::InputAssemblerState, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100c32900
    void FastPool<render::InputAssemblerState, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((InputAssemblerState*)operator[](this, arg1))->~InputAssemblerState();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100c32960
    long FastPool<render::InputAssemblerState, unsigned long>::operator[](unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 192 + *(long*)this;
    }

    // 0x100c34730
    FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::FastPool(
        unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100c34850
    void FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::clear() {
        unsigned long uVar2;
        unsigned long arg1;

        if (size() != 0) {
            arg1 = 0;
            do {
                ((RefCounterAndData*)operator[](this, arg1))->~RefCounterAndData();
                arg1 = arg1 + 1;
                uVar2 = size();
            } while (arg1 < uVar2);
        }
        Reset();
    }

    // 0x100c348b0
    long FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::operator[](
        unsigned long arg1) {
        if (*(unsigned long*)(this + 32) <= arg1) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return *(long*)(*(long*)(this + 8) + arg1 * 8) * 40 + *(long*)this;
    }

    // 0x100c34a10
    FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100c3cf90
    FastPool<render::InputAssemblerState, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100c3d3a0
    FastPool<render::RenderPipelineState, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100c3d7b0
    FastPool<render::ComputePipelineState, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100c3dbc0
    FastPool<render::OutputMergerState, unsigned long>::FastPool(unsigned long arg1, unsigned long arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 32) = 0;
        resize(this, arg1, arg2);
    }

    // 0x100c7ffc0
    long FastPool<game::console::Snow::SnowFlake, int>::operator[](int arg1) {
        if ((arg1 < 0) || (*(int*)(this + 28) <= arg1)) {
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      nullptr);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)arg1 * 4) * 32 + *(long*)this;
    }

    // 0x100c80130
    game::console::Snow::SnowFlake*
    FastPool<game::console::Snow::SnowFlake, int>::Create<int, int, float>(int&& arg1, int&& arg2, float&& arg3) {
        auto this_00 = allocate(this);
        new (this_00) game::console::Snow::SnowFlake(arg1, arg2, arg3);
        return this_00;
    }

    // 0x100c80170
    game::console::Snow::SnowFlake* FastPool<game::console::Snow::SnowFlake, int>::Create<int, int>(int&& arg1,
                                                                                                    int&& arg2) {
        auto this_00 = allocate(this);
        new (this_00) game::console::Snow::SnowFlake(arg1, arg2, 0.0);
        return this_00;
    }

    // 0x100c91ff0
    FastPool<game::console::Snow::SnowFlake, int>::~FastPool() {
        clear(this);
        safe_delete_array<float>((unsigned char**)(this + 16));
        safe_delete_array<float>((unsigned char**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(uint64_t*)this = 0;
    }

    // 0x100c92030
    void FastPool<game::console::Snow::SnowFlake, int>::clear() {
        int iVar2;

        int iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                operator[](this, iVar1);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x100c92080
    FastPool<game::console::Snow::SnowFlake, int>::FastPool(int arg1, int arg2) {
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        resize(this, arg1, arg2);
    }

} // namespace jag
