// libs/game/runetek5/scene/entities/components/visual/EntityHighlightState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EntityHighlightState {
    public:
        float GetAlpha() const;
        void NotifyVisible(unsigned int arg1);
        void Update(const EntityHighlightGlobalState& entityHighlightGlobalState, float arg2, unsigned int arg3);
        bool CheckVisibleLogicTick(unsigned int arg1,
                                   const EntityHighlightGlobalState& entityHighlightGlobalState) const;
        void NotifyInteracted(unsigned int arg1);
        EntityHighlightState();
        void TryKeepVisible(const EntityHighlightGlobalState& entityHighlightGlobalState, unsigned int arg2);
        bool WasInteractedWithRecently() const;
        void GetInterpolationRuntime() const;
        unsigned long GetInterpolationFactor() const;

    private:
        uint8_t _unknown_0[4];
        float m_alpha;
        unsigned int field_8;
        float field_12;
        uint8_t _unknown_16[4];
    };

    // 0x1003eaab0
    bool
    EntityHighlightState::CheckVisibleLogicTick(unsigned int arg1,
                                                const EntityHighlightGlobalState& entityHighlightGlobalState) const {
        unsigned int uVar1;
        unsigned int uVar2;

        bool bVar3 = true;
        if (field_8 != arg1) {
            uVar1 = entityHighlightGlobalState.GetZ();
            if (uVar1 == arg1) {
                uVar1 = field_8;
                uVar2 = entityHighlightGlobalState.GetPos();
                bVar3 = uVar1 == uVar2;
            } else {
                bVar3 = false;
            }
        }
        return bVar3;
    }

    // 0x1004314e0
    void EntityHighlightState::TryKeepVisible(const EntityHighlightGlobalState& entityHighlightGlobalState,
                                              unsigned int arg2) {
        unsigned int uVar1 = field_8;
        unsigned int uVar2 = entityHighlightGlobalState.GetPos();
        if (uVar1 == uVar2) {
            field_8 = arg2;
        }
    }

    // 0x100431530
    bool EntityHighlightState::WasInteractedWithRecently() const {
        return field_12 != -2.0;
    }

    // 0x100431ca0
    EntityHighlightState::EntityHighlightState() {
        *(uint64_t*)this = 0;
        field_8 = 0;
        field_12 = -2.0;
    }

    // 0x100449760
    void EntityHighlightState::GetInterpolationRuntime() const {
        eastl::max_alt(field_12 * 0.5, 0.0);
    }

    // 0x100449780
    unsigned long EntityHighlightState::GetInterpolationFactor() const {
        unsigned long uVar1;

        float arg1 = field_12;
        if (1.0 <= arg1) {
            uVar1 = (unsigned long)(unsigned int)(2.0 - arg1);
        } else {
            uVar1 = eastl::max_alt(arg1, 0.0);
        }
        return uVar1;
    }

} // namespace jag::game
