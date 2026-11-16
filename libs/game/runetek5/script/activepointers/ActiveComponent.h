// libs/game/runetek5/script/activepointers/ActiveComponent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ActiveComponent {
    public:
        ~ActiveComponent();
        ActiveComponent();
        void Reset();
        ulong SetByDynamicID(InterfaceList&, unsigned int, unsigned int);
        ulong SetByStaticID(InterfaceList&, unsigned int);
        ulong SetByInterfaceAndStaticID(shared_ptr<ui::Interface> const&, unsigned int);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x1003b6fb0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ActiveComponent::ActiveComponent(): jumps straight to the base-object constructor

    // 0x1003b70e0, 48 bytes, inline, placed by class name and debug map
    // ActiveComponent::Reset()
    void ActiveComponent::Reset() {
        shared_ptr<ui::Component>::reset();
        shared_ptr<ui::Interface>::reset();
    }

    // 0x1003b7d00, 48 bytes, base-object constructor, inline, placed by class name
    // ActiveComponent::ActiveComponent()
    void ActiveComponent::ActiveComponent() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::game
