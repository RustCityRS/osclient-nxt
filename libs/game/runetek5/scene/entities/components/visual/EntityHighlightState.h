// libs/game/runetek5/scene/entities/components/visual/EntityHighlightState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EntityHighlightState {
    public:
        float GetAlpha() const;
        NotifyVisible(unsigned int);
        void Update(EntityHighlightGlobalState const&, float, unsigned int);
        bool CheckVisibleLogicTick(unsigned int, EntityHighlightGlobalState const&) const;
        void NotifyInteracted(unsigned int);
        EntityHighlightState();
        void TryKeepVisible(EntityHighlightGlobalState const&, unsigned int);
        bool WasInteractedWithRecently() const;
        void GetInterpolationRuntime() const;
        ulong GetInterpolationFactor() const;

        // data members, from how the methods use this: 20 bytes
        char _unknown_0[4];
        float m_alpha;  // offset 4
        uint field_8;   // offset 8
        float field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x1003eaab0, 80 bytes, inline, placed by class name and debug map
    // EntityHighlightState::CheckVisibleLogicTick(unsigned int, EntityHighlightGlobalState const&) const
    bool EntityHighlightState::CheckVisibleLogicTick(uint param_1, EntityHighlightGlobalState* param_2) {
        uint uVar1;
        uint uVar2;
        bool bVar3;

        bVar3 = true;
        if (field_8 != param_1) {
            uVar1 = param_2->GetZ();
            if (uVar1 == param_1) {
                uVar1 = field_8;
                uVar2 = param_2->GetPos();
                bVar3 = uVar1 == uVar2;
            } else {
                bVar3 = false;
            }
        }
        return bVar3;
    }

    // 0x10042ae10, 16 bytes, complete-object constructor, inline, placed by class name
    // EntityHighlightState::EntityHighlightState(): jumps straight to the base-object constructor

    // 0x1004314e0, 48 bytes, inline, placed by class name
    // EntityHighlightState::TryKeepVisible(EntityHighlightGlobalState const&, unsigned int)
    void EntityHighlightState::TryKeepVisible(EntityHighlightGlobalState* param_1, uint param_2) {
        uint uVar1;
        uint uVar2;

        uVar1 = field_8;
        uVar2 = param_1->GetPos();
        if (uVar1 == uVar2) {
            field_8 = param_2;
        }
    }

    // 0x100431530, 32 bytes, inline, placed by class name
    // EntityHighlightState::WasInteractedWithRecently() const
    bool EntityHighlightState::WasInteractedWithRecently() {
        return field_12 != -2.0;
    }

    // 0x100431ca0, 32 bytes, base-object constructor, inline, placed by class name
    // EntityHighlightState::EntityHighlightState()
    void EntityHighlightState::EntityHighlightState() {
        *(undefined8*)this = 0;
        field_8 = 0;
        field_12 = -2.0;
    }

    // 0x100449760, 32 bytes, inline, placed by class name
    // EntityHighlightState::GetInterpolationRuntime() const
    void EntityHighlightState::GetInterpolationRuntime() {
        eastl::max_alt(field_12 * 0.5, 0.0);
    }

    // 0x100449780, 64 bytes, inline, placed by class name
    // EntityHighlightState::GetInterpolationFactor() const
    ulong EntityHighlightState::GetInterpolationFactor() {
        float fVar1;
        ulong uVar2;

        fVar1 = field_12;
        if (1.0 <= fVar1) {
            uVar2 = (ulong)(uint)(2.0 - fVar1);
        } else {
            uVar2 = eastl::max_alt(fVar1, 0.0);
        }
        return uVar2;
    }

} // namespace jag::game
