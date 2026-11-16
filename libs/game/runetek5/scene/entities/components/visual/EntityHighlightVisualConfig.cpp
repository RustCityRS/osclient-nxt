// libs/game/runetek5/scene/entities/components/visual/EntityHighlightVisualConfig.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EntityHighlightVisualConfig.h"

namespace jag::game {
    // 0x100f38450
    int32_t EntityHighlightVisualConfig::m_entityHighlightModeNames__[16] = {
        0, 0, 14421710, 1, 1, 0, 14421723, 1, 2, 0, 14421744, 1, 3, 0, 14421754, 1,
    };

    // 0x100f38490
    float EntityHighlightVisualConfig::m_scaleIncreaseOnInteraction = 1.0f;

    // 0x100f38494
    int32_t EntityHighlightVisualConfig::m_baseAlphaOutlines = 1059145646;

    // 0x100f38498
    int32_t EntityHighlightVisualConfig::m_baseAlphaSilhouettes = 1050253722;

    // 0x100f3849c
    int32_t EntityHighlightVisualConfig::m_runtimeAlphaAdjustment = 1045220557;

    // 0x100f384a0
    int32_t EntityHighlightVisualConfig::m_interactionLuminosityTarget = 1062836634;

    // 0x1039b4ba8, set at startup by ___cxx_global_var_init.18
    StringEnum EntityHighlightVisualConfig::m_entityHighlightModeNames =
        StringEnum((StringEnumEntry*)&EntityHighlightVisualConfig::m_entityHighlightModeNames__, 4);

    // 0x1039b4bb8, set at startup by ___cxx_global_var_init.19
    EntityHighlightVisualConfig::Defaults EntityHighlightVisualConfig::m_perTypeParams[8] = {
        /* [0] */
        ?,
        /* [1] */
        ?,
        /* [2] */
        ?,
        /* [3] */
        ?,
        /* [4] */
        ?,
        /* [5] */
        ?,
        /* [6] */
        ?,
        /* [7] */
        ?, };

    // 0x1003eab30
    void EntityHighlightVisualConfig::GetDefaultHighlightMode() {
        return 0;
    }

