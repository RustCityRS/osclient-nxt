// libs/game/runetek5/script/activepointers/ActiveComponent.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ActiveComponent.h"

namespace jag::game {
    // 0x1001e0d60: ActiveComponent::~ActiveComponent() has the same machine code as hal::audio::AudioAPI::~AudioAPI()

    // 0x1003b7130
    uint32_t ActiveComponent::SetByDynamicID(InterfaceList& interfaceList, unsigned int arg2, unsigned int arg3) {
        shared_ptr<ui::Interface>* interface;

        auto component = interfaceList.GetDynamicComponent(arg2, arg3);
        *this = *component;
        uint32_t uVar1 = operator_cast_to_bool();
        if ((char)uVar1 == '\0') {
            Reset();
        } else {
            interface = interfaceList.GetInterface(arg2 >> 16, false);
            field_16 = *interface;
        }
        return uVar1;
    }

    // 0x1003b71a0
    uint32_t ActiveComponent::SetByStaticID(InterfaceList& interfaceList, unsigned int arg2) {
        shared_ptr<ui::Interface>* interface;

        auto component = interfaceList.GetStaticComponent(arg2);
        *this = *component;
        uint32_t uVar1 = operator_cast_to_bool();
        if ((char)uVar1 == '\0') {
            Reset();
        } else {
            interface = interfaceList.GetInterface(arg2 >> 16, false);
            field_16 = *interface;
        }
        return uVar1;
    }

    // 0x1003b7210
    uint32_t ActiveComponent::SetByInterfaceAndStaticID(const shared_ptr<ui::Interface>& interface, unsigned int arg2) {
        shared_ptr<ui::Component>* component;

        uint8_t* this_00 = &field_16;
        *this_00 = interface;
        if (((CoordMapSquare*)(*this_00).operator->())->GetX() != arg2 >> 16) {
            LogAssert("m_parentInterface->GetInterfaceID() == (staticCombinedID >> 16)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                      "activepointers/ActiveComponent.cpp",
                      40,
                      "ActiveComponent.setByInterfaceAndStaticID - component doesn\'t belong to supplied interface.");
        }
        Interface* this_02 = (Interface*)(*this_00).operator->();
        component = (shared_ptr<ui::Component>*)this_02->GetStaticComponent(arg2 & 65535);
        *this = *component;
        uint32_t uVar2 = operator_cast_to_bool();
        if ((char)uVar2 == '\0') {
            Reset();
        }
        return uVar2;
    }

} // namespace jag::game
