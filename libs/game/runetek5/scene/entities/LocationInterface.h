// libs/game/runetek5/scene/entities/LocationInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LocationInterface : public Entity // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LocationInterface();
        virtual uint64_t GetRotation90() const;
        virtual void RequestOverrideAnimation(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        virtual uint64_t GetAttachedWallWidth() const;
        virtual void __pure_slot_38() = 0;
        virtual void __pure_slot_39() = 0;
        virtual uint8_t* GetLocationType() const;
        virtual void __pure_slot_45() = 0;
        uint64_t GetLocationWidth() const;
        uint64_t GetLocationLength() const;
        uint64_t GetShape() const;
        int TicksSinceLastCall(unsigned int arg1);
        int AddRandomSound(int arg1, int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5,
                           unsigned int arg6, unsigned int arg7, unsigned int arg8, unsigned int arg9,
                           const math::Vector3T<float>& vector3, int arg11);
        LocationInterface(LocationInterfaceType locationInterfaceType, graphics::GraphNode* graphNode,
                          const shared_ptr<World>& world, EntityType entityType, int arg5);
        uint8_t* GetParentLocationType() const;
        LocationInterface(LocationInterfaceType locationInterfaceType, EntityType entityType);

    private:
        uint8_t _unknown_192[16];
        unsigned int field_208;
        LocationInterfaceType field_212;
        uint8_t _unknown_216[4];
    };

    // 0x10042ad00
    LocationInterface::LocationInterface(LocationInterfaceType locationInterfaceType, graphics::GraphNode* graphNode,
                                         const shared_ptr<World>& world, EntityType entityType, int arg5)
        : Entity(graphNode, world, entityType, arg5) {
        uint8_t* puVar1 = PTR_vtable_100ee7fb0;
        field_8 = (uint8_t**)(puVar1 + 424);
        field_208 = 0;
        field_212 = locationInterfaceType;
    }

    // 0x10042af70
    LocationInterface::~LocationInterface() {
        uint8_t* puVar1 = PTR_vtable_100ee7fb0;
        field_8 = (uint8_t**)(puVar1 + 424);
        field_192.~enable_shared_from_this();
    }

    // 0x100431b80
    uint8_t* LocationInterface::GetLocationType() const {
        return &NullLocType;
    }

    // 0x100449c90
    LocationInterface::LocationInterface(LocationInterfaceType locationInterfaceType, EntityType entityType) {
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38;
        new (this) Entity(nullptr, local_38, entityType, 0);
        new (&field_192) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        uint8_t* puVar1 = PTR_vtable_100ee7fb0;
        field_8 = (uint8_t**)(puVar1 + 424);
        field_208 = 0;
        field_212 = locationInterfaceType;
    }

} // namespace jag::game
