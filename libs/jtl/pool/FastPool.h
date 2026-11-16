// libs/jtl/pool/FastPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 121 instantiations, e.g. <MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>, <MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>, <MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>
    class FastPool {
    public:
        long allocate();
        is_owner(MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData const*);
        void deallocate(unsigned long);
        long operator[](int) const;
        FastPool(unsigned long, unsigned long);
        void resize(unsigned long, unsigned long);
        void clear();
        void Reset();
        long operator[](unsigned long);
        FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                          unsigned long>&&);
        ~FastPool();
        void
        deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData const*);
        long GetTotalSize(unsigned long);
        is_owner(MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData const*);
        is_owner(MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData const*);
        is_owner(graphics::GeometryBatchInstance const*) const;
        void deallocate(graphics::GeometryBatchInstance const*);
        is_owner(MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData const*);
        ulong GetTotalSize(unsigned long);
        is_owner(MakeSharedPool<graphics::Model, 3072>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::Model, 3072>::RefCounterAndData const*);
        is_owner(SpotAnimation const*) const;
        void deallocate(SpotAnimation const*);
        is_owner(MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::Location, 256>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::Location, 256>::RefCounterAndData const*);
        is_owner(game::EnvironmentLoader const*) const;
        void deallocate(game::EnvironmentLoader const*);
        is_owner(game::Terrain const*) const;
        void deallocate(game::Terrain const*);
        is_owner(MakeSharedPool<game::LightSource, 1024>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::LightSource, 1024>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::MapSquare, 32>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::MapSquare, 32>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::VarType, 5504>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::VarType, 5504>::RefCounterAndData const*);
        is_owner(MakeSharedPool<graphics::Animation, 512>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::Animation, 512>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::SeqType, 96>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::SeqType, 96>::RefCounterAndData const*);
        is_owner(MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData const*);
        is_owner(MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::ObjType, 96>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::ObjType, 96>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::NPCType, 216>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::NPCType, 216>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::LocType, 256>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::LocType, 256>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData const*);
        is_owner(MakeSharedPool<ui::Interface, 128>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<ui::Interface, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::ParamType, 640>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::DBRowType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::DBTableType, 4>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::InvType, 32>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::BASType, 96>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::BASType, 96>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::IDKType, 32>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::IDKType, 32>::RefCounterAndData const*);
        void deallocate(game::MapElementType::Polygon const*);
        is_owner(MakeSharedPool<game::MapElementType, 512>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::MapElementType, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::MSIType, 32>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::QuestType, 128>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::QuestType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::LightType, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::WaterType, 16>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::WaterType, 16>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::CursorType, 64>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::CursorType, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::EnumType, 128>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::EnumType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::StructType, 1024>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::StructType, 1024>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::AchievementType, 256>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::AchievementType, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData const*);
        is_owner(MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData const*);
        FastPool(int, int);
        bool empty() const;
        begin();
        end();
        audio::SoundInstance* Create<>();
        void resize(int, int);
        long operator[](int);
        void Destroy(audio::SoundInstance*);
        is_owner(audio::SoundInstance const*) const;
        void deallocate(audio::SoundInstance const*);
        void deallocate(int);
        is_owner(MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData const*);
        is_owner(graphics::AnimationParameters const*) const;
        void deallocate(graphics::AnimationParameters const*);
        void deallocate(MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData const*);
        void deallocate(ui::ConsoleSnow::SnowFlake const*);
        ui::ConsoleSnow::SnowFlake* Create<int, int, float>(int&&, int&&, float&&);
        ui::ConsoleSnow::SnowFlake* Create<int, int>(int&&, int&&);
        is_owner(ui::ConsoleSnow::SnowFlake const*) const;
        graphics::TerrainPatch_DE*
        Create<graphics::TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
               math::OBB&, float&, render::InputAssemblerState*>(
            graphics::TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
            math::OBB&, float&, render::InputAssemblerState*&&);
        is_owner(graphics::TerrainPatch_DE const*) const;
        void Destroy(graphics::TerrainPatch_DE*);
        void deallocate(graphics::TerrainPatch_DE const*);
        graphics::WaterPatch_DE* Create<graphics::WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(
            graphics::WaterPatch&, math::OBB&, float&, render::InputAssemblerState*&&);
        void Destroy(graphics::WaterPatch_DE*);
        void deallocate(graphics::WaterPatch_DE const*);
        graphics::ParticleSystem_DE*
        Create<shared_ptr<graphics::ParticleSystem>, math::OBB&, float&, unsigned int, bool>(
            shared_ptr<graphics::ParticleSystem>&&, math::OBB&, float&, unsigned int&&, bool&&);
        is_owner(graphics::ParticleSystem_DE const*) const;
        void Destroy(graphics::ParticleSystem_DE*);
        void deallocate(graphics::ParticleSystem_DE const*);
        is_owner(MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData const*);
        is_owner(MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData const*);
        graphics::GeometryBatch_DE*
        Create<math::OBB&, float&,
               eastl::vector_map<
                   int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>> const*&,
               unsigned int, graphics::GeometryBatchInstance&>(
            math::OBB&, float&,
            eastl::vector_map<
                int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>> const*&,
            unsigned int&&, graphics::GeometryBatchInstance&);
        is_owner(graphics::GeometryBatch_DE const*) const;
        void Destroy(graphics::GeometryBatch_DE*);
        void deallocate(graphics::GeometryBatch_DE const*);
        is_owner(graphics::BillboardBatchInstance const*) const;
        void deallocate(graphics::BillboardBatchInstance const*);
        void deallocate(MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData const*);
        is_owner(MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData const*);
        graphics::ParticleSystem_DE*
        Create<graphics::ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(
            graphics::ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int&&, bool&&, bool&&);
        is_owner(MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData const*);
        is_owner(MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData const*);
        graphics::BillboardBatch_DE*
        Create<float&,
               eastl::vector_map<
                   int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>> const*&,
               graphics::BillboardBatchInstance&>(
            float&,
            eastl::vector_map<
                int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>> const*&,
            graphics::BillboardBatchInstance&);
        is_owner(graphics::BillboardBatch_DE const*) const;
        void Destroy(graphics::BillboardBatch_DE*);
        void deallocate(graphics::BillboardBatch_DE const*);
        is_owner(MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData const*);
        is_owner(MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData const*);
        is_owner(MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData const*);
        graphics::GUIAnimationInstance*
        Create<shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&,
               unsigned int&, float&, game::Hook>(shared_ptr<graphics::GUIAnimation> const&,
                                                  shared_ptr<ui::Component> const&, float&, float&, unsigned int&,
                                                  float&, game::Hook&&);
        graphics::GUIAnimationInstance*
        Create<shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&,
               unsigned int&, float&>(shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&,
                                      float&, float&, unsigned int&, float&);
        void Destroy(graphics::GUIAnimationInstance*);
        is_owner(MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData const*);
        is_owner(graphics::GUIAnimationInstance const*) const;
        void deallocate(graphics::GUIAnimationInstance const*);
        graphics::SkyBox_DE* Create<>();
        is_owner(MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData const*);
        void Destroy(graphics::SkyBox_DE*);
        void deallocate(graphics::SkyBox_DE const*);
        graphics::LightProbe_DE* Create<>();
        is_owner(graphics::LightProbe_DE const*) const;
        void Destroy(graphics::LightProbe_DE*);
        void deallocate(graphics::LightProbe_DE const*);
        void deallocate(graphics::AnimState const*);
        is_owner(MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData const*) const;
        void deallocate(MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData const*);
        // ... 29 more instantiated members
    };

    template <
        typename...> // 3 instantiations, e.g. <MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>, <MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>, <audio::SoundInstance, int>
    class FastPool_iterator {
    public:
        operator!=(FastPool_iterator<audio::SoundInstance, int> const&) const;
        void operator*() const;
        void destroy(audio::SoundInstance*);
        FastPool_iterator<audio::SoundInstance, int>* operator++();
        FastPool_iterator(FastPool<audio::SoundInstance, int>*, int);
        void Increment();
        operator!=(FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                     unsigned long> const&) const;
        FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>*
        operator++();
        operator!=(
            FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long> const&) const;
        FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* operator++();
    };

    // 0x100055720, 48 bytes, inline, placed by class name and debug map
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >,
   16192>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >,
   16192>::RefCounterAndData const*) const */

    undefined8 jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>::
        is_owner(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                          unsigned long>* this,
                 RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 64;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1000558f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(shared_ptr<oldscape::DBTableIndex> const&, unsigned long long const&, unsigned long long, unsigned int): jumps straight to the base-object constructor

    // 0x100055c10, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(shared_ptr<oldscape::DBTableIndex> const&, unsigned long long const&, unsigned long long, unsigned int)
    /* LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long
   long>::LRUHashCacheWrapper(shared_ptr<oldscape::graphics::Pix32> const&, unsigned long
   long const&, unsigned long long, unsigned int) */

    void LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(
        LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>* this, shared_ptr* param_1,
        ulonglong* param_2, ulonglong param_3, uint param_4) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        *(ulonglong*)(this + 16) = *param_2;
        *(uint*)(this + 24) = param_4;
        *(ulonglong*)(this + 32) = param_3;
        *(undefined8*)(this + 40) = 0;
        *(undefined8*)(this + 48) = 0;
    }

    // 0x1000671a0, 80 bytes, inline, placed by class name
    // FastPool<game::console::Snow::SnowFlake, int>::operator[](int) const
    long FastPool<game::console::Snow::SnowFlake, int>::operator[](FastPool<game::console::Snow::SnowFlake, int>* this,
                                                                   int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 141,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 32 + *(long*)this;
    }

    // 0x10019f4e0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10019f620, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>::
        FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                          unsigned long>* this,
                 ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10019f740, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>::
        clear(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10019f7d0, 64 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::Reset()
    /* FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel,
   64>::RefCounterAndData, unsigned long>::Reset() */

    void
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        Reset(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                       unsigned long>* this) {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 32) != 0) {
            lVar1 = *(long*)(this + 8);
            uVar2 = 0;
            do {
                *(ulong*)(lVar1 + uVar2 * 8) = uVar2;
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(ulong*)(this + 32));
        }
        *(undefined8*)(this + 24) = 0;
    }

    // 0x10019f810, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>::
    operator[](FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 64 + *(long*)this;
    }

    // 0x10019fa40, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>&&): jumps straight to the base-object constructor

    // 0x10019fa50, 64 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>&&)
    /* FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel,
   64>::RefCounterAndData, unsigned
   long>::FastPool(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel,
   64>::RefCounterAndData, unsigned long>&&) */

    void
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        FastPool(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                          unsigned long>* this,
                 FastPool* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)(param_1 + 16);
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 32);
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 32) = 0;
    }

    // 0x10019fad0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10019fae0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                       unsigned long>::
        ~FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                           unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1001e52a0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1001e53e0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        FastPool(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                          unsigned long>* this,
                 ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1001e54f0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::clear()
    void
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        clear(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                       unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset(this);
    }

    // 0x1001e5550, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
    operator[](
        FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 12640 + *(long*)this;
    }

    // 0x1001e5920, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1001e5930, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void
        jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
            ~FastPool(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                               unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1001e6610, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                       unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 12656 + 40;
    }

    // 0x1001e6c40, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData const*) const
    undefined8
    jag::FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>::
        is_owner(FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                          unsigned long>* this,
                 RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 12640;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1001ee0c0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1001ee200, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1001ee310, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1001ee370, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 240 + *(long*)this;
    }

    // 0x1001ee4c0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1001ee4d0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1001ee760, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData const*)
   const */

    undefined8 FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 240;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1001f3f70, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned
   long>::GetTotalSize(unsigned long) */

    long jag::FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 256 + 40;
    }

    // 0x100255040, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData,
   unsigned long>::GetTotalSize(unsigned long) */

    long jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 80 + 40;
    }

    // 0x1002551c0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100255210, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100255330, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100255390, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 64 + *(long*)this;
    }

    // 0x100255500, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100255510, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100338d50, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned
   long>::GetTotalSize(unsigned long) */

    long jag::FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 248 + 40;
    }

    // 0x100338ee0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100339020, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                       unsigned long>::
        FastPool(
            FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                     unsigned long>* this,
            ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100339140, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                       unsigned long>::
        clear(FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                       unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1003391a0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                       unsigned long>::
    operator[](FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 232 + *(long*)this;
    }

    // 0x1003392f0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100339300, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                       unsigned long>::
        ~FastPool(
            FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                     unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1003885f0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100388730, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::FastPool(
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100388840, 96 bytes, inline, placed by class name
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::clear()
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::clear(
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this) {
        long lVar1;
        long* plVar2;
        ulong uVar3;
        ulong uVar4;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                plVar2 = (long*)operator[](this, uVar4);
                (**(code**)(*plVar2 + 32))(plVar2);
                uVar4 = uVar4 + 1;
                uVar3 = size();
            } while (uVar4 < uVar3);
        }
        Reset();
    }

    // 0x1003888a0, 80 bytes, inline, placed by class name
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::operator[](unsigned long)
    long FastPool<graphics::GeometryBatchInstance, unsigned long>::operator[](
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 896 + *(long*)this;
    }

    // 0x1003889b0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1003889c0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::~FastPool()
    void FastPool<graphics::GeometryBatchInstance, unsigned long>::~FastPool(
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100388a50, 48 bytes, inline, placed by class name
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::is_owner(graphics::GeometryBatchInstance const*) const
    undefined8 FastPool<graphics::GeometryBatchInstance, unsigned long>::is_owner(
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this, GeometryBatchInstance* param_1) {
        GeometryBatchInstance* pGVar1;

        if (param_1 < *(GeometryBatchInstance**)this) {
            return 0;
        }
        pGVar1 = *(GeometryBatchInstance**)this + *(long*)(this + 32);
        return CONCAT71((int7)((ulong)pGVar1 >> 8), param_1 < pGVar1);
    }

    // 0x1003e0d60, 32 bytes, inline, placed by class name
    // FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 72 + 40;
    }

    // 0x1003e3150, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData const*) const
    undefined8
    jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 704;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1003e3c40, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1003e3d80, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1003e3ea0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1003e3f00, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 120 + *(long*)this;
    }

    // 0x1003e4070, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1003e4080, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1003e4ce0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 136 + 40;
    }

    // 0x1003e4eb0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData const*) const
    undefined8
    jag::FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 120;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100402c80, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData,
   unsigned long>::GetTotalSize(unsigned long) */

    ulong
    jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 384 | 40;
    }

    // 0x100403880, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::Model, 3072>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 976;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100406510, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<SpotAnimation, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100406650, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<SpotAnimation, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<SpotAnimation, unsigned long>::FastPool(FastPool<SpotAnimation, unsigned long>* this, ulong param_1,
                                                          ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100406760, 96 bytes, inline, placed by class name
    // FastPool<SpotAnimation, unsigned long>::clear()
    void FastPool<SpotAnimation, unsigned long>::clear(FastPool<SpotAnimation, unsigned long>* this) {
        long lVar1;
        undefined8* puVar2;
        ulong uVar3;
        ulong uVar4;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                puVar2 = (undefined8*)operator[](this, uVar4);
                (**(code**)*puVar2)(puVar2);
                uVar4 = uVar4 + 1;
                uVar3 = size();
            } while (uVar4 < uVar3);
        }
        Reset();
    }

    // 0x1004067c0, 80 bytes, inline, placed by class name
    // FastPool<SpotAnimation, unsigned long>::operator[](unsigned long)
    long FastPool<SpotAnimation, unsigned long>::operator[](FastPool<SpotAnimation, unsigned long>* this,
                                                            ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 464 + *(long*)this;
    }

    // 0x1004068d0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<SpotAnimation, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004068e0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<SpotAnimation, unsigned long>::~FastPool()
    void FastPool<SpotAnimation, unsigned long>::~FastPool(FastPool<SpotAnimation, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100406970, 48 bytes, inline, placed by class name
    // FastPool<SpotAnimation, unsigned long>::is_owner(SpotAnimation const*) const
    undefined8 FastPool<SpotAnimation, unsigned long>::is_owner(FastPool<SpotAnimation, unsigned long>* this,
                                                                SpotAnimation* param_1) {
        SpotAnimation* pSVar1;

        if (param_1 < *(SpotAnimation**)this) {
            return 0;
        }
        pSVar1 = (SpotAnimation*)((long)*(SpotAnimation**)this + *(long*)(this + 32) * 464);
        return CONCAT71((int7)((ulong)pSVar1 >> 8), param_1 < pSVar1);
    }

    // 0x1004087b0, 32 bytes, inline, placed by class name
    // FastPool<SpotAnimation, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<SpotAnimation, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 480 + 40;
    }

    // 0x100409430, 32 bytes, inline, placed by class name
    // FastPool<game::Terrain, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<game::Terrain, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1712 + 40;
    }

    // 0x10040a6d0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1664;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x10041f6c0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::Location, 256>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 912;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100420a00, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1296 + 40;
    }

    // 0x100421000, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<game::EnvironmentLoader, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100421140, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<game::EnvironmentLoader, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    FastPool<game::EnvironmentLoader, unsigned long>::FastPool(FastPool<game::EnvironmentLoader, unsigned long>* this,
                                                               ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100421260, 96 bytes, inline, placed by class name
    // FastPool<game::EnvironmentLoader, unsigned long>::clear()
    void
    FastPool<game::EnvironmentLoader, unsigned long>::clear(FastPool<game::EnvironmentLoader, unsigned long>* this) {
        long lVar1;
        EnvironmentLoader* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (EnvironmentLoader*)operator[](this, uVar3);
                this_00->~EnvironmentLoader();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004212c0, 80 bytes, inline, placed by class name
    // FastPool<game::EnvironmentLoader, unsigned long>::operator[](unsigned long)
    long
    FastPool<game::EnvironmentLoader, unsigned long>::operator[](FastPool<game::EnvironmentLoader, unsigned long>* this,
                                                                 ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 56 + *(long*)this;
    }

    // 0x1004213d0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<game::EnvironmentLoader, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004213e0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<game::EnvironmentLoader, unsigned long>::~FastPool()
    void FastPool<game::EnvironmentLoader, unsigned long>::~FastPool(
        FastPool<game::EnvironmentLoader, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100421470, 32 bytes, inline, placed by class name
    // FastPool<game::EnvironmentLoader, unsigned long>::is_owner(game::EnvironmentLoader const*) const
    undefined8
    FastPool<game::EnvironmentLoader, unsigned long>::is_owner(FastPool<game::EnvironmentLoader, unsigned long>* this,
                                                               EnvironmentLoader* param_1) {
        EnvironmentLoader* pEVar1;

        if (param_1 < *(EnvironmentLoader**)this) {
            return 0;
        }
        pEVar1 = *(EnvironmentLoader**)this + *(long*)(this + 32);
        return CONCAT71((int7)((ulong)pEVar1 >> 8), param_1 < pEVar1);
    }

    // 0x100421950, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<game::Terrain, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100421a90, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<game::Terrain, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<game::Terrain, unsigned long>::FastPool(FastPool<game::Terrain, unsigned long>* this, ulong param_1,
                                                          ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100421ba0, 96 bytes, inline, placed by class name
    // FastPool<game::Terrain, unsigned long>::clear()
    void FastPool<game::Terrain, unsigned long>::clear(FastPool<game::Terrain, unsigned long>* this) {
        long lVar1;
        undefined8* puVar2;
        ulong uVar3;
        ulong uVar4;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                puVar2 = (undefined8*)operator[](this, uVar4);
                (**(code**)*puVar2)(puVar2);
                uVar4 = uVar4 + 1;
                uVar3 = size();
            } while (uVar4 < uVar3);
        }
        Reset();
    }

    // 0x100421c00, 80 bytes, inline, placed by class name
    // FastPool<game::Terrain, unsigned long>::operator[](unsigned long)
    long FastPool<game::Terrain, unsigned long>::operator[](FastPool<game::Terrain, unsigned long>* this,
                                                            ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1696 + *(long*)this;
    }

    // 0x100421d10, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<game::Terrain, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100421d20, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<game::Terrain, unsigned long>::~FastPool()
    void FastPool<game::Terrain, unsigned long>::~FastPool(FastPool<game::Terrain, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100421db0, 48 bytes, inline, placed by class name
    // FastPool<game::Terrain, unsigned long>::is_owner(game::Terrain const*) const
    undefined8 FastPool<game::Terrain, unsigned long>::is_owner(FastPool<game::Terrain, unsigned long>* this,
                                                                Terrain* param_1) {
        Terrain* pTVar1;

        if (param_1 < *(Terrain**)this) {
            return 0;
        }
        pTVar1 = (Terrain*)((long)*(Terrain**)this + *(long*)(this + 32) * 1696);
        return CONCAT71((int7)((ulong)pTVar1 >> 8), param_1 < pTVar1);
    }

    // 0x100423030, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::LightSource, 1024>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 496;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100424fa0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    ulong FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 4480 | 40;
    }

    // 0x100425130, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100425270, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100425380, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004253e0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 4464 + *(long*)this;
    }

    // 0x100425530, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100425540, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100434e90, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 512 + 40;
    }

    // 0x100435000, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100435050, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100435160, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004351c0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 496 + *(long*)this;
    }

    // 0x100435310, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100435320, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004378e0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 928 + 40;
    }

    // 0x1004379f0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100437a40, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100437b50, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100437bb0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 912 + *(long*)this;
    }

    // 0x100437d00, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100437d10, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100438410, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100438550, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100438670, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004386d0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 152 + *(long*)this;
    }

    // 0x100438870, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100438880, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004394c0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned
   long>::GetTotalSize(unsigned long) */

    long FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 168 + 40;
    }

    // 0x100439670, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::InvType, 32>::RefCounterAndData const*) const */

    undefined8 FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 152;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x10044e8d0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned
   long>::GetTotalSize(unsigned long) */

    long jag::FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 240 + 40;
    }

    // 0x10044ea60, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10044eba0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10044ecb0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10044ed10, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 224 + *(long*)this;
    }

    // 0x10044ee60, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10044ee70, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100451380, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004514c0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1004515e0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100451640, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 9872 + *(long*)this;
    }

    // 0x1004519a0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004519b0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004525b0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 9888 + 40;
    }

    // 0x100452940, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData const*) const
    undefined8 jag::FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 9872;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100454c60, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long
    jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 720 + 40;
    }

    // 0x100454d70, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100454dc0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100454ed0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100454f30, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 704 + *(long*)this;
    }

    // 0x1004551c0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004551d0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100455fe0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100456120, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100456240, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004562a0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1280 + *(long*)this;
    }

    // 0x1004563f0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100456400, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100456640, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::MapSquare, 32>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1280;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x10045c130, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    ulong jag::FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 704 | 40;
    }

    // 0x10045c2c0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10045c400, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10045c510, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10045c570, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 688 + *(long*)this;
    }

    // 0x10045c6c0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10045c6d0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10045cec0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10045d000, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10045d110, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10045d170, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 368 + *(long*)this;
    }

    // 0x10045d2c0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10045d2d0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10045d510, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData const*) const */

    undefined8 FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 368;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100486ec0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100487000, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100487110, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100487170, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 368 + *(long*)this;
    }

    // 0x1004872c0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004872d0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10049af30, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long
    FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 9744 + 40;
    }

    // 0x10049b130, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10049b270, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10049b390, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10049b3f0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 9728 + *(long*)this;
    }

    // 0x10049b600, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10049b610, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10049cb10, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10049cc50, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10049cd70, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10049cdd0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 64 + *(long*)this;
    }

    // 0x10049cf40, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10049cf50, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10049e090, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData const*)
   const */

    undefined8 FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 224;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1004ca530, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned
   long>::GetTotalSize(unsigned long) */

    long jag::FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 128 + 40;
    }

    // 0x1004ca720, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004ca860, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1004ca980, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004ca9e0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 112 + *(long*)this;
    }

    // 0x1004cab30, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004cab40, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004cb880, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned
   long>::GetTotalSize(unsigned long) */

    long FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 600 + 40;
    }

    // 0x1004cba10, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004cbb50, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1004cbc70, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004cbcd0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 584 + *(long*)this;
    }

    // 0x1004cbe20, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004cbe30, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004d7b30, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::BuildSingleLocationResultData,
   160>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long) */

    long jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData,
                       unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 144 + 40;
    }

    // 0x1004d7d30, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004d7e70, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1004d7f90, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004d7ff0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 128 + *(long*)this;
    }

    // 0x1004d8140, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004d8150, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004d93d0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::VarType, 5504>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::BuildSingleLocationResultData,
   160>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::BuildSingleLocationResultData,
   160>::RefCounterAndData const*) const */

    undefined8
    jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 128;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1004e3760, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    ulong jag::FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 192 | 40;
    }

    // 0x1004e3960, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004e3aa0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1004e3bc0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004e3c20, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 176 + *(long*)this;
    }

    // 0x1004e3dc0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004e3dd0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004e6c60, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::Animation, 512>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 232;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1004eb5a0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004eb6e0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1004eb800, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004eb860, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1872 + *(long*)this;
    }

    // 0x1004eb9b0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004eb9c0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004ec760, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1888 + 40;
    }

    // 0x1004ecda0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::SeqType, 96>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1872;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1004f0b30, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 168;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1004f1390, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData const*) const
    undefined8
    jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 184;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1004f8b10, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004f8c50, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1004f8d70, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004f8dd0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1040 + *(long*)this;
    }

    // 0x1004f9070, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1004f9080, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1004f9320, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::ObjType, 96>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1040;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1004ffa40, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData,
   unsigned long>::GetTotalSize(unsigned long) */

    long jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData,
                       unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 152 + 40;
    }

    // 0x1004ffbd0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004ffd10, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1004ffe30, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1004ffe90, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 136 + *(long*)this;
    }

    // 0x100500020, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100500030, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10050c3d0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1192 + 40;
    }

    // 0x10050c5d0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10050c710, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10050c830, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10050c890, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1176 + *(long*)this;
    }

    // 0x10050c9e0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10050c9f0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10050fcd0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::NPCType, 216>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1176;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100513e80, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1056 + 40;
    }

    // 0x10051acf0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10051ae30, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10051af50, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10051afb0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1064 + *(long*)this;
    }

    // 0x10051b520, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10051b530, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10051b7d0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::LocType, 256>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 1064;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100520260, 32 bytes, inline, placed by class name
    // FastPool<game::MapElementType::Polygon, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned
   long>::GetTotalSize(unsigned long) */

    long FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 160 + 40;
    }

    // 0x10052ada0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10052aee0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10052b000, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10052b060, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 136 + *(long*)this;
    }

    // 0x10052b1d0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10052b1e0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::
        ~FastPool(
            FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10052c0f0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::DBTableType, 4>::RefCounterAndData const*) const
    */

    undefined8 FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 136;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005339d0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1080 + 40;
    }

    // 0x10053ee20, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10053ef60, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10053f080, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10053f0e0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 144 + *(long*)this;
    }

    // 0x10053f270, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10053f280, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10053f570, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<ui::Interface, 128>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::ParamType, 640>::RefCounterAndData const*) const
    */

    undefined8 FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 144;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x10054c850, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long
    FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 232 + 40;
    }

    // 0x10055fb20, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10055fc60, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10055fd80, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10055fde0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 64 + *(long*)this;
    }

    // 0x10055fef0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10055ff00, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005727c0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100572900, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100572a20, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100572a80, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 144 + *(long*)this;
    }

    // 0x100572c50, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100572c60, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005780f0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100578230, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100578350, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005783b0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 144 + *(long*)this;
    }

    // 0x100578950, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100578960, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10057dbc0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10057dd00, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10057de20, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10057de80, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 136 + *(long*)this;
    }

    // 0x10057e060, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10057e070, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005832b0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005833f0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100583510, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100583570, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 152 + *(long*)this;
    }

    // 0x100583740, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100583750, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005888c0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData const*)
   const */

    undefined8 FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 112;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x10058cd30, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10058ce70, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10058cf90, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10058cff0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 288 + *(long*)this;
    }

    // 0x10058d1e0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10058d1f0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10058dee0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 304 + 40;
    }

    // 0x10058e060, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::BASType, 96>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 288;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005924a0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005925e0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100592700, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100592760, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 104 + *(long*)this;
    }

    // 0x100592910, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100592920, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100593580, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned
   long>::GetTotalSize(unsigned long) */

    long FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 120 + 40;
    }

    // 0x100593710, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::MSIType, 32>::RefCounterAndData const*) const */

    undefined8 FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 104;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100597b60, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100597ca0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100597dc0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100597e20, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 136 + *(long*)this;
    }

    // 0x100597fd0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100597fe0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10059d2e0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10059d420, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10059d540, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10059d5a0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 216 + *(long*)this;
    }

    // 0x10059d780, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10059d790, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10059da20, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 216;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005a2330, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005a2470, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005a2590, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005a25f0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 152 + *(long*)this;
    }

    // 0x1005a27a0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005a27b0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005a7900, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005a7a40, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005a7b60, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005a7bc0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 296 + *(long*)this;
    }

    // 0x1005a7de0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005a7df0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005a8bd0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 312 + 40;
    }

    // 0x1005a8d90, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::IDKType, 32>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 296;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005ad290, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005ad3d0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005ad4f0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005ad550, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 384 + *(long*)this;
    }

    // 0x1005ada90, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<game::MapElementType::Polygon, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005adae0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<game::MapElementType::Polygon, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<game::MapElementType::Polygon, unsigned long>::FastPool(
        FastPool<game::MapElementType::Polygon, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005adc00, 96 bytes, inline, placed by class name
    // FastPool<game::MapElementType::Polygon, unsigned long>::clear()
    void FastPool<game::MapElementType::Polygon, unsigned long>::clear(
        FastPool<game::MapElementType::Polygon, unsigned long>* this) {
        long lVar1;
        Polygon* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (Polygon*)operator[](this, uVar3);
                this_00->~Polygon();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005adc60, 80 bytes, inline, placed by class name
    // FastPool<game::MapElementType::Polygon, unsigned long>::operator[](unsigned long)
    long FastPool<game::MapElementType::Polygon, unsigned long>::operator[](
        FastPool<game::MapElementType::Polygon, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 144 + *(long*)this;
    }

    // 0x1005add70, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<game::MapElementType::Polygon, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005add80, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<game::MapElementType::Polygon, unsigned long>::~FastPool()
    void FastPool<game::MapElementType::Polygon, unsigned long>::~FastPool(
        FastPool<game::MapElementType::Polygon, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005ae060, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005ae070, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005aedc0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 400 + 40;
    }

    // 0x1005aeff0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::MapElementType, 512>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 384;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005b3b20, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005b3c60, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005b3d80, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005b3de0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 104 + *(long*)this;
    }

    // 0x1005b3f90, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005b3fa0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005b9550, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005b9690, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005b97b0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005b9810, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 376 + *(long*)this;
    }

    // 0x1005b9cc0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005b9cd0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005baab0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 392 + 40;
    }

    // 0x1005bacf0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::QuestType, 128>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 376;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005bf140, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005bf280, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005bf3a0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005bf400, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 152 + *(long*)this;
    }

    // 0x1005bf5f0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005bf600, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005c4870, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005c49b0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005c4ad0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005c4b30, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 144 + *(long*)this;
    }

    // 0x1005c4ce0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005c4cf0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005ca000, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005ca140, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005ca260, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005ca2c0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 136 + *(long*)this;
    }

    // 0x1005ca490, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005ca4a0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005cfd00, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::WaterType, 16>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 584;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005d4130, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005d4270, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005d4390, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005d43f0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 96 + *(long*)this;
    }

    // 0x1005d45a0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005d45b0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005d51f0, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData,
   unsigned long>::GetTotalSize(unsigned long) */

    long
    jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 112 + 40;
    }

    // 0x1005d5370, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::CursorType, 64>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData,
   unsigned long>::is_owner(MakeSharedPool<graphics::AnimationFrameRT5,
   20480>::RefCounterAndData const*) const */

    undefined8
    jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 96;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005d96f0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005d9830, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005d9950, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005d99b0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 240 + *(long*)this;
    }

    // 0x1005d9b00, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005d9b10, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005df010, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005df150, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005df270, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005df2d0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 312 + *(long*)this;
    }

    // 0x1005df840, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005df850, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005e05d0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 328 + 40;
    }

    // 0x1005e0ca0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::EnumType, 128>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 312;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005e53a0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005e54e0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005e5600, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005e5660, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 224 + *(long*)this;
    }

    // 0x1005e5850, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005e5860, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005eb0d0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005eb210, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005eb330, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005eb390, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 88 + *(long*)this;
    }

    // 0x1005eb540, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005eb550, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005ec190, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long
    FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 104 + 40;
    }

    // 0x1005ec320, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::StructType, 1024>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 88;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1005f0760, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005f08a0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1005f09c0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1005f0a20, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 728 + *(long*)this;
    }

    // 0x1005f0ff0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1005f1000, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1005f1f90, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 744 + 40;
    }

    // 0x1005f2260, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::AchievementType, 256>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 728;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100634af0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100634c30, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100634d40, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::clear()
    void
    jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100634da0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::
    operator[](
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 128 + *(long*)this;
    }

    // 0x100634ef0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100634f00, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>::
        ~FastPool(FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData,
                           unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006381b0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006382f0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100638410, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100638470, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 128 + *(long*)this;
    }

    // 0x100638650, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100638660, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006398f0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100639a30, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100639b40, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100639ba0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 12704 + *(long*)this;
    }

    // 0x100639d70, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100639d80, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::
        ~FastPool(
            FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10063aa60, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData,
                       unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 12720 + 40;
    }

    // 0x10063ac10, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData const*) const
    undefined8
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 12704;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x10063c180, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10063c2c0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10063c3e0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10063c440, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 144 + *(long*)this;
    }

    // 0x10063c5d0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10063c5e0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>::
        ~FastPool(
            FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10063e800, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10063e940, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10063ea60, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10063eac0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 112 + *(long*)this;
    }

    // 0x10063ec60, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10063ec70, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100646020, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100646160, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100646280, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006462e0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 40 + *(long*)this;
    }

    // 0x100646400, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100646410, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100647020, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData,
   unsigned long>::GetTotalSize(unsigned long) */

    long jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 56 + 40;
    }

    // 0x100647200, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData,
   unsigned long>::is_owner(MakeSharedPool<render::VertexArrayObject,
   2048>::RefCounterAndData const*) const */

    undefined8
    jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 40;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100647e40, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData,
   unsigned long>::GetTotalSize(unsigned long) */

    long
    jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 64 + 40;
    }

    // 0x100647fc0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100648100, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100648220, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100648280, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 48 + *(long*)this;
    }

    // 0x100648390, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006483a0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100649100, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData const*) const
    /* FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData,
   unsigned long>::is_owner(MakeSharedPool<game::BuildAnimationResultData,
   96>::RefCounterAndData const*) const */

    undefined8
    jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 48;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100652ae0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 688;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100653390, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006534d0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::
        FastPool(
            FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>* this,
            ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006535f0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::clear()
    void
    jag::FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100653650, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::
    operator[](
        FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 128 + *(long*)this;
    }

    // 0x1006538d0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006538e0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>::
        ~FastPool(FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData,
                           unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10065c4b0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<graphics::AnimationParameters, unsigned long>::GetTotalSize(unsigned long) */

    long FastPool<graphics::AnimationParameters, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 208 + 40;
    }

    // 0x100661a40, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100661a90, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100661bb0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100661c10, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 48 + *(long*)this;
    }

    // 0x100661d20, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100661d30, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100663720, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x100663a10, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x100663fd0, 16 bytes, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::empty() const
    bool FastPool<audio::SoundInstance, int>::empty(FastPool<audio::SoundInstance, int>* this) {
        return *(int*)(this + 24) == 0;
    }

    // 0x100664320, 48 bytes, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::begin()
    undefined1[16] FastPool<audio::SoundInstance, int>::begin(FastPool<audio::SoundInstance, int>* this) {
        undefined1 auVar1[16];
        ImGuiPlotArrayGetterData local_18[16];

        ImGuiPlotArrayGetterData::ImGuiPlotArrayGetterData(local_18, (float*)this, 0);
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

    // 0x1006643a0, 48 bytes, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::end()
    undefined1[16] FastPool<audio::SoundInstance, int>::end(FastPool<audio::SoundInstance, int>* this) {
        undefined1 auVar1[16];
        ImGuiPlotArrayGetterData local_18[16];

        ImGuiPlotArrayGetterData::ImGuiPlotArrayGetterData(local_18, (float*)this, *(int*)(this + 24));
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

    // 0x100665330, 32 bytes, inline, placed by class name
    // audio::SoundInstance* FastPool<audio::SoundInstance, int>::Create<>()
    SoundInstance* FastPool<audio::SoundInstance, int>::Create<>(FastPool<audio::SoundInstance, int>* this) {
        SoundInstance* this_00;

        this_00 = (SoundInstance*)allocate(this);
        audio::SoundInstance::SoundInstance(this_00);
        return this_00;
    }

    // 0x100665a00, 80 bytes, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::clear()
    void FastPool<audio::SoundInstance, int>::clear(FastPool<audio::SoundInstance, int>* this) {
        int iVar1;
        int iVar2;
        undefined8* puVar3;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (undefined8*)operator[](this, iVar1);
                (**(code**)*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x10066af70, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::FastPool(int, int)
    void FastPool<audio::SoundInstance, int>::FastPool(FastPool<audio::SoundInstance, int>* this, int param_1,
                                                       int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10066b0a0, 48 bytes, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::Reset()
    /* FastPool<ui::ConsoleSnow::SnowFlake, int>::Reset() */

    void FastPool<ui::ConsoleSnow::SnowFlake, int>::Reset(FastPool<ui::ConsoleSnow::SnowFlake, int>* this) {
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
        *(undefined4*)(this + 24) = 0;
    }

    // 0x10066b690, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::~FastPool()
    void FastPool<audio::SoundInstance, int>::~FastPool(FastPool<audio::SoundInstance, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10066ed50, 80 bytes, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::operator[](int)
    long FastPool<audio::SoundInstance, int>::operator[](FastPool<audio::SoundInstance, int>* this, int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 192 + *(long*)this;
    }

    // 0x10066ee00, 48 bytes, inline, placed by class name
    // FastPool<audio::SoundInstance, int>::is_owner(audio::SoundInstance const*) const
    /* FastPool<graphics::WaterPatch_DE, int>::is_owner(graphics::WaterPatch_DE const*)
   const */

    undefined8 FastPool<graphics::WaterPatch_DE, int>::is_owner(FastPool<graphics::WaterPatch_DE, int>* this,
                                                                WaterPatch_DE* param_1) {
        WaterPatch_DE* pWVar1;

        if (param_1 < *(WaterPatch_DE**)this) {
            return 0;
        }
        pWVar1 = *(WaterPatch_DE**)this + *(int*)(this + 28);
        return CONCAT71((int7)((ulong)pWVar1 >> 8), param_1 < pWVar1);
    }

    // 0x1006714e0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100671620, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100671740, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006717a0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 3816 + *(long*)this;
    }

    // 0x1006718f0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100671900, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100671b40, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData const*) const
    undefined8 jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 3816;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1006723d0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100672510, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100672630, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100672690, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 192 + *(long*)this;
    }

    // 0x100672b10, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::AnimationParameters, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100672b60, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::AnimationParameters, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<graphics::AnimationParameters, unsigned long>::FastPool(
        FastPool<graphics::AnimationParameters, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100672c80, 96 bytes, inline, placed by class name
    // FastPool<graphics::AnimationParameters, unsigned long>::clear()
    void FastPool<graphics::AnimationParameters, unsigned long>::clear(
        FastPool<graphics::AnimationParameters, unsigned long>* this) {
        long lVar1;
        AnimationParameters* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (AnimationParameters*)operator[](this, uVar3);
                this_00->~AnimationParameters();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100672ce0, 80 bytes, inline, placed by class name
    // FastPool<graphics::AnimationParameters, unsigned long>::operator[](unsigned long)
    long FastPool<graphics::AnimationParameters, unsigned long>::operator[](
        FastPool<graphics::AnimationParameters, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 192 + *(long*)this;
    }

    // 0x100672df0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::AnimationParameters, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100672e00, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::AnimationParameters, unsigned long>::~FastPool()
    void FastPool<graphics::AnimationParameters, unsigned long>::~FastPool(
        FastPool<graphics::AnimationParameters, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100672e90, 48 bytes, inline, placed by class name
    // FastPool<graphics::AnimationParameters, unsigned long>::is_owner(graphics::AnimationParameters const*) const
    /* FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned
   long>::is_owner(MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData const*)
   const */

    undefined8 FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 192;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100673080, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100673090, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006825c0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x1006825d0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x100682c00, 80 bytes, inline, placed by class name
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::operator[](int)
    long FastPool<ui::ConsoleSnow::SnowFlake, int>::operator[](FastPool<ui::ConsoleSnow::SnowFlake, int>* this,
                                                               int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 32 + *(long*)this;
    }

    // 0x100682d70, 64 bytes, inline, placed by class name
    // ui::ConsoleSnow::SnowFlake* FastPool<ui::ConsoleSnow::SnowFlake, int>::Create<int, int, float>(int&&, int&&, float&&)
    SnowFlake*
    FastPool<ui::ConsoleSnow::SnowFlake, int>::Create<int, int, float>(FastPool<ui::ConsoleSnow::SnowFlake, int>* this,
                                                                       int* param_1, int* param_2, float* param_3) {
        SnowFlake* this_00;

        this_00 = (SnowFlake*)allocate(this);
        ui::ConsoleSnow::SnowFlake::SnowFlake(this_00, *param_1, *param_2, *param_3);
        return this_00;
    }

    // 0x100682db0, 64 bytes, inline, placed by class name
    // ui::ConsoleSnow::SnowFlake* FastPool<ui::ConsoleSnow::SnowFlake, int>::Create<int, int>(int&&, int&&)
    SnowFlake*
    FastPool<ui::ConsoleSnow::SnowFlake, int>::Create<int, int>(FastPool<ui::ConsoleSnow::SnowFlake, int>* this,
                                                                int* param_1, int* param_2) {
        SnowFlake* this_00;

        this_00 = (SnowFlake*)allocate(this);
        ui::ConsoleSnow::SnowFlake::SnowFlake(this_00, *param_1, *param_2, 0.0);
        return this_00;
    }

    // 0x1006b3a00, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::FastPool(int, int)
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::FastPool(FastPool<ui::ConsoleSnow::SnowFlake, int>* this,
                                                             int param_1, int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006b3b20, 80 bytes, inline, placed by class name
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::clear()
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::clear(FastPool<ui::ConsoleSnow::SnowFlake, int>* this) {
        int iVar1;
        int iVar2;

        iVar1 = GetValue();
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

    // 0x1006b3b70, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::~FastPool()
    void FastPool<ui::ConsoleSnow::SnowFlake, int>::~FastPool(FastPool<ui::ConsoleSnow::SnowFlake, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006b3bb0, 48 bytes, inline, placed by class name
    // FastPool<ui::ConsoleSnow::SnowFlake, int>::is_owner(ui::ConsoleSnow::SnowFlake const*) const
    /* FastPool<game::console::Snow::SnowFlake,
   int>::is_owner(game::console::Snow::SnowFlake const*) const */

    undefined8
    FastPool<game::console::Snow::SnowFlake, int>::is_owner(FastPool<game::console::Snow::SnowFlake, int>* this,
                                                            SnowFlake* param_1) {
        SnowFlake* pSVar1;

        if (param_1 < *(SnowFlake**)this) {
            return 0;
        }
        pSVar1 = (SnowFlake*)((long)*(SnowFlake**)this + (long)*(int*)(this + 28) * 32);
        return CONCAT71((int7)((ulong)pSVar1 >> 8), param_1 < pSVar1);
    }

    // 0x1006c4f90, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1048 + 40;
    }

    // 0x1006c5180, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006c52c0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006c53e0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006c5440, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1032 + *(long*)this;
    }

    // 0x1006c5590, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006c55a0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006c6c40, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006c6d80, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006c6ea0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006c6f00, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 584 + *(long*)this;
    }

    // 0x1006c7050, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006c7060, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006c7c50, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1584 + 40;
    }

    // 0x1006c7de0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006c7f20, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006c8040, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006c80a0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1568 + *(long*)this;
    }

    // 0x1006c81f0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006c8200, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006d1e30, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 792 + 40;
    }

    // 0x1006d1fc0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d2100, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006d2220, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006d2280, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 776 + *(long*)this;
    }

    // 0x1006d23d0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006d23e0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006d2f70, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 984 + 40;
    }

    // 0x1006d3100, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d3240, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006d3360, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006d33c0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 968 + *(long*)this;
    }

    // 0x1006d3510, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006d3520, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006d4270, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 1456 + 40;
    }

    // 0x1006d4400, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d4540, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006d4660, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006d46c0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1440 + *(long*)this;
    }

    // 0x1006d4810, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006d4820, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006d75f0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 536 + 40;
    }

    // 0x1006d7780, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d78c0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006d79e0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006d7a40, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 520 + *(long*)this;
    }

    // 0x1006d7b90, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006d7ba0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006d8780, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 664 + 40;
    }

    // 0x1006d8910, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d8a50, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006d8b70, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006d8bd0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 648 + *(long*)this;
    }

    // 0x1006d8d20, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006d8d30, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1006da740, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 880 + 40;
    }

    // 0x1006da8d0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006daa10, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1006dab30, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1006dab90, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 864 + *(long*)this;
    }

    // 0x1006dace0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1006dacf0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1007a25b0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::WaterPatch_DE, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x1007a25c0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::WaterPatch_DE, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x1007a36a0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::WaterPatch_DE, int>::FastPool(int, int)
    void FastPool<graphics::WaterPatch_DE, int>::FastPool(FastPool<graphics::WaterPatch_DE, int>* this, int param_1,
                                                          int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1007a37d0, 80 bytes, inline, placed by class name
    // FastPool<graphics::WaterPatch_DE, int>::clear()
    void FastPool<graphics::WaterPatch_DE, int>::clear(FastPool<graphics::WaterPatch_DE, int>* this) {
        int iVar1;
        int iVar2;
        undefined8* puVar3;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (undefined8*)operator[](this, iVar1);
                (**(code**)*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x1007a3820, 80 bytes, inline, placed by class name
    // FastPool<graphics::WaterPatch_DE, int>::operator[](int)
    long FastPool<graphics::WaterPatch_DE, int>::operator[](FastPool<graphics::WaterPatch_DE, int>* this, int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 192 + *(long*)this;
    }

    // 0x1007a3870, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::WaterPatch_DE, int>::~FastPool()
    void FastPool<graphics::WaterPatch_DE, int>::~FastPool(FastPool<graphics::WaterPatch_DE, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1007b8ac0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::TerrainPatch_DE, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x1007b8ad0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::TerrainPatch_DE, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x1007c5d90, 96 bytes, inline, placed by class name
    // graphics::TerrainPatch_DE* FastPool<graphics::TerrainPatch_DE, int>::Create<graphics::TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB&, float&, render::InputAssemblerState*>(graphics::TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB&, float&, render::InputAssemblerState*&&)
    TerrainPatch_DE* FastPool<graphics::TerrainPatch_DE, int>::Create<
        graphics::TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&, math::OBB&,
        float&, render::InputAssemblerState*>(FastPool<graphics::TerrainPatch_DE, int>* this, TerrainPatch* param_1,
                                              fixed_vector* param_2, OBB* param_3, float* param_4,
                                              InputAssemblerState** param_5) {
        TerrainPatch_DE* this_00;

        this_00 = (TerrainPatch_DE*)allocate(this);
        graphics::TerrainPatch_DE::TerrainPatch_DE(this_00, param_1, param_2, param_3, *param_4, *param_5,
                                                   (RenderPipelineState*)0);
        return this_00;
    }

    // 0x1007c6490, 48 bytes, inline, placed by class name
    // FastPool<graphics::TerrainPatch_DE, int>::is_owner(graphics::TerrainPatch_DE const*) const
    undefined8 FastPool<graphics::TerrainPatch_DE, int>::is_owner(FastPool<graphics::TerrainPatch_DE, int>* this,
                                                                  TerrainPatch_DE* param_1) {
        TerrainPatch_DE* pTVar1;

        if (param_1 < *(TerrainPatch_DE**)this) {
            return 0;
        }
        pTVar1 = (TerrainPatch_DE*)((*(TerrainPatch_DE**)this)->field_112 + (long)*(int*)(this + 28) * 544 + -112);
        return CONCAT71((int7)((ulong)pTVar1 >> 8), param_1 < pTVar1);
    }

    // 0x1007c6c80, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::TerrainPatch_DE, int>::FastPool(int, int)
    void FastPool<graphics::TerrainPatch_DE, int>::FastPool(FastPool<graphics::TerrainPatch_DE, int>* this, int param_1,
                                                            int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1007c6da0, 80 bytes, inline, placed by class name
    // FastPool<graphics::TerrainPatch_DE, int>::clear()
    void FastPool<graphics::TerrainPatch_DE, int>::clear(FastPool<graphics::TerrainPatch_DE, int>* this) {
        int iVar1;
        int iVar2;
        undefined8* puVar3;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (undefined8*)operator[](this, iVar1);
                (**(code**)*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x1007c6df0, 80 bytes, inline, placed by class name
    // FastPool<graphics::TerrainPatch_DE, int>::operator[](int)
    long FastPool<graphics::TerrainPatch_DE, int>::operator[](FastPool<graphics::TerrainPatch_DE, int>* this,
                                                              int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 544 + *(long*)this;
    }

    // 0x1007c6e40, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::TerrainPatch_DE, int>::~FastPool()
    void FastPool<graphics::TerrainPatch_DE, int>::~FastPool(FastPool<graphics::TerrainPatch_DE, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1007c7ba0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 1680 + 40;
    }

    // 0x1007c7cb0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1007c7d00, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1007c7e10, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1007c7e70, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1664 + *(long*)this;
    }

    // 0x1007c7fc0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1007c7fd0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1007c8970, 80 bytes, inline, placed by class name
    // graphics::WaterPatch_DE* FastPool<graphics::WaterPatch_DE, int>::Create<graphics::WaterPatch&, math::OBB&, float&, render::InputAssemblerState*>(graphics::WaterPatch&, math::OBB&, float&, render::InputAssemblerState*&&)
    WaterPatch_DE* FastPool<graphics::WaterPatch_DE, int>::Create<graphics::WaterPatch&, math::OBB&, float&,
                                                                  render::InputAssemblerState*>(
        FastPool<graphics::WaterPatch_DE, int>* this, WaterPatch* param_1, OBB* param_2, float* param_3,
        InputAssemblerState** param_4) {
        WaterPatch_DE* this_00;

        this_00 = (WaterPatch_DE*)allocate(this);
        graphics::WaterPatch_DE::WaterPatch_DE(this_00, param_1, param_2, *param_3, *param_4);
        return this_00;
    }

    // 0x1007d3d30, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::ParticleSystem_DE, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x1007d3d40, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::ParticleSystem_DE, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x1007e9de0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long
    jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 272 + 40;
    }

    // 0x1007e9fa0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1007ea0e0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1007ea1f0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1007ea250, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 256 + *(long*)this;
    }

    // 0x1007ea3a0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1007ea3b0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1007f50f0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 42992 + 40;
    }

    // 0x1007f5280, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1007f53c0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1007f54d0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1007f5530, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 42976 + *(long*)this;
    }

    // 0x1007f5680, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1007f5690, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1007f6da0, 96 bytes, inline, placed by class name
    // graphics::ParticleSystem_DE* FastPool<graphics::ParticleSystem_DE, int>::Create<shared_ptr<graphics::ParticleSystem>, math::OBB&, float&, unsigned int, bool>(shared_ptr<graphics::ParticleSystem>&&, math::OBB&, float&, unsigned int&&, bool&&)
    ParticleSystem_DE* FastPool<graphics::ParticleSystem_DE, int>::Create<shared_ptr<graphics::ParticleSystem>,
                                                                          math::OBB&, float&, unsigned int, bool>(
        FastPool<graphics::ParticleSystem_DE, int>* this, shared_ptr* param_1, OBB* param_2, float* param_3,
        uint* param_4, bool* param_5) {
        ParticleSystem_DE* this_00;

        this_00 = (ParticleSystem_DE*)allocate(this);
        graphics::ParticleSystem_DE::ParticleSystem_DE(this_00, param_1, param_2, *param_3, *param_4, *param_5);
        return this_00;
    }

    // 0x1007f7030, 48 bytes, inline, placed by class name
    // FastPool<graphics::ParticleSystem_DE, int>::is_owner(graphics::ParticleSystem_DE const*) const
    undefined8 FastPool<graphics::ParticleSystem_DE, int>::is_owner(FastPool<graphics::ParticleSystem_DE, int>* this,
                                                                    ParticleSystem_DE* param_1) {
        ParticleSystem_DE* pPVar1;

        if (param_1 < *(ParticleSystem_DE**)this) {
            return 0;
        }
        pPVar1 = *(ParticleSystem_DE**)this + *(int*)(this + 28);
        return CONCAT71((int7)((ulong)pPVar1 >> 8), param_1 < pPVar1);
    }

    // 0x1007f77a0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData const*) const
    undefined8 jag::FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 42976;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1007f7b70, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::ParticleSystem_DE, int>::FastPool(int, int)
    void FastPool<graphics::ParticleSystem_DE, int>::FastPool(FastPool<graphics::ParticleSystem_DE, int>* this,
                                                              int param_1, int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1007f7ca0, 80 bytes, inline, placed by class name
    // FastPool<graphics::ParticleSystem_DE, int>::clear()
    void FastPool<graphics::ParticleSystem_DE, int>::clear(FastPool<graphics::ParticleSystem_DE, int>* this) {
        int iVar1;
        int iVar2;
        undefined8* puVar3;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (undefined8*)operator[](this, iVar1);
                (**(code**)*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x1007f7cf0, 80 bytes, inline, placed by class name
    // FastPool<graphics::ParticleSystem_DE, int>::operator[](int)
    long FastPool<graphics::ParticleSystem_DE, int>::operator[](FastPool<graphics::ParticleSystem_DE, int>* this,
                                                                int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 144 + *(long*)this;
    }

    // 0x1007f7d40, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::ParticleSystem_DE, int>::~FastPool()
    void FastPool<graphics::ParticleSystem_DE, int>::~FastPool(FastPool<graphics::ParticleSystem_DE, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10080d110, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::GeometryBatch_DE, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x10080d120, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::GeometryBatch_DE, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x100830ee0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 2256 + 40;
    }

    // 0x1008310b0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1008311f0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100831300, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100831360, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 2240 + *(long*)this;
    }

    // 0x1008314b0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1008314c0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1008364d0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::GeometryBatch_DE, int>::FastPool(int, int)
    void FastPool<graphics::GeometryBatch_DE, int>::FastPool(FastPool<graphics::GeometryBatch_DE, int>* this,
                                                             int param_1, int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100836600, 80 bytes, inline, placed by class name
    // FastPool<graphics::GeometryBatch_DE, int>::clear()
    void FastPool<graphics::GeometryBatch_DE, int>::clear(FastPool<graphics::GeometryBatch_DE, int>* this) {
        int iVar1;
        int iVar2;
        undefined8* puVar3;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (undefined8*)operator[](this, iVar1);
                (**(code**)*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x100836650, 80 bytes, inline, placed by class name
    // FastPool<graphics::GeometryBatch_DE, int>::operator[](int)
    long FastPool<graphics::GeometryBatch_DE, int>::operator[](FastPool<graphics::GeometryBatch_DE, int>* this,
                                                               int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 160 + *(long*)this;
    }

    // 0x1008366a0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::GeometryBatch_DE, int>::~FastPool()
    void FastPool<graphics::GeometryBatch_DE, int>::~FastPool(FastPool<graphics::GeometryBatch_DE, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100836a00, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData const*) const
    undefined8 jag::FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 2240;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100837570, 32 bytes, inline, placed by class name
    // FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 912 + 40;
    }

    // 0x100838220, 96 bytes, inline, placed by class name
    // graphics::GeometryBatch_DE* FastPool<graphics::GeometryBatch_DE, int>::Create<math::OBB&, float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator> > const*&, unsigned int, graphics::GeometryBatchInstance&>(math::OBB&, float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator> > const*&, unsigned int&&, graphics::GeometryBatchInstance&)
    /* graphics::GeometryBatch_DE* FastPool<graphics::GeometryBatch_DE,
   int>::Create<math::OBB&, float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks,
   eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int,
   graphics::FaceGroupRenderMasks>, eastl::allocator> > const*&, unsigned int&,
   graphics::GeometryBatchInstance&>(math::OBB&, float&, eastl::vector_map<int,
   graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
   eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator> > const*&,
   unsigned int&, graphics::GeometryBatchInstance&) */

    GeometryBatch_DE* FastPool<graphics::GeometryBatch_DE, int>::Create<
        math::OBB&, float&,
        eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>> const*&,
        unsigned int&, graphics::GeometryBatchInstance&>(FastPool<graphics::GeometryBatch_DE, int>* this, OBB* param_1,
                                                         float* param_2, vector_map** param_3, uint* param_4,
                                                         GeometryBatchInstance* param_5) {
        GeometryBatch_DE* this_00;

        this_00 = (GeometryBatch_DE*)allocate(this);
        graphics::GeometryBatch_DE::GeometryBatch_DE(this_00, param_1, *param_2, *param_3, *param_4, param_5);
        return this_00;
    }

    // 0x100838470, 48 bytes, inline, placed by class name
    // FastPool<graphics::GeometryBatch_DE, int>::is_owner(graphics::GeometryBatch_DE const*) const
    undefined8 FastPool<graphics::GeometryBatch_DE, int>::is_owner(FastPool<graphics::GeometryBatch_DE, int>* this,
                                                                   GeometryBatch_DE* param_1) {
        GeometryBatch_DE* pGVar1;

        if (param_1 < *(GeometryBatch_DE**)this) {
            return 0;
        }
        pGVar1 = *(GeometryBatch_DE**)this + *(int*)(this + 28);
        return CONCAT71((int7)((ulong)pGVar1 >> 8), param_1 < pGVar1);
    }

    // 0x10083a3a0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long
    FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 992 + 40;
    }

    // 0x100843190, 48 bytes, inline, placed by class name
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::is_owner(graphics::BillboardBatchInstance const*) const
    undefined8 FastPool<graphics::BillboardBatchInstance, unsigned long>::is_owner(
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this, BillboardBatchInstance* param_1) {
        BillboardBatchInstance* pBVar1;

        if (param_1 < *(BillboardBatchInstance**)this) {
            return 0;
        }
        pBVar1 =
            (BillboardBatchInstance*)((*(BillboardBatchInstance**)this)->field_32 + *(long*)(this + 32) * 768 + -32);
        return CONCAT71((int7)((ulong)pBVar1 >> 8), param_1 < pBVar1);
    }

    // 0x100844bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100844d00, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100844e20, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100844e80, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 112 + *(long*)this;
    }

    // 0x100844fd0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100844fe0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100845850, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData const*) const
    undefined8
    jag::FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 256;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x10084b100, 16 bytes, inline, placed by class name
    // FastPool<graphics::Billboard, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<graphics::Billboard, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 84 + 40;
    }

    // 0x10084b280, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::Billboard, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10084b3c0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::Billboard, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<graphics::Billboard, unsigned long>::FastPool(FastPool<graphics::Billboard, unsigned long>* this,
                                                                ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10084b4e0, 80 bytes, inline, placed by class name
    // FastPool<graphics::Billboard, unsigned long>::clear()
    void FastPool<graphics::Billboard, unsigned long>::clear(FastPool<graphics::Billboard, unsigned long>* this) {
        long lVar1;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                operator[](this, uVar3);
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10084b530, 80 bytes, inline, placed by class name
    // FastPool<graphics::Billboard, unsigned long>::operator[](unsigned long)
    long FastPool<graphics::Billboard, unsigned long>::operator[](FastPool<graphics::Billboard, unsigned long>* this,
                                                                  ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 68 + *(long*)this;
    }

    // 0x10084b640, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::Billboard, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10084b650, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::Billboard, unsigned long>::~FastPool()
    void FastPool<graphics::Billboard, unsigned long>::~FastPool(FastPool<graphics::Billboard, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100850cb0, 96 bytes, inline, placed by class name
    // graphics::ParticleSystem_DE* FastPool<graphics::ParticleSystem_DE, int>::Create<graphics::ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int, bool, bool>(graphics::ModularParticleSystemDrawable&, math::OBB const&, float&, unsigned int&&, bool&&, bool&&)
    ParticleSystem_DE*
    FastPool<graphics::ParticleSystem_DE, int>::Create<graphics::ModularParticleSystemDrawable&, math::OBB_const&,
                                                       float&, unsigned int, bool, bool>(
        FastPool<graphics::ParticleSystem_DE, int>* this, ModularParticleSystemDrawable* param_1, OBB* param_2,
        float* param_3, uint* param_4, bool* param_5, bool* param_6) {
        ParticleSystem_DE* this_00;

        this_00 = (ParticleSystem_DE*)allocate(this);
        graphics::ParticleSystem_DE::ParticleSystem_DE(this_00, param_1, param_2, *param_3, *param_4, *param_5,
                                                       *param_6);
        return this_00;
    }

    // 0x100866030, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::BillboardBatch_DE, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x100866040, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::BillboardBatch_DE, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x10086cb80, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                       unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 96 + 40;
    }

    // 0x100873880, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData const*) const
    undefined8
    jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 80;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100881100, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 816 + 40;
    }

    // 0x100881290, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1008813d0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1008814e0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100881540, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 800 + *(long*)this;
    }

    // 0x100881690, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1008816a0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100884aa0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::BillboardBatch_DE, int>::FastPool(int, int)
    void FastPool<graphics::BillboardBatch_DE, int>::FastPool(FastPool<graphics::BillboardBatch_DE, int>* this,
                                                              int param_1, int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100884bc0, 80 bytes, inline, placed by class name
    // FastPool<graphics::BillboardBatch_DE, int>::clear()
    void FastPool<graphics::BillboardBatch_DE, int>::clear(FastPool<graphics::BillboardBatch_DE, int>* this) {
        int iVar1;
        int iVar2;
        undefined8* puVar3;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (undefined8*)operator[](this, iVar1);
                (**(code**)*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x100884c10, 80 bytes, inline, placed by class name
    // FastPool<graphics::BillboardBatch_DE, int>::operator[](int)
    long FastPool<graphics::BillboardBatch_DE, int>::operator[](FastPool<graphics::BillboardBatch_DE, int>* this,
                                                                int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 128 + *(long*)this;
    }

    // 0x100884c60, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::BillboardBatch_DE, int>::~FastPool()
    void FastPool<graphics::BillboardBatch_DE, int>::~FastPool(FastPool<graphics::BillboardBatch_DE, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100884f80, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData const*) const
    undefined8 jag::FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 800;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100885ba0, 32 bytes, inline, placed by class name
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 784 + 40;
    }

    // 0x100885cb0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100885d00, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::FastPool(
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100885e20, 96 bytes, inline, placed by class name
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::clear()
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::clear(
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this) {
        long lVar1;
        undefined8* puVar2;
        ulong uVar3;
        ulong uVar4;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar4 = 0;
            do {
                puVar2 = (undefined8*)operator[](this, uVar4);
                (**(code**)*puVar2)(puVar2);
                uVar4 = uVar4 + 1;
                uVar3 = size();
            } while (uVar4 < uVar3);
        }
        Reset();
    }

    // 0x100885e80, 80 bytes, inline, placed by class name
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::operator[](unsigned long)
    long FastPool<graphics::BillboardBatchInstance, unsigned long>::operator[](
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 768 + *(long*)this;
    }

    // 0x100885f90, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100885fa0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::BillboardBatchInstance, unsigned long>::~FastPool()
    void FastPool<graphics::BillboardBatchInstance, unsigned long>::~FastPool(
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100887a90, 64 bytes, inline, placed by class name
    // graphics::BillboardBatch_DE* FastPool<graphics::BillboardBatch_DE, int>::Create<float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator> > const*&, graphics::BillboardBatchInstance&>(float&, eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator> > const*&, graphics::BillboardBatchInstance&)
    BillboardBatch_DE* FastPool<graphics::BillboardBatch_DE, int>::Create<
        float&,
        eastl::vector_map<int, graphics::FaceGroupRenderMasks, eastl::less<int>, eastl::allocator,
                          eastl::vector<eastl::pair<int, graphics::FaceGroupRenderMasks>, eastl::allocator>> const*&,
        graphics::BillboardBatchInstance&>(FastPool<graphics::BillboardBatch_DE, int>* this, float* param_1,
                                           vector_map** param_2, BillboardBatchInstance* param_3) {
        BillboardBatch_DE* this_00;

        this_00 = (BillboardBatch_DE*)allocate(this);
        graphics::BillboardBatch_DE::BillboardBatch_DE(this_00, *param_1, *param_2, param_3);
        return this_00;
    }

    // 0x100887cc0, 48 bytes, inline, placed by class name
    // FastPool<graphics::BillboardBatch_DE, int>::is_owner(graphics::BillboardBatch_DE const*) const
    /* FastPool<graphics::SkyBox_DE, int>::is_owner(graphics::SkyBox_DE const*) const */

    undefined8 FastPool<graphics::SkyBox_DE, int>::is_owner(FastPool<graphics::SkyBox_DE, int>* this,
                                                            SkyBox_DE* param_1) {
        SkyBox_DE* pSVar1;

        if (param_1 < *(SkyBox_DE**)this) {
            return 0;
        }
        pSVar1 = *(SkyBox_DE**)this + *(int*)(this + 28);
        return CONCAT71((int7)((ulong)pSVar1 >> 8), param_1 < pSVar1);
    }

    // 0x10089a000, 16 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long
    jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 88 + 40;
    }

    // 0x1008d2f50, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData const*) const
    /* FastPool<graphics::AnimState, unsigned long>::is_owner(graphics::AnimState const*)
   const */

    undefined8
    FastPool<graphics::AnimState, unsigned long>::is_owner(FastPool<graphics::AnimState, unsigned long>* this,
                                                           AnimState* param_1) {
        AnimState* pAVar1;

        if (param_1 < *(AnimState**)this) {
            return 0;
        }
        pAVar1 = (AnimState*)((long)*(AnimState**)this + *(long*)(this + 32) * 160);
        return CONCAT71((int7)((ulong)pAVar1 >> 8), param_1 < pAVar1);
    }

    // 0x1008d7960, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 352 + 40;
    }

    // 0x1008d7af0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1008d7c30, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1008d7d50, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1008d7db0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 336 + *(long*)this;
    }

    // 0x1008d7f70, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1008d7f80, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1008dc820, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1008dc960, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1008dca80, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1008dcae0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 72 + *(long*)this;
    }

    // 0x1008dcc30, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1008dcc40, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::
        ~FastPool(
            FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1008dced0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData const*) const
    undefined8
    jag::FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 72;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1008dd4f0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 336;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1008f6e70, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::GUIAnimationInstance, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x1008f6ef0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::GUIAnimationInstance, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x1008f81f0, 96 bytes, inline, placed by class name
    // graphics::GUIAnimationInstance* FastPool<graphics::GUIAnimationInstance, int>::Create<shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&, unsigned int&, float&, game::Hook>(shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&, unsigned int&, float&, game::Hook&&)
    GUIAnimationInstance* FastPool<graphics::GUIAnimationInstance, int>::Create<
        shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&, unsigned int&,
        float&, game::Hook>(FastPool<graphics::GUIAnimationInstance, int>* this, shared_ptr* param_1,
                            shared_ptr* param_2, float* param_3, float* param_4, uint* param_5, float* param_6,
                            Hook* param_7) {
        GUIAnimationInstance* this_00;

        this_00 = (GUIAnimationInstance*)allocate(this);
        graphics::GUIAnimationInstance::GUIAnimationInstance(this_00, param_1, param_2, *param_3, *param_4, *param_5,
                                                             *param_6, param_7);
        return this_00;
    }

    // 0x1008f8250, 96 bytes, inline, placed by class name
    // graphics::GUIAnimationInstance* FastPool<graphics::GUIAnimationInstance, int>::Create<shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&, unsigned int&, float&>(shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&, unsigned int&, float&)
    GUIAnimationInstance* FastPool<graphics::GUIAnimationInstance, int>::Create<
        shared_ptr<graphics::GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&, unsigned int&,
        float&>(FastPool<graphics::GUIAnimationInstance, int>* this, shared_ptr* param_1, shared_ptr* param_2,
                float* param_3, float* param_4, uint* param_5, float* param_6) {
        GUIAnimationInstance* this_00;

        this_00 = (GUIAnimationInstance*)allocate(this);
        graphics::GUIAnimationInstance::GUIAnimationInstance(this_00, param_1, param_2, *param_3, *param_4, *param_5,
                                                             *param_6);
        return this_00;
    }

    // 0x100907b50, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100907c90, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100907db0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100907e10, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 13728 + *(long*)this;
    }

    // 0x100907f60, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100907f70, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100908210, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 13728;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x1009092b0, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 13744 + 40;
    }

    // 0x10090e820, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::GUIAnimationInstance, int>::~FastPool()
    void FastPool<graphics::GUIAnimationInstance, int>::~FastPool(FastPool<graphics::GUIAnimationInstance, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10090e860, 80 bytes, inline, placed by class name
    // FastPool<graphics::GUIAnimationInstance, int>::clear()
    void FastPool<graphics::GUIAnimationInstance, int>::clear(FastPool<graphics::GUIAnimationInstance, int>* this) {
        GUIAnimationInstance* this_00;
        int iVar1;
        int iVar2;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                this_00 = (GUIAnimationInstance*)operator[](this, iVar1);
                this_00->~GUIAnimationInstance();
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x10090e8b0, 80 bytes, inline, placed by class name
    // FastPool<graphics::GUIAnimationInstance, int>::operator[](int)
    long FastPool<graphics::GUIAnimationInstance, int>::operator[](FastPool<graphics::GUIAnimationInstance, int>* this,
                                                                   int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 368 + *(long*)this;
    }

    // 0x10090e950, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::GUIAnimationInstance, int>::FastPool(int, int)
    void FastPool<graphics::GUIAnimationInstance, int>::FastPool(FastPool<graphics::GUIAnimationInstance, int>* this,
                                                                 int param_1, int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1009110a0, 48 bytes, inline, placed by class name
    // FastPool<graphics::GUIAnimationInstance, int>::is_owner(graphics::GUIAnimationInstance const*) const
    undefined8
    FastPool<graphics::GUIAnimationInstance, int>::is_owner(FastPool<graphics::GUIAnimationInstance, int>* this,
                                                            GUIAnimationInstance* param_1) {
        GUIAnimationInstance* pGVar1;

        if (param_1 < *(GUIAnimationInstance**)this) {
            return 0;
        }
        pGVar1 = (GUIAnimationInstance*)((long)*(GUIAnimationInstance**)this + (long)*(int*)(this + 28) * 368);
        return CONCAT71((int7)((ulong)pGVar1 >> 8), param_1 < pGVar1);
    }

    // 0x10091bd10, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::SkyBox_DE, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x10091bd20, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::SkyBox_DE, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x100922820, 80 bytes, inline, placed by class name
    // graphics::SkyBox_DE* FastPool<graphics::SkyBox_DE, int>::Create<>()
    SkyBox_DE* FastPool<graphics::SkyBox_DE, int>::Create<>(FastPool<graphics::SkyBox_DE, int>* this) {
        SkyBox_DE* this_00;

        this_00 = (SkyBox_DE*)allocate(this);
        this_00->field_0 = (undefined**)0;
        *(undefined8*)&this_00->field_8 = 0;
        *(undefined8*)&this_00->field_16 = 0;
        *(undefined8*)&this_00->field_24 = 0;
        *(undefined8*)&this_00->field_32 = 0;
        *(undefined8*)&this_00->field_40 = 0;
        *(undefined8*)&this_00->field_48 = 0;
        *(undefined8*)&this_00->field_56 = 0;
        *(undefined8*)&this_00->field_64 = 0;
        *(undefined8*)&this_00->field_72 = 0;
        *(undefined8*)&this_00->field_80 = 0;
        *(undefined8*)&this_00->field_88 = 0;
        *(undefined8*)&this_00->field_96 = 0;
        this_00->field_104 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)0;
        *(undefined8*)&this_00->field_112 = 0;
        *(undefined8*)&this_00->field_120 = 0;
        graphics::SkyBox_DE::SkyBox_DE(this_00);
        return this_00;
    }

    // 0x100927070, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 800 + 40;
    }

    // 0x100927230, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100927370, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100927480, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1009274e0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 784 + *(long*)this;
    }

    // 0x100927630, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100927640, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100928300, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::SkyBox_DE, int>::FastPool(int, int)
    void FastPool<graphics::SkyBox_DE, int>::FastPool(FastPool<graphics::SkyBox_DE, int>* this, int param_1,
                                                      int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100928420, 80 bytes, inline, placed by class name
    // FastPool<graphics::SkyBox_DE, int>::clear()
    void FastPool<graphics::SkyBox_DE, int>::clear(FastPool<graphics::SkyBox_DE, int>* this) {
        int iVar1;
        int iVar2;
        undefined8* puVar3;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (undefined8*)operator[](this, iVar1);
                (**(code**)*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x100928470, 80 bytes, inline, placed by class name
    // FastPool<graphics::SkyBox_DE, int>::operator[](int)
    long FastPool<graphics::SkyBox_DE, int>::operator[](FastPool<graphics::SkyBox_DE, int>* this, int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 128 + *(long*)this;
    }

    // 0x1009284c0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::SkyBox_DE, int>::~FastPool()
    void FastPool<graphics::SkyBox_DE, int>::~FastPool(FastPool<graphics::SkyBox_DE, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100928ae0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 784;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x10092fce0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::LightProbe_DE, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x10092fcf0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::LightProbe_DE, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x10093f010, 64 bytes, inline, placed by class name
    // graphics::LightProbe_DE* FastPool<graphics::LightProbe_DE, int>::Create<>()
    LightProbe_DE* FastPool<graphics::LightProbe_DE, int>::Create<>(FastPool<graphics::LightProbe_DE, int>* this) {
        LightProbe_DE* this_00;

        this_00 = (LightProbe_DE*)allocate(this);
        this_00->field_0 = (undefined*)0;
        *(undefined8*)&this_00->field_8 = 0;
        *(undefined8*)&this_00->field_16 = 0;
        *(undefined8*)&this_00->field_24 = 0;
        *(undefined8*)&this_00->field_32 = 0;
        *(undefined8*)&this_00->field_40 = 0;
        *(undefined8*)&this_00->field_48 = 0;
        *(undefined8*)&this_00->field_56 = 0;
        *(undefined8*)&this_00->field_64 = 0;
        *(undefined8*)&this_00->field_72 = 0;
        *(undefined8*)&this_00->field_80 = 0;
        *(undefined8*)&this_00->field_88 = 0;
        *(undefined8*)&this_00->field_96 = 0;
        this_00->field_104 = (PointLightShadows*)0;
        graphics::LightProbe_DE::LightProbe_DE(this_00);
        return this_00;
    }

    // 0x10093f250, 48 bytes, inline, placed by class name
    // FastPool<graphics::LightProbe_DE, int>::is_owner(graphics::LightProbe_DE const*) const
    undefined8 FastPool<graphics::LightProbe_DE, int>::is_owner(FastPool<graphics::LightProbe_DE, int>* this,
                                                                LightProbe_DE* param_1) {
        LightProbe_DE* pLVar1;

        if (param_1 < *(LightProbe_DE**)this) {
            return 0;
        }
        pLVar1 = *(LightProbe_DE**)this + *(int*)(this + 28);
        return CONCAT71((int7)((ulong)pLVar1 >> 8), param_1 < pLVar1);
    }

    // 0x10093f480, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::LightProbe_DE, int>::FastPool(int, int)
    void FastPool<graphics::LightProbe_DE, int>::FastPool(FastPool<graphics::LightProbe_DE, int>* this, int param_1,
                                                          int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10093f5a0, 80 bytes, inline, placed by class name
    // FastPool<graphics::LightProbe_DE, int>::clear()
    void FastPool<graphics::LightProbe_DE, int>::clear(FastPool<graphics::LightProbe_DE, int>* this) {
        int iVar1;
        int iVar2;
        undefined8* puVar3;

        iVar1 = GetValue();
        if (0 < iVar1) {
            iVar1 = 0;
            do {
                puVar3 = (undefined8*)operator[](this, iVar1);
                (**(code**)*puVar3)(puVar3);
                iVar1 = iVar1 + 1;
                iVar2 = GetValue();
            } while (iVar1 < iVar2);
        }
        Reset();
    }

    // 0x10093f5f0, 80 bytes, inline, placed by class name
    // FastPool<graphics::LightProbe_DE, int>::operator[](int)
    long FastPool<graphics::LightProbe_DE, int>::operator[](FastPool<graphics::LightProbe_DE, int>* this, int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 112 + *(long*)this;
    }

    // 0x10093f640, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::LightProbe_DE, int>::~FastPool()
    void FastPool<graphics::LightProbe_DE, int>::~FastPool(FastPool<graphics::LightProbe_DE, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10094bc80, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    /* FastPool<graphics::AnimState, unsigned long>::GetTotalSize(unsigned long) */

    long FastPool<graphics::AnimState, unsigned long>::GetTotalSize(ulong param_1) {
        return param_1 * 176 + 40;
    }

    // 0x10094bdc0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10094be10, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10094bf30, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10094bf90, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 160 + *(long*)this;
    }

    // 0x10094c0e0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10094c0f0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>::
        ~FastPool(
            FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100967e10, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<graphics::AnimState, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100967f50, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<graphics::AnimState, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<graphics::AnimState, unsigned long>::FastPool(FastPool<graphics::AnimState, unsigned long>* this,
                                                                ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100968070, 96 bytes, inline, placed by class name
    // FastPool<graphics::AnimState, unsigned long>::clear()
    void FastPool<graphics::AnimState, unsigned long>::clear(FastPool<graphics::AnimState, unsigned long>* this) {
        long lVar1;
        AnimState* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (AnimState*)operator[](this, uVar3);
                this_00->~AnimState();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1009680d0, 80 bytes, inline, placed by class name
    // FastPool<graphics::AnimState, unsigned long>::operator[](unsigned long)
    long FastPool<graphics::AnimState, unsigned long>::operator[](FastPool<graphics::AnimState, unsigned long>* this,
                                                                  ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 160 + *(long*)this;
    }

    // 0x1009681e0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<graphics::AnimState, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1009681f0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<graphics::AnimState, unsigned long>::~FastPool()
    void FastPool<graphics::AnimState, unsigned long>::~FastPool(FastPool<graphics::AnimState, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100993a40, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    ulong jag::FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 320 | 40;
    }

    // 0x100993c00, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100993d40, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100993e60, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100993ec0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 304 + *(long*)this;
    }

    // 0x100994090, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1009940a0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100995b20, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 184 + 40;
    }

    // 0x100995c30, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100995c80, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100995da0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100995e00, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 168 + *(long*)this;
    }

    // 0x100996020, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100996030, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100996620, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::is_owner(MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData const*) const
    undefined8 FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>::is_owner(
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this,
        RefCounterAndData* param_1) {
        RefCounterAndData* pRVar1;

        if (param_1 < *(RefCounterAndData**)this) {
            return 0;
        }
        pRVar1 = *(RefCounterAndData**)this + *(long*)(this + 32) * 304;
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100996d80, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100996ec0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100996fe0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100997040, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 96 + *(long*)this;
    }

    // 0x1009971d0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1009971e0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100999ae0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100999b30, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100999c50, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100999cb0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 232 + *(long*)this;
    }

    // 0x100999e00, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100999e10, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10099ba70, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::begin()
    /* FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned
   long>::begin() */

    undefined1[16] FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::begin(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this) {
        undefined1 auVar1[16];
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_18[16];

        eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
            local_18, (hash_node*)this, (hash_node**)0);
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

    // 0x10099baa0, 48 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::end()
    /* FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned
   long>::end() */

    undefined1[16] FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::end(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this) {
        undefined1 auVar1[16];
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_18[16];

        eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
            local_18, (hash_node*)this, *(hash_node***)(this + 24));
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

    // 0x10099bc50, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10099bca0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void
    jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10099bdc0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10099be20, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 80 + *(long*)this;
    }

    // 0x10099bf70, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10099bf80, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::
        ~FastPool(
            FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10099c290, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10099c2e0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10099c3f0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10099c450, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 976 + *(long*)this;
    }

    // 0x10099c5a0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10099c5b0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10099ded0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10099e010, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10099e130, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10099e190, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long
    jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 112 + *(long*)this;
    }

    // 0x10099e2e0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10099e2f0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x10099ef40, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 200 + 40;
    }

    // 0x10099f050, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10099f0a0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x10099f1c0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x10099f220, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 184 + *(long*)this;
    }

    // 0x10099f3c0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x10099f3d0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1009a2500, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1009a2640, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1009a2760, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1009a27c0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 160 + *(long*)this;
    }

    // 0x1009a2910, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1009a2920, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x1009a5200, 32 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::GetTotalSize(unsigned long)
    long jag::FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>::GetTotalSize(
        ulong param_1) {
        return param_1 * 3832 + 40;
    }

    // 0x1009faa40, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1009fab80, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>* this, ulong param_1,
        ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x1009faca0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::clear()
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x1009fad00, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 104 + *(long*)this;
    }

    // 0x1009fae50, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x1009fae60, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::~FastPool()
    void FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100b98be0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100b98d20, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>::
        FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                          unsigned long>* this,
                 ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100b98e40, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>::
        clear(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100b98ea0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>::
    operator[](FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 64 + *(long*)this;
    }

    // 0x100b98fb0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100b98fc0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                       unsigned long>::
        ~FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                           unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100b99f90, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100b9a0d0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>::
        FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                          unsigned long>* this,
                 ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100b9a1f0, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>::
        clear(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100b9a250, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>::
    operator[](FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                        unsigned long>* this,
               ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 64 + *(long*)this;
    }

    // 0x100b9a360, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100b9a370, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                       unsigned long>::
        ~FastPool(FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                           unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100c0b600, 48 bytes, inline, placed by class name
    // render::ComputePipelineState* FastPool<render::ComputePipelineState, unsigned long>::Create<render::ComputePipelineState const&>(render::ComputePipelineState const&)
    /* render::ComputePipelineState* FastPool<render::ComputePipelineState, unsigned
   long>::Create<render::ComputePipelineState&>(render::ComputePipelineState&) */

    ComputePipelineState* FastPool<render::ComputePipelineState, unsigned long>::Create<render::ComputePipelineState&>(
        FastPool<render::ComputePipelineState, unsigned long>* this, ComputePipelineState* param_1) {
        ComputePipelineState* this_00;

        this_00 = (ComputePipelineState*)allocate(this);
        render::ComputePipelineState::ComputePipelineState(this_00, param_1);
        return this_00;
    }

    // 0x100c0b630, 48 bytes, inline, placed by class name
    // FastPool<render::ComputePipelineState, unsigned long>::is_owner(render::ComputePipelineState const*) const
    undefined8 FastPool<render::ComputePipelineState, unsigned long>::is_owner(
        FastPool<render::ComputePipelineState, unsigned long>* this, ComputePipelineState* param_1) {
        ComputePipelineState* pCVar1;

        if (param_1 < *(ComputePipelineState**)this) {
            return 0;
        }
        pCVar1 = *(ComputePipelineState**)this + *(long*)(this + 32);
        return CONCAT71((int7)((ulong)pCVar1 >> 8), param_1 < pCVar1);
    }

    // 0x100c0b7c0, 32 bytes, inline, placed by class name
    // render::ComputePipelineState* FastPool<render::ComputePipelineState, unsigned long>::Create<>()
    ComputePipelineState* FastPool<render::ComputePipelineState, unsigned long>::Create<>(
        FastPool<render::ComputePipelineState, unsigned long>* this) {
        ComputePipelineState* this_00;

        this_00 = (ComputePipelineState*)allocate(this);
        render::ComputePipelineState::ComputePipelineState(this_00);
        return this_00;
    }

    // 0x100c0b7e0, 48 bytes, inline, placed by class name
    // render::InputAssemblerState* FastPool<render::InputAssemblerState, unsigned long>::Create<render::InputAssemblerState const&>(render::InputAssemblerState const&)
    /* render::InputAssemblerState* FastPool<render::InputAssemblerState, unsigned
   long>::Create<render::InputAssemblerState&>(render::InputAssemblerState&) */

    InputAssemblerState* FastPool<render::InputAssemblerState, unsigned long>::Create<render::InputAssemblerState&>(
        FastPool<render::InputAssemblerState, unsigned long>* this, InputAssemblerState* param_1) {
        InputAssemblerState* this_00;

        this_00 = (InputAssemblerState*)allocate(this);
        render::InputAssemblerState::InputAssemblerState(this_00, param_1);
        return this_00;
    }

    // 0x100c0b810, 48 bytes, inline, placed by class name
    // render::RenderPipelineState* FastPool<render::RenderPipelineState, unsigned long>::Create<render::RenderPipelineState const&>(render::RenderPipelineState const&)
    /* render::RenderPipelineState* FastPool<render::RenderPipelineState, unsigned
   long>::Create<render::RenderPipelineState&>(render::RenderPipelineState&) */

    RenderPipelineState* FastPool<render::RenderPipelineState, unsigned long>::Create<render::RenderPipelineState&>(
        FastPool<render::RenderPipelineState, unsigned long>* this, RenderPipelineState* param_1) {
        RenderPipelineState* this_00;

        this_00 = (RenderPipelineState*)allocate(this);
        render::RenderPipelineState::RenderPipelineState(this_00, param_1);
        return this_00;
    }

    // 0x100c0b840, 48 bytes, inline, placed by class name
    // render::OutputMergerState* FastPool<render::OutputMergerState, unsigned long>::Create<render::OutputMergerState const&>(render::OutputMergerState const&)
    /* render::OutputMergerState* FastPool<render::OutputMergerState, unsigned
   long>::Create<render::OutputMergerState&>(render::OutputMergerState&) */

    OutputMergerState* FastPool<render::OutputMergerState, unsigned long>::Create<render::OutputMergerState&>(
        FastPool<render::OutputMergerState, unsigned long>* this, OutputMergerState* param_1) {
        OutputMergerState* this_00;

        this_00 = (OutputMergerState*)allocate(this);
        render::OutputMergerState::OutputMergerState(this_00, param_1);
        return this_00;
    }

    // 0x100c0b9d0, 48 bytes, inline, placed by class name
    // FastPool<render::RenderPipelineState, unsigned long>::is_owner(render::RenderPipelineState const*) const
    undefined8 FastPool<render::RenderPipelineState, unsigned long>::is_owner(
        FastPool<render::RenderPipelineState, unsigned long>* this, RenderPipelineState* param_1) {
        RenderPipelineState* pRVar1;

        if (param_1 < *(RenderPipelineState**)this) {
            return 0;
        }
        pRVar1 = (RenderPipelineState*)((long)*(RenderPipelineState**)this + *(long*)(this + 32) * 1104);
        return CONCAT71((int7)((ulong)pRVar1 >> 8), param_1 < pRVar1);
    }

    // 0x100c0bb60, 48 bytes, inline, placed by class name
    // FastPool<render::OutputMergerState, unsigned long>::is_owner(render::OutputMergerState const*) const
    undefined8 FastPool<render::OutputMergerState, unsigned long>::is_owner(
        FastPool<render::OutputMergerState, unsigned long>* this, OutputMergerState* param_1) {
        OutputMergerState* pOVar1;

        if (param_1 < *(OutputMergerState**)this) {
            return 0;
        }
        pOVar1 = *(OutputMergerState**)this + *(long*)(this + 32);
        return CONCAT71((int7)((ulong)pOVar1 >> 8), param_1 < pOVar1);
    }

    // 0x100c0bcf0, 32 bytes, inline, placed by class name
    // render::InputAssemblerState* FastPool<render::InputAssemblerState, unsigned long>::Create<>()
    InputAssemblerState* FastPool<render::InputAssemblerState, unsigned long>::Create<>(
        FastPool<render::InputAssemblerState, unsigned long>* this) {
        InputAssemblerState* this_00;

        this_00 = (InputAssemblerState*)allocate(this);
        render::InputAssemblerState::InputAssemblerState(this_00);
        return this_00;
    }

    // 0x100c0bd10, 32 bytes, inline, placed by class name
    // render::RenderPipelineState* FastPool<render::RenderPipelineState, unsigned long>::Create<>()
    RenderPipelineState* FastPool<render::RenderPipelineState, unsigned long>::Create<>(
        FastPool<render::RenderPipelineState, unsigned long>* this) {
        RenderPipelineState* this_00;

        this_00 = (RenderPipelineState*)allocate(this);
        render::RenderPipelineState::RenderPipelineState(this_00);
        return this_00;
    }

    // 0x100c0bd30, 32 bytes, inline, placed by class name
    // render::OutputMergerState* FastPool<render::OutputMergerState, unsigned long>::Create<>()
    OutputMergerState* FastPool<render::OutputMergerState, unsigned long>::Create<>(
        FastPool<render::OutputMergerState, unsigned long>* this) {
        OutputMergerState* this_00;

        this_00 = (OutputMergerState*)allocate(this);
        render::OutputMergerState::OutputMergerState(this_00);
        return this_00;
    }

    // 0x100c322a0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<render::OutputMergerState, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100c322b0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<render::OutputMergerState, unsigned long>::~FastPool()
    void FastPool<render::OutputMergerState, unsigned long>::~FastPool(
        FastPool<render::OutputMergerState, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100c322f0, 96 bytes, inline, placed by class name
    // FastPool<render::OutputMergerState, unsigned long>::clear()
    void FastPool<render::OutputMergerState, unsigned long>::clear(
        FastPool<render::OutputMergerState, unsigned long>* this) {
        long lVar1;
        OutputMergerState* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (OutputMergerState*)operator[](this, uVar3);
                this_00->~OutputMergerState();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100c32350, 80 bytes, inline, placed by class name
    // FastPool<render::OutputMergerState, unsigned long>::operator[](unsigned long)
    long FastPool<render::OutputMergerState, unsigned long>::operator[](
        FastPool<render::OutputMergerState, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 208 + *(long*)this;
    }

    // 0x100c32550, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<render::ComputePipelineState, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100c32560, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<render::ComputePipelineState, unsigned long>::~FastPool()
    void FastPool<render::ComputePipelineState, unsigned long>::~FastPool(
        FastPool<render::ComputePipelineState, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100c325a0, 96 bytes, inline, placed by class name
    // FastPool<render::ComputePipelineState, unsigned long>::clear()
    void FastPool<render::ComputePipelineState, unsigned long>::clear(
        FastPool<render::ComputePipelineState, unsigned long>* this) {
        long lVar1;
        ComputePipelineState* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (ComputePipelineState*)operator[](this, uVar3);
                this_00->~ComputePipelineState();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100c32600, 80 bytes, inline, placed by class name
    // FastPool<render::ComputePipelineState, unsigned long>::operator[](unsigned long)
    long FastPool<render::ComputePipelineState, unsigned long>::operator[](
        FastPool<render::ComputePipelineState, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 640 + *(long*)this;
    }

    // 0x100c32700, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<render::RenderPipelineState, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100c32710, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<render::RenderPipelineState, unsigned long>::~FastPool()
    void FastPool<render::RenderPipelineState, unsigned long>::~FastPool(
        FastPool<render::RenderPipelineState, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100c32750, 96 bytes, inline, placed by class name
    // FastPool<render::RenderPipelineState, unsigned long>::clear()
    void FastPool<render::RenderPipelineState, unsigned long>::clear(
        FastPool<render::RenderPipelineState, unsigned long>* this) {
        long lVar1;
        RenderPipelineState* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RenderPipelineState*)operator[](this, uVar3);
                this_00->~RenderPipelineState();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100c327b0, 80 bytes, inline, placed by class name
    // FastPool<render::RenderPipelineState, unsigned long>::operator[](unsigned long)
    long FastPool<render::RenderPipelineState, unsigned long>::operator[](
        FastPool<render::RenderPipelineState, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 1104 + *(long*)this;
    }

    // 0x100c328b0, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<render::InputAssemblerState, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100c328c0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<render::InputAssemblerState, unsigned long>::~FastPool()
    void FastPool<render::InputAssemblerState, unsigned long>::~FastPool(
        FastPool<render::InputAssemblerState, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100c32900, 96 bytes, inline, placed by class name
    // FastPool<render::InputAssemblerState, unsigned long>::clear()
    void FastPool<render::InputAssemblerState, unsigned long>::clear(
        FastPool<render::InputAssemblerState, unsigned long>* this) {
        long lVar1;
        InputAssemblerState* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (InputAssemblerState*)operator[](this, uVar3);
                this_00->~InputAssemblerState();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100c32960, 80 bytes, inline, placed by class name
    // FastPool<render::InputAssemblerState, unsigned long>::operator[](unsigned long)
    long FastPool<render::InputAssemblerState, unsigned long>::operator[](
        FastPool<render::InputAssemblerState, unsigned long>* this, ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 192 + *(long*)this;
    }

    // 0x100c346e0, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c34730, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::FastPool(unsigned long, unsigned long)
    void jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::FastPool(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100c34850, 96 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::clear()
    void jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::clear(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        RefCounterAndData* this_00;
        ulong uVar2;
        ulong uVar3;

        lVar1 = size();
        if (lVar1 != 0) {
            uVar3 = 0;
            do {
                this_00 = (RefCounterAndData*)operator[](this, uVar3);
                this_00->~RefCounterAndData();
                uVar3 = uVar3 + 1;
                uVar2 = size();
            } while (uVar3 < uVar2);
        }
        Reset();
    }

    // 0x100c348b0, 80 bytes, inline, placed by class name
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::operator[](unsigned long)
    long jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::operator[](
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this,
        ulong param_1) {
        if (*(ulong*)(this + 32) <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return *(long*)(*(long*)(this + 8) + param_1 * 8) * 40 + *(long*)this;
    }

    // 0x100c34a00, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::~FastPool(): jumps straight to the base-object destructor

    // 0x100c34a10, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::~FastPool()
    void jag::FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>::~FastPool(
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100c3ce50, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<render::InputAssemblerState, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c3cf90, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<render::InputAssemblerState, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<render::InputAssemblerState, unsigned long>::FastPool(
        FastPool<render::InputAssemblerState, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100c3d260, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<render::RenderPipelineState, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c3d3a0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<render::RenderPipelineState, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<render::RenderPipelineState, unsigned long>::FastPool(
        FastPool<render::RenderPipelineState, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100c3d670, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<render::ComputePipelineState, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c3d7b0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<render::ComputePipelineState, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<render::ComputePipelineState, unsigned long>::FastPool(
        FastPool<render::ComputePipelineState, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100c3da80, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<render::OutputMergerState, unsigned long>::FastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c3dbc0, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<render::OutputMergerState, unsigned long>::FastPool(unsigned long, unsigned long)
    void FastPool<render::OutputMergerState, unsigned long>::FastPool(
        FastPool<render::OutputMergerState, unsigned long>* this, ulong param_1, ulong param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 32) = 0;
        resize(this, param_1, param_2);
    }

    // 0x100c7fa80, 16 bytes, complete-object constructor, inline, placed by class name
    // FastPool<game::console::Snow::SnowFlake, int>::FastPool(int, int): jumps straight to the base-object constructor

    // 0x100c7fa90, 16 bytes, complete-object destructor, inline, placed by class name
    // FastPool<game::console::Snow::SnowFlake, int>::~FastPool(): jumps straight to the base-object destructor

    // 0x100c7ffc0, 80 bytes, inline, placed by class name
    // FastPool<game::console::Snow::SnowFlake, int>::operator[](int)
    long FastPool<game::console::Snow::SnowFlake, int>::operator[](FastPool<game::console::Snow::SnowFlake, int>* this,
                                                                   int param_1) {
        if ((param_1 < 0) || (*(int*)(this + 28) <= param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("allocatedEntityIndex >= 0 && allocatedEntityIndex < m_capacity",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 135,
                      (char*)0);
        }
        return (long)*(int*)(*(long*)(this + 8) + (long)param_1 * 4) * 32 + *(long*)this;
    }

    // 0x100c80130, 64 bytes, inline, placed by class name
    // game::console::Snow::SnowFlake* FastPool<game::console::Snow::SnowFlake, int>::Create<int, int, float>(int&&, int&&, float&&)
    SnowFlake* FastPool<game::console::Snow::SnowFlake, int>::Create<int, int, float>(
        FastPool<game::console::Snow::SnowFlake, int>* this, int* param_1, int* param_2, float* param_3) {
        SnowFlake* this_00;

        this_00 = (SnowFlake*)allocate(this);
        game::console::Snow::SnowFlake::SnowFlake(this_00, *param_1, *param_2, *param_3);
        return this_00;
    }

    // 0x100c80170, 64 bytes, inline, placed by class name
    // game::console::Snow::SnowFlake* FastPool<game::console::Snow::SnowFlake, int>::Create<int, int>(int&&, int&&)
    SnowFlake*
    FastPool<game::console::Snow::SnowFlake, int>::Create<int, int>(FastPool<game::console::Snow::SnowFlake, int>* this,
                                                                    int* param_1, int* param_2) {
        SnowFlake* this_00;

        this_00 = (SnowFlake*)allocate(this);
        game::console::Snow::SnowFlake::SnowFlake(this_00, *param_1, *param_2, 0.0);
        return this_00;
    }

    // 0x100c91ff0, 64 bytes, base-object destructor, inline, placed by class name
    // FastPool<game::console::Snow::SnowFlake, int>::~FastPool()
    void FastPool<game::console::Snow::SnowFlake, int>::~FastPool(FastPool<game::console::Snow::SnowFlake, int>* this) {
        clear(this);
        safe_delete_array<float>((float**)(this + 16));
        safe_delete_array<float>((float**)(this + 8));
        aligned_dealloc(*(void**)this);
        *(undefined8*)this = 0;
    }

    // 0x100c92030, 80 bytes, inline, placed by class name
    // FastPool<game::console::Snow::SnowFlake, int>::clear()
    void FastPool<game::console::Snow::SnowFlake, int>::clear(FastPool<game::console::Snow::SnowFlake, int>* this) {
        int iVar1;
        int iVar2;

        iVar1 = GetValue();
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

    // 0x100c92080, 32 bytes, base-object constructor, inline, placed by class name
    // FastPool<game::console::Snow::SnowFlake, int>::FastPool(int, int)
    void FastPool<game::console::Snow::SnowFlake, int>::FastPool(FastPool<game::console::Snow::SnowFlake, int>* this,
                                                                 int param_1, int param_2) {
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        resize(this, param_1, param_2);
    }

} // namespace jag
