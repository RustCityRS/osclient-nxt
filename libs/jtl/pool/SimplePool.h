// libs/jtl/pool/SimplePool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <typename...> // 2 instantiations, e.g. <graphics::GraphNode>, <graphics::PointLightSM>
    class SimplePool {
    public:
        graphics::GraphNode* Create<>();
        graphics::GraphNode* Create<int>(int&& arg1);
        void DeAllocate(graphics::GraphNode* graphNode);
        SimplePool(unsigned long arg1, unsigned long arg2, unsigned char arg3);
        bool empty() const;
        void size() const;
        ~SimplePool();
        void Clear();
        graphics::PointLightSM*
        Create<Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>>&, graphics::PointLightSMManager*,
               unsigned long&>(Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>>& textureAtlasSlot2Dss,
                               graphics::PointLightSMManager*&& arg2, unsigned long& arg3);
        void IsAddressAllocated(const graphics::PointLightSM* pointLightSM) const;
        void Destroy(graphics::PointLightSM* pointLightSM);
    };

    // 0x1001edd40
    graphics::GraphNode* SimplePool<graphics::GraphNode>::Create<>() {
        GraphNode* local_20;

        auto local_28 = Allocate();
        if (local_20 == nullptr) {
            LogAssert("block.m_address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 35,
                      nullptr);
        }
        new (local_20) graphics::GraphNode(8);
        return local_20;
    }

    // 0x1001edf10
    oldscape::rseven::Terrain* placement_new<oldscape::rseven::Terrain, graphics::GraphNode*&, int const&, int const&>(
        void* arg1, graphics::GraphNode*& arg2, const int& arg3, const int& arg4) {
        new (arg1) oldscape::rseven::Terrain(arg2, arg3, arg4);
        return arg1;
    }

    // 0x1001edf30
    MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>*
    placement_new<MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>,
                  MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData*&, oldscape::rseven::Terrain*>(
        void* arg1, MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData*& arg2,
        oldscape::rseven::Terrain*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>(
            arg2, arg3);
        return arg1;
    }

    // 0x1001ee5d0
    MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>::
        MakeSharedPoolRefCounter(void* arg1, oldscape::rseven::Terrain* terrain)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c40 + 16;
        *(void**)(this + 16) = arg1;
        *(Terrain**)(this + 24) = terrain;
    }

    // 0x1001ee610
    void
    MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<oldscape::rseven::Terrain, 32>::deallocate(arg1);
    }

    // 0x1001ee9a0
    oldscape::rseven::DynamicGeometry*
    placement_new<oldscape::rseven::DynamicGeometry, graphics::GraphNode*&>(void* arg1, graphics::GraphNode*& arg2) {
        new (arg1) oldscape::rseven::DynamicGeometry(arg2);
        return arg1;
    }

    // 0x1001eecc0
    game::StaticPointLight* placement_new<game::StaticPointLight>(void* arg1) {
        new (arg1) game::StaticPointLight();
        return arg1;
    }

    // 0x1001eece0
    ref_counter_shared<game::StaticPointLight>*
    placement_new<ref_counter_shared<game::StaticPointLight>, int, game::StaticPointLight*&>(
        void* arg1, int&& arg2, game::StaticPointLight*& arg3) {
        new (arg1) ref_counter_shared<game::StaticPointLight>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001eed10
    ref_counter_shared<game::StaticPointLight>::ref_counter_shared(unsigned long arg1,
                                                                   game::StaticPointLight* staticPointLight)
        : ref_counter_base() {}

    // 0x1001eed50
    void ref_counter_shared<game::StaticPointLight>::DeleteData() {
        ref_counter_shared<game::StaticPointLight> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((StaticPointLight*)((long)&(this[3]._vptr)->_dtor + lVar2))->~StaticPointLight();
                    prVar1 = (ref_counter_shared<game::StaticPointLight> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 192;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001eede0
    game::LightSource* placement_new<game::LightSource, graphics::GraphNode*&, decltype(nullptr), decltype(nullptr),
                                     shared_ptr<game::StaticPointLight>&, int>(
        void* arg1, graphics::GraphNode*& arg2, decltype(nullptr)&& arg3, decltype(nullptr)&& arg4,
        shared_ptr<game::StaticPointLight>& staticPointLight, int&& arg6) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_40;
        new (arg1) game::LightSource((GraphNode*)arg2, local_40, nullptr, staticPointLight, arg6);
        return arg1;
    }

    // 0x1001eee50
    ref_counter_shared<game::LightSource>*
    placement_new<ref_counter_shared<game::LightSource>, int, game::LightSource*&>(void* arg1, int&& arg2,
                                                                                   game::LightSource*& arg3) {
        new (arg1) ref_counter_shared<game::LightSource>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001eee80
    ref_counter_shared<game::LightSource>::ref_counter_shared(unsigned long arg1, game::LightSource* lightSource)
        : ref_counter_base() {}

    // 0x1001eeec0
    void ref_counter_shared<game::LightSource>::DeleteData() {
        long lVar1;
        ref_counter_shared<tweak::ColourPicker> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<tweak::ColourPicker> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 464;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1004221d0
    graphics::GraphNode* SimplePool<graphics::GraphNode>::Create<int>(int&& arg1) {
        GraphNode* local_28;

        auto local_30 = Allocate();
        if (local_28 == nullptr) {
            LogAssert("block.m_address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 35,
                      nullptr);
        }
        new (local_28) graphics::GraphNode(arg1);
        return local_28;
    }

    // 0x1007af0a0
    void SimplePool<graphics::GraphNode>::DeAllocate(graphics::GraphNode* graphNode) {
        DeAllocate(graphNode);
    }

    // 0x1007b0700
    bool SimplePool<graphics::GraphNode>::empty() const {
        return size(this) == 0;
    }

    // 0x1007c3530
    SimplePool<graphics::GraphNode>::SimplePool(unsigned long arg1, unsigned long arg2, unsigned char arg3)
        : SimpleAllocator(arg1, 528, (((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3), arg2) {
        uint32_t in_register_00000009;
    }

    // 0x1007c3550
    void SimplePool<graphics::GraphNode>::size() const {
        size();
    }

    // 0x1007c3570
    SimplePool<graphics::GraphNode>::~SimplePool() {
        Clear(this);
    }

    // 0x1007c35a0
    void SimplePool<graphics::GraphNode>::Clear() {
        unsigned long uVar3;
        uint64_t* puVar4;
        unsigned long arg1;
        AllocatedBlock local_50;
        obj_iterator local_38;

        if (end() != 0) {
            arg1 = 0;
            do {
                local_50 = GetAllocatedBlock(arg1);
                if (local_50.field_8 != nullptr) {
                    local_50.field_8->~GraphNode();
                    DeAllocate(&local_50);
                }
                arg1 = arg1 + 1;
                uVar3 = end();
            } while (arg1 < uVar3);
        }
        auto this_00 = GetPixelBuffer();
        local_50._0_16_ = this_00->begin();
        &local_38 = (obj_iterator[16])this_00->end();
        bool cVar1 = local_50 != local_38;
        if (cVar1) {
            do {
                puVar4 = (uint64_t*)local_50.HeapBeginPtr();
                if ((GraphNode*)*puVar4 != nullptr) {
                    (*puVar4)->~GraphNode();
                    HeapFree(*puVar4);
                }
                ++local_50;
                cVar1 = local_50 != local_38;
            } while (cVar1);
        }
        ((this + 112))->clear();
        cVar1 = empty();
        if (!cVar1) {
            LogAssert("empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 78,
                      nullptr);
        }
    }

    // 0x1008af180
    graphics::PointLightSM* SimplePool<graphics::PointLightSM>::Create<
        Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>&, graphics::PointLightSMManager*,
        unsigned long&>(
        Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>& textureAtlasSlot2Dss,
        graphics::PointLightSMManager*&& arg2, unsigned long& arg3) {
        PointLightSM* local_38;

        auto local_40 = Allocate();
        if (local_38 == nullptr) {
            LogAssert("block.m_address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 35,
                      nullptr);
        }
        new (local_38) graphics::PointLightSM(textureAtlasSlot2Dss, arg2, arg3);
        return local_38;
    }

    // 0x1008af260
    void SimplePool<graphics::PointLightSM>::IsAddressAllocated(const graphics::PointLightSM* pointLightSM) const {
        IsAddressAllocated(pointLightSM);
    }

    // 0x1008af310
    void SimplePool<graphics::PointLightSM>::Destroy(graphics::PointLightSM* pointLightSM) {
        if (pointLightSM == nullptr) {
            LogAssert("object != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 42,
                      nullptr);
        }
        std::destroy_at(pointLightSM);
        DeAllocate(this, (GraphNode*)pointLightSM);
    }

    // 0x1008d09b0
    SimplePool<graphics::PointLightSM>::~SimplePool() {
        Clear(this);
    }

    // 0x1008d09e0
    void SimplePool<graphics::PointLightSM>::Clear() {
        unsigned long uVar3;
        long* plVar4;
        unsigned long arg1;
        AllocatedBlock local_50;
        obj_iterator local_38;

        if (end() != 0) {
            arg1 = 0;
            do {
                local_50 = GetAllocatedBlock(arg1);
                if (local_50.field_8 != nullptr) {
                    (*(void (*)(...)) * *(uint64_t**)local_50.field_8)();
                    DeAllocate(&local_50);
                }
                arg1 = arg1 + 1;
                uVar3 = end();
            } while (arg1 < uVar3);
        }
        auto this_00 = GetPixelBuffer();
        local_50._0_16_ = this_00->begin();
        &local_38 = (obj_iterator[16])this_00->end();
        bool cVar1 = local_50 != local_38;
        if (cVar1) {
            do {
                plVar4 = (long*)local_50.HeapBeginPtr();
                if ((uint64_t*)*plVar4 != nullptr) {
                    (*(void (*)(...)) * *(uint64_t**)*plVar4)();
                    HeapFree(*plVar4);
                }
                ++local_50;
                cVar1 = local_50 != local_38;
            } while (cVar1);
        }
        ((this + 112))->clear();
        cVar1 = empty(this);
        if (!cVar1) {
            LogAssert("empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 78,
                      nullptr);
        }
    }

    // 0x1008d4e20
    SimplePool<graphics::PointLightSM>::SimplePool(unsigned long arg1, unsigned long arg2, unsigned char arg3)
        : SimpleAllocator(arg1, 6896, (((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3), arg2) {
        uint32_t in_register_00000009;
    }

} // namespace jag

namespace jag::game {
    // 0x1001ef630
    VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(
        VisibleShadowCastingLightInfo&& visibleShadowCastingLightInfo)
        : weak_ptr(visibleShadowCastingLightInfo), field_16(visibleShadowCastingLightInfo.field_16) {}

} // namespace jag::game
