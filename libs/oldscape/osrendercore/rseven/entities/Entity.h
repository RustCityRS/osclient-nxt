// libs/oldscape/osrendercore/rseven/entities/Entity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::highlight {
    template <typename...> // 5 instantiations, e.g. <ClientObj>, <dash3d::Decor>, <dash3d::GroundDecor>
    class EntityWithCoord {
    public:
        EntityWithCoord(int, int, shared_ptr<dash3d::Wall>);
        ~EntityWithCoord();
        EntityWithCoord(EntityWithCoord<dash3d::Wall> const&);
        EntityWithCoord(EntityWithCoord<dash3d::Wall>&&);
        EntityWithCoord<dash3d::Wall>* operator=(EntityWithCoord<dash3d::Wall>&&);
        EntityWithCoord<dash3d::Decor>* operator=(EntityWithCoord<dash3d::Decor>&&);
        EntityWithCoord<dash3d::GroundDecor>* operator=(EntityWithCoord<dash3d::GroundDecor>&&);
        EntityWithCoord<dash3d::Sprite>* operator=(EntityWithCoord<dash3d::Sprite>&&);
        EntityWithCoord<ClientObj>* operator=(EntityWithCoord<ClientObj>&&);
    };

    // 0x10002b010, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Wall>::EntityWithCoord(EntityWithCoord<dash3d::Wall> const&): jumps straight to the base-object constructor

    // 0x10002b100, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Wall>::EntityWithCoord(EntityWithCoord<dash3d::Wall> const&)
    /* EntityWithCoord<dash3d::Decor>::EntityWithCoord(EntityWithCoord<dash3d::Decor>
   const&) */

    void EntityWithCoord<dash3d::Decor>::EntityWithCoord(EntityWithCoord* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) weak_ptr<dash3d::Decor>((weak_ptr*)(param_1 + 8));
    }

    // 0x10002b390, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Wall>::EntityWithCoord(EntityWithCoord<dash3d::Wall>&&): jumps straight to the base-object constructor

    // 0x10002b3b0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Wall>::EntityWithCoord(EntityWithCoord<dash3d::Wall>&&)
    /* EntityWithCoord<dash3d::Decor>::EntityWithCoord(EntityWithCoord<dash3d::Decor>&&)
    */

    void EntityWithCoord<dash3d::Decor>::EntityWithCoord(EntityWithCoord* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) weak_ptr<dash3d::Decor>((weak_ptr*)(param_1 + 8));
    }

    // 0x10002b440, 16 bytes, base-object destructor, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Wall>::~EntityWithCoord()
    /* EntityWithCoord<dash3d::Decor>::~EntityWithCoord() */

    void EntityWithCoord<dash3d::Decor>::~EntityWithCoord() {
        ((this + 8))->~weak_ptr();
    }

    // 0x10002be40, 48 bytes, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Wall>::operator=(EntityWithCoord<dash3d::Wall>&&)
    /* EntityWithCoord<dash3d::Wall>::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<dash3d::Wall>&&)
    */

    EntityWithCoord<dash3d::Wall>* EntityWithCoord<dash3d::Wall>::operator=(EntityWithCoord* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        weak_ptr<dash3d::Wall>::operator=((weak_ptr<dash3d::Wall>*)(this + 8), (weak_ptr*)(param_1 + 8));
        return this;
    }

    // 0x10002c230, 48 bytes, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Decor>::operator=(EntityWithCoord<dash3d::Decor>&&)
    /* EntityWithCoord<dash3d::Decor>::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<dash3d::Decor>&&)
    */

    EntityWithCoord<dash3d::Decor>* EntityWithCoord<dash3d::Decor>::operator=(EntityWithCoord* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        weak_ptr<dash3d::Decor>::operator=((weak_ptr<dash3d::Decor>*)(this + 8), (weak_ptr*)(param_1 + 8));
        return this;
    }

    // 0x10002c600, 48 bytes, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::GroundDecor>::operator=(EntityWithCoord<dash3d::GroundDecor>&&)
    /* EntityWithCoord<dash3d::GroundDecor>::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<dash3d::GroundDecor>&&)
    */

    EntityWithCoord<dash3d::GroundDecor>* EntityWithCoord<dash3d::GroundDecor>::operator=(EntityWithCoord* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        weak_ptr<dash3d::GroundDecor>::operator=((weak_ptr<dash3d::GroundDecor>*)(this + 8), (weak_ptr*)(param_1 + 8));
        return this;
    }

    // 0x10002c9d0, 48 bytes, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Sprite>::operator=(EntityWithCoord<dash3d::Sprite>&&)
    /* EntityWithCoord<dash3d::Sprite>::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<dash3d::Sprite>&&)
    */

    EntityWithCoord<dash3d::Sprite>* EntityWithCoord<dash3d::Sprite>::operator=(EntityWithCoord* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        weak_ptr<dash3d::Sprite>::operator=((weak_ptr<dash3d::Sprite>*)(this + 8), (weak_ptr*)(param_1 + 8));
        return this;
    }

    // 0x10002cda0, 48 bytes, inline, placed by class header (inline)
    // EntityWithCoord<ClientObj>::operator=(EntityWithCoord<ClientObj>&&)
    /* EntityWithCoord<ClientObj>::TEMPNAMEPLACEHOLDERVALUE(EntityWithCoord<ClientObj>&&)
    */

    EntityWithCoord<ClientObj>* EntityWithCoord<ClientObj>::operator=(EntityWithCoord* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        weak_ptr<ClientObj>::operator=((weak_ptr<ClientObj>*)(this + 8), (weak_ptr*)(param_1 + 8));
        return this;
    }

    // 0x100034850, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // EntityWithCoord<dash3d::Wall>::EntityWithCoord(int, int, shared_ptr<dash3d::Wall>)
    /* EntityWithCoord<dash3d::Decor>::EntityWithCoord(int,
   int, shared_ptr<dash3d::Decor>) */

    void EntityWithCoord<dash3d::Decor>::EntityWithCoord(int param_1, int param_2, shared_ptr param_3) {
        weak_ptr* in_RCX;

        *(int*)this = param_1;
        *(int*)(this + 4) = param_2;
        new ((this + 8)) weak_ptr<dash3d::Decor>(in_RCX);
    }

} // namespace jag::oldscape::highlight

