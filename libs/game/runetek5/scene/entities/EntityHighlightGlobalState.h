// libs/game/runetek5/scene/entities/EntityHighlightGlobalState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EntityHighlightGlobalState {
    public:
        class RadialHighlightState;
        EnumOptionToggle GetPreviousUpdateLogicTick() const;
        uint32_t GetOutlineRadiusAdjustment() const;
        int GetPlayerNPCAttackOpPriority() const;
        unsigned int GetCurrentUpdateLogicTick() const;
        unsigned int GetPlayerActiveCombatLevel() const;
        bool IsInteractionFadeOutFrozen() const;
        void Update(float arg1, unsigned int arg2);
        uint64_t GetRadialHighlightAlpha(float arg1) const;
        bool IsRadialHighlightActive() const;
        bool IsEnabled() const;
        bool GetRadialHighlightVisible(float arg1) const;
        EntityHighlightGlobalState();
        static float m_radialHighlightMaxRadius;     // = 5000.0f
        static float m_radialHighlightedRange;       // = 1000.0f
        static float m_radialHighlightExpandSpeed;   // = 6.0f
        static float m_radialHighlightContractSpeed; // = 2.0f
        static bool m_allowExamineOnlyHighlights;

    private:
        char field_0;
        char field_1;
        uint8_t field_2;
        uint8_t m_interactionFadeOutFrozen;
        unsigned int m_currentUpdateLogicTick;
        uint8_t m_previousUpdateLogicTick[3];
        uint8_t field_11;
        uint32_t m_outlineRadiusAdjustment;
        int m_playerNPCAttackOpPriority;
        uint64_t m_playerActiveCombatLevel;
        int field_28;
        float field_32;
        float field_36;
        float field_40;
        float field_44;
        uint8_t _unknown_48[4];
    };

    class EntityHighlightGlobalState::RadialHighlightState {
    public:
        RadialHighlightState();
        void UpdateRadius(float arg1, float arg2);

    private:
        uint8_t _unknown_0[4];
        float field_4;
        float field_8;
        float field_12;
        float field_16;
        uint8_t _unknown_20[4];
    };

    // 0x1003eab00
    bool EntityHighlightGlobalState::IsInteractionFadeOutFrozen() const {
        return m_interactionFadeOutFrozen;
    }

    // 0x1004314c0
    bool EntityHighlightGlobalState::IsRadialHighlightActive() const {
        return field_28 == 1;
    }

    // 0x100431510
    bool EntityHighlightGlobalState::IsEnabled() const {
        if ((field_0 == '\0') || (field_1 == '\0')) {
            return false;
        }
        return field_2 != '\0';
    }

    // 0x10044a620
    bool EntityHighlightGlobalState::GetRadialHighlightVisible(float arg1) const {
        bool bVar2;

        if (IsRadialHighlightActive() == '\0') {
            bVar2 = false;
        } else {
            bVar2 = arg1 < field_36;
        }
        return bVar2;
    }

    // 0x10046b220
    EntityHighlightGlobalState::EntityHighlightGlobalState() {
        field_0 = '\x01';
        field_1 = '\x01';
        field_2 = 1;
        m_interactionFadeOutFrozen = 0;
        m_currentUpdateLogicTick = 0;
        m_previousUpdateLogicTick = 0;
        field_11 = 0;
        m_outlineRadiusAdjustment = 1073741824;
        m_playerNPCAttackOpPriority = 1;
        m_playerActiveCombatLevel = 4294967295;
        new (&field_28) RadialHighlightState();
    }

} // namespace jag::game

namespace jag::render {
    class DrawCallParams {
    public:
        DrawCallParams();
    };

} // namespace jag::render
