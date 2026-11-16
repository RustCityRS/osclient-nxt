// libs/game/runetek5/scene/entities/components/visual/EntityHighlightVisualConfig.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EntityHighlightVisualConfig.h"

namespace jag::game {
    // 0x100f38450, 64 bytes, __data
    EntityHighlightVisualConfig::m_entityHighlightModeNames__ = {
        0, 0, 14421710, 1, 1, 0, 14421723, 1, 2, 0, 14421744, 1, 3, 0, 14421754, 1,
    };

    // 0x100f38490, 4 bytes, __data
    float EntityHighlightVisualConfig::m_scaleIncreaseOnInteraction = 1.0f;

    // 0x100f38494, 4 bytes, __data
    EntityHighlightVisualConfig::m_baseAlphaOutlines = 1059145646;

    // 0x100f38498, 4 bytes, __data
    EntityHighlightVisualConfig::m_baseAlphaSilhouettes = 1050253722;

    // 0x100f3849c, 4 bytes, __data
    EntityHighlightVisualConfig::m_runtimeAlphaAdjustment = 1045220557;

    // 0x100f384a0, 4 bytes, __data
    EntityHighlightVisualConfig::m_interactionLuminosityTarget = 1062836634;

    // 0x1039b4ba8, 16 bytes, __common; set at startup by ___cxx_global_var_init.18
    StringEnum EntityHighlightVisualConfig::m_entityHighlightModeNames =
        StringEnum((StringEnumEntry*)&EntityHighlightVisualConfig::m_entityHighlightModeNames__, 4);

    // 0x1039b4bb8, 256 bytes, __common; set at startup by ___cxx_global_var_init.19
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

    // 0x1003eab30, 16 bytes, placed by class name and debug map
    // EntityHighlightVisualConfig::GetDefaultHighlightMode()
    undefined8 EntityHighlightVisualConfig::GetDefaultHighlightMode() {
        return 0;
    }