namespace jag {
    // 0x1001ccd60, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rseven::DynamicGeometry>::type make_shared<oldscape::rseven::DynamicGeometry, graphics::GraphNode*&>(graphics::GraphNode*&)
    jag* make_shared<oldscape::rseven::DynamicGeometry, graphics::GraphNode*&>(GraphNode** param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DynamicGeometry* local_30[2];

        pvVar1 = (void*)aligned_alloc(112, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<oldscape::rseven::DynamicGeometry, graphics::GraphNode*&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rseven::DynamicGeometry>, int,
                                   oldscape::rseven::DynamicGeometry*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1001ccec0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::StaticPointLight>::type make_shared<game::StaticPointLight>()
    jag* make_shared<game::StaticPointLight>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        StaticPointLight* local_28[2];

        pvVar1 = (void*)aligned_alloc(224, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_28[0] = placement_new<game::StaticPointLight>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::StaticPointLight>, int, game::StaticPointLight*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1001ccf50, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::LightSource>::type make_shared<game::LightSource, graphics::GraphNode*&, decltype(nullptr), decltype(nullptr), shared_ptr<game::StaticPointLight>&, int>(graphics::GraphNode*&, decltype(nullptr)&&, decltype(nullptr)&&, shared_ptr<game::StaticPointLight>&, int&&)
    jag* jag::make_shared<game::LightSource, graphics::GraphNode*&, decltype(nullptr), decltype(nullptr),
                          shared_ptr<game::StaticPointLight>&, int>(GraphNode** param_1,
                                                                    _func_decltype_nullptr** param_2,
                                                                    _func_decltype_nullptr** param_3,
                                                                    shared_ptr* param_4, int* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        LightSource* local_40[2];

        pvVar1 = (void*)aligned_alloc(496, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<game::LightSource, graphics::GraphNode*&, decltype(nullptr), decltype(nullptr),
                                        shared_ptr<game::StaticPointLight>&, int>((void*)((long)pvVar1 + 32), param_1,
                                                                                  param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<game::LightSource>, int, game::LightSource*&>(pvVar1, &local_44,
                                                                                                    local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::oldscape::rseven {
    class Entity {
    public:
        // virtual methods in vtable order
        virtual ~Entity();
        virtual GatherDrawableElements(jag::graphics::DrawableQueue&, jag::graphics::RT7Core&,
                                       jag::math::Matrix44T<float> const&, jag::graphics::SceneViewData const&,
                                       jag::graphics::EffectManager const&);
        Destruct();
        void GetNode() const;
        Entity(jag::graphics::GraphNode*, EntityType);
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullEntity;

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined4 field_16; // offset 16
        char _unknown_20[4];
    };

    // 0x1001ccd50, 16 bytes, inline, placed by class name and debug map
    // Entity::GetNode() const
    void Entity::GetNode() {
        (&field_8)->get();
    }

} // namespace jag::oldscape::rseven
