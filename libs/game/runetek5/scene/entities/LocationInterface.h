// libs/game/runetek5/scene/entities/LocationInterface.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LocationInterface : public Entity // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LocationInterface();
        virtual GetRotation90() const;
        virtual RequestOverrideAnimation(int, int, unsigned int, unsigned int);
        virtual GetAttachedWallWidth() const;
        virtual void __pure_slot_38() = 0;
        virtual void __pure_slot_39() = 0;
        virtual GetLocationType() const;
        virtual void __pure_slot_45() = 0;
        GetLocationWidth() const;
        GetLocationLength() const;
        GetShape() const;
        int TicksSinceLastCall(unsigned int);
        int AddRandomSound(int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                           unsigned int, math::Vector3T<float> const&, int);
        LocationInterface(LocationInterfaceType, graphics::GraphNode*, shared_ptr<World> const&, EntityType, int);
        GetParentLocationType() const;
        LocationInterface(LocationInterfaceType, EntityType);

        // data members, from how the methods use this: 220 bytes, the first 192 are Entity
        char _unknown_192[16];
        uint field_208;       // offset 208
        undefined4 field_212; // offset 212
        char _unknown_216[4];
    };

    // 0x10042ad00, 112 bytes, base-object constructor, inline, placed by class name and debug map
    // LocationInterface::LocationInterface(LocationInterfaceType, graphics::GraphNode*, shared_ptr<World> const&, EntityType, int)
    void LocationInterface::LocationInterface(undefined4 param_2, undefined8 param_3, undefined8 param_4,
                                              undefined4 param_5, undefined4 param_6) {
        undefined* puVar1;

        new (this) Entity(param_3, param_4, param_5, param_6);
        new (&field_192) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        puVar1 = PTR_vtable_100ee7fb0;
        field_0 = (undefined**)(PTR_vtable_100ee7fb0 + 16);
        field_8 = (undefined**)(puVar1 + 424);
        field_208 = 0;
        field_212 = param_2;
    }

    // 0x10042af70, 80 bytes, base-object destructor, inline, placed by class name and debug map
    // LocationInterface::~LocationInterface()
    void LocationInterface::~LocationInterface() {
        undefined* puVar1;

        puVar1 = PTR_vtable_100ee7fb0;
        field_0 = (undefined**)(PTR_vtable_100ee7fb0 + 16);
        field_8 = (undefined**)(puVar1 + 424);
        AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton();
        (&field_192)->~enable_shared_from_this();
        ~Entity();
    }

    // 0x100431b80, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LocationInterface::GetLocationType() const
    /* LocationInterface::GetParentLocationType() const */

    undefined1* LocationInterface::GetParentLocationType() {
        return &NullLocType;
    }

    // 0x100449c90, 176 bytes, base-object constructor, inline, placed by class name
    // LocationInterface::LocationInterface(LocationInterfaceType, EntityType)
    void LocationInterface::LocationInterface(undefined4 param_2, undefined4 param_3) {
        undefined* puVar1;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38[16];

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_38, (_func_decltype_nullptr*)0);
        new (this) Entity(0, local_38, param_3, 0);
        local_38->~shared_ptr();
        new (&field_192) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        puVar1 = PTR_vtable_100ee7fb0;
        field_0 = (undefined**)(PTR_vtable_100ee7fb0 + 16);
        field_8 = (undefined**)(puVar1 + 424);
        field_208 = 0;
        field_212 = param_2;
    }

} // namespace jag::game
