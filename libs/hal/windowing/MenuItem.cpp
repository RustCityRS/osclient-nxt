// libs/hal/windowing/MenuItem.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.osclient

#include "MenuItem.h"

namespace jag {
    // 0x100009ca0: MenuItem::GetChildren() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: MenuItem::GetChildren() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000fa830: MenuItem::GetCommandIndex() const has the same machine code as oldscape::graphics::NXTPixScreen::GetWidth() const

    // 0x1003a15d0
    MenuItem* MenuItem::FindByCommandID(unsigned int arg1) const {
        bool bVar1;
        MenuItem* pMVar5;
        MenuItem* unaff_R12;

        auto this_00 = HeapBeginPtr();
        auto pMVar4 = end();
        do {
            if (this_00 == pMVar4) {
                return nullptr;
            }
            if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00->SSOBeginPtr())
                    ->empty() == '\0') {
                pMVar5 = (MenuItem*)FindByCommandID(this_00, arg1);
                if (pMVar5 == nullptr)
                    goto LAB_1003a1650;
                bVar1 = false;
            } else {
                if (this_00->GetStatus() == arg1) {
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
