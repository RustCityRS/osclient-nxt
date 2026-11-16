// libs/game/runetek5/script/activepointers/ActiveComponent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ActiveComponent {
    public:
        ~ActiveComponent();
        ActiveComponent();
        void Reset();
        uint32_t SetByDynamicID(InterfaceList& interfaceList, unsigned int arg2, unsigned int arg3);
        uint32_t SetByStaticID(InterfaceList& interfaceList, unsigned int arg2);
        uint32_t SetByInterfaceAndStaticID(const shared_ptr<ui::Interface>& interface, unsigned int arg2);

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[8];
    };

    // 0x1003b70e0
    void ActiveComponent::Reset() {
        reset();
        field_16.reset();
    }

    // 0x1003b7d00
    ActiveComponent::ActiveComponent() : shared_ptr() {
        new (&field_16) shared_ptr();
    }

} // namespace jag::game
