// libs/oldscape/osrendercore/rseven/entities/Entity.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::highlight {
    template <typename...> // 5 instantiations, e.g. <ClientObj>, <dash3d::Decor>, <dash3d::GroundDecor>
    class EntityWithCoord {
    public:
        EntityWithCoord(int arg1, int arg2, shared_ptr<dash3d::Wall> groundDecor);
        ~EntityWithCoord();
        EntityWithCoord(const EntityWithCoord<dash3d::Wall>& entityWithCoord);
        EntityWithCoord(EntityWithCoord<dash3d::Wall>&& entityWithCoord);
        EntityWithCoord<dash3d::Wall>* operator=(EntityWithCoord<dash3d::Wall>&& entityWithCoord);
        EntityWithCoord<dash3d::Decor>* operator=(EntityWithCoord<dash3d::Decor>&& entityWithCoord);
        EntityWithCoord<dash3d::GroundDecor>* operator=(EntityWithCoord<dash3d::GroundDecor>&& entityWithCoord);
        EntityWithCoord<dash3d::Sprite>* operator=(EntityWithCoord<dash3d::Sprite>&& entityWithCoord);
        EntityWithCoord<ClientObj>* operator=(EntityWithCoord<ClientObj>&& entityWithCoord);
    };

    // 0x10002b100
    EntityWithCoord<dash3d::Wall>::EntityWithCoord(const EntityWithCoord<dash3d::Wall>& entityWithCoord) {
        *(uint64_t*)this = *(uint64_t*)entityWithCoord;
        new ((this + 8)) weak_ptr(*((entityWithCoord + 8)));
    }

    // 0x10002b3b0
    EntityWithCoord<dash3d::Wall>::EntityWithCoord(EntityWithCoord<dash3d::Wall>&& entityWithCoord) {
        *(uint64_t*)this = *(uint64_t*)entityWithCoord;
        new ((this + 8)) weak_ptr(*((entityWithCoord + 8)));
    }

    // 0x10002b440
    EntityWithCoord<dash3d::Wall>::~EntityWithCoord() {
        ((this + 8))->~weak_ptr();
    }

    // 0x10002be40
    EntityWithCoord<dash3d::Wall>*
    EntityWithCoord<dash3d::Wall>::operator=(EntityWithCoord<dash3d::Wall>&& entityWithCoord) {
        *(uint64_t*)this = *(uint64_t*)entityWithCoord;
        (*((this + 8))) = (*((entityWithCoord + 8)));
        return this;
    }

    // 0x10002c230
    EntityWithCoord<dash3d::Decor>*
    EntityWithCoord<dash3d::Decor>::operator=(EntityWithCoord<dash3d::Decor>&& entityWithCoord) {
        *(uint64_t*)this = *(uint64_t*)entityWithCoord;
        (*((this + 8))) = (*((entityWithCoord + 8)));
        return this;
    }

    // 0x10002c600
    EntityWithCoord<dash3d::GroundDecor>*
    EntityWithCoord<dash3d::GroundDecor>::operator=(EntityWithCoord<dash3d::GroundDecor>&& entityWithCoord) {
        *(uint64_t*)this = *(uint64_t*)entityWithCoord;
        (*((this + 8))) = (*((entityWithCoord + 8)));
        return this;
    }

    // 0x10002c9d0
    EntityWithCoord<dash3d::Sprite>*
    EntityWithCoord<dash3d::Sprite>::operator=(EntityWithCoord<dash3d::Sprite>&& entityWithCoord) {
        *(uint64_t*)this = *(uint64_t*)entityWithCoord;
        (*((this + 8))) = (*((entityWithCoord + 8)));
        return this;
    }

    // 0x10002cda0
    EntityWithCoord<ClientObj>* EntityWithCoord<ClientObj>::operator=(EntityWithCoord<ClientObj>&& entityWithCoord) {
        *(uint64_t*)this = *(uint64_t*)entityWithCoord;
        (*((this + 8))) = (*((entityWithCoord + 8)));
        return this;
    }

    // 0x100034850
    EntityWithCoord<dash3d::Wall>::EntityWithCoord(int arg1, int arg2, shared_ptr<dash3d::Wall> groundDecor) {
        *(int*)this = arg1;
        *(int*)(this + 4) = arg2;
        new ((this + 8)) weak_ptr(*groundDecor);
    }

} // namespace jag::oldscape::highlight

namespace jag {
    // 0x1001ccd60
    shared_ptr_if_not_array<oldscape::rseven::DynamicGeometry>::type
    make_shared<oldscape::rseven::DynamicGeometry, graphics::GraphNode*&>(graphics::GraphNode*& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DynamicGeometry* local_30[2];

        auto arg1_00 = aligned_alloc(112, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rseven::DynamicGeometry>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rseven::DynamicGeometry, graphics::GraphNode*&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rseven::DynamicGeometry>, int,
                              oldscape::rseven::DynamicGeometry*&>(arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1001ccec0
    shared_ptr_if_not_array<game::StaticPointLight>::type make_shared<game::StaticPointLight>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        StaticPointLight* local_28[2];

        auto arg1 = aligned_alloc(224, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::StaticPointLight>::type result;
        } else {
            local_28[0] = placement_new<game::StaticPointLight>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::StaticPointLight>, int, game::StaticPointLight*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1001ccf50
    shared_ptr_if_not_array<game::LightSource>::type
    make_shared<game::LightSource, graphics::GraphNode*&, decltype(nullptr), decltype(nullptr),
                shared_ptr<game::StaticPointLight>&, int>(graphics::GraphNode*& arg1, decltype(nullptr)&& arg2,
                                                          decltype(nullptr)&& arg3,
                                                          shared_ptr<game::StaticPointLight>& staticPointLight,
                                                          int&& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        LightSource* local_40[2];

        auto arg1_00 = aligned_alloc(496, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::LightSource>::type result;
        } else {
            local_40[0] = placement_new<game::LightSource, graphics::GraphNode*&, decltype(nullptr), decltype(nullptr),
                                        shared_ptr<game::StaticPointLight>&, int>((void*)((long)arg1_00 + 32), arg1,
                                                                                  arg2, arg3, staticPointLight, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::LightSource>, int, game::LightSource*&>(arg1_00, &local_44,
                                                                                               local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::oldscape::rseven {
    class Entity {
    public:
        // virtual methods in vtable order
        virtual ~Entity();
        virtual void GatherDrawableElements(jag::graphics::DrawableQueue& arg1, jag::graphics::RT7Core& arg2,
                                            const jag::math::Matrix44T<float>& arg3,
                                            const jag::graphics::SceneViewData& arg4,
                                            const jag::graphics::EffectManager& arg5);
        void Destruct();
        GraphNode* GetNode() const;
        Entity(jag::graphics::GraphNode* graphNode, EntityType entityType);
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            NullEntity; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_8[8];
        EntityType field_16;
        uint8_t _unknown_20[4];
    };

    // 0x1001ccd50
    GraphNode* Entity::GetNode() const {
        return (GraphNode*)field_8.get();
    }

} // namespace jag::oldscape::rseven
