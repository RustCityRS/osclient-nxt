// libs/game/runetek5/config/watertype/WaterTypeEncoding.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class WaterNormalParamsTarget {
    public:
        WaterNormalParamsTarget(WaterNormalParamsEncoding, WaterNormalParamGroup, int);
        bool IsValid() const;
        Invalid();

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        char _unknown_4[12];
    };

    // 0x1004c7a80, 48 bytes, inline, placed by debug map only (low confidence)
    // WaterNormalParamsTarget::Invalid()
    undefined1[16] WaterNormalParamsTarget::Invalid() {
        undefined1 auVar1[16];
        LocationData local_18;

        new (&local_18) oldscape::rs2lib::worldmap::LocationData(0, 0, 0);
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

} // namespace jag::game
