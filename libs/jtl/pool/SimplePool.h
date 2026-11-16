// libs/jtl/pool/SimplePool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <typename...> // 2 instantiations, e.g. <graphics::GraphNode>, <graphics::PointLightSM>
    class SimplePool {
    public:
        graphics::GraphNode* Create<>();
        graphics::GraphNode* Create<int>(int&&);
        void DeAllocate(graphics::GraphNode*);
        SimplePool(unsigned long, unsigned long, unsigned char);
        bool empty() const;
        void size() const;
        ~SimplePool();
        void Clear();
        graphics::PointLightSM* Create<Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>&,
                                       graphics::PointLightSMManager*, unsigned long&>(
            Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>&,
            graphics::PointLightSMManager*&&, unsigned long&);
        void IsAddressAllocated(graphics::PointLightSM const*) const;
        void Destroy(graphics::PointLightSM*);
    };

    // 0x1001edd40, 96 bytes, inline, placed by class name and debug map
    // graphics::GraphNode* SimplePool<graphics::GraphNode>::Create<>()
    GraphNode* SimplePool<graphics::GraphNode>::Create<>() {
        undefined1 local_28[8];
        GraphNode* local_20;

        local_28->Allocate();
        if (local_20 == (GraphNode*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("block.m_address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 35,
                      (char*)0);
        }
        graphics::GraphNode::GraphNode(local_20, 8);
        return local_20;
    }

    // 0x1001edf10, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rseven::Terrain* placement_new<oldscape::rseven::Terrain, graphics::GraphNode*&, int const&, int const&>(void*, graphics::GraphNode*&, int const&, int const&)
    Terrain* jag::placement_new<oldscape::rseven::Terrain, graphics::GraphNode*&, int const&, int const&>(
        void* param_1, GraphNode** param_2, int* param_3, int* param_4) {
        oldscape::rseven::Terrain::Terrain(param_1, *param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x1001edf30, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32> >* placement_new<MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32> >, MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData*&, oldscape::rseven::Terrain*>(void*, MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData*&, oldscape::rseven::Terrain*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>,
        MakeSharedPool<oldscape::rseven::Terrain, 32>::RefCounterAndData*&, oldscape::rseven::Terrain*>(
        void* param_1, RefCounterAndData** param_2, Terrain** param_3) {
        MakeSharedPoolRefCounter<oldscape::rseven::Terrain,
                                 MakeSharedPool<oldscape::rseven::Terrain, 32>>::MakeSharedPoolRefCounter(param_1,
                                                                                                          *param_2,
                                                                                                          *param_3);
        return param_1;
    }

    // 0x1001ee5c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32> >::MakeSharedPoolRefCounter(void*, oldscape::rseven::Terrain*): jumps straight to the base-object constructor

    // 0x1001ee5d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32> >::MakeSharedPoolRefCounter(void*, oldscape::rseven::Terrain*)
    void jag::MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>* this,
            void* param_1, Terrain* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c40 + 16;
        *(void**)(this + 16) = param_1;
        *(Terrain**)(this + 24) = param_2;
    }

    // 0x1001ee610, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<oldscape::rseven::Terrain, MakeSharedPool<oldscape::rseven::Terrain, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<oldscape::rseven::Terrain, 32>::deallocate(pvVar1);
    }

    // 0x1001ee9a0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rseven::DynamicGeometry* placement_new<oldscape::rseven::DynamicGeometry, graphics::GraphNode*&>(void*, graphics::GraphNode*&)
    DynamicGeometry* placement_new<oldscape::rseven::DynamicGeometry, graphics::GraphNode*&>(void* param_1,
                                                                                             GraphNode** param_2) {
        oldscape::rseven::DynamicGeometry::DynamicGeometry(param_1, *param_2);
        return param_1;
    }

    // 0x1001eecc0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::StaticPointLight* placement_new<game::StaticPointLight>(void*)
    StaticPointLight* placement_new<game::StaticPointLight>(void* param_1) {
        game::StaticPointLight::StaticPointLight(param_1);
        return param_1;
    }

    // 0x1001eece0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::StaticPointLight>* placement_new<ref_counter_shared<game::StaticPointLight>, int, game::StaticPointLight*&>(void*, int&&, game::StaticPointLight*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::StaticPointLight>, int, game::StaticPointLight*&>(
        void* param_1, int* param_2, StaticPointLight** param_3) {
        ref_counter_shared<game::StaticPointLight>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001eed00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::StaticPointLight>::ref_counter_shared(unsigned long, game::StaticPointLight*): jumps straight to the base-object constructor

    // 0x1001eed10, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::StaticPointLight>::ref_counter_shared(unsigned long, game::StaticPointLight*)
    void ref_counter_shared<game::StaticPointLight>::ref_counter_shared(ulong param_1, StaticPointLight* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7340 + 16;
        *(ulong*)(this + 16) = param_1;
        *(StaticPointLight**)(this + 24) = param_2;
    }

    // 0x1001eed50, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::StaticPointLight>::DeleteData()
    void ref_counter_shared<game::StaticPointLight>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~StaticPointLight();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 192;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001eede0, 112 bytes, inline, placed by debug map only (low confidence)
    // game::LightSource* placement_new<game::LightSource, graphics::GraphNode*&, decltype(nullptr), decltype(nullptr), shared_ptr<game::StaticPointLight>&, int>(void*, graphics::GraphNode*&, decltype(nullptr)&&, decltype(nullptr)&&, shared_ptr<game::StaticPointLight>&, int&&)
    LightSource* jag::placement_new<game::LightSource, graphics::GraphNode*&, decltype(nullptr), decltype(nullptr),
                                    shared_ptr<game::StaticPointLight>&, int>(void* param_1, GraphNode** param_2,
                                                                              _func_decltype_nullptr** param_3,
                                                                              _func_decltype_nullptr** param_4,
                                                                              shared_ptr* param_5, int* param_6) {
        GraphNode* pGVar1;
        shared_ptr local_40;

        pGVar1 = *param_2;
        new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        game::LightSource::LightSource(param_1, pGVar1, &local_40, (ConfigProvider*)0, param_5, *param_6);
        local_40.~shared_ptr();
        return param_1;
    }

    // 0x1001eee50, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LightSource>* placement_new<ref_counter_shared<game::LightSource>, int, game::LightSource*&>(void*, int&&, game::LightSource*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<game::LightSource>, int, game::LightSource*&>(void* param_1, int* param_2,
                                                                                   LightSource** param_3) {
        ref_counter_shared<game::LightSource>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1001eee70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LightSource>::ref_counter_shared(unsigned long, game::LightSource*): jumps straight to the base-object constructor

    // 0x1001eee80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LightSource>::ref_counter_shared(unsigned long, game::LightSource*)
    void ref_counter_shared<game::LightSource>::ref_counter_shared(ulong param_1, LightSource* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72f0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LightSource**)(this + 24) = param_2;
    }

    // 0x1001eeec0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LightSource>::DeleteData()
    /* ref_counter_shared<tweak::ColourPicker>::DeleteData() */

    void ref_counter_shared<tweak::ColourPicker>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 464;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1004221d0, 96 bytes, inline, placed by class name
    // graphics::GraphNode* SimplePool<graphics::GraphNode>::Create<int>(int&&)
    GraphNode* SimplePool<graphics::GraphNode>::Create<int>(int* param_1) {
        undefined1 local_30[8];
        GraphNode* local_28;

        local_30->Allocate();
        if (local_28 == (GraphNode*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("block.m_address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 35,
                      (char*)0);
        }
        graphics::GraphNode::GraphNode(local_28, *param_1);
        return local_28;
    }

    // 0x1007af0a0, 16 bytes, inline, placed by class name
    // SimplePool<graphics::GraphNode>::DeAllocate(graphics::GraphNode*)
    /* SimplePool<graphics::PointLightSM>::DeAllocate(graphics::PointLightSM*) */

    void SimplePool<graphics::PointLightSM>::DeAllocate(PointLightSM* param_1) {
        param_1->DeAllocate();
    }

    // 0x1007b06b0, 16 bytes, complete-object constructor, inline, placed by class name
    // SimplePool<graphics::GraphNode>::SimplePool(unsigned long, unsigned long, unsigned char): jumps straight to the base-object constructor

    // 0x1007b0700, 32 bytes, inline, placed by class name
    // SimplePool<graphics::GraphNode>::empty() const
    /* SimplePool<graphics::PointLightSM>::empty() const */

    bool SimplePool<graphics::PointLightSM>::empty() {
        return size(this) == 0;
    }

    // 0x1007c3530, 32 bytes, base-object constructor, inline, placed by class name
    // SimplePool<graphics::GraphNode>::SimplePool(unsigned long, unsigned long, unsigned char)
    void SimplePool<graphics::GraphNode>::SimplePool(ulong param_1, ulong param_2, uchar param_3) {
        undefined3 in_register_00000009;

        new (this) SimpleAllocator(param_1, 528, CONCAT31(in_register_00000009, param_3), param_2);
    }

    // 0x1007c3550, 16 bytes, inline, placed by class name
    // SimplePool<graphics::GraphNode>::size() const
    /* SimplePool<graphics::PointLightSM>::size() const */

    void SimplePool<graphics::PointLightSM>::size() {
        size();
    }

    // 0x1007c3560, 16 bytes, complete-object destructor, inline, placed by class name
    // SimplePool<graphics::GraphNode>::~SimplePool(): jumps straight to the base-object destructor

    // 0x1007c3570, 48 bytes, base-object destructor, inline, placed by class name
    // SimplePool<graphics::GraphNode>::~SimplePool()
    void SimplePool<graphics::GraphNode>::~SimplePool() {
        Clear(this);
        ~SimpleAllocator();
    }

    // 0x1007c35a0, 304 bytes, inline, placed by class name
    // SimplePool<graphics::GraphNode>::Clear()
    void SimplePool<graphics::GraphNode>::Clear() {
        bool bVar1;
        char cVar2;
        long lVar3;
        ulong uVar4;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        undefined8* puVar5;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar6;
        eastl local_50[8];
        GraphNode* local_48;
        hashtable_iterator_base local_38[16];

        lVar3 = end();
        if (lVar3 != 0) {
            uVar6 = 0;
            do {
                local_50->GetAllocatedBlock((ulong)this);
                if (local_48 != (GraphNode*)0) {
                    local_48->~GraphNode();
                    DeAllocate(local_50);
                }
                uVar6 = uVar6 + 1;
                uVar4 = end();
            } while (uVar6 < uVar4);
        }
        this_00 = (hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)GetPixelBuffer();
        _local_50 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::begin();
        local_38 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        bVar1 = eastl::operator!=(local_50, local_38, local_38._8_8_);
        if (bVar1) {
            do {
                puVar5 = (undefined8*)local_50->HeapBeginPtr();
                if ((GraphNode*)*puVar5 != (GraphNode*)0) {
                    (*puVar5)->~GraphNode();
                    HeapFree((void*)*puVar5);
                }
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_50);
                bVar1 = eastl::operator!=(local_50, local_38, extraout_RDX);
            } while (bVar1);
        }
        ((this + 112))->clear();
        cVar2 = empty();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 78,
                      (char*)0);
        }
    }

    // 0x1008af180, 112 bytes, inline, placed by class name
    // graphics::PointLightSM* SimplePool<graphics::PointLightSM>::Create<Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>&, graphics::PointLightSMManager*, unsigned long&>(Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>&, graphics::PointLightSMManager*&&, unsigned long&)
    /* graphics::PointLightSM*
   SimplePool<graphics::PointLightSM>::Create<Array<std::array<graphicutils::TextureAtlasSlot2D,
   6ul>, BucketAllocatorEASTL>&, graphics::PointLightSMManager*, unsigned
   long&>(Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>,
   BucketAllocatorEASTL>&, graphics::PointLightSMManager*&&, unsigned long&) */

    PointLightSM* SimplePool<graphics::PointLightSM>::Create<
        Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>&, graphics::PointLightSMManager*,
        unsigned long&>(Array* param_1, PointLightSMManager** param_2, ulong* param_3) {
        undefined1 local_40[8];
        PointLightSM* local_38;

        local_40->Allocate();
        if (local_38 == (PointLightSM*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("block.m_address",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 35,
                      (char*)0);
        }
        graphics::PointLightSM::PointLightSM(local_38, param_1, *param_2, *param_3);
        return local_38;
    }

    // 0x1008af260, 16 bytes, inline, placed by class name
    // SimplePool<graphics::PointLightSM>::IsAddressAllocated(graphics::PointLightSM const*) const
    void SimplePool<graphics::PointLightSM>::IsAddressAllocated(PointLightSM* param_1) {
        IsAddressAllocated(param_1);
    }

    // 0x1008af310, 80 bytes, inline, placed by class name
    // SimplePool<graphics::PointLightSM>::Destroy(graphics::PointLightSM*)
    void SimplePool<graphics::PointLightSM>::Destroy(PointLightSM* param_1) {
        if (param_1 == (PointLightSM*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("object != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 42,
                      (char*)0);
        }
        (*(code*)*param_1->field_0)(param_1);
        DeAllocate((PointLightSM*)this);
    }

    // 0x1008d09a0, 16 bytes, complete-object destructor, inline, placed by class name
    // SimplePool<graphics::PointLightSM>::~SimplePool(): jumps straight to the base-object destructor

    // 0x1008d09b0, 48 bytes, base-object destructor, inline, placed by class name
    // SimplePool<graphics::PointLightSM>::~SimplePool()
    void SimplePool<graphics::PointLightSM>::~SimplePool() {
        Clear(this);
        ~SimpleAllocator();
    }

    // 0x1008d09e0, 304 bytes, inline, placed by class name
    // SimplePool<graphics::PointLightSM>::Clear()
    void SimplePool<graphics::PointLightSM>::Clear() {
        bool bVar1;
        char cVar2;
        long lVar3;
        ulong uVar4;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        long* plVar5;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar6;
        eastl local_50[8];
        undefined8* local_48;
        hashtable_iterator_base local_38[16];

        lVar3 = end();
        if (lVar3 != 0) {
            uVar6 = 0;
            do {
                local_50->GetAllocatedBlock((ulong)this);
                if (local_48 != (undefined8*)0) {
                    (**(code**)*local_48)();
                    DeAllocate(local_50);
                }
                uVar6 = uVar6 + 1;
                uVar4 = end();
            } while (uVar6 < uVar4);
        }
        this_00 = (hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>*)GetPixelBuffer();
        _local_50 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true, true>::begin();
        local_38 = (hashtable_iterator_base[16])
            eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                             eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>::end(this_00);
        bVar1 = eastl::operator!=(local_50, local_38, local_38._8_8_);
        if (bVar1) {
            do {
                plVar5 = (long*)local_50->HeapBeginPtr();
                if ((undefined8*)*plVar5 != (undefined8*)0) {
                    (*(code*)**(undefined8**)*plVar5)();
                    HeapFree((void*)*plVar5);
                }
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>::operator++(
                    (hashtable_iterator<eastl::pair<int const, unsigned int>, true, false>*)local_50);
                bVar1 = eastl::operator!=(local_50, local_38, extraout_RDX);
            } while (bVar1);
        }
        ((this + 112))->clear();
        cVar2 = empty(this);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/SimplePool.h", 78,
                      (char*)0);
        }
    }

    // 0x1008d4e00, 16 bytes, complete-object constructor, inline, placed by class name
    // SimplePool<graphics::PointLightSM>::SimplePool(unsigned long, unsigned long, unsigned char): jumps straight to the base-object constructor

    // 0x1008d4e20, 32 bytes, base-object constructor, inline, placed by class name
    // SimplePool<graphics::PointLightSM>::SimplePool(unsigned long, unsigned long, unsigned char)
    void SimplePool<graphics::PointLightSM>::SimplePool(ulong param_1, ulong param_2, uchar param_3) {
        undefined3 in_register_00000009;

        new (this) SimpleAllocator(param_1, 6896, CONCAT31(in_register_00000009, param_3), param_2);
    }

} // namespace jag

namespace jag::game {
    // 0x1001ef540, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo&&): jumps straight to the base-object constructor

    // 0x1001ef630, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo&&)
    void VisibleShadowCastingLightInfo::VisibleShadowCastingLightInfo(VisibleShadowCastingLightInfo* param_1) {
        new (this) weak_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = param_1->field_16;
    }

} // namespace jag::game
