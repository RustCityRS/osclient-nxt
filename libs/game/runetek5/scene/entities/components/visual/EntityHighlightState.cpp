// libs/game/runetek5/scene/entities/components/visual/EntityHighlightState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EntityHighlightState.h"

namespace jag::game {
    // 0x100051690: the linker folded this into math::Range<float>::GetMax() const, which has identical code
    EntityHighlightState::GetAlpha() const;

    // 0x10005fd90: the linker folded this into oldscape::widgets::Widget::SetBackgroundColour(unsigned int), which has identical code
    EntityHighlightState::NotifyVisible(unsigned int);

    // 0x1003ea900, 432 bytes, placed by class name and debug map
    // EntityHighlightState::Update(EntityHighlightGlobalState const&, float, unsigned int)
    void EntityHighlightState::Update(EntityHighlightGlobalState* param_1, float param_2, uint param_3) {
        char cVar1;
        uint uVar2;
        float fVar3;
        float local_2c;
        float local_28;
        float local_24;

        fVar3 = field_12;
        local_24 = param_2;
        if (fVar3 == -2.0) {
            cVar1 = CheckVisibleLogicTick(this, param_3, param_1);
            if (cVar1 == '\0') {
                fVar3 = local_24 * -8.0;
            } else {
                fVar3 = local_24 * 20.0;
            }
            m_alpha = fVar3 + m_alpha;
            local_2c = 0.0;
            local_28 = 1.0;
            fVar3 = math::Clamp<float>(&m_alpha, &local_2c, &local_28);
        } else if (0.0 <= fVar3) {
            if (fVar3 < 1.0) {
                fVar3 = (float)eastl::min<float>(1.0, fVar3 + param_2 * 10.0);
                field_12 = fVar3;
                return;
            }
            cVar1 = param_1->IsInteractionFadeOutFrozen();
            if (cVar1 != '\0') {
                return;
            }
            fVar3 = local_24 * 4.0 + field_12;
            uVar2 = -(uint)(2.0 < fVar3);
            fVar3 = (float)(uVar2 & 3221225472 | ~uVar2 & (uint)fVar3);
            field_12 = fVar3;
            if (1.0 <= fVar3) {
                cVar1 = CheckVisibleLogicTick(this, param_3, param_1);
                if (cVar1 == '\0') {
                    fVar3 = local_24 * -8.0 + m_alpha;
                } else {
                    fVar3 = local_24 * 20.0 + m_alpha;
                    m_alpha = fVar3;
                    fVar3 = (float)eastl::min<float>(fVar3, 1.0);
                }
                m_alpha = fVar3;
            }
            local_24 = m_alpha;
            fVar3 = (float)GetInterpolationFactor(this);
            fVar3 = (float)eastl::max_alt(local_24, fVar3);
        } else {
            fVar3 = (float)eastl::min<float>(0.0, fVar3 + param_2 * 10.0);
            field_12 = fVar3;
            fVar3 = fVar3 + 1.0;
        }
        m_alpha = fVar3;
    }

    // 0x1003eab10, 32 bytes, placed by class name
    // EntityHighlightState::NotifyInteracted(unsigned int)
    void EntityHighlightState::NotifyInteracted(uint param_1) {
        undefined4 in_register_0000003c;

        *(float*)(CONCAT44(in_register_0000003c, param_1) + 12) =
            *(float*)(CONCAT44(in_register_0000003c, param_1) + 4) + -1.0;
        oldscape::ServerConnectionWorkItem::ServerConnectionWorkItem();
    }

} // namespace jag::game
