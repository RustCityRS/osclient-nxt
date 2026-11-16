// libs/hal/windowing/MenuItem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.osclient

#include "MenuItem.h"

namespace jag {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    MenuItem::GetChildren();

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    MenuItem::GetChildren() const;

    // 0x1000fa830: the linker folded this into oldscape::graphics::NXTPixScreen::GetWidth() const, which has identical code
    MenuItem::GetCommandIndex() const;

    // 0x1003a15d0, 176 bytes, placed by class name and debug map
    // MenuItem::FindByCommandID(unsigned int) const
    MenuItem* MenuItem::FindByCommandID(uint param_1) {
        bool bVar1;
        char cVar2;
        MenuItem* this_00;
        MenuItem* pMVar4;
        vector* this_01;
        MenuItem* pMVar5;
        undefined4 in_register_00000034;
        type* ptVar6;
        MenuItem* unaff_R12;

        ptVar6 = (type*)CONCAT44(in_register_00000034, param_1);
        this_00 = (MenuItem*)HeapBeginPtr();
        pMVar4 = (MenuItem*)end();
        do {
            if (this_00 == pMVar4) {
                return (MenuItem*)0;
            }
            this_01 = this_00->SSOBeginPtr(ptVar6);
            cVar2 = this_01->empty();
            if (cVar2 == '\0') {
                ptVar6 = (type*)(ulong)param_1;
                pMVar5 = (MenuItem*)FindByCommandID(this_00, param_1);
                if (pMVar5 == (MenuItem*)0)
                    goto LAB_1003a1650;
                bVar1 = false;
            } else {
                if (this_00->GetStatus() == param_1) {
                    bVar1 = false;
                    pMVar5 = this_00;
                } else {
                LAB_1003a1650:
                    bVar1 = true;
                    pMVar5 = unaff_R12;
                }
            }
            if (!bVar1) {
                return pMVar5;
            }
            this_00 = (MenuItem*)&this_00[1].field_8;
            unaff_R12 = pMVar5;
        } while (true);
    }

} // namespace jag
