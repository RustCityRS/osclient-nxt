// libs/tweaky/Tweaky_RadioGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "libs/ui/components/RadioGroup.h"

namespace jag::tweak {
    // 0x100a4bcb0
    int RadioGroup::GetRadioValue() const {
        bool bVar1;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        long* plVar4;
        int iVar5;
        shared_ptr<oldscape::dash3d::Decor> local_68;
        shared_ptr<oldscape::ClientNpc> local_58;
        int local_34;

        uint64_t local_48 = field_216.begin();
        uint64_t local_40 = field_216.end();
        bool cVar2 = local_48 != local_40;
        if (cVar2) {
            iVar5 = 0;
            do {
                groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)*local_48;
                local_68 = shared_ptr(groundDecor);
                if (((GameToken*)local_68.operator->())->GetStatus() == 9) {
                    static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_58);
                    plVar4 = (long*)local_58.operator->();
                    cVar2 = (**(void (**)(...))(*plVar4 + 120))(plVar4);
                    if (!cVar2)
                        goto LAB_100a4bd84;
                    bVar1 = false;
                    local_34 = iVar5;
                } else {
                LAB_100a4bd84:
                    bVar1 = true;
                }
                if (!bVar1) {
                    return local_34;
                }
                ++local_48;
                cVar2 = local_48 != local_40;
                iVar5 = iVar5 + 1;
            } while (cVar2);
        }
        return -1;
    }

    // 0x100a4be00
    void RadioGroup::UntickAll() {
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        long lVar3;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_58;
        shared_ptr<oldscape::ClientNpc> local_48;

        auto local_38 = field_216.begin();
        auto local_30 = field_216.end();
        bool cVar1 = local_38 != local_30;
        if (cVar1) {
            do {
                groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)*local_38;
                local_58 = shared_ptr(groundDecor);
                if (((GameToken*)local_58.operator->())->GetStatus() == 9) {
                    static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_48);
                    lVar3 = local_48.operator->();
                    *(uint8_t*)(lVar3 + 211) = 0;
                }
                ++local_38;
                cVar1 = local_38 != local_30;
            } while (cVar1);
        }
    }

} // namespace jag::tweak