    // 0x1003eab50, 80 bytes, placed by class name
    // EntityHighlightVisualConfig::GetDefault(EntityHighlightType)
    void EntityHighlightVisualConfig::GetDefault(int param_1) {
        undefined8 uVar1;
        ulong uVar2;

        if (param_1 < 8) {
            uVar2 = (ulong)param_1;
        } else {
            uVar1 = logger::default_logger();
            uVar2 = 0;
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/entities/components/visual/EntityHighlightVisualConfig.cpp",
                                53, "Attempted to call GetDefault for an invalid highlight type.");
        }
        std::array<EntityHighlightVisualConfig, 8ul>::operator[](uVar2);
    }

    // 0x1003eabc0, 320 bytes, placed by class name
    // EntityHighlightVisualConfig::Evaluate(EntityHighlightState const&, EntityHighlightGlobalState const&, EntityHighlightVisualData&, float) const
    bool EntityHighlightVisualConfig::Evaluate(EntityHighlightState* param_1, EntityHighlightGlobalState* param_2,
                                               EntityHighlightVisualData* param_3, float param_4) {
        bool bVar1;
        float fVar2;
        float fVar3;
        ulong uVar4;
        undefined4 uVar5;
        undefined8 local_58;
        float fStack_50;
        undefined4 uStack_4c;
        ColourHSL local_40;
        float local_30;
        float local_2c;

        local_30 = (float)EvaluateAlpha(this, param_1, param_2, param_4);
        if (local_30 != 0.0) {
            uVar4 = param_1->GetInterpolationFactor();
            local_2c = (float)uVar4;
            fVar2 = field_4;
            *(float*)param_3 = fVar2;
            if (fVar2 != 0.0) {
                fVar2 = (float)param_2->GetOutlineRadiusAdjustment();
                uVar4 = (ulong)(uint)local_2c;
                *(float*)param_3 = fVar2 + *(float*)param_3;
            }
            uVar5 = (undefined4)(uVar4 >> 32);
            local_2c = (float)uVar4;
            if (local_2c == 0.0) {
                fVar2 = local_2c;
                local_58 = GetDefaultColour(this);
                fStack_50 = fVar2;
                uStack_4c = uVar5;
                math::Rect<float>::operator=((Rect<float>*)&param_3->field_16, (Rect*)&local_58);
            } else {
                fVar2 = local_2c;
                local_40._0_8_ = math::RGBToHSL((Vector3T*)&field_8);
                local_40.field_8 = fVar2;
                local_40.field_8 =
                    math::Lerp<float, float>(&local_40.field_8, (float*)&m_interactionLuminosityTarget, local_2c);
                bVar1 = (bool)IsSilhouette(this);
                fVar3 = (float)GetDefaultAlpha(bVar1);
                local_58 = math::HSLToRGB(&local_40, fVar3);
                fStack_50 = fVar2;
                uStack_4c = uVar5;
                math::Rect<float>::operator=((Rect<float>*)&param_3->field_16, (Rect*)&local_58);
                *(float*)param_3 = (local_2c * m_scaleIncreaseOnInteraction + 1.0) * *(float*)param_3;
            }
            *(float*)&param_3[1].field_4 = *(float*)&param_3[1].field_4 * local_30;
        }
        return local_30 != 0.0;
    }

    // 0x1003ead00, 128 bytes, placed by class name
    // EntityHighlightVisualConfig::EvaluateAlpha(EntityHighlightState const&, EntityHighlightGlobalState const&, float) const
    ulong EntityHighlightVisualConfig::EvaluateAlpha(EntityHighlightState* param_1, EntityHighlightGlobalState* param_2,
                                                     float param_3) {
        char cVar1;
        float fVar2;
        ulong uVar3;

        uVar3 = 0;
        if (field_0 != 3) {
            cVar1 = param_1->WasInteractedWithRecently();
            if ((cVar1 == '\0') && (field_0 == 1)) {
                uVar3 = param_2->GetRadialHighlightAlpha(*(float*)param_1);
            } else {
                fVar2 = (float)param_1->GetAlpha();
                cVar1 = param_1->WasInteractedWithRecently();
                if (cVar1 != '\0') {
                    param_3 = 1.0;
                }
                uVar3 = (ulong)(uint)(param_3 * fVar2);
            }
        }
        return uVar3;
    }

    // 0x1003ec800, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.18
    void ___cxx_global_var_init_18() {
        new (&EntityHighlightVisualConfig::m_entityHighlightModeNames)
            StringEnum((StringEnumEntry*)&EntityHighlightVisualConfig::m_entityHighlightModeNames__, 4);
        ___cxa_atexit(StringEnum::~StringEnum, &EntityHighlightVisualConfig::m_entityHighlightModeNames, 4294967296);
    }

    // 0x1003ec840, 560 bytes, placed by the data it initialises
    // ___cxx_global_var_init.19
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

    void ___cxx_global_var_init_19() {
        ColourHSL local_90;
        ColourHSL local_80;
        ColourHSL local_70;
        ColourHSL local_60;
        ColourHSL local_50;
        ColourHSL local_40;
        ColourHSL local_30;
        ColourHSL local_20;

        _m_perTypeParams = 2;
        new (&local_90) math::ColourHSL(0.08, 0.17, 0.22);
        new (&DAT_1039b4bbc) EntityHighlightVisualConfig::Defaults(0.0, (Vector3T*)&local_90);
        _DAT_1039b4bd8 = 0;
        new (&local_80) math::ColourHSL(0.0, 0.7, 0.35);
        new (&DAT_1039b4bdc) EntityHighlightVisualConfig::Defaults(4.0, (Vector3T*)&local_80);
        _DAT_1039b4bf8 = 0;
        new (&local_70) math::ColourHSL(0.45, 0.45, 0.6);
        new (&DAT_1039b4bfc) EntityHighlightVisualConfig::Defaults(4.0, (Vector3T*)&local_70);
        _DAT_1039b4c18 = 0;
        new (&local_60) math::ColourHSL(0.94, 0.78, 0.0);
        new (&DAT_1039b4c1c) EntityHighlightVisualConfig::Defaults(4.0, (Vector3T*)&local_60);
        _DAT_1039b4c38 = 0;
        new (&local_50) math::ColourHSL(0.77, 0.05, 0.086);
        new (&DAT_1039b4c3c) EntityHighlightVisualConfig::Defaults(4.0, (Vector3T*)&local_50);
        _DAT_1039b4c58 = 0;
        new (&local_40) math::ColourHSL(0.075, 0.91, 0.86);
        new (&DAT_1039b4c5c) EntityHighlightVisualConfig::Defaults(4.0, (Vector3T*)&local_40);
        _DAT_1039b4c78 = 0;
        new (&local_30) math::ColourHSL(0.88, 0.65, 0.35);
        new (&DAT_1039b4c7c) EntityHighlightVisualConfig::Defaults(6.0, (Vector3T*)&local_30);
        _DAT_1039b4c98 = 2;
        new (&local_20) math::ColourHSL(0.94, 0.78, 0.0);
        new (&DAT_1039b4c9c) EntityHighlightVisualConfig::Defaults(4.0, (Vector3T*)&local_20);
    }

} // namespace jag::game
