// libs/game/runetek5/scene/entities/EntityHighlightGlobalState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "EntityHighlightGlobalState.h"

namespace jag::game {
    // 0x100f38ba0
    float EntityHighlightGlobalState::m_radialHighlightMaxRadius = 5000.0f;

    // 0x100f38ba4
    float EntityHighlightGlobalState::m_radialHighlightedRange = 1000.0f;

    // 0x100f38ba8
    float EntityHighlightGlobalState::m_radialHighlightExpandSpeed = 6.0f;

    // 0x100f38bac
    float EntityHighlightGlobalState::m_radialHighlightContractSpeed = 2.0f;

    // 0x1039b4e60
    bool EntityHighlightGlobalState::m_allowExamineOnlyHighlights;

    // 0x100024170: EntityHighlightGlobalState::GetPreviousUpdateLogicTick() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x1000641f0: EntityHighlightGlobalState::GetOutlineRadiusAdjustment() const has the same machine code as graphics::SunlightOptions::GetSunElevation() const

    // 0x100066b70: EntityHighlightGlobalState::GetPlayerNPCAttackOpPriority() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x100073980: EntityHighlightGlobalState::GetCurrentUpdateLogicTick() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1001117e0: EntityHighlightGlobalState::GetPlayerActiveCombatLevel() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x10037cf70: EntityHighlightGlobalState::RadialHighlightState::RadialHighlightState() has the same machine code as oldscape::dash3d::LightSource::LightSource()

    // 0x100427f60
    void EntityHighlightGlobalState::Update(float arg1, unsigned int arg2) {
        uint8_t uVar1 = *(uint8_t*)((long)&m_currentUpdateLogicTick + 3);
        m_previousUpdateLogicTick = *(uint32_t*)&m_currentUpdateLogicTick;
        field_11 = uVar1;
        m_currentUpdateLogicTick = arg2;
        if (field_28 == 2) {
            field_28.UpdateRadius(-m_radialHighlightContractSpeed, arg1);
            if (field_32 <= 0.0) {
                field_28 = 0;
                field_32 = 0.0;
            }
        } else if (field_28 == 1) {
            field_28.UpdateRadius(m_radialHighlightExpandSpeed, arg1);
        }
    }

    // 0x100427fd0
    void EntityHighlightGlobalState::RadialHighlightState::UpdateRadius(float arg1, float arg2) {
        float fVar1 =
            (float)eastl::min<float>(m_radialHighlightMaxRadius, arg2 * arg1 * m_radialHighlightMaxRadius + field_4);
        if (fVar1 != field_4) {
            field_4 = fVar1;
            field_8 = fVar1 * fVar1;
            fVar1 = (float)eastl::max_alt(0.0, fVar1 - m_radialHighlightedRange);
            field_12 = fVar1;
            field_16 = fVar1 * fVar1;
        }
    }

    // 0x100428040
    uint64_t EntityHighlightGlobalState::GetRadialHighlightAlpha(float arg1) const {
        uint64_t uVar1;

        float fVar2 = 0.0;
        uint32_t uVar3 = 0;
        if ((arg1 != 0.0) && (arg1 < field_36)) {
            fVar2 = field_44;
            uVar1 = ::sqrt(arg1);
            uVar3 = (uint32_t)((unsigned long)uVar1 >> 32);
            if (arg1 <= fVar2) {
                fVar2 = ((float)uVar1 * 0.4) / field_40 + 0.6;
            } else {
                fVar2 = (float)eastl::min<float>(1.0, ((float)uVar1 - field_40) / m_radialHighlightedRange);
                uVar3 = 0;
                fVar2 = 1.0 - fVar2;
            }
        }
        return (((uint64_t)uVar3 << 32) | (uint32_t)fVar2);
    }

} // namespace jag::game

namespace jag::render {
    // 0x10037cf60: DrawCallParams::DrawCallParams() has the same machine code as oldscape::dash3d::LightSource::LightSource()

    // 0x10037cf60: GPUMemoryTrackingEntry::GPUMemoryTrackingEntry() has the same machine code as oldscape::dash3d::LightSource::LightSource()

} // namespace jag::render

// 0x1004280d0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}
