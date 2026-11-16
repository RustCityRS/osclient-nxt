// libs/game/runetek5/scene/ZoneEntityManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ZoneEntityManager.h"

namespace jag {
    // 0x1004452e0, 48 bytes, placed by debug map only (low confidence)
    // ZoneBuiltArea::WithinBuiltArea(game::CoordGrid const&) const
    undefined4 ZoneBuiltArea::WithinBuiltArea(CoordGrid* param_1) {
        uint uVar1;

        if ((((int)param_1->field_4 < field_8) || (field_12 < (int)param_1->field_4)) ||
            (uVar1 = param_1->field_8, (int)uVar1 < field_16)) {
            return 0;
        }
        return CONCAT31((int3)(uVar1 >> 8), (int)uVar1 <= field_20);
    }

    // 0x100445310, 224 bytes, placed by debug map only (low confidence)
    // ZoneBuiltArea::SetBuiltArea(math::Point<int> const&, int)
    void ZoneBuiltArea::SetBuiltArea(Point* param_1, int param_2) {
        int* piVar1;
        int local_30;
        int local_2c;
        int local_28;
        int local_24;

        local_2c = param_1->GetX();
        local_28 = param_1->GetX();
        local_28 = local_28 + param_2;
        local_24 = param_1->GetZ();
        local_30 = param_1->GetZ();
        local_30 = local_30 + param_2;
        if ((m_buildMode == 7) && ((((field_8 != 0 || (field_16 != 0)) || (field_12 != 0)) || (field_20 != 0)))) {
            piVar1 = std::min<int>(&field_8, &local_2c);
            field_8 = *piVar1;
            piVar1 = std::min<int>(&field_16, &local_24);
            field_16 = *piVar1;
            piVar1 = std::max<int>(&field_12, &local_28);
            field_12 = *piVar1;
            piVar1 = std::max<int>(&field_20, &local_30);
            local_30 = *piVar1;
        } else {
            field_8 = local_2c;
            field_16 = local_24;
            field_12 = local_28;
        }
        field_20 = local_30;
    }

} // namespace jag
