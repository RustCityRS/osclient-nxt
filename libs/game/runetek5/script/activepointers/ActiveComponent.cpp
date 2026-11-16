// libs/game/runetek5/script/activepointers/ActiveComponent.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ActiveComponent.h"

namespace jag::game {
    // 0x1001e0d50: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    ActiveComponent::~ActiveComponent();

    // 0x1001e0d60: the linker folded this into hal::audio::AudioAPI::~AudioAPI(), which has identical code
    ActiveComponent::~ActiveComponent();

    // 0x1003b7130, 112 bytes, placed by class name and debug map
    // ActiveComponent::SetByDynamicID(InterfaceList&, unsigned int, unsigned int)
    ulong ActiveComponent::SetByDynamicID(InterfaceList* param_1, uint param_2, uint param_3) {
        bool bVar1;
        shared_ptr* psVar2;
        undefined7 extraout_var;

        psVar2 = (shared_ptr*)param_1->GetDynamicComponent(param_2, param_3);
        shared_ptr<ui::Component>::operator=((shared_ptr<ui::Component>*)this, psVar2);
        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            psVar2 = (shared_ptr*)param_1->GetInterface(param_2 >> 16, false);
            shared_ptr<ui::Interface>::operator=((shared_ptr<ui::Interface>*)&field_16, psVar2);
        } else {
            Reset(this);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x1003b71a0, 112 bytes, placed by class name and debug map
    // ActiveComponent::SetByStaticID(InterfaceList&, unsigned int)
    ulong ActiveComponent::SetByStaticID(InterfaceList* param_1, uint param_2) {
        bool bVar1;
        shared_ptr* psVar2;
        undefined7 extraout_var;

        psVar2 = (shared_ptr*)param_1->GetStaticComponent(param_2);
        shared_ptr<ui::Component>::operator=((shared_ptr<ui::Component>*)this, psVar2);
        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            psVar2 = (shared_ptr*)param_1->GetInterface(param_2 >> 16, false);
            shared_ptr<ui::Interface>::operator=((shared_ptr<ui::Interface>*)&field_16, psVar2);
        } else {
            Reset(this);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

    // 0x1003b7210, 160 bytes, placed by class name and debug map
    // ActiveComponent::SetByInterfaceAndStaticID(shared_ptr<ui::Interface> const&, unsigned int)
    ulong ActiveComponent::SetByInterfaceAndStaticID(shared_ptr* param_1, uint param_2) {
        undefined1* this_00;
        bool bVar1;
        CoordMapSquare* this_01;
        Interface* this_02;
        shared_ptr* psVar3;
        undefined7 extraout_var;

        this_00 = &field_16;
        shared_ptr<ui::Interface>::operator=((shared_ptr<ui::Interface>*)this_00, param_1);
        this_01 = (CoordMapSquare*)shared_ptr<ui::Interface>::operator->((shared_ptr<ui::Interface>*)this_00);
        if (this_01->GetX() != param_2 >> 16) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_parentInterface->GetInterfaceID() == (staticCombinedID >> 16)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                      "activepointers/ActiveComponent.cpp",
                      40,
                      "ActiveComponent.setByInterfaceAndStaticID - component doesn\'t belong to supplied interface.");
        }
        this_02 = (Interface*)shared_ptr<ui::Interface>::operator->((shared_ptr<ui::Interface>*)this_00);
        psVar3 = (shared_ptr*)this_02->GetStaticComponent(param_2 & 65535);
        shared_ptr<ui::Component>::operator=((shared_ptr<ui::Component>*)this, psVar3);
        bVar1 = operator_cast_to_bool();
        if (!bVar1) {
            Reset(this);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295;
    }

} // namespace jag::game
