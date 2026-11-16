// libs/game/runetek5/config/watertype/WaterTypeEncoding.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class WaterNormalParamsTarget {
    public:
        WaterNormalParamsTarget(WaterNormalParamsEncoding arg1, WaterNormalParamGroup arg2, int arg3);
        WaterNormalParamsTarget(WaterNormalParamsEncoding waterNormalParamsEncoding,
                                WaterNormalParamGroup waterNormalParamGroup, int arg3);
        bool IsValid() const;
        void Invalid();

    private:
        int field_0;
        uint8_t _unknown_4[12];
    };

    // 0x1004c7a80
    void WaterNormalParamsTarget::Invalid() {
        uint8_t auVar1[16];

        LocationData local_18(0, 0, 0);
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

} // namespace jag::game
