// libs/game/runetek5/config/ConfigTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ConfigTypeList.h"
#include "Js5ConfigGroup.h"

namespace jag::game {
    // 0x100561a60, 352 bytes, base-object constructor, placed by debug map only (low confidence)
    // BaseConfigTypeList::BaseConfigTypeList(ModeGame const*, Language const*, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ConfigGroup const*)
    void BaseConfigTypeList::BaseConfigTypeList(ModeGame* param_1, Language* param_2, Js5ResourceProvider* param_3,
                                                Js5ArchiveSettings* param_4, Js5ConfigGroup* param_5) {
        CoordMapSquare* this_00;
        byte bVar2;
        int iVar3;
        uint uVar4;
        Js5Index* local_38;

        field_0 = &PTR__OptionStore_100f044b0;
        new (field_8) oldscape::dash3d::ModelLit::AABB();
        field_32 = 0;
        field_40 = 0;
        field_48 = param_1;
        field_56 = param_2;
        field_64 = param_3;
        field_72 = param_4;
        m_pConfigGroup = param_5;
        field_88 = 0;
        field_92 = 0;
        field_96 = 1;
        if ((undefined*)(*(code*)param_3->field_0[4])(param_3, &local_38, param_4) != DataStatus::READY) {
            /* WARNING: Subroutine does not return */
            LogAssert("indexStatus == DataStatus::READY",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "ConfigTypeList.cpp",
                      20, "ConfigTypeList: Constructed before resource provider index was ready!");
        }
        field_32 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)param_3);
        this_00 = (CoordMapSquare*)m_pConfigGroup;
        if (this_00->IgnoreEntryCount() == '\0') {
            iVar3 = this_00->GetZ();
            if (iVar3 == 0) {
                uVar4 = m_pConfigGroup->GetX();
                uVar4 = local_38->GetMaximumFileID(uVar4);
                field_88 = uVar4;
                field_92 = uVar4;
            } else {
                uVar4 = local_38->GetAnimationLength();
                bVar2 = m_pConfigGroup->GetZ();
                iVar3 = local_38->GetMaximumFileID(uVar4);
                field_92 = iVar3 + (uVar4 << (bVar2 & 31));
                field_96 = uVar4 + 1;
                if (uVar4 + 1 != 0) {
                    uVar4 = 0;
                    do {
                        iVar3 = local_38->GetMaximumFileID(uVar4);
                        field_88 = field_88 + iVar3;
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < field_96);
                }
            }
        }
    }

} // namespace jag::game
