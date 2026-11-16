// libs/game/runetek5/scene/ZoneEntityManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ZoneEntityManager.h"

namespace jag {
    // 0x1004452e0
    uint32_t ZoneBuiltArea::WithinBuiltArea(const game::CoordGrid& coordGrid) const {
        unsigned int uVar1;

        if ((((int)coordGrid.field_4 < field_8) || (field_12 < (int)coordGrid.field_4)) ||
            (uVar1 = coordGrid.field_8, (int)uVar1 < field_16)) {
            return 0;
        }
        return (int)uVar1 <= field_20;
    }

    // 0x100445310
    void ZoneBuiltArea::SetBuiltArea(const math::Point<int>& point, int arg2) {
        int* piVar1;

        int local_2c = point.GetX();
        int local_28 = point.GetX();
        local_28 = local_28 + arg2;
        int local_24 = point.GetZ();
        int local_30 = point.GetZ();
        local_30 = local_30 + arg2;
        if ((m_buildMode == 7) && ((((field_8 != 0 || (field_16 != 0)) || (field_12 != 0)) || (field_20 != 0)))) {
            piVar1 = std::min<int>(field_8, local_2c);
            field_8 = *piVar1;
            piVar1 = std::min<int>(field_16, local_24);
            field_16 = *piVar1;
            piVar1 = std::max<int>(field_12, local_28);
            field_12 = *piVar1;
            piVar1 = std::max<int>(field_20, local_30);
            local_30 = *piVar1;
        } else {
            field_8 = local_2c;
            field_16 = local_24;
            field_12 = local_28;
        }
        field_20 = local_30;
    }

} // namespace jag