    // 0x1003eab50
    void EntityHighlightVisualConfig::GetDefault(EntityHighlightType entityHighlightType) {
        Logger* this_00;
        array<EntityHighlightVisualConfig, 8ul>* this_01;
        uint32_t in_register_00000034;

        unsigned long arg1 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)entityHighlightType);
        if ((int)this < 8) {
            this_01 = (array<EntityHighlightVisualConfig, 8ul>*)(long)(int)this;
        } else {
            this_00 = logger::default_logger();
            this_01 = nullptr;
            arg1 = 0;
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                         "entities/components/visual/EntityHighlightVisualConfig.cpp",
                         53, "Attempted to call GetDefault for an invalid highlight type.");
        }
        (*this_01)[arg1];
    }

    // 0x1003eabc0
    bool EntityHighlightVisualConfig::Evaluate(const EntityHighlightState& entityHighlightState,
                                               const EntityHighlightGlobalState& entityHighlightGlobalState,
                                               EntityHighlightVisualData& entityHighlightVisualData, float arg4) const {
        bool arg1;
        float fVar1;
        float arg2;
        unsigned long uVar2;
        uint32_t uVar3;
        uint64_t local_58;
        float fStack_50;
        uint32_t uStack_4c;
        ColourHSL local_40;
        float local_2c;

        float local_30 = (float)EvaluateAlpha(entityHighlightState, entityHighlightGlobalState, arg4);
        if (local_30 != 0.0) {
            uVar2 = entityHighlightState.GetInterpolationFactor();
            local_2c = (float)uVar2;
            fVar1 = field_4;
            *(float*)entityHighlightVisualData = fVar1;
            if (fVar1 != 0.0) {
                fVar1 = (float)entityHighlightGlobalState.GetOutlineRadiusAdjustment();
                uVar2 = (unsigned long)(unsigned int)local_2c;
                *(float*)entityHighlightVisualData = fVar1 + *(float*)entityHighlightVisualData;
            }
            uVar3 = (uint32_t)(uVar2 >> 32);
            local_2c = (float)uVar2;
            if (local_2c == 0.0) {
                fVar1 = local_2c;
                local_58 = GetDefaultColour();
                fStack_50 = fVar1;
                uStack_4c = uVar3;
                entityHighlightVisualData.field_16 = local_58;
            } else {
                fVar1 = local_2c;
                local_40._0_8_ = math::RGBToHSL(field_8);
                local_40.field_8 = fVar1;
                local_40.field_8 = math::Lerp<float, float>(local_40.field_8, m_interactionLuminosityTarget, local_2c);
                arg1 = (bool)IsSilhouette();
                arg2 = (float)GetDefaultAlpha(arg1);
                local_58 = math::HSLToRGB(local_40, arg2);
                fStack_50 = fVar1;
                uStack_4c = uVar3;
                entityHighlightVisualData.field_16 = local_58;
                *(float*)entityHighlightVisualData =
                    (local_2c * m_scaleIncreaseOnInteraction + 1.0) * *(float*)entityHighlightVisualData;
            }
            *(float*)&entityHighlightVisualData[1].field_4 = *(float*)&entityHighlightVisualData[1].field_4 * local_30;
        }
        return local_30 != 0.0;
    }

    // 0x1003ead00
    unsigned long
    EntityHighlightVisualConfig::EvaluateAlpha(const EntityHighlightState& entityHighlightState,
                                               const EntityHighlightGlobalState& entityHighlightGlobalState,
                                               float arg3) const {
        bool cVar1;
        float fVar2;

        unsigned long uVar3 = 0;
        if (field_0 != 3) {
            cVar1 = entityHighlightState.WasInteractedWithRecently();
            if ((!cVar1) && (field_0 == 1)) {
                uVar3 = entityHighlightGlobalState.GetRadialHighlightAlpha(*(float*)entityHighlightState);
            } else {
                fVar2 = (float)entityHighlightState.GetAlpha();
                cVar1 = entityHighlightState.WasInteractedWithRecently();
                if (cVar1) {
                    arg3 = 1.0;
                }
                uVar3 = (unsigned long)(unsigned int)(arg3 * fVar2);
            }
        }
        return uVar3;
    }

    // 0x1003ec840
    void ___cxx_global_var_init_19(void) {

        m_perTypeParams = 2;
        ColourHSL local_90(0.08, 0.17, 0.22);
        new (&DAT_1039b4bbc) EntityHighlightVisualConfig::Defaults(0.0, local_90);
        _DAT_1039b4bd8 = 0;
        ColourHSL local_80(0.0, 0.7, 0.35);
        new (&DAT_1039b4bdc) EntityHighlightVisualConfig::Defaults(4.0, local_80);
        _DAT_1039b4bf8 = 0;
        ColourHSL local_70(0.45, 0.45, 0.6);
        new (&DAT_1039b4bfc) EntityHighlightVisualConfig::Defaults(4.0, local_70);
        _DAT_1039b4c18 = 0;
        ColourHSL local_60(0.94, 0.78, 0.0);
        new (&DAT_1039b4c1c) EntityHighlightVisualConfig::Defaults(4.0, local_60);
        _DAT_1039b4c38 = 0;
        ColourHSL local_50(0.77, 0.05, 0.086);
        new (&DAT_1039b4c3c) EntityHighlightVisualConfig::Defaults(4.0, local_50);
        _DAT_1039b4c58 = 0;
        ColourHSL local_40(0.075, 0.91, 0.86);
        new (&DAT_1039b4c5c) EntityHighlightVisualConfig::Defaults(4.0, local_40);
        _DAT_1039b4c78 = 0;
        ColourHSL local_30(0.88, 0.65, 0.35);
        new (&DAT_1039b4c7c) EntityHighlightVisualConfig::Defaults(6.0, local_30);
        _DAT_1039b4c98 = 2;
        ColourHSL local_20(0.94, 0.78, 0.0);
        new (&DAT_1039b4c9c) EntityHighlightVisualConfig::Defaults(4.0, local_20);
    }

} // namespace jag::game
