// libs/game/runetek5/scene/entities/components/visual/EntityHighlightVisualConfig.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class EntityHighlightVisualConfig {
    public:
        class Defaults;
        GetDefaultHighlightMode();
        void GetDefault(EntityHighlightType);
        bool Evaluate(EntityHighlightState const&, EntityHighlightGlobalState const&, EntityHighlightVisualData&,
                      float) const;
        ulong EvaluateAlpha(EntityHighlightState const&, EntityHighlightGlobalState const&, float) const;
        GetDefaultColour() const;
        float GetDefaultAlpha(bool);
        bool IsSilhouette() const;
        static /* 64 bytes */ m_entityHighlightModeNames__;      // initialised in its definition
        static float /* 4 bytes */ m_scaleIncreaseOnInteraction; // = 1.0f
        static /* 4 bytes */ m_baseAlphaOutlines;                // = 1059145646
        static /* 4 bytes */ m_baseAlphaSilhouettes;             // = 1050253722
        static /* 4 bytes */ m_runtimeAlphaAdjustment;           // = 1045220557
        static /* 4 bytes */ m_interactionLuminosityTarget;      // = 1062836634
        static StringEnum                                        /* 16 bytes */
            m_entityHighlightModeNames; // = StringEnum((StringEnumEntry *) &m_entityHighlightModeNames__, 4)
        static Defaults /* 256 bytes */ m_perTypeParams[8]; // initialised in its definition

        // data members, from how the methods use this: 16 bytes
        int field_0;   // offset 0
        float field_4; // offset 4
        char _unknown_8[8];
    };

    class EntityHighlightVisualConfig::Defaults {
    public:
        Defaults(float, math::Vector3T<float> const&);

        // data members, from how the methods use this: 32 bytes
        float field_0;       // offset 0
        undefined8 field_4;  // offset 4
        undefined4 field_12; // offset 12
        undefined8 field_16; // offset 16
        undefined4 field_24; // offset 24
        char _unknown_28[4];
    };

    // 0x1003eab40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EntityHighlightVisualConfig::Defaults::Defaults(float, math::Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1003eafd0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // EntityHighlightVisualConfig::Defaults::Defaults(float, math::Vector3T<float> const&)
    void EntityHighlightVisualConfig::Defaults::Defaults(float param_1, Vector3T* param_2) {
        field_0 = param_1;
        field_4 = *(undefined8*)param_2;
        field_12 = *(undefined4*)(param_2 + 8);
        field_16 = *(undefined8*)param_2;
        field_24 = *(undefined4*)(param_2 + 8);
    }

    // 0x1004497c0, 64 bytes, inline, placed by class name
    // EntityHighlightVisualConfig::GetDefaultColour() const
    undefined1[16] EntityHighlightVisualConfig::GetDefaultColour() {
        bool bVar1;
        float fVar2;
        undefined1 auVar3[16];
        Vector4T<float> local_28[24];

        bVar1 = (bool)IsSilhouette(this);
        fVar2 = (float)GetDefaultAlpha(bVar1);
        math::Vector4T<float>::Vector4T(local_28, (Vector3T*)&field_8, fVar2);
        auVar3[0] = local_28[0];
        auVar3[1] = local_28[1];
        auVar3[2] = local_28[2];
        auVar3[3] = local_28[3];
        auVar3[4] = local_28[4];
        auVar3[5] = local_28[5];
        auVar3[6] = local_28[6];
        auVar3[7] = local_28[7];
        auVar3[8] = local_28[8];
        auVar3[9] = local_28[9];
        auVar3[10] = local_28[10];
        auVar3[11] = local_28[11];
        auVar3[12] = local_28[12];
        auVar3[13] = local_28[13];
        auVar3[14] = local_28[14];
        auVar3[15] = local_28[15];
        return auVar3;
    }

    // 0x100449800, 48 bytes, inline, placed by class name
    // EntityHighlightVisualConfig::GetDefaultAlpha(bool)
    float EntityHighlightVisualConfig::GetDefaultAlpha(bool param_1) {
        float* pfVar1;
        undefined3 in_register_00000039;

        if (CONCAT31(in_register_00000039, param_1) == 0) {
            pfVar1 = (float*)&m_baseAlphaOutlines;
        } else {
            pfVar1 = (float*)&m_baseAlphaSilhouettes;
        }
        return *pfVar1 + m_runtimeAlphaAdjustment;
    }

    // 0x100449830, 16 bytes, inline, placed by class name
    // EntityHighlightVisualConfig::IsSilhouette() const
    bool EntityHighlightVisualConfig::IsSilhouette() {
        return field_4 == 0.0;
    }

} // namespace jag::game

namespace jag {
    // 0x1003eaeb0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // EntityWaypoint::EntityWaypoint()
    void EntityWaypoint::EntityWaypoint() {
        new (this) game::CoordFine(-1, -1.0, -1.0);
        field_16 = (MoveSpeed*)0;
    }

    // 0x1003eaf40, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // RouteMovement::RouteMovement(MoveType, math::Vector3T<float>, MoveSpeed const*, float)
    void RouteMovement::RouteMovement(undefined8 param_1, undefined4 param_2, undefined4 param_3, RouteMovement* this,
                                      undefined4 param_5, undefined8 param_6) {
        *(undefined4*)this = param_5;
        *(undefined8*)&field_4 = param_1;
        *(undefined4*)&field_12 = param_2;
        *(undefined8*)&field_16 = param_6;
        *(undefined4*)&field_24 = param_3;
    }

} // namespace jag

// 0x1003eb9f0, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x1003eba00, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}
