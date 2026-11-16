// libs/jtl/pool/VectorFastPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 110 instantiations, e.g. <MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>, <MakeSharedPool<NPCEntity, 64>::RefCounterAndData>, <MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>
    class VectorFastPool {
    public:
        allocate();
        void deallocate(MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData const*);
        long size() const;
        VectorFastPool(unsigned long, unsigned long);
        ~VectorFastPool();
        long capacity() const;
        void
        deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData const*);
        void deallocate(graphics::GeometryBatchInstance const*);
        void deallocate(MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::Model, 3072>::RefCounterAndData const*);
        void deallocate(SpotAnimation const*);
        void deallocate(MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::Location, 256>::RefCounterAndData const*);
        void deallocate(game::EnvironmentLoader const*);
        void deallocate(game::Terrain const*);
        void deallocate(MakeSharedPool<game::LightSource, 1024>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::MapSquare, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::VarType, 5504>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::Animation, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::SeqType, 96>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::ObjType, 96>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::NPCType, 216>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::LocType, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<ui::Interface, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::ParamType, 640>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::DBRowType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::DBTableType, 4>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::InvType, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BASType, 96>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::IDKType, 32>::RefCounterAndData const*);
        void deallocate(game::MapElementType::Polygon const*);
        void deallocate(MakeSharedPool<game::MapElementType, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::MSIType, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::QuestType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::LightType, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::WaterType, 16>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::CursorType, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::EnumType, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::StructType, 1024>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::AchievementType, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData const*);
        void deallocate(graphics::AnimationParameters const*);
        void deallocate(MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData const*);
        void deallocate(graphics::BillboardBatchInstance const*);
        void deallocate(MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData const*);
        void deallocate(graphics::AnimState const*);
        void deallocate(MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData const*);
        void
        deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData const*);
        void deallocate(MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData const*);
        void Prefetch(unsigned long, unsigned long) const;
        render::ComputePipelineState* Create<render::ComputePipelineState const&>(render::ComputePipelineState const&);
        void Destroy(render::ComputePipelineState*);
        render::ComputePipelineState* Create<>();
        ulong is_owner(render::ComputePipelineState const*) const;
        render::InputAssemblerState* Create<render::InputAssemblerState const&>(render::InputAssemblerState const&);
        render::RenderPipelineState* Create<render::RenderPipelineState const&>(render::RenderPipelineState const&);
        render::OutputMergerState* Create<render::OutputMergerState const&>(render::OutputMergerState const&);
        void Destroy(render::InputAssemblerState*);
        void Destroy(render::RenderPipelineState*);
        void Destroy(render::OutputMergerState*);
        render::InputAssemblerState* Create<>();
        render::RenderPipelineState* Create<>();
        render::OutputMergerState* Create<>();
        ulong is_owner(render::InputAssemblerState const*) const;
        ulong is_owner(render::RenderPipelineState const*) const;
        ulong is_owner(render::OutputMergerState const*) const;
        void clear();
    };

    // 0x100055000, 192 bytes, inline, placed by class name and debug map
    // VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10005507b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10005507b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1000556a0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::deallocate(MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_00;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                           unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10019f160, 96 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData>::size() const
    /* VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel,
   64>::RefCounterAndData>::size() const */

    long jag::VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::size(
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this) {
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        long lVar2;
        long lVar3;

        this_00 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        if (this_00 == phVar1) {
            lVar3 = 0;
        } else {
            lVar3 = 0;
            do {
                lVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(this_00);
                lVar3 = lVar3 + lVar2;
                this_00 = this_00 + 40;
            } while (this_00 != phVar1);
        }
        return lVar3;
    }

    // 0x10019f1c0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData>::allocate()
    undefined8
    jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData>::
        allocate(VectorFastPool<
                 MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData>*
            this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData>*
            local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10019f23b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                                    16192>::RefCounterAndData,
                                                     unsigned long>,
                                            eastl::allocator>::emplace_back<unsigned long,
                                                                            unsigned long&>(
                        (vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                        16192>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10019f23b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10019f340, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10019f350, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10019f390, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void
    jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData>::
        VectorFastPool(VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                     16192>::RefCounterAndData>* this,
                       ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                     unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<
            FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                     unsigned long>,
            eastl::allocator>::emplace_back<unsigned long,
                                            unsigned long&>(
            (vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10019fb60, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData>::~VectorFastPool()
    void
        jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData>::
            ~VectorFastPool(VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                          16192>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10019fbd0, 96 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData>::capacity() const
    /* VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel,
   64>::RefCounterAndData>::capacity() const */

    long
    jag::VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::capacity(
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this) {
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_00;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* pFVar1;
        long lVar2;
        long lVar3;

        this_00 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>*)HeapBeginPtr();
        pFVar1 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                           unsigned long>*)end();
        if (this_00 == pFVar1) {
            lVar3 = 0;
        } else {
            lVar3 = 0;
            do {
                lVar2 =
                    FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>::capacity(this_00);
                lVar3 = lVar3 + lVar2;
                this_00 = this_00 + 40;
            } while (this_00 != pFVar1);
        }
        return lVar3;
    }

    // 0x10019fd40, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData>::deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 16192>::RefCounterAndData const*)
    void
    jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData>::
        deallocate(VectorFastPool<
                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData>* this,
                   RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_00;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                           unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1001e5020, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::allocate()
    undefined8
    jag::VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1001e509b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = capacity(local_38);
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                                 unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                                     unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1001e509b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1001e5130, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1001e5140, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1001e5150, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::
        VectorFastPool(
            VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this,
            ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<
            FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>,
            eastl::allocator>::emplace_back<unsigned long,
                                            unsigned long&>(
            (vector<FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                             unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1001e59b0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::
        ~VectorFastPool(
            VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1001e6bc0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::deallocate(MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData const*)
    void
    jag::VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>*
            this_00;
        FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>*
            pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>*)
                HeapBeginPtr();
        pFVar2 =
            (FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData, unsigned long>*)
                end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1001ede50, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1001edecb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1001edecb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1001edf50, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1001edf60, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1001edf70, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1001ee550, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1001ee6e0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::deallocate(MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1002550a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1002550b0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1002550f0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100255590, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100338d70, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100338d80, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100338d90, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<
        MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData>::
        VectorFastPool(VectorFastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet,
                                                     128>::RefCounterAndData>* this,
                       ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                     unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<
            FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                     unsigned long>,
            eastl::allocator>::emplace_back<unsigned long&,
                                            unsigned long&>(
            (vector<
                FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                         unsigned long>,
                eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100339380, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<
        MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData>::
        ~VectorFastPool(VectorFastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet,
                                                      128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1003883c0, 128 bytes, inline, placed by class name
    // VectorFastPool<graphics::GeometryBatchInstance>::deallocate(graphics::GeometryBatchInstance const*)
    void VectorFastPool<graphics::GeometryBatchInstance>::deallocate(GeometryBatchInstance* param_1) {
        FastPool<graphics::GeometryBatchInstance, unsigned long>* this_00;
        FastPool<graphics::GeometryBatchInstance, unsigned long>* pFVar2;

        this_00 = (FastPool<graphics::GeometryBatchInstance, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<graphics::GeometryBatchInstance, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100388450, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<graphics::GeometryBatchInstance>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100388460, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<graphics::GeometryBatchInstance>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1003884a0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<graphics::GeometryBatchInstance>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<graphics::GeometryBatchInstance>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<graphics::GeometryBatchInstance, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<graphics::GeometryBatchInstance, unsigned long>, eastl::allocator>::emplace_back<
            unsigned long, unsigned long&>(
            (vector<FastPool<graphics::GeometryBatchInstance, unsigned long>, eastl::allocator>*)this, &local_28,
            &local_20);
    }

    // 0x100388a40, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<graphics::GeometryBatchInstance>::~VectorFastPool()
    void VectorFastPool<graphics::GeometryBatchInstance>::~VectorFastPool() {
        ~vector();
    }

    // 0x10038cca0, 192 bytes, inline, placed by class name
    // VectorFastPool<graphics::GeometryBatchInstance>::allocate()
    undefined8 VectorFastPool<graphics::GeometryBatchInstance>::allocate() {
        VectorFastPool<graphics::GeometryBatchInstance>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<graphics::GeometryBatchInstance>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10038cd1b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<graphics::GeometryBatchInstance, unsigned long>,
                                            eastl::allocator>::emplace_back<unsigned long,
                                                                            unsigned long&>(
                        (vector<FastPool<graphics::GeometryBatchInstance, unsigned long>, eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10038cd1b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1003e2d00, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1003e2d7b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1003e2d7b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1003e30d0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::deallocate(MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1003e3980, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1003e39fb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1003e39fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1003e3ad0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1003e3ae0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1003e3af0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1003e4100, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1003e4e30, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::deallocate(MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100403420, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10040349b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long&,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10040349b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100403800, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::Model, 3072>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100406320, 128 bytes, inline, placed by class name
    // VectorFastPool<SpotAnimation>::deallocate(SpotAnimation const*)
    void VectorFastPool<SpotAnimation>::deallocate(SpotAnimation* param_1) {
        FastPool<SpotAnimation, unsigned long>* this_00;
        FastPool<SpotAnimation, unsigned long>* pFVar2;

        this_00 = (FastPool<SpotAnimation, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<SpotAnimation, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004063a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<SpotAnimation>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004063b0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<SpotAnimation>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004063c0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<SpotAnimation>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<SpotAnimation>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<SpotAnimation, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<SpotAnimation, unsigned long>, eastl::allocator>::emplace_back<unsigned long&,
                                                                                              unsigned long&>(
            (vector<FastPool<SpotAnimation, unsigned long>, eastl::allocator>*)this, &local_28, &local_20);
    }

    // 0x100406960, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<SpotAnimation>::~VectorFastPool()
    void VectorFastPool<SpotAnimation>::~VectorFastPool() {
        ~vector();
    }

    // 0x10040a2a0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10040a31b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10040a31b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10040a650, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10041f0b0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10041f12b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long&,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10041f12b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10041f640, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::deallocate(MakeSharedPool<game::Location, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100420de0, 128 bytes, inline, placed by class name
    // VectorFastPool<game::EnvironmentLoader>::deallocate(game::EnvironmentLoader const*)
    void VectorFastPool<game::EnvironmentLoader>::deallocate(EnvironmentLoader* param_1) {
        FastPool<game::EnvironmentLoader, unsigned long>* this_00;
        FastPool<game::EnvironmentLoader, unsigned long>* pFVar2;

        this_00 = (FastPool<game::EnvironmentLoader, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<game::EnvironmentLoader, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100420e90, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<game::EnvironmentLoader>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100420ea0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<game::EnvironmentLoader>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100420eb0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<game::EnvironmentLoader>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<game::EnvironmentLoader>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<game::EnvironmentLoader, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<game::EnvironmentLoader, unsigned long>, eastl::allocator>::emplace_back<unsigned long,
                                                                                                        unsigned long&>(
            (vector<FastPool<game::EnvironmentLoader, unsigned long>, eastl::allocator>*)this, &local_28, &local_20);
    }

    // 0x100421460, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<game::EnvironmentLoader>::~VectorFastPool()
    void VectorFastPool<game::EnvironmentLoader>::~VectorFastPool() {
        ~vector();
    }

    // 0x100421760, 128 bytes, inline, placed by class name
    // VectorFastPool<game::Terrain>::deallocate(game::Terrain const*)
    void VectorFastPool<game::Terrain>::deallocate(Terrain* param_1) {
        FastPool<game::Terrain, unsigned long>* this_00;
        FastPool<game::Terrain, unsigned long>* pFVar2;

        this_00 = (FastPool<game::Terrain, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<game::Terrain, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004217e0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<game::Terrain>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004217f0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<game::Terrain>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100421800, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<game::Terrain>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<game::Terrain>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<game::Terrain, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<game::Terrain, unsigned long>, eastl::allocator>::emplace_back<unsigned long,
                                                                                              unsigned long&>(
            (vector<FastPool<game::Terrain, unsigned long>, eastl::allocator>*)this, &local_28, &local_20);
    }

    // 0x100421da0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<game::Terrain>::~VectorFastPool()
    void VectorFastPool<game::Terrain>::~VectorFastPool() {
        ~vector();
    }

    // 0x100421fb0, 192 bytes, inline, placed by class name
    // VectorFastPool<game::EnvironmentLoader>::allocate()
    undefined8 VectorFastPool<game::EnvironmentLoader>::allocate() {
        VectorFastPool<game::EnvironmentLoader>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<game::EnvironmentLoader>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10042202b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<game::EnvironmentLoader, unsigned long>, eastl::allocator>::emplace_back<
                            unsigned long, unsigned long&>(
                            (vector<FastPool<game::EnvironmentLoader, unsigned long>, eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10042202b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100422230, 192 bytes, inline, placed by class name
    // VectorFastPool<game::Terrain>::allocate()
    undefined8 VectorFastPool<game::Terrain>::allocate() {
        VectorFastPool<game::Terrain>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<game::Terrain>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1004222ab:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<game::Terrain, unsigned long>, eastl::allocator>::emplace_back<
                        unsigned long, unsigned long&>(
                        (vector<FastPool<game::Terrain, unsigned long>, eastl::allocator>*)this_00, &local_48,
                        (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004222ab;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100422c00, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100422c7b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100422c7b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100422fb0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::deallocate(MakeSharedPool<game::LightSource, 1024>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100424fc0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100424fd0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100424fe0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>, eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1004255c0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100434ee0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100434ef0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100434f30, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1004353a0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100437900, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100437910, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100437920, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100437d90, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100438180, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1004381fb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004381fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004382a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004382b0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004382c0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100438900, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004395f0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::deallocate(MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10044e8f0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10044e900, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10044e910, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10044eef0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100451100, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10045117b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10045117b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100451210, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100451220, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100451230, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100451a30, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004528c0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::deallocate(MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100454c80, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100454c90, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100454ca0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100455250, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100455d70, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100455deb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100455deb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100455e70, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100455e80, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100455e90, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100456480, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004565c0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::MapSquare, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10045c150, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10045c160, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10045c170, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10045c750, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10045cb50, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10045cbcb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10045cbcb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10045cd50, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10045cd60, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10045cd70, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10045d350, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10045d490, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::deallocate(MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100486b70, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100486beb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100486beb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100486d50, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100486d60, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100486d70, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100487350, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100487490, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::deallocate(MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10049af90, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10049afa0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10049afe0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10049b690, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10049c8a0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10049c91b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10049c91b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10049c9a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10049c9b0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10049c9c0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10049cfd0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10049d150, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::deallocate(MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_00;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                           unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10049dd90, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10049de0b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10049de0b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10049e010, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::deallocate(MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004ca580, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004ca590, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004ca5d0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1004cabc0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004cb8a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004cb8b0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004cb8c0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1004cbeb0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004d7b90, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004d7ba0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004d7be0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1004d81d0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004d9010, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1004d908b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004d908b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004d9350, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::deallocate(MakeSharedPool<game::VarType, 5504>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>*)
                HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>*)
            end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004e37c0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004e37d0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004e3810, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1004e3e50, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004e67e0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1004e685b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004e685b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004e6be0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::Animation, 512>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004eb2a0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1004eb31b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004eb31b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004eb430, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004eb440, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004eb450, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>, eastl::allocator>::
            emplace_back<unsigned long, unsigned long&>(
                (vector<FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>,
                        eastl::allocator>*)this,
                &local_28, &local_20);
    }

    // 0x1004eba40, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004ecd20, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::deallocate(MakeSharedPool<game::SeqType, 96>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004f06a0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1004f071b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004f071b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004f0ab0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004f0f00, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1004f0f7b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004f0f7b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004f1310, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004f87a0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1004f881b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004f881b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004f8970, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004f8980, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004f89c0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>, eastl::allocator>::
            emplace_back<unsigned long, unsigned long&>(
                (vector<FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>,
                        eastl::allocator>*)this,
                &local_28, &local_20);
    }

    // 0x1004f9100, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1004f92a0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::deallocate(MakeSharedPool<game::ObjType, 96>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1004ffa60, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1004ffa70, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1004ffa80, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005000b0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10050c430, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10050c440, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10050c480, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10050ca70, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10050f990, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10050fa0b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10050fa0b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10050fc50, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::deallocate(MakeSharedPool<game::NPCType, 216>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10051a980, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10051a9fb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10051a9fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10051ab50, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10051ab60, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10051aba0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10051b5b0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10051b750, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::deallocate(MakeSharedPool<game::LocType, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10051f3b0, 192 bytes, inline, placed by class name
    // VectorFastPool<game::MapElementType::Polygon>::allocate()
    undefined8 VectorFastPool<game::MapElementType::Polygon>::allocate() {
        VectorFastPool<game::MapElementType::Polygon>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<game::MapElementType::Polygon>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10051f42b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<game::MapElementType::Polygon, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long&, unsigned long&>(
                            (vector<FastPool<game::MapElementType::Polygon, unsigned long>, eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10051f42b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10052aaa0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::allocate()
    undefined8 jag::VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10052ab1b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData,
                                               unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData,
                                             unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10052ab1b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10052ac00, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10052ac10, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10052ac50, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10052b260, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10052c070, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::deallocate(MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10053eac0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10053eb3b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10053eb3b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10053ec80, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10053ec90, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10053ecd0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10053f300, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10053f4f0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::deallocate(MakeSharedPool<ui::Interface, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10055f980, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10055f990, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10055f9d0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10055ff80, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100572450, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005724cb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005724cb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100572620, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100572630, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100572670, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100572ce0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100573a60, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::deallocate(MakeSharedPool<game::ParamType, 640>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100577df0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100577e6b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100577e6b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100577f80, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100577f90, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100577fa0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005789e0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100579710, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::deallocate(MakeSharedPool<game::DBRowType, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10057d8c0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10057d93b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10057d93b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10057da50, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10057da60, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10057da70, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10057e0f0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10057edf0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::deallocate(MakeSharedPool<game::DBTableType, 4>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100582fb0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10058302b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10058302b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100583140, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100583150, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100583160, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>, eastl::allocator>::
            emplace_back<unsigned long, unsigned long&>(
                (vector<FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>,
                        eastl::allocator>*)this,
                &local_28, &local_20);
    }

    // 0x1005837d0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005844d0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::InvType, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100588570, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005885eb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005885eb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100588840, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::deallocate(MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10058ca30, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10058caab:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10058caab;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10058cbc0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10058cbd0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10058cbe0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>, eastl::allocator>::
            emplace_back<unsigned long, unsigned long&>(
                (vector<FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>,
                        eastl::allocator>*)this,
                &local_28, &local_20);
    }

    // 0x10058d270, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10058dfe0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::deallocate(MakeSharedPool<game::BASType, 96>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005921a0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10059221b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10059221b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100592330, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100592340, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100592350, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005929a0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100593690, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::deallocate(MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100597860, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005978db:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005978db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005979f0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100597a00, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100597a10, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100598060, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100598d60, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::deallocate(MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10059cfe0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10059d05b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10059d05b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10059d170, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10059d180, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10059d190, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10059d810, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10059d9a0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005a2030, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005a20ab:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005a20ab;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005a21c0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005a21d0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005a21e0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005a2830, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005a3540, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005a7600, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005a767b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005a767b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005a7790, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005a77a0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005a77b0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>, eastl::allocator>::
            emplace_back<unsigned long, unsigned long&>(
                (vector<FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>,
                        eastl::allocator>*)this,
                &local_28, &local_20);
    }

    // 0x1005a7e70, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005a8d10, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::IDKType, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005acf90, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005ad00b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005ad00b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005ad120, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005ad130, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005ad140, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005ad890, 128 bytes, inline, placed by class name
    // VectorFastPool<game::MapElementType::Polygon>::deallocate(game::MapElementType::Polygon const*)
    void VectorFastPool<game::MapElementType::Polygon>::deallocate(Polygon* param_1) {
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005ad9a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<game::MapElementType::Polygon>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005ad9b0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<game::MapElementType::Polygon>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005ad9c0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<game::MapElementType::Polygon>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<game::MapElementType::Polygon>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<game::MapElementType::Polygon, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<game::MapElementType::Polygon, unsigned long>, eastl::allocator>::emplace_back<
            unsigned long&, unsigned long&>(
            (vector<FastPool<game::MapElementType::Polygon, unsigned long>, eastl::allocator>*)this, &local_28,
            &local_20);
    }

    // 0x1005ade00, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<game::MapElementType::Polygon>::~VectorFastPool()
    void VectorFastPool<game::MapElementType::Polygon>::~VectorFastPool() {
        ~vector();
    }

    // 0x1005ae0f0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005aef70, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::deallocate(MakeSharedPool<game::MapElementType, 512>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005b3820, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005b389b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005b389b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005b39b0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005b39c0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005b39d0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>, eastl::allocator>::
            emplace_back<unsigned long, unsigned long&>(
                (vector<FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>,
                        eastl::allocator>*)this,
                &local_28, &local_20);
    }

    // 0x1005b4020, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005b4cf0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::MSIType, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005b9250, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005b92cb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005b92cb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005b93e0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005b93f0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005b9400, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005b9d50, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005bac70, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::deallocate(MakeSharedPool<game::QuestType, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005bee40, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005beebb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005beebb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005befd0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005befe0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005beff0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005bf680, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005c03c0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::deallocate(MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005c4570, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005c45eb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005c45eb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005c4700, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005c4710, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005c4720, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005c4d70, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005c5a70, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::LightType, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005c9d00, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005c9d7b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005c9d7b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005c9e90, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005c9ea0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005c9eb0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005ca520, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005cb210, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::deallocate(MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005cf9c0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005cfa3b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005cfa3b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005cfc80, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::deallocate(MakeSharedPool<game::WaterType, 16>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005d3e30, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005d3eab:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005d3eab;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005d3fc0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005d3fd0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005d3fe0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005d4630, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005d52f0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::deallocate(MakeSharedPool<game::CursorType, 64>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005d93f0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005d946b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005d946b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005d9580, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005d9590, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005d95a0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005d9b90, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005da910, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::deallocate(MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005ded10, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005ded8b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005ded8b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005deea0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005deeb0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005deec0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005df8d0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005e0c20, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::deallocate(MakeSharedPool<game::EnumType, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005e50a0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005e511b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005e511b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005e5230, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005e5240, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005e5250, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005e58e0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005e6670, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::deallocate(MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005eadd0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005eae4b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005eae4b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005eaf60, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005eaf70, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005eaf80, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005eb5d0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005ec2a0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::deallocate(MakeSharedPool<game::StructType, 1024>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1005f0460, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1005f04db:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005f04db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005f05f0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1005f0600, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1005f0610, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1005f1080, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1005f21e0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::deallocate(MakeSharedPool<game::AchievementType, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100634860, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::allocate()
    undefined8
    jag::VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1006348db:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData,
                                 unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1006348db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100634980, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100634990, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006349a0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void
    jag::VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>* this,
        ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<
            FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>,
            eastl::allocator>::emplace_back<unsigned long,
                                            unsigned long&>(
            (vector<
                FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>,
                eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100634f80, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::
        ~VectorFastPool(
            VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100635cb0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>*)
                HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>*)
            end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100637f20, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100637f9b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100637f9b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100638040, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100638050, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100638060, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1006386e0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100639450, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>*)
                HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>*)
            end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100639670, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::allocate()
    undefined8 jag::VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1006396eb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData,
                                               unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData,
                                             unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1006396eb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100639780, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100639790, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006397a0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100639e00, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10063ab90, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 =
            (FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10063bef0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::allocate()
    undefined8 jag::VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10063bf6b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData,
                                               unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData,
                                             unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10063bf6b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10063c010, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10063c020, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10063c030, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10063c660, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10063d380, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10063e580, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10063e5fb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10063e5fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10063e690, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10063e6a0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10063e6b0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10063ecf0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10063f9d0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100645d40, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100645dbb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100645dbb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100645e80, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100645e90, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100645ed0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100646490, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100647180, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100647e50, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100647e60, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100647e70, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100648420, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100648e50, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100648ecb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100648ecb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100649080, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1006506a0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10065071b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10065071b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100650ab0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100652760, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1006527db:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1006527db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100652a60, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::deallocate(MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100653120, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::allocate()
    undefined8
    jag::VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10065319b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData,
                                 unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10065319b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100653220, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100653230, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100653240, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void
    jag::VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>* this,
        ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<
            FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>,
            eastl::allocator>::emplace_back<unsigned long,
                                            unsigned long&>(
            (vector<
                FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>,
                eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100653960, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::
        ~VectorFastPool(
            VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100654800, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::deallocate(MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>*)
                HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>*)
            end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10065c6d0, 192 bytes, inline, placed by class name
    // VectorFastPool<graphics::AnimationParameters>::allocate()
    undefined8 VectorFastPool<graphics::AnimationParameters>::allocate() {
        VectorFastPool<graphics::AnimationParameters>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<graphics::AnimationParameters>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10065c74b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<graphics::AnimationParameters, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long&, unsigned long&>(
                            (vector<FastPool<graphics::AnimationParameters, unsigned long>, eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10065c74b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100661950, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100661960, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100661970, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100661db0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100671200, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10067127b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10067127b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100671340, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100671350, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100671390, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100671980, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100671ac0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100672180, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1006721fb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1006721fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100672260, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100672270, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100672280, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100672970, 128 bytes, inline, placed by class name
    // VectorFastPool<graphics::AnimationParameters>::deallocate(graphics::AnimationParameters const*)
    void VectorFastPool<graphics::AnimationParameters>::deallocate(AnimationParameters* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100672a20, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<graphics::AnimationParameters>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100672a30, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<graphics::AnimationParameters>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100672a40, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<graphics::AnimationParameters>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<graphics::AnimationParameters>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<graphics::AnimationParameters, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<graphics::AnimationParameters, unsigned long>, eastl::allocator>::emplace_back<
            unsigned long&, unsigned long&>(
            (vector<FastPool<graphics::AnimationParameters, unsigned long>, eastl::allocator>*)this, &local_28,
            &local_20);
    }

    // 0x100672e80, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<graphics::AnimationParameters>::~VectorFastPool()
    void VectorFastPool<graphics::AnimationParameters>::~VectorFastPool() {
        ~vector();
    }

    // 0x100673110, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006732b0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::deallocate(MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1006c4ff0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006c5000, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006c5030, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>, eastl::allocator>::
            emplace_back<unsigned long&, unsigned long&>(
                (vector<FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>,
                        eastl::allocator>*)this,
                &local_28, &local_20);
    }

    // 0x1006c5620, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006c6ad0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006c6ae0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006c6af0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>, eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1006c70e0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006c7c70, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006c7c80, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006c7c90, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1006c8280, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006d1e50, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d1e60, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006d1e70, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>, eastl::allocator>::
            emplace_back<unsigned long&, unsigned long&>(
                (vector<FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>,
                        eastl::allocator>*)this,
                &local_28, &local_20);
    }

    // 0x1006d2460, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006d2f90, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d2fa0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006d2fb0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1006d35a0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006d4290, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d42a0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006d42b0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>, eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1006d48a0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006d7610, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d7620, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006d7630, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1006d7c20, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006d87a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006d87b0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006d87c0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1006d8db0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1006da760, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1006da770, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1006da780, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>, eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1006dad70, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1007c7bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1007c7bd0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1007c7be0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1007c8050, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1007e9e30, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1007e9e40, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1007e9e50, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1007ea430, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1007f5110, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1007f5120, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1007f5130, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1007f5710, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1007f7460, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1007f74db:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1007f74db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1007f7720, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100830f10, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100830f20, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100830f60, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100831540, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1008366e0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10083675b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10083675b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100836980, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100843110, 128 bytes, inline, placed by class name
    // VectorFastPool<graphics::BillboardBatchInstance>::deallocate(graphics::BillboardBatchInstance const*)
    void VectorFastPool<graphics::BillboardBatchInstance>::deallocate(BillboardBatchInstance* param_1) {
        char cVar1;
        FastPool<graphics::BillboardBatchInstance, unsigned long>* this_00;
        FastPool<graphics::BillboardBatchInstance, unsigned long>* pFVar2;

        this_00 = (FastPool<graphics::BillboardBatchInstance, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<graphics::BillboardBatchInstance, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100844220, 192 bytes, inline, placed by class name
    // VectorFastPool<graphics::BillboardBatchInstance>::allocate()
    undefined8 VectorFastPool<graphics::BillboardBatchInstance>::allocate() {
        VectorFastPool<graphics::BillboardBatchInstance>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<graphics::BillboardBatchInstance>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10084429b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<graphics::BillboardBatchInstance, unsigned long>,
                                            eastl::allocator>::emplace_back<unsigned long&,
                                                                            unsigned long&>(
                        (vector<FastPool<graphics::BillboardBatchInstance, unsigned long>, eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10084429b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100844950, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1008449cb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008449cb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100844a50, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100844a60, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100844a70, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100845060, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1008451e0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100845460, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1008454db:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008454db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1008457d0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10084b110, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<graphics::Billboard>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10084b120, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<graphics::Billboard>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10084b130, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<graphics::Billboard>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<graphics::Billboard>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<graphics::Billboard, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<graphics::Billboard, unsigned long>, eastl::allocator>::emplace_back<unsigned long&,
                                                                                                    unsigned long&>(
            (vector<FastPool<graphics::Billboard, unsigned long>, eastl::allocator>*)this, &local_28, &local_20);
    }

    // 0x10084b6d0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<graphics::Billboard>::~VectorFastPool()
    void VectorFastPool<graphics::Billboard>::~VectorFastPool() {
        ~vector();
    }

    // 0x1008733c0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::allocate()
    undefined8 jag::VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10087343b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                               unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long&,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                             unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10087343b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100873800, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 =
            (FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100881120, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100881130, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100881140, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100881720, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100884ca0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100884d1b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100884d1b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100884f00, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100885bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<graphics::BillboardBatchInstance>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100885bd0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<graphics::BillboardBatchInstance>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100885be0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<graphics::BillboardBatchInstance>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<graphics::BillboardBatchInstance>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<graphics::BillboardBatchInstance, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<graphics::BillboardBatchInstance, unsigned long>, eastl::allocator>::emplace_back<
            unsigned long&, unsigned long&>(
            (vector<FastPool<graphics::BillboardBatchInstance, unsigned long>, eastl::allocator>*)this, &local_28,
            &local_20);
    }

    // 0x100886020, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<graphics::BillboardBatchInstance>::~VectorFastPool()
    void VectorFastPool<graphics::BillboardBatchInstance>::~VectorFastPool() {
        ~vector();
    }

    // 0x1008d2a20, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::allocate()
    undefined8 jag::VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1008d2a9b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData,
                                               unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long&,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData,
                                             unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008d2a9b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1008d2ed0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<graphics::AnimState, unsigned long>* this_00;
        FastPool<graphics::AnimState, unsigned long>* pFVar2;

        this_00 = (FastPool<graphics::AnimState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<graphics::AnimState, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1008d7980, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1008d7990, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1008d79a0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1008d8000, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1008dc5b0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::allocate()
    undefined8 jag::VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1008dc62b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData,
                                               unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData,
                                             unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008dc62b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1008dc6b0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1008dc6c0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1008dc6d0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1008dccc0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1008dce50, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 =
            (FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1008dd200, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1008dd27b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008dd27b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1008dd470, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1009078b0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10090792b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10090792b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1009079e0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1009079f0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100907a00, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100907ff0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100908190, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1009270c0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1009270d0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1009270e0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1009276c0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1009287d0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10092884b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>,
                                      eastl::allocator>::emplace_back<unsigned long,
                                                                      unsigned long&>(
                            (vector<FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>,
                                    eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10092884b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100928a60, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x10094bcd0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10094bce0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10094bcf0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10094c170, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100967c20, 128 bytes, inline, placed by class name
    // VectorFastPool<graphics::AnimState>::deallocate(graphics::AnimState const*)
    void VectorFastPool<graphics::AnimState>::deallocate(AnimState* param_1) {
        FastPool<graphics::AnimState, unsigned long>* this_00;
        FastPool<graphics::AnimState, unsigned long>* pFVar2;

        this_00 = (FastPool<graphics::AnimState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<graphics::AnimState, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100967ca0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<graphics::AnimState>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100967cb0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<graphics::AnimState>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100967cc0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<graphics::AnimState>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<graphics::AnimState>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<graphics::AnimState, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<graphics::AnimState, unsigned long>, eastl::allocator>::emplace_back<unsigned long,
                                                                                                    unsigned long&>(
            (vector<FastPool<graphics::AnimState, unsigned long>, eastl::allocator>*)this, &local_28, &local_20);
    }

    // 0x100968270, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<graphics::AnimState>::~VectorFastPool()
    void VectorFastPool<graphics::AnimState>::~VectorFastPool() {
        ~vector();
    }

    // 0x100968380, 192 bytes, inline, placed by class name
    // VectorFastPool<graphics::AnimState>::allocate()
    undefined8 VectorFastPool<graphics::AnimState>::allocate() {
        VectorFastPool<graphics::AnimState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<graphics::AnimState>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1009683fb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 =
                        eastl::vector<FastPool<graphics::AnimState, unsigned long>, eastl::allocator>::emplace_back<
                            unsigned long, unsigned long&>(
                            (vector<FastPool<graphics::AnimState, unsigned long>, eastl::allocator>*)this_00, &local_48,
                            (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1009683fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100993a90, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100993aa0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100993ab0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100994120, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100995b40, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100995b50, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100995b60, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1009960b0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1009962e0, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_10099635b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10099635b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1009965a0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>* this, RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100996b10, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100996b8b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100996b8b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100996c10, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100996c20, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100996c30, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100997260, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1009973e0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1009999f0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100999a00, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100999a10, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100999e90, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10099bb60, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10099bb70, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10099bb80, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10099c000, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10099c1a0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10099c1b0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10099c1c0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>* this, ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>,
                                 eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10099c630, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10099dd60, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10099dd70, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10099dd80, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10099e370, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x10099ef60, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x10099ef70, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x10099ef80, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x10099f450, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1009a2240, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_1009a22bb:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1009a22bb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1009a2390, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1009a23a0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1009a23b0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1009a29a0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x1009a2c30, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::deallocate(MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<graphics::AnimState, unsigned long>* this_00;
        FastPool<graphics::AnimState, unsigned long>* pFVar2;

        this_00 = (FastPool<graphics::AnimState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<graphics::AnimState, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x1009fa8d0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1009fa8e0, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x1009fa8f0, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x1009faee0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100a00e90, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100a00f0b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100a00f0b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100a01130, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::deallocate(MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100b98a40, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100b98a50, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100b98a90, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>::
        VectorFastPool(
            VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>* this,
            ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                     unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                               unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                             unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100b99040, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>::
        ~VectorFastPool(VectorFastPool<
                        MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100b99e20, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100b99e30, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100b99e40, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData>::
        VectorFastPool(VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                     2048>::RefCounterAndData>* this,
                       ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<
            FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                     unsigned long>,
            eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                               unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData,
                             unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100b9a3f0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData>::~VectorFastPool()
    void jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData>::
        ~VectorFastPool(VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                      2048>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100ba2660, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData>::allocate()
    undefined8
    jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>::
        allocate(VectorFastPool<
                 MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100ba26db:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData,
                                 unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long,
                                                        unsigned long&>(
                        (vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                        8>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100ba26db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100ba2880, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData>::deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 8>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>::
        deallocate(
            VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 8>::RefCounterAndData>* this,
            RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_00;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                           unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100ba3390, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData>::allocate()
    undefined8
    jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData>::
        allocate(VectorFastPool<
                 MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData>*
            this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData>*
            local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100ba340b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                                    2048>::RefCounterAndData,
                                                     unsigned long>,
                                            eastl::allocator>::emplace_back<unsigned long,
                                                                            unsigned long&>(
                        (vector<FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>,
                                                        2048>::RefCounterAndData,
                                         unsigned long>,
                                eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100ba340b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100ba35b0, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData>::deallocate(MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator> >, 2048>::RefCounterAndData const*)
    void jag::VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData>::
        deallocate(VectorFastPool<
                       MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 2048>::RefCounterAndData>* this,
                   RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this_00;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                            unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                           unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100bd3d90, 192 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::allocate()
    undefined8 VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::allocate(
        VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>* this) {
        VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        undefined8 local_40;
        VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bd3e0b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<
                        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>,
                        eastl::allocator>::emplace_back<unsigned long&,
                                                        unsigned long&>(
                        (vector<
                            FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>,
                            eastl::allocator>*)this_00,
                        &local_48, (ulong*)(this_00 + 32));
                    local_40 = this_02->allocate();
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100bd3e0b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bd4900, 128 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::deallocate(MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData const*)
    void VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::deallocate(
        VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>* this,
        RefCounterAndData* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 = (FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(param_1);
    }

    // 0x100bd5c20, 80 bytes, inline, placed by class name
    // VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::Prefetch(unsigned long, unsigned long) const
    void VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::Prefetch(
        VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>* pFVar1;

        this_00 = (FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>*)
            HeapBeginPtr();
        pFVar1 = (FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>*)end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->Prefetch(param_1, param_2);
        }
    }

    // 0x100bf4390, 208 bytes, inline, placed by class name
    // render::ComputePipelineState* VectorFastPool<render::ComputePipelineState>::Create<render::ComputePipelineState const&>(render::ComputePipelineState const&)
    /* render::ComputePipelineState*
   VectorFastPool<render::ComputePipelineState>::Create<render::ComputePipelineState&>(render::ComputePipelineState&)
    */

    ComputePipelineState*
    VectorFastPool<render::ComputePipelineState>::Create<render::ComputePipelineState&>(ComputePipelineState* param_1) {
        VectorFastPool<render::ComputePipelineState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_50;
        ComputePipelineState* local_48;
        VectorFastPool<render::ComputePipelineState>* local_40;
        ComputePipelineState* local_38;

        local_38 = param_1;
        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_40 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bf440f:
                this_00 = local_40;
                if (this_01 == phVar1) {
                    local_50 = local_40->capacity();
                    this_02 = eastl::vector<FastPool<render::ComputePipelineState, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long, unsigned long&>(
                            (vector<FastPool<render::ComputePipelineState, unsigned long>, eastl::allocator>*)this_00,
                            &local_50, (ulong*)(this_00 + 32));
                    local_48 =
                        FastPool<render::ComputePipelineState, unsigned long>::Create<render::ComputePipelineState&>(
                            (FastPool<render::ComputePipelineState, unsigned long>*)this_02, local_38);
                }
                return local_48;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_48 = FastPool<render::ComputePipelineState, unsigned long>::Create<render::ComputePipelineState&>(
                    (FastPool<render::ComputePipelineState, unsigned long>*)this_01, local_38);
                goto LAB_100bf440f;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf44c0, 128 bytes, inline, placed by class name
    // VectorFastPool<render::ComputePipelineState>::Destroy(render::ComputePipelineState*)
    void VectorFastPool<render::ComputePipelineState>::Destroy(ComputePipelineState* param_1) {
        FastPool<render::ComputePipelineState, unsigned long>* this_00;
        FastPool<render::ComputePipelineState, unsigned long>* pFVar2;

        this_00 = (FastPool<render::ComputePipelineState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<render::ComputePipelineState, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    52, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->Destroy(param_1);
    }

    // 0x100bf45a0, 192 bytes, inline, placed by class name
    // render::ComputePipelineState* VectorFastPool<render::ComputePipelineState>::Create<>()
    ComputePipelineState* VectorFastPool<render::ComputePipelineState>::Create<>() {
        VectorFastPool<render::ComputePipelineState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        ComputePipelineState* local_40;
        VectorFastPool<render::ComputePipelineState>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bf461b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<render::ComputePipelineState, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long, unsigned long&>(
                            (vector<FastPool<render::ComputePipelineState, unsigned long>, eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = FastPool<render::ComputePipelineState, unsigned long>::Create<>(
                        (FastPool<render::ComputePipelineState, unsigned long>*)this_02);
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = FastPool<render::ComputePipelineState, unsigned long>::Create<>(
                    (FastPool<render::ComputePipelineState, unsigned long>*)this_01);
                goto LAB_100bf461b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf4690, 112 bytes, inline, placed by class name
    // VectorFastPool<render::ComputePipelineState>::is_owner(render::ComputePipelineState const*) const
    ulong VectorFastPool<render::ComputePipelineState>::is_owner(ComputePipelineState* param_1) {
        char cVar1;
        FastPool<render::ComputePipelineState, unsigned long>* this_00;
        FastPool<render::ComputePipelineState, unsigned long>* pFVar2;
        bool bVar3;

        this_00 = (FastPool<render::ComputePipelineState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<render::ComputePipelineState, unsigned long>*)end();
        bVar3 = this_00 == pFVar2;
        if (!bVar3) {
            cVar1 = this_00->is_owner(param_1);
            while (cVar1 == '\0') {
                this_00 = this_00 + 40;
                bVar3 = this_00 == pFVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->is_owner(param_1);
            }
        }
        return (CONCAT71((int7)((ulong)this >> 8), bVar3) ^ 1) & 4294967295;
    }

    // 0x100bf49c0, 208 bytes, inline, placed by class name
    // render::InputAssemblerState* VectorFastPool<render::InputAssemblerState>::Create<render::InputAssemblerState const&>(render::InputAssemblerState const&)
    /* render::InputAssemblerState*
   VectorFastPool<render::InputAssemblerState>::Create<render::InputAssemblerState&>(render::InputAssemblerState&)
    */

    InputAssemblerState*
    VectorFastPool<render::InputAssemblerState>::Create<render::InputAssemblerState&>(InputAssemblerState* param_1) {
        VectorFastPool<render::InputAssemblerState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_50;
        InputAssemblerState* local_48;
        VectorFastPool<render::InputAssemblerState>* local_40;
        InputAssemblerState* local_38;

        local_38 = param_1;
        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_40 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bf4a3f:
                this_00 = local_40;
                if (this_01 == phVar1) {
                    local_50 = local_40->capacity();
                    this_02 = eastl::vector<FastPool<render::InputAssemblerState, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long, unsigned long&>(
                            (vector<FastPool<render::InputAssemblerState, unsigned long>, eastl::allocator>*)this_00,
                            &local_50, (ulong*)(this_00 + 32));
                    local_48 =
                        FastPool<render::InputAssemblerState, unsigned long>::Create<render::InputAssemblerState&>(
                            (FastPool<render::InputAssemblerState, unsigned long>*)this_02, local_38);
                }
                return local_48;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_48 = FastPool<render::InputAssemblerState, unsigned long>::Create<render::InputAssemblerState&>(
                    (FastPool<render::InputAssemblerState, unsigned long>*)this_01, local_38);
                goto LAB_100bf4a3f;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf4bd0, 208 bytes, inline, placed by class name
    // render::RenderPipelineState* VectorFastPool<render::RenderPipelineState>::Create<render::RenderPipelineState const&>(render::RenderPipelineState const&)
    /* render::RenderPipelineState*
   VectorFastPool<render::RenderPipelineState>::Create<render::RenderPipelineState&>(render::RenderPipelineState&)
    */

    RenderPipelineState*
    VectorFastPool<render::RenderPipelineState>::Create<render::RenderPipelineState&>(RenderPipelineState* param_1) {
        VectorFastPool<render::RenderPipelineState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_50;
        RenderPipelineState* local_48;
        VectorFastPool<render::RenderPipelineState>* local_40;
        RenderPipelineState* local_38;

        local_38 = param_1;
        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_40 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bf4c4f:
                this_00 = local_40;
                if (this_01 == phVar1) {
                    local_50 = local_40->capacity();
                    this_02 = eastl::vector<FastPool<render::RenderPipelineState, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long, unsigned long&>(
                            (vector<FastPool<render::RenderPipelineState, unsigned long>, eastl::allocator>*)this_00,
                            &local_50, (ulong*)(this_00 + 32));
                    local_48 =
                        FastPool<render::RenderPipelineState, unsigned long>::Create<render::RenderPipelineState&>(
                            (FastPool<render::RenderPipelineState, unsigned long>*)this_02, local_38);
                }
                return local_48;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_48 = FastPool<render::RenderPipelineState, unsigned long>::Create<render::RenderPipelineState&>(
                    (FastPool<render::RenderPipelineState, unsigned long>*)this_01, local_38);
                goto LAB_100bf4c4f;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf4de0, 208 bytes, inline, placed by class name
    // render::OutputMergerState* VectorFastPool<render::OutputMergerState>::Create<render::OutputMergerState const&>(render::OutputMergerState const&)
    /* render::OutputMergerState*
   VectorFastPool<render::OutputMergerState>::Create<render::OutputMergerState&>(render::OutputMergerState&)
    */

    OutputMergerState*
    VectorFastPool<render::OutputMergerState>::Create<render::OutputMergerState&>(OutputMergerState* param_1) {
        VectorFastPool<render::OutputMergerState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_50;
        OutputMergerState* local_48;
        VectorFastPool<render::OutputMergerState>* local_40;
        OutputMergerState* local_38;

        local_38 = param_1;
        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_40 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bf4e5f:
                this_00 = local_40;
                if (this_01 == phVar1) {
                    local_50 = local_40->capacity();
                    this_02 = eastl::vector<FastPool<render::OutputMergerState, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long, unsigned long&>(
                            (vector<FastPool<render::OutputMergerState, unsigned long>, eastl::allocator>*)this_00,
                            &local_50, (ulong*)(this_00 + 32));
                    local_48 = FastPool<render::OutputMergerState, unsigned long>::Create<render::OutputMergerState&>(
                        (FastPool<render::OutputMergerState, unsigned long>*)this_02, local_38);
                }
                return local_48;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_48 = FastPool<render::OutputMergerState, unsigned long>::Create<render::OutputMergerState&>(
                    (FastPool<render::OutputMergerState, unsigned long>*)this_01, local_38);
                goto LAB_100bf4e5f;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf4f00, 128 bytes, inline, placed by class name
    // VectorFastPool<render::InputAssemblerState>::Destroy(render::InputAssemblerState*)
    void VectorFastPool<render::InputAssemblerState>::Destroy(InputAssemblerState* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* pFVar2;

        this_00 =
            (FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    52, (char*)0);
            }
            cVar1 = this_00->is_owner(param_1);
            if (cVar1 != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->Destroy(param_1);
    }

    // 0x100bf4f80, 128 bytes, inline, placed by class name
    // VectorFastPool<render::RenderPipelineState>::Destroy(render::RenderPipelineState*)
    void VectorFastPool<render::RenderPipelineState>::Destroy(RenderPipelineState* param_1) {
        FastPool<render::RenderPipelineState, unsigned long>* this_00;
        FastPool<render::RenderPipelineState, unsigned long>* pFVar2;

        this_00 = (FastPool<render::RenderPipelineState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<render::RenderPipelineState, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    52, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->Destroy(param_1);
    }

    // 0x100bf5000, 128 bytes, inline, placed by class name
    // VectorFastPool<render::OutputMergerState>::Destroy(render::OutputMergerState*)
    void VectorFastPool<render::OutputMergerState>::Destroy(OutputMergerState* param_1) {
        FastPool<render::OutputMergerState, unsigned long>* this_00;
        FastPool<render::OutputMergerState, unsigned long>* pFVar2;

        this_00 = (FastPool<render::OutputMergerState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<render::OutputMergerState, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    52, (char*)0);
            }
            if (this_00->is_owner(param_1) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->Destroy(param_1);
    }

    // 0x100bf50e0, 192 bytes, inline, placed by class name
    // render::InputAssemblerState* VectorFastPool<render::InputAssemblerState>::Create<>()
    InputAssemblerState* VectorFastPool<render::InputAssemblerState>::Create<>() {
        VectorFastPool<render::InputAssemblerState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        InputAssemblerState* local_40;
        VectorFastPool<render::InputAssemblerState>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bf515b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<render::InputAssemblerState, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long, unsigned long&>(
                            (vector<FastPool<render::InputAssemblerState, unsigned long>, eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = FastPool<render::InputAssemblerState, unsigned long>::Create<>(
                        (FastPool<render::InputAssemblerState, unsigned long>*)this_02);
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = FastPool<render::InputAssemblerState, unsigned long>::Create<>(
                    (FastPool<render::InputAssemblerState, unsigned long>*)this_01);
                goto LAB_100bf515b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf51a0, 192 bytes, inline, placed by class name
    // render::RenderPipelineState* VectorFastPool<render::RenderPipelineState>::Create<>()
    RenderPipelineState* VectorFastPool<render::RenderPipelineState>::Create<>() {
        VectorFastPool<render::RenderPipelineState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        RenderPipelineState* local_40;
        VectorFastPool<render::RenderPipelineState>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bf521b:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<render::RenderPipelineState, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long, unsigned long&>(
                            (vector<FastPool<render::RenderPipelineState, unsigned long>, eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = FastPool<render::RenderPipelineState, unsigned long>::Create<>(
                        (FastPool<render::RenderPipelineState, unsigned long>*)this_02);
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = FastPool<render::RenderPipelineState, unsigned long>::Create<>(
                    (FastPool<render::RenderPipelineState, unsigned long>*)this_01);
                goto LAB_100bf521b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf5260, 192 bytes, inline, placed by class name
    // render::OutputMergerState* VectorFastPool<render::OutputMergerState>::Create<>()
    OutputMergerState* VectorFastPool<render::OutputMergerState>::Create<>() {
        VectorFastPool<render::OutputMergerState>* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_01;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        ulong uVar2;
        ulong uVar3;
        FastPool* this_02;
        ulong local_48;
        OutputMergerState* local_40;
        VectorFastPool<render::OutputMergerState>* local_38;

        this_01 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)HeapBeginPtr();
        phVar1 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                            eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                            eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                            eastl::prime_rehash_policy, false, true, true>*)end();
        local_38 = this;
        do {
            if (this_01 == phVar1) {
            LAB_100bf52db:
                this_00 = local_38;
                if (this_01 == phVar1) {
                    local_48 = local_38->capacity();
                    this_02 = eastl::vector<FastPool<render::OutputMergerState, unsigned long>, eastl::allocator>::
                        emplace_back<unsigned long, unsigned long&>(
                            (vector<FastPool<render::OutputMergerState, unsigned long>, eastl::allocator>*)this_00,
                            &local_48, (ulong*)(this_00 + 32));
                    local_40 = FastPool<render::OutputMergerState, unsigned long>::Create<>(
                        (FastPool<render::OutputMergerState, unsigned long>*)this_02);
                }
                return local_40;
            }
            uVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                     eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                     true>::size(this_01);
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = FastPool<render::OutputMergerState, unsigned long>::Create<>(
                    (FastPool<render::OutputMergerState, unsigned long>*)this_01);
                goto LAB_100bf52db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf5320, 112 bytes, inline, placed by class name
    // VectorFastPool<render::InputAssemblerState>::is_owner(render::InputAssemblerState const*) const
    ulong VectorFastPool<render::InputAssemblerState>::is_owner(InputAssemblerState* param_1) {
        char cVar1;
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* this_00;
        FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>* pFVar2;
        bool bVar3;

        this_00 =
            (FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>*)end();
        bVar3 = this_00 == pFVar2;
        if (!bVar3) {
            cVar1 = this_00->is_owner(param_1);
            while (cVar1 == '\0') {
                this_00 = this_00 + 40;
                bVar3 = this_00 == pFVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->is_owner(param_1);
            }
        }
        return (CONCAT71((int7)((ulong)this >> 8), bVar3) ^ 1) & 4294967295;
    }

    // 0x100bf5390, 112 bytes, inline, placed by class name
    // VectorFastPool<render::RenderPipelineState>::is_owner(render::RenderPipelineState const*) const
    ulong VectorFastPool<render::RenderPipelineState>::is_owner(RenderPipelineState* param_1) {
        char cVar1;
        FastPool<render::RenderPipelineState, unsigned long>* this_00;
        FastPool<render::RenderPipelineState, unsigned long>* pFVar2;
        bool bVar3;

        this_00 = (FastPool<render::RenderPipelineState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<render::RenderPipelineState, unsigned long>*)end();
        bVar3 = this_00 == pFVar2;
        if (!bVar3) {
            cVar1 = this_00->is_owner(param_1);
            while (cVar1 == '\0') {
                this_00 = this_00 + 40;
                bVar3 = this_00 == pFVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->is_owner(param_1);
            }
        }
        return (CONCAT71((int7)((ulong)this >> 8), bVar3) ^ 1) & 4294967295;
    }

    // 0x100bf5400, 112 bytes, inline, placed by class name
    // VectorFastPool<render::OutputMergerState>::is_owner(render::OutputMergerState const*) const
    ulong VectorFastPool<render::OutputMergerState>::is_owner(OutputMergerState* param_1) {
        char cVar1;
        FastPool<render::OutputMergerState, unsigned long>* this_00;
        FastPool<render::OutputMergerState, unsigned long>* pFVar2;
        bool bVar3;

        this_00 = (FastPool<render::OutputMergerState, unsigned long>*)HeapBeginPtr();
        pFVar2 = (FastPool<render::OutputMergerState, unsigned long>*)end();
        bVar3 = this_00 == pFVar2;
        if (!bVar3) {
            cVar1 = this_00->is_owner(param_1);
            while (cVar1 == '\0') {
                this_00 = this_00 + 40;
                bVar3 = this_00 == pFVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->is_owner(param_1);
            }
        }
        return (CONCAT71((int7)((ulong)this >> 8), bVar3) ^ 1) & 4294967295;
    }

    // 0x100c192c0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<render::InputAssemblerState>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c192d0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<render::RenderPipelineState>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c192e0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<render::ComputePipelineState>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c192f0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<render::OutputMergerState>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c19330, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<render::OutputMergerState>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100c19340, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<render::ComputePipelineState>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100c19350, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<render::RenderPipelineState>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100c19360, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<render::InputAssemblerState>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100c194b0, 80 bytes, inline, placed by class name
    // VectorFastPool<render::InputAssemblerState>::clear()
    void VectorFastPool<render::InputAssemblerState>::clear() {
        FastPool<render::InputAssemblerState, unsigned long>* this_00;
        FastPool<render::InputAssemblerState, unsigned long>* pFVar1;

        this_00 = (FastPool<render::InputAssemblerState, unsigned long>*)HeapBeginPtr();
        pFVar1 = (FastPool<render::InputAssemblerState, unsigned long>*)end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->clear();
        }
    }

    // 0x100c19500, 80 bytes, inline, placed by class name
    // VectorFastPool<render::RenderPipelineState>::clear()
    void VectorFastPool<render::RenderPipelineState>::clear() {
        FastPool<render::RenderPipelineState, unsigned long>* this_00;
        FastPool<render::RenderPipelineState, unsigned long>* pFVar1;

        this_00 = (FastPool<render::RenderPipelineState, unsigned long>*)HeapBeginPtr();
        pFVar1 = (FastPool<render::RenderPipelineState, unsigned long>*)end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->clear();
        }
    }

    // 0x100c19550, 80 bytes, inline, placed by class name
    // VectorFastPool<render::ComputePipelineState>::clear()
    void VectorFastPool<render::ComputePipelineState>::clear() {
        FastPool<render::ComputePipelineState, unsigned long>* this_00;
        FastPool<render::ComputePipelineState, unsigned long>* pFVar1;

        this_00 = (FastPool<render::ComputePipelineState, unsigned long>*)HeapBeginPtr();
        pFVar1 = (FastPool<render::ComputePipelineState, unsigned long>*)end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->clear();
        }
    }

    // 0x100c195a0, 80 bytes, inline, placed by class name
    // VectorFastPool<render::OutputMergerState>::clear()
    void VectorFastPool<render::OutputMergerState>::clear() {
        FastPool<render::OutputMergerState, unsigned long>* this_00;
        FastPool<render::OutputMergerState, unsigned long>* pFVar1;

        this_00 = (FastPool<render::OutputMergerState, unsigned long>*)HeapBeginPtr();
        pFVar1 = (FastPool<render::OutputMergerState, unsigned long>*)end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->clear();
        }
    }

    // 0x100c321f0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<render::OutputMergerState>::~VectorFastPool()
    void VectorFastPool<render::OutputMergerState>::~VectorFastPool() {
        ~vector();
    }

    // 0x100c324a0, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<render::ComputePipelineState>::~VectorFastPool()
    void VectorFastPool<render::ComputePipelineState>::~VectorFastPool() {
        ~vector();
    }

    // 0x100c32650, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<render::RenderPipelineState>::~VectorFastPool()
    void VectorFastPool<render::RenderPipelineState>::~VectorFastPool() {
        ~vector();
    }

    // 0x100c32800, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<render::InputAssemblerState>::~VectorFastPool()
    void VectorFastPool<render::InputAssemblerState>::~VectorFastPool() {
        ~vector();
    }

    // 0x100c345f0, 16 bytes, complete-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x100c34600, 16 bytes, complete-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::~VectorFastPool(): jumps straight to the base-object destructor

    // 0x100c34610, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::VectorFastPool(
        VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>* this, ulong param_1,
        ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this)
            eastl::vector<FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>,
                          eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>,
                      eastl::allocator>::emplace_back<unsigned long&,
                                                      unsigned long&>(
            (vector<FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>,
                    eastl::allocator>*)this,
            &local_28, &local_20);
    }

    // 0x100c34a90, 16 bytes, base-object destructor, inline, placed by class name
    // VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::~VectorFastPool()
    void VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::~VectorFastPool(
        VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>* this) {
        ~vector();
    }

    // 0x100c3cd10, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<render::InputAssemblerState>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<render::InputAssemblerState>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<render::InputAssemblerState, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<render::InputAssemblerState, unsigned long>, eastl::allocator>::emplace_back<
            unsigned long, unsigned long&>(
            (vector<FastPool<render::InputAssemblerState, unsigned long>, eastl::allocator>*)this, &local_28,
            &local_20);
    }

    // 0x100c3d120, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<render::RenderPipelineState>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<render::RenderPipelineState>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<render::RenderPipelineState, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<render::RenderPipelineState, unsigned long>, eastl::allocator>::emplace_back<
            unsigned long, unsigned long&>(
            (vector<FastPool<render::RenderPipelineState, unsigned long>, eastl::allocator>*)this, &local_28,
            &local_20);
    }

    // 0x100c3d530, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<render::ComputePipelineState>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<render::ComputePipelineState>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<render::ComputePipelineState, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<render::ComputePipelineState, unsigned long>, eastl::allocator>::emplace_back<
            unsigned long, unsigned long&>(
            (vector<FastPool<render::ComputePipelineState, unsigned long>, eastl::allocator>*)this, &local_28,
            &local_20);
    }

    // 0x100c3d940, 80 bytes, base-object constructor, inline, placed by class name
    // VectorFastPool<render::OutputMergerState>::VectorFastPool(unsigned long, unsigned long)
    void VectorFastPool<render::OutputMergerState>::VectorFastPool(ulong param_1, ulong param_2) {
        ulong local_28;
        ulong local_20;

        local_28 = param_1;
        local_20 = param_2;
        new (this) eastl::vector<FastPool<render::OutputMergerState, unsigned long>, eastl::allocator>();
        *(ulong*)(this + 32) = local_20;
        eastl::vector<FastPool<render::OutputMergerState, unsigned long>, eastl::allocator>::emplace_back<
            unsigned long, unsigned long&>(
            (vector<FastPool<render::OutputMergerState, unsigned long>, eastl::allocator>*)this, &local_28, &local_20);
    }

} // namespace jag
