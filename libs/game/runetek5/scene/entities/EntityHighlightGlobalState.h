// libs/game/runetek5/scene/entities/EntityHighlightGlobalState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EntityHighlightGlobalState {
    public:
        class RadialHighlightState;
        GetPreviousUpdateLogicTick() const;
        GetOutlineRadiusAdjustment() const;
        GetPlayerNPCAttackOpPriority() const;
        GetCurrentUpdateLogicTick() const;
        GetPlayerActiveCombatLevel() const;
        IsInteractionFadeOutFrozen() const;
        void Update(float, unsigned int);
        GetRadialHighlightAlpha(float) const;
        bool IsRadialHighlightActive() const;
        bool IsEnabled() const;
        bool GetRadialHighlightVisible(float) const;
        EntityHighlightGlobalState();
        static float /* 4 bytes */ m_radialHighlightMaxRadius;     // = 5000.0f
        static float /* 4 bytes */ m_radialHighlightedRange;       // = 1000.0f
        static float /* 4 bytes */ m_radialHighlightExpandSpeed;   // = 6.0f
        static float /* 4 bytes */ m_radialHighlightContractSpeed; // = 2.0f
        static /* 1 bytes */ m_allowExamineOnlyHighlights;

        // data members, from how the methods use this: 52 bytes
        char field_0;                          // offset 0
        char field_1;                          // offset 1
        undefined1 field_2;                    // offset 2
        undefined1 m_interactionFadeOutFrozen; // offset 3
        uint field_4;                          // offset 4
        undefined3 field_8;                    // offset 8
        undefined1 field_11;                   // offset 11
        undefined4 m_outlineRadiusAdjustment;  // offset 12
        char _unknown_16[4];
        undefined8 field_20; // offset 20
        int field_28;        // offset 28
        float field_32;      // offset 32
        float field_36;      // offset 36
        float field_40;      // offset 40
        float field_44;      // offset 44
        char _unknown_48[4];
    };

    class EntityHighlightGlobalState::RadialHighlightState {
    public:
        RadialHighlightState();
        void UpdateRadius(float, float);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[4];
        float field_4;  // offset 4
        float field_8;  // offset 8
        float field_12; // offset 12
        float field_16; // offset 16
        char _unknown_20[4];
    };

    // 0x1003eab00, 16 bytes, inline, placed by class name and debug map
    // EntityHighlightGlobalState::IsInteractionFadeOutFrozen() const
    undefined1 EntityHighlightGlobalState::IsInteractionFadeOutFrozen() {
        return m_interactionFadeOutFrozen;
    }

    // 0x1004314c0, 16 bytes, inline, placed by class name
    // EntityHighlightGlobalState::IsRadialHighlightActive() const
    bool EntityHighlightGlobalState::IsRadialHighlightActive() {
        return field_28 == 1;
    }

    // 0x100431510, 32 bytes, inline, placed by class name
    // EntityHighlightGlobalState::IsEnabled() const
    bool EntityHighlightGlobalState::IsEnabled() {
        if ((field_0 == '\0') || (field_1 == '\0')) {
            return false;
        }
        return field_2 != '\0';
    }

    // 0x10044a620, 48 bytes, inline, placed by class name
    // EntityHighlightGlobalState::GetRadialHighlightVisible(float) const
    bool EntityHighlightGlobalState::GetRadialHighlightVisible(float param_1) {
        bool bVar2;

        if (IsRadialHighlightActive(this) == '\0') {
            bVar2 = false;
        } else {
            bVar2 = param_1 < field_36;
        }
        return bVar2;
    }

    // 0x1004612c0, 16 bytes, complete-object constructor, inline, placed by class name
    // EntityHighlightGlobalState::EntityHighlightGlobalState(): jumps straight to the base-object constructor

    // 0x10046b220, 48 bytes, base-object constructor, inline, placed by class name
    // EntityHighlightGlobalState::EntityHighlightGlobalState()
    void EntityHighlightGlobalState::EntityHighlightGlobalState() {
        field_0 = '\x01';
        field_1 = '\x01';
        field_2 = 1;
        m_interactionFadeOutFrozen = 0;
        field_4 = 0;
        field_8 = 0;
        field_11 = 0;
        *(undefined8*)&m_outlineRadiusAdjustment = 5368709120;
        field_20 = 4294967295;
        new (&field_28) RadialHighlightState();
    }

} // namespace jag::game

namespace jag::render {
    class DrawCallParams {
    public:
        DrawCallParams();
    };

} // namespace jag::render
