// libs/game/runetek5/scene/entities/components/visual/EntityHighlightState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EntityHighlightState.h"

namespace jag::game {
    // 0x100051690: EntityHighlightState::GetAlpha() const has the same machine code as math::Range<float>::GetMax() const

    // 0x10005fd90: EntityHighlightState::NotifyVisible(unsigned int) has the same machine code as oldscape::widgets::Widget::SetBackgroundColour(unsigned int)

    // 0x1003ea900
    void EntityHighlightState::Update(const EntityHighlightGlobalState& entityHighlightGlobalState, float arg2,
                                      unsigned int arg3) {
        unsigned int uVar2;

        float fVar3 = field_12;
        float local_24 = arg2;
        if (fVar3 == -2.0) {
            if (!(CheckVisibleLogicTick(arg3, entityHighlightGlobalState))) {
                fVar3 = local_24 * -8.0;
            } else {
                fVar3 = local_24 * 20.0;
            }
            m_alpha = fVar3 + m_alpha;
            fVar3 = math::Clamp<float>(m_alpha, 0.0, 1.0);
        } else if (0.0 <= fVar3) {
            if (fVar3 < 1.0) {
                fVar3 = (float)eastl::min<float>(1.0, fVar3 + arg2 * 10.0);
                field_12 = fVar3;
                return;
            }
            if (entityHighlightGlobalState.IsInteractionFadeOutFrozen()) {
                return;
            }
            fVar3 = local_24 * 4.0 + field_12;
            uVar2 = -(unsigned int)(2.0 < fVar3);
            fVar3 = (float)(uVar2 & 3221225472 | ~uVar2 & (unsigned int)fVar3);
            field_12 = fVar3;
            if (1.0 <= fVar3) {
                if (!(CheckVisibleLogicTick(arg3, entityHighlightGlobalState))) {
                    fVar3 = local_24 * -8.0 + m_alpha;
                } else {
                    fVar3 = local_24 * 20.0 + m_alpha;
                    m_alpha = fVar3;
                    fVar3 = (float)eastl::min<float>(fVar3, 1.0);
                }
                m_alpha = fVar3;
            }
            local_24 = m_alpha;
            fVar3 = (float)GetInterpolationFactor();
            fVar3 = (float)eastl::max_alt(local_24, fVar3);
        } else {
            fVar3 = (float)eastl::min<float>(0.0, fVar3 + arg2 * 10.0);
            field_12 = fVar3;
            fVar3 = fVar3 + 1.0;
        }
        m_alpha = fVar3;
    }

    // 0x1003eab10
    void EntityHighlightState::NotifyInteracted(unsigned int arg1) {
        field_12 = m_alpha - 1.0;
        new (this) oldscape::ServerConnectionWorkItem(arg1);
    }

} // namespace jag::game
