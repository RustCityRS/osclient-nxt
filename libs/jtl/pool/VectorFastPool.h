// libs/jtl/pool/VectorFastPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 110 instantiations, e.g. <MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>, <MakeSharedPool<NPCEntity, 64>::RefCounterAndData>, <MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>
    class VectorFastPool {
    public:
        uint64_t allocate();
        void deallocate(const MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData* refCounterAndData);
        long size() const;
        VectorFastPool(unsigned long arg1, unsigned long arg2);
        ~VectorFastPool();
        long capacity() const;
        void
        deallocate(const MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData* refCounterAndData);
        void deallocate(
            const MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const graphics::GeometryBatchInstance* geometryBatchInstance);
        void deallocate(const MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::Model, 3072>::RefCounterAndData* refCounterAndData);
        void deallocate(const SpotAnimation* spotAnimation);
        void deallocate(const MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::Location, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(const game::EnvironmentLoader* environmentLoader);
        void deallocate(const game::Terrain* terrain);
        void deallocate(const MakeSharedPool<game::LightSource, 1024>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::MapSquare, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::VarType, 5504>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::Animation, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::SeqType, 96>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::ObjType, 96>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::NPCType, 216>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::LocType, 256>::RefCounterAndData* refCounterAndData);
        void
        deallocate(const MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<ui::Interface, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::ParamType, 640>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::DBRowType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::DBTableType, 4>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::InvType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BASType, 96>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::IDKType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const game::MapElementType::Polygon* polygon);
        void deallocate(const MakeSharedPool<game::MapElementType, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::MSIType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::QuestType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::LightType, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::WaterType, 16>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::CursorType, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::EnumType, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::StructType, 1024>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::AchievementType, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(
            const MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData* refCounterAndData);
        void
        deallocate(const MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData* refCounterAndData);
        void
        deallocate(const MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData* refCounterAndData);
        void deallocate(
            const MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(const graphics::AnimationParameters* animationParameters);
        void deallocate(const MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData* refCounterAndData);
        void deallocate(const graphics::BillboardBatchInstance* billboardBatchInstance);
        void deallocate(const MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData* refCounterAndData);
        void
        deallocate(const MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData* refCounterAndData);
        void
        deallocate(const MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData* refCounterAndData);
        void
        deallocate(const MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData* refCounterAndData);
        void deallocate(const graphics::AnimState* animState);
        void deallocate(const MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData* refCounterAndData);
        void
        deallocate(const MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData* refCounterAndData);
        void deallocate(const MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData* refCounterAndData);
        void Prefetch(unsigned long arg1, unsigned long arg2) const;
        render::ComputePipelineState*
        Create<render::ComputePipelineState const&>(const render::ComputePipelineState& computePipelineState);
        void Destroy(render::ComputePipelineState* computePipelineState);
        render::ComputePipelineState* Create<>();
        unsigned long is_owner(const render::ComputePipelineState* computePipelineState) const;
        render::InputAssemblerState*
        Create<render::InputAssemblerState const&>(const render::InputAssemblerState& inputAssemblerState);
        render::RenderPipelineState*
        Create<render::RenderPipelineState const&>(const render::RenderPipelineState& renderPipelineState);
        render::OutputMergerState*
        Create<render::OutputMergerState const&>(const render::OutputMergerState& outputMergerState);
        void Destroy(render::InputAssemblerState* inputAssemblerState);
        void Destroy(render::RenderPipelineState* renderPipelineState);
        void Destroy(render::OutputMergerState* outputMergerState);
        render::InputAssemblerState* Create<>();
        render::RenderPipelineState* Create<>();
        render::OutputMergerState* Create<>();
        unsigned long is_owner(const render::InputAssemblerState* inputAssemblerState) const;
        unsigned long is_owner(const render::RenderPipelineState* renderPipelineState) const;
        unsigned long is_owner(const render::OutputMergerState* outputMergerState) const;
        void clear();
    };

    // 0x100055000
    uint64_t VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10005507b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10005507b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1000556a0
    void VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10019f160
    long VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData>::size() const {
        long lVar2;
        long lVar3;

        auto this_00 = HeapBeginPtr();
        auto phVar1 = end();
        if (this_00 == phVar1) {
            lVar3 = 0;
        } else {
            lVar3 = 0;
            do {
                lVar2 = this_00->size();
                lVar3 = lVar3 + lVar2;
                this_00 = this_00 + 40;
            } while (this_00 != phVar1);
        }
        return lVar3;
    }

    // 0x10019f1c0
    uint64_t VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10019f23b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10019f23b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10019f390
    VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10019fb60
    VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10019fbd0
    long VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData>::capacity() const {
        long lVar2;
        long lVar3;

        auto this_00 = HeapBeginPtr();
        auto pFVar1 = end();
        if (this_00 == pFVar1) {
            lVar3 = 0;
        } else {
            lVar3 = 0;
            do {
                lVar2 = this_00->capacity();
                lVar3 = lVar3 + lVar2;
                this_00 = this_00 + 40;
            } while (this_00 != pFVar1);
        }
        return lVar3;
    }

    // 0x10019fd40
    void VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData>::deallocate(
        const MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1001e5020
    uint64_t
    VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1001e509b:
                if (this_01 == phVar1) {
                    local_48 = capacity(this);
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1001e509b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1001e5150
    VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData,
                                 unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1001e59b0
    VectorFastPool<
        MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1001e6bc0
    void VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1001ede50
    uint64_t VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1001edecb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1001edecb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1001edf70
    VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                     unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1001ee550
    VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1001ee6e0
    void VectorFastPool<MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1002550f0
    VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                  unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100255590
    VectorFastPool<MakeSharedPool<oldscape::DBTableIndex, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100338d90
    VectorFastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet,
                                  128>::RefCounterAndData>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet, 128>::RefCounterAndData,
                       unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100339380
    VectorFastPool<MakeSharedPool<oldscape::graphics::animation::OldscapeAnimKeyFrameSet,
                                  128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1003883c0
    void VectorFastPool<graphics::GeometryBatchInstance>::deallocate(
        const graphics::GeometryBatchInstance* geometryBatchInstance) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(geometryBatchInstance) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(geometryBatchInstance);
    }

    // 0x1003884a0
    VectorFastPool<graphics::GeometryBatchInstance>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<graphics::GeometryBatchInstance, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100388a40
    VectorFastPool<graphics::GeometryBatchInstance>::~VectorFastPool() {}

    // 0x10038cca0
    uint64_t VectorFastPool<graphics::GeometryBatchInstance>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10038cd1b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10038cd1b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1003e2d00
    uint64_t VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1003e2d7b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1003e2d7b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1003e30d0
    void VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1003e3980
    uint64_t VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1003e39fb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1003e39fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1003e3af0
    VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1003e4100
    VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1003e4e30
    void VectorFastPool<MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::MapSquareLocation, 16384>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100403420
    uint64_t VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10040349b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10040349b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100403800
    void VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::Model, 3072>::RefCounterAndData* refCounterAndData) {
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this_00;

        this_00 = (FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100406320
    void VectorFastPool<SpotAnimation>::deallocate(const SpotAnimation* spotAnimation) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(spotAnimation) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(spotAnimation);
    }

    // 0x1004063c0
    VectorFastPool<SpotAnimation>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<SpotAnimation, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100406960
    VectorFastPool<SpotAnimation>::~VectorFastPool() {}

    // 0x10040a2a0
    uint64_t VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10040a31b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10040a31b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10040a650
    void VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10041f0b0
    uint64_t VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10041f12b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10041f12b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10041f640
    void VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::Location, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100420de0
    void VectorFastPool<game::EnvironmentLoader>::deallocate(const game::EnvironmentLoader* environmentLoader) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(environmentLoader) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(environmentLoader);
    }

    // 0x100420eb0
    VectorFastPool<game::EnvironmentLoader>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<game::EnvironmentLoader, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100421460
    VectorFastPool<game::EnvironmentLoader>::~VectorFastPool() {}

    // 0x100421760
    void VectorFastPool<game::Terrain>::deallocate(const game::Terrain* terrain) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(terrain) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(terrain);
    }

    // 0x100421800
    VectorFastPool<game::Terrain>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<game::Terrain, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100421da0
    VectorFastPool<game::Terrain>::~VectorFastPool() {}

    // 0x100421fb0
    uint64_t VectorFastPool<game::EnvironmentLoader>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10042202b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10042202b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100422230
    uint64_t VectorFastPool<game::Terrain>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1004222ab:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004222ab;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100422c00
    uint64_t VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100422c7b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100422c7b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100422fb0
    void VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::LightSource, 1024>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100424fe0
    VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                     unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1004255c0
    VectorFastPool<MakeSharedPool<NPCEntity, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100434f30
    VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                               unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1004353a0
    VectorFastPool<MakeSharedPool<game::LightSource, 1024>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100437920
    VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                           unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100437d90
    VectorFastPool<MakeSharedPool<game::Location, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100438180
    uint64_t VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1004381fb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004381fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004382c0
    VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100438900
    VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004395f0
    void VectorFastPool<MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10044e910
    VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                  unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10044eef0
    VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100451100
    uint64_t VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10045117b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10045117b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100451230
    VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                    unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100451a30
    VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004528c0
    void VectorFastPool<MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::ClientCompositeData, 8>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100454ca0
    VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100455250
    VectorFastPool<MakeSharedPool<game::MapEnvironmentSettings, 48>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100455d70
    uint64_t VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100455deb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100455deb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100455e90
    VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                           unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100456480
    VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004565c0
    void VectorFastPool<MakeSharedPool<game::MapSquare, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::MapSquare, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10045c170
    VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                   unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10045c750
    VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10045cb50
    uint64_t VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10045cbcb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10045cbcb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10045cd70
    VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10045d350
    VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10045d490
    void VectorFastPool<MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::CombinedLocationSection, 512>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100486b70
    uint64_t VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100486beb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100486beb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100486d70
    VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                           unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100487350
    VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100487490
    void VectorFastPool<MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10049afe0
    VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                             unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x10049b690
    VectorFastPool<MakeSharedPool<game::PlayerModel, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10049c8a0
    uint64_t VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10049c91b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10049c91b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10049c9c0
    VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10049cfd0
    VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10049d150
    void VectorFastPool<MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::PlayerModelModelSet, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10049dd90
    uint64_t VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10049de0b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10049de0b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10049e010
    void VectorFastPool<MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::StaticPointLight, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1004ca5d0
    VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                              unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1004cabc0
    VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004cb8c0
    VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                           unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1004cbeb0
    VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004d7be0
    VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                           unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1004d81d0
    VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004d9010
    uint64_t VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1004d908b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004d908b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004d9350
    void VectorFastPool<MakeSharedPool<game::VarType, 5504>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::VarType, 5504>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1004e3810
    VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                    unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1004e3e50
    VectorFastPool<MakeSharedPool<game::QuickChatPhraseType, 0>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004e67e0
    uint64_t VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1004e685b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004e685b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004e6be0
    void VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::Animation, 512>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1004eb2a0
    uint64_t VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1004eb31b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004eb31b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004eb450
    VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                         unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1004eba40
    VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004ecd20
    void VectorFastPool<MakeSharedPool<game::SeqType, 96>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::SeqType, 96>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1004f06a0
    uint64_t VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1004f071b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004f071b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004f0ab0
    void VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1004f0f00
    uint64_t VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1004f0f7b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004f0f7b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004f1310
    void VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1004f87a0
    uint64_t VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1004f881b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1004f881b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1004f89c0
    VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                         unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1004f9100
    VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1004f92a0
    void VectorFastPool<MakeSharedPool<game::ObjType, 96>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::ObjType, 96>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1004ffa80
    VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                 unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1005000b0
    VectorFastPool<MakeSharedPool<game::QuickChatCatType, 0>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10050c480
    VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                          unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10050ca70
    VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10050f990
    uint64_t VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10050fa0b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10050fa0b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10050fc50
    void VectorFastPool<MakeSharedPool<game::NPCType, 216>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::NPCType, 216>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10051a980
    uint64_t VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10051a9fb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10051a9fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10051aba0
    VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                          unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10051b5b0
    VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10051b750
    void VectorFastPool<MakeSharedPool<game::LocType, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::LocType, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10051f3b0
    uint64_t VectorFastPool<game::MapElementType::Polygon>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10051f42b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10051f42b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10052aaa0
    uint64_t VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10052ab1b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10052ab1b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10052ac50
    VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10052b260
    VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10052c070
    void VectorFastPool<MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::LocType::LocationSoundData, 512>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10053eac0
    uint64_t VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10053eb3b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10053eb3b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10053ecd0
    VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                          unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10053f300
    VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10053f4f0
    void VectorFastPool<MakeSharedPool<ui::Interface, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<ui::Interface, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10055f9d0
    VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                              unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x10055ff80
    VectorFastPool<MakeSharedPool<game::DBTableIndex, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100572450
    uint64_t VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005724cb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005724cb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100572670
    VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                            unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100572ce0
    VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100573a60
    void VectorFastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::ParamType, 640>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100577df0
    uint64_t VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100577e6b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100577e6b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100577fa0
    VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                            unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005789e0
    VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100579710
    void VectorFastPool<MakeSharedPool<game::DBRowType, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::DBRowType, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10057d8c0
    uint64_t VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10057d93b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10057d93b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10057da70
    VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                            unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10057e0f0
    VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10057edf0
    void VectorFastPool<MakeSharedPool<game::DBTableType, 4>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::DBTableType, 4>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100582fb0
    uint64_t VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10058302b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10058302b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100583160
    VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                         unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005837d0
    VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005844d0
    void VectorFastPool<MakeSharedPool<game::InvType, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::InvType, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100588570
    uint64_t VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005885eb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005885eb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100588840
    void VectorFastPool<MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::VarBitType, 2048>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10058ca30
    uint64_t VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10058caab:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10058caab;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10058cbe0
    VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                         unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10058d270
    VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10058dfe0
    void VectorFastPool<MakeSharedPool<game::BASType, 96>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BASType, 96>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005921a0
    uint64_t VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10059221b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10059221b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100592350
    VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                    unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005929a0
    VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100593690
    void VectorFastPool<MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::FloorUnderlayType, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100597860
    uint64_t VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005978db:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005978db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100597a10
    VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                   unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100598060
    VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100598d60
    void VectorFastPool<MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::FloorOverlayType, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10059cfe0
    uint64_t VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10059d05b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10059d05b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10059d190
    VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                             unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10059d810
    VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10059d9a0
    void VectorFastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData* refCounterAndData) {
        FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>* this_00;

        this_00 = (FastPool<MakeSharedPool<game::HitmarkType, 32>::RefCounterAndData, unsigned long>*)HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005a2030
    uint64_t VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005a20ab:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005a20ab;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005a21e0
    VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                             unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005a2830
    VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005a3540
    void VectorFastPool<MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::HeadbarType, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005a7600
    uint64_t VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005a767b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005a767b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005a77b0
    VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                         unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005a7e70
    VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005a8d10
    void VectorFastPool<MakeSharedPool<game::IDKType, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::IDKType, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005acf90
    uint64_t VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005ad00b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005ad00b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005ad140
    VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                 unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005ad890
    void VectorFastPool<game::MapElementType::Polygon>::deallocate(const game::MapElementType::Polygon* polygon) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(polygon) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(polygon);
    }

    // 0x1005ad9c0
    VectorFastPool<game::MapElementType::Polygon>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<game::MapElementType::Polygon, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1005ade00
    VectorFastPool<game::MapElementType::Polygon>::~VectorFastPool() {}

    // 0x1005ae0f0
    VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005aef70
    void VectorFastPool<MakeSharedPool<game::MapElementType, 512>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::MapElementType, 512>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005b3820
    uint64_t VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005b389b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005b389b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005b39d0
    VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                         unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005b4020
    VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005b4cf0
    void VectorFastPool<MakeSharedPool<game::MSIType, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::MSIType, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005b9250
    uint64_t VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005b92cb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005b92cb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005b9400
    VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                            unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005b9d50
    VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005bac70
    void VectorFastPool<MakeSharedPool<game::QuestType, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::QuestType, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005bee40
    uint64_t VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005beebb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005beebb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005beff0
    VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                              unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005bf680
    VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005c03c0
    void VectorFastPool<MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::SeqGroupType, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005c4570
    uint64_t VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005c45eb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005c45eb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005c4720
    VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                           unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005c4d70
    VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005c5a70
    void VectorFastPool<MakeSharedPool<game::LightType, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::LightType, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005c9d00
    uint64_t VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005c9d7b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005c9d7b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005c9eb0
    VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                            unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005ca520
    VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005cb210
    void VectorFastPool<MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::SkyBoxType, 16>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005cf9c0
    uint64_t VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005cfa3b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005cfa3b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005cfc80
    void VectorFastPool<MakeSharedPool<game::WaterType, 16>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::WaterType, 16>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005d3e30
    uint64_t VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005d3eab:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005d3eab;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005d3fe0
    VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                            unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005d4630
    VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005d52f0
    void VectorFastPool<MakeSharedPool<game::CursorType, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::CursorType, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005d93f0
    uint64_t VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005d946b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005d946b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005d95a0
    VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                 unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005d9b90
    VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005da910
    void VectorFastPool<MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::WorldAreaType, 1024>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005ded10
    uint64_t VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005ded8b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005ded8b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005deec0
    VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                           unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005df8d0
    VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005e0c20
    void VectorFastPool<MakeSharedPool<game::EnumType, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::EnumType, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005e50a0
    uint64_t VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005e511b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005e511b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005e5250
    VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                 unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005e58e0
    VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005e6670
    void VectorFastPool<MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::EffectAnimType, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005eadd0
    uint64_t VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005eae4b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005eae4b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005eaf80
    VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                              unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005eb5d0
    VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005ec2a0
    void VectorFastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::StructType, 1024>::RefCounterAndData* refCounterAndData) {
        FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>* pFVar2;

        auto this_00 = HeapBeginPtr();
        pFVar2 = (FastPool<MakeSharedPool<game::StructType, 1024>::RefCounterAndData, unsigned long>*)end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1005f0460
    uint64_t VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1005f04db:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1005f04db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1005f0610
    VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                  unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1005f1080
    VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1005f21e0
    void VectorFastPool<MakeSharedPool<game::AchievementType, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::AchievementType, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100634860
    uint64_t VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1006348db:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1006348db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1006349a0
    VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100634f80
    VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100635cb0
    void VectorFastPool<MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100637f20
    uint64_t VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100637f9b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100637f9b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100638060
    VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1006386e0
    VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100639450
    void VectorFastPool<MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100639670
    uint64_t VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1006396eb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1006396eb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1006397a0
    VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100639e00
    VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10063ab90
    void VectorFastPool<MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10063bef0
    uint64_t VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10063bf6b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10063bf6b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10063c030
    VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10063c660
    VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10063d380
    void VectorFastPool<MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10063e580
    uint64_t VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10063e5fb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10063e5fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x10063e6b0
    VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                   unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x10063ecf0
    VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10063f9d0
    void VectorFastPool<MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100645d40
    uint64_t VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100645dbb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100645dbb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100645ed0
    VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100646490
    VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100647180
    void VectorFastPool<MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuildFunctionResultData, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100647e70
    VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100648420
    VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100648e50
    uint64_t VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100648ecb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100648ecb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100649080
    void VectorFastPool<MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuildModelResultData, 512>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1006506a0
    uint64_t VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10065071b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10065071b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100650ab0
    void VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100652760
    uint64_t VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1006527db:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1006527db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100652a60
    void VectorFastPool<MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::CombinedLocation, 128>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100653120
    uint64_t VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10065319b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10065319b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100653240
    VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100653960
    VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100654800
    void VectorFastPool<MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::BuildCombinedLocationResultData, 96>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10065c6d0
    uint64_t VectorFastPool<graphics::AnimationParameters>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10065c74b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10065c74b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100661970
    VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100661db0
    VectorFastPool<MakeSharedPool<game::BuildAnimationResultData, 96>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100671200
    uint64_t VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10067127b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10067127b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100671390
    VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                     unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100671980
    VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100671ac0
    void VectorFastPool<MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100672180
    uint64_t VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1006721fb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1006721fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100672280
    VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                   unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100672970
    void VectorFastPool<graphics::AnimationParameters>::deallocate(
        const graphics::AnimationParameters* animationParameters) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(animationParameters) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(animationParameters);
    }

    // 0x100672a40
    VectorFastPool<graphics::AnimationParameters>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<graphics::AnimationParameters, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100672e80
    VectorFastPool<graphics::AnimationParameters>::~VectorFastPool() {}

    // 0x100673110
    VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006732b0
    void VectorFastPool<MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData>::deallocate(
        const MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1006c5030
    VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                        unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006c5620
    VectorFastPool<MakeSharedPool<ui::Carousel, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006c6af0
    VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                      unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006c70e0
    VectorFastPool<MakeSharedPool<ui::Check, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006c7c90
    VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                          unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006c8280
    VectorFastPool<MakeSharedPool<ui::ComboField, 16>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006d1e70
    VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                        unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006d2460
    VectorFastPool<MakeSharedPool<ui::GroupBox, 16>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006d2fb0
    VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                           unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006d35a0
    VectorFastPool<MakeSharedPool<ui::InputField, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006d42b0
    VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                    unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006d48a0
    VectorFastPool<MakeSharedPool<ui::List, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006d7630
    VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                     unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006d7c20
    VectorFastPool<MakeSharedPool<ui::RadialProgressOverlay, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006d87c0
    VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                          unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006d8db0
    VectorFastPool<MakeSharedPool<ui::RadioGroup, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1006da780
    VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                      unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1006dad70
    VectorFastPool<MakeSharedPool<ui::Slider, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1007c7be0
    VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1007c8050
    VectorFastPool<MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1007e9e50
    VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1007ea430
    VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1007f5130
    VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                    unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1007f5710
    VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1007f7460
    uint64_t VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1007f74db:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1007f74db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1007f7720
    void VectorFastPool<MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::ParticleSystem, 32>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100830f60
    VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                     unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100831540
    VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1008366e0
    uint64_t VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10083675b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10083675b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100836980
    void VectorFastPool<MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::GeometryBatch, 4096>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100843110
    void VectorFastPool<graphics::BillboardBatchInstance>::deallocate(
        const graphics::BillboardBatchInstance* billboardBatchInstance) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(billboardBatchInstance) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(billboardBatchInstance);
    }

    // 0x100844220
    uint64_t VectorFastPool<graphics::BillboardBatchInstance>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10084429b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10084429b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100844950
    uint64_t VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1008449cb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008449cb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100844a70
    VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100845060
    VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1008451e0
    void VectorFastPool<MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::ModelParticleSource, 768>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100845460
    uint64_t VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1008454db:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008454db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1008457d0
    void VectorFastPool<MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::VFXAttachmentInfo, 768>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10084b130
    VectorFastPool<graphics::Billboard>::VectorFastPool(unsigned long arg1, unsigned long arg2) {
        new (this) eastl::vector<FastPool<graphics::Billboard, unsigned long>>();
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x10084b6d0
    VectorFastPool<graphics::Billboard>::~VectorFastPool() {
        ~vector();
    }

    // 0x1008733c0
    uint64_t VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10087343b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10087343b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100873800
    void VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100881140
    VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                    unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100881720
    VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100884ca0
    uint64_t VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100884d1b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100884d1b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100884f00
    void VectorFastPool<MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100885be0
    VectorFastPool<graphics::BillboardBatchInstance>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<graphics::BillboardBatchInstance, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100886020
    VectorFastPool<graphics::BillboardBatchInstance>::~VectorFastPool() {}

    // 0x1008d2a20
    uint64_t VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1008d2a9b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008d2a9b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1008d2ed0
    void VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1008d79a0
    VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                 unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1008d8000
    VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1008dc5b0
    uint64_t VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1008dc62b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008dc62b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1008dc6d0
    VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1008dccc0
    VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1008dce50
    void VectorFastPool<MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::SpriteAtlasReference, 2048>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1008dd200
    uint64_t VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1008dd27b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1008dd27b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1008dd470
    void VectorFastPool<MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::SpriteAtlas, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1009078b0
    uint64_t VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10090792b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10090792b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100907a00
    VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                 unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100907ff0
    VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100908190
    void VectorFastPool<MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::FontMetrics, 64>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1009270e0
    VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                            unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1009276c0
    VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1009287d0
    uint64_t VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10092884b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10092884b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100928a60
    void VectorFastPool<MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::SkyBox, 16>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x10094bcf0
    VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x10094c170
    VectorFastPool<MakeSharedPool<graphics::PointLightIndicesEffect, 64>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100967c20
    void VectorFastPool<graphics::AnimState>::deallocate(const graphics::AnimState* animState) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(animState) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(animState);
    }

    // 0x100967cc0
    VectorFastPool<graphics::AnimState>::VectorFastPool(unsigned long arg1, unsigned long arg2) {
        new (this) eastl::vector<FastPool<graphics::AnimState, unsigned long>>();
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100968270
    VectorFastPool<graphics::AnimState>::~VectorFastPool() {
        ~vector();
    }

    // 0x100968380
    uint64_t VectorFastPool<graphics::AnimState>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1009683fb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1009683fb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100993ab0
    VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                               unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100994120
    VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100995b60
    VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                   unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x1009960b0
    VectorFastPool<MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1009962e0
    uint64_t VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_10099635b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_10099635b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1009965a0
    void VectorFastPool<MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100996b10
    uint64_t VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100996b8b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100996b8b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100996c30
    VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100997260
    VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1009973e0
    void VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100999a10
    VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100999e90
    VectorFastPool<MakeSharedPool<graphics::Animation, 512>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10099bb80
    VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x10099c000
    VectorFastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10099c1c0
    VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                             unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x10099c630
    VectorFastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10099dd80
    VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x10099e370
    VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSample, 8192>::RefCounterAndData>::~VectorFastPool() {}

    // 0x10099ef80
    VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x10099f450
    VectorFastPool<MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1009a2240
    uint64_t VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_1009a22bb:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_1009a22bb;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x1009a23b0
    VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1009a29a0
    VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::~VectorFastPool() {}

    // 0x1009a2c30
    void VectorFastPool<MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData>::deallocate(
        const MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x1009fa8f0
    VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::VectorFastPool(unsigned long arg1,
                                                                                                    unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x1009faee0
    VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100a00e90
    uint64_t VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100a00f0b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100a00f0b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100a01130
    void VectorFastPool<MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData>::deallocate(
        const MakeSharedPool<Js5WorkerRequestMessage, 768>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100b98a90
    VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100b99040
    VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100b99e40
    VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<
              FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100b9a3f0
    VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100ba2660
    uint64_t VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100ba26db:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100ba26db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100ba2880
    void VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData>::deallocate(
        const MakeSharedPool<PacketT<Array<unsigned char>>, 8>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100ba3390
    uint64_t VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100ba340b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100ba340b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100ba35b0
    void VectorFastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData>::deallocate(
        const MakeSharedPool<PacketT<Array<unsigned char>>, 2048>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100bd3d90
    uint64_t VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::allocate() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        uint64_t local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bd3e0b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long&, unsigned long&>(local_48, *((this + 32)))->allocate();
                }
                return local_40;
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                local_40 = this_01->allocate();
                goto LAB_100bd3e0b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bd4900
    void VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::deallocate(
        const MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData* refCounterAndData) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    80, nullptr);
            }
            if (this_00->is_owner(refCounterAndData) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->deallocate(refCounterAndData);
    }

    // 0x100bd5c20
    void VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::Prefetch(
        unsigned long arg1, unsigned long arg2) const {
        auto this_00 = HeapBeginPtr();
        auto pFVar1 = end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->Prefetch(arg1, arg2);
        }
    }

    // 0x100bf4390
    render::ComputePipelineState*
    VectorFastPool<render::ComputePipelineState>::Create<render::ComputePipelineState const&>(
        const render::ComputePipelineState& computePipelineState) {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_50;
        ComputePipelineState* local_48;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bf440f:
                if (this_01 == phVar1) {
                    local_50 = capacity();
                    local_48 = emplace_back<unsigned long, unsigned long&>(local_50, *((this + 32)))
                                   ->Create<render::ComputePipelineState&>(computePipelineState);
                }
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                return local_48 = this_01->Create<render::ComputePipelineState&>(computePipelineState);
                goto LAB_100bf440f;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf44c0
    void VectorFastPool<render::ComputePipelineState>::Destroy(render::ComputePipelineState* computePipelineState) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    52, nullptr);
            }
            if (this_00->is_owner(computePipelineState) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->Destroy(computePipelineState);
    }

    // 0x100bf45a0
    render::ComputePipelineState* VectorFastPool<render::ComputePipelineState>::Create<>() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        ComputePipelineState* local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bf461b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->Create<>();
                }
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                return local_40 = this_01->Create<>();
                goto LAB_100bf461b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf4690
    unsigned long VectorFastPool<render::ComputePipelineState>::is_owner(
        const render::ComputePipelineState* computePipelineState) const {
        bool cVar1;

        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        bool bVar3 = this_00 == pFVar2;
        if (!bVar3) {
            cVar1 = this_00->is_owner(computePipelineState);
            while (!cVar1) {
                this_00 = this_00 + 40;
                bVar3 = this_00 == pFVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->is_owner(computePipelineState);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x100bf49c0
    render::InputAssemblerState*
    VectorFastPool<render::InputAssemblerState>::Create<render::InputAssemblerState const&>(
        const render::InputAssemblerState& inputAssemblerState) {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_50;
        InputAssemblerState* local_48;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bf4a3f:
                if (this_01 == phVar1) {
                    local_50 = capacity();
                    local_48 = emplace_back<unsigned long, unsigned long&>(local_50, *((this + 32)))
                                   ->Create<render::InputAssemblerState&>(inputAssemblerState);
                }
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                return local_48 = this_01->Create<render::InputAssemblerState&>(inputAssemblerState);
                goto LAB_100bf4a3f;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf4bd0
    render::RenderPipelineState*
    VectorFastPool<render::RenderPipelineState>::Create<render::RenderPipelineState const&>(
        const render::RenderPipelineState& renderPipelineState) {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_50;
        RenderPipelineState* local_48;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bf4c4f:
                if (this_01 == phVar1) {
                    local_50 = capacity();
                    local_48 = emplace_back<unsigned long, unsigned long&>(local_50, *((this + 32)))
                                   ->Create<render::RenderPipelineState&>(renderPipelineState);
                }
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                return local_48 = this_01->Create<render::RenderPipelineState&>(renderPipelineState);
                goto LAB_100bf4c4f;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf4de0
    render::OutputMergerState* VectorFastPool<render::OutputMergerState>::Create<render::OutputMergerState const&>(
        const render::OutputMergerState& outputMergerState) {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_50;
        OutputMergerState* local_48;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bf4e5f:
                if (this_01 == phVar1) {
                    local_50 = capacity();
                    local_48 = emplace_back<unsigned long, unsigned long&>(local_50, *((this + 32)))
                                   ->Create<render::OutputMergerState&>(outputMergerState);
                }
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                return local_48 = this_01->Create<render::OutputMergerState&>(outputMergerState);
                goto LAB_100bf4e5f;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf4f00
    void VectorFastPool<render::InputAssemblerState>::Destroy(render::InputAssemblerState* inputAssemblerState) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    52, nullptr);
            }
            if (this_00->is_owner(inputAssemblerState) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->Destroy(inputAssemblerState);
    }

    // 0x100bf4f80
    void VectorFastPool<render::RenderPipelineState>::Destroy(render::RenderPipelineState* renderPipelineState) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    52, nullptr);
            }
            if (this_00->is_owner(renderPipelineState) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->Destroy(renderPipelineState);
    }

    // 0x100bf5000
    void VectorFastPool<render::OutputMergerState>::Destroy(render::OutputMergerState* outputMergerState) {
        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        while (true) {
            if (this_00 == pFVar2) {
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/VectorFastPool.h",
                    52, nullptr);
            }
            if (this_00->is_owner(outputMergerState) != '\0')
                break;
            this_00 = this_00 + 40;
        }
        this_00->Destroy(outputMergerState);
    }

    // 0x100bf50e0
    render::InputAssemblerState* VectorFastPool<render::InputAssemblerState>::Create<>() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        InputAssemblerState* local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bf515b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->Create<>();
                }
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                return local_40 = this_01->Create<>();
                goto LAB_100bf515b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf51a0
    render::RenderPipelineState* VectorFastPool<render::RenderPipelineState>::Create<>() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        RenderPipelineState* local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bf521b:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->Create<>();
                }
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                return local_40 = this_01->Create<>();
                goto LAB_100bf521b;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf5260
    render::OutputMergerState* VectorFastPool<render::OutputMergerState>::Create<>() {
        unsigned long uVar2;
        unsigned long uVar3;
        unsigned long local_48;
        OutputMergerState* local_40;

        auto this_01 = HeapBeginPtr();
        auto phVar1 = end();
        do {
            if (this_01 == phVar1) {
            LAB_100bf52db:
                if (this_01 == phVar1) {
                    local_48 = capacity();
                    local_40 = emplace_back<unsigned long, unsigned long&>(local_48, *((this + 32)))->Create<>();
                }
            }
            uVar2 = this_01->size();
            uVar3 = this_01->capacity();
            if (uVar2 < uVar3) {
                return local_40 = this_01->Create<>();
                goto LAB_100bf52db;
            }
            this_01 = this_01 + 40;
        } while (true);
    }

    // 0x100bf5320
    unsigned long VectorFastPool<render::InputAssemblerState>::is_owner(
        const render::InputAssemblerState* inputAssemblerState) const {
        bool cVar1;

        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        bool bVar3 = this_00 == pFVar2;
        if (!bVar3) {
            cVar1 = this_00->is_owner(inputAssemblerState);
            while (!cVar1) {
                this_00 = this_00 + 40;
                bVar3 = this_00 == pFVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->is_owner(inputAssemblerState);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x100bf5390
    unsigned long VectorFastPool<render::RenderPipelineState>::is_owner(
        const render::RenderPipelineState* renderPipelineState) const {
        bool cVar1;

        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        bool bVar3 = this_00 == pFVar2;
        if (!bVar3) {
            cVar1 = this_00->is_owner(renderPipelineState);
            while (!cVar1) {
                this_00 = this_00 + 40;
                bVar3 = this_00 == pFVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->is_owner(renderPipelineState);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x100bf5400
    unsigned long
    VectorFastPool<render::OutputMergerState>::is_owner(const render::OutputMergerState* outputMergerState) const {
        bool cVar1;

        auto this_00 = HeapBeginPtr();
        auto pFVar2 = end();
        bool bVar3 = this_00 == pFVar2;
        if (!bVar3) {
            cVar1 = this_00->is_owner(outputMergerState);
            while (!cVar1) {
                this_00 = this_00 + 40;
                bVar3 = this_00 == pFVar2;
                if (bVar3)
                    break;
                cVar1 = this_00->is_owner(outputMergerState);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)bVar3) ^ 1) & 4294967295;
    }

    // 0x100c194b0
    void VectorFastPool<render::InputAssemblerState>::clear() {
        auto this_00 = HeapBeginPtr();
        auto pFVar1 = end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->clear();
        }
    }

    // 0x100c19500
    void VectorFastPool<render::RenderPipelineState>::clear() {
        auto this_00 = HeapBeginPtr();
        auto pFVar1 = end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->clear();
        }
    }

    // 0x100c19550
    void VectorFastPool<render::ComputePipelineState>::clear() {
        auto this_00 = HeapBeginPtr();
        auto pFVar1 = end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->clear();
        }
    }

    // 0x100c195a0
    void VectorFastPool<render::OutputMergerState>::clear() {
        auto this_00 = HeapBeginPtr();
        auto pFVar1 = end();
        for (; this_00 != pFVar1; this_00 = this_00 + 40) {
            this_00->clear();
        }
    }

    // 0x100c321f0
    VectorFastPool<render::OutputMergerState>::~VectorFastPool() {}

    // 0x100c324a0
    VectorFastPool<render::ComputePipelineState>::~VectorFastPool() {}

    // 0x100c32650
    VectorFastPool<render::RenderPipelineState>::~VectorFastPool() {}

    // 0x100c32800
    VectorFastPool<render::InputAssemblerState>::~VectorFastPool() {}

    // 0x100c34610
    VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::VectorFastPool(
        unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long&, unsigned long&>(arg1, arg2);
    }

    // 0x100c34a90
    VectorFastPool<MakeSharedPool<render::VertexArrayObject, 2048>::RefCounterAndData>::~VectorFastPool() {}

    // 0x100c3cd10
    VectorFastPool<render::InputAssemblerState>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<render::InputAssemblerState, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100c3d120
    VectorFastPool<render::RenderPipelineState>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<render::RenderPipelineState, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100c3d530
    VectorFastPool<render::ComputePipelineState>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<render::ComputePipelineState, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

    // 0x100c3d940
    VectorFastPool<render::OutputMergerState>::VectorFastPool(unsigned long arg1, unsigned long arg2)
        : eastl::vector<FastPool<render::OutputMergerState, unsigned long>>() {
        *(unsigned long*)(this + 32) = arg2;
        emplace_back<unsigned long, unsigned long&>(arg1, arg2);
    }

} // namespace jag
