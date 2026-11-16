// libs/game/runetek5/scene/entities/EntityHighlightGlobalState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "EntityHighlightGlobalState.h"

namespace jag::game {
    // 0x100f38ba0, 4 bytes, __data
    float EntityHighlightGlobalState::m_radialHighlightMaxRadius = 5000.0f;

    // 0x100f38ba4, 4 bytes, __data
    float EntityHighlightGlobalState::m_radialHighlightedRange = 1000.0f;

    // 0x100f38ba8, 4 bytes, __data
    float EntityHighlightGlobalState::m_radialHighlightExpandSpeed = 6.0f;

    // 0x100f38bac, 4 bytes, __data
    float EntityHighlightGlobalState::m_radialHighlightContractSpeed = 2.0f;

    // 0x1039b4e60, 1 bytes, __common; zero-initialised
    EntityHighlightGlobalState::m_allowExamineOnlyHighlights;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    EntityHighlightGlobalState::GetPreviousUpdateLogicTick() const;

    // 0x1000641f0: the linker folded this into graphics::SunlightOptions::GetSunElevation() const, which has identical code
    EntityHighlightGlobalState::GetOutlineRadiusAdjustment() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    EntityHighlightGlobalState::GetPlayerNPCAttackOpPriority() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    EntityHighlightGlobalState::GetCurrentUpdateLogicTick() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    EntityHighlightGlobalState::GetPlayerActiveCombatLevel() const;

    // 0x10037cf60: the linker folded this into oldscape::dash3d::LightSource::LightSource(), which has identical code
    EntityHighlightGlobalState::RadialHighlightState::RadialHighlightState();

    // 0x10037cf70: the linker folded this into oldscape::dash3d::LightSource::LightSource(), which has identical code
    EntityHighlightGlobalState::RadialHighlightState::RadialHighlightState();

    // 0x100427f60, 112 bytes, placed by class name and debug map
    // EntityHighlightGlobalState::Update(float, unsigned int)
    void EntityHighlightGlobalState::Update(float param_1, uint param_2) {
        undefined1 uVar1;

        uVar1 = *(undefined1*)((long)&field_4 + 3);
        field_8 = *(undefined3*)&field_4;
        field_11 = uVar1;
        field_4 = param_2;
        if (field_28 == 2) {
            (&field_28, -m_radialHighlightContractSpeed, param_1)->UpdateRadius();
            if (field_32 <= 0.0) {
                field_28 = 0;
                field_32 = 0.0;
            }
        } else if (field_28 == 1) {
            (&field_28, m_radialHighlightExpandSpeed, param_1)->UpdateRadius();
        }
    }

    // 0x100427fd0, 112 bytes, placed by class name and debug map
    // EntityHighlightGlobalState::RadialHighlightState::UpdateRadius(float, float)
    void EntityHighlightGlobalState::RadialHighlightState::UpdateRadius(float param_1, float param_2) {
        float fVar1;

        fVar1 = (float)eastl::min<float>(m_radialHighlightMaxRadius,
                                         param_2 * param_1 * m_radialHighlightMaxRadius + field_4);
        if (fVar1 != field_4) {
            field_4 = fVar1;
            field_8 = fVar1 * fVar1;
            fVar1 = (float)eastl::max_alt(0.0, fVar1 - m_radialHighlightedRange);
            field_12 = fVar1;
            field_16 = fVar1 * fVar1;
        }
    }

    // 0x100428040, 144 bytes, placed by class name and debug map
    // EntityHighlightGlobalState::GetRadialHighlightAlpha(float) const
    undefined8 EntityHighlightGlobalState::GetRadialHighlightAlpha(float param_1) {
        undefined8 uVar1;
        float fVar2;
        undefined4 uVar3;

        fVar2 = 0.0;
        uVar3 = 0;
        if ((param_1 != 0.0) && (param_1 < field_36)) {
            fVar2 = field_44;
            uVar1 = ::sqrt(param_1);
            uVar3 = (undefined4)((ulong)uVar1 >> 32);
            if (param_1 <= fVar2) {
                fVar2 = ((float)uVar1 * 0.4) / field_40 + 0.6;
            } else {
                fVar2 = (float)eastl::min<float>(1.0, ((float)uVar1 - field_40) / m_radialHighlightedRange);
                uVar3 = 0;
                fVar2 = 1.0 - fVar2;
            }
        }
        return CONCAT44(uVar3, fVar2);
    }

} // namespace jag::game

namespace jag::render {
    // 0x10037cf60: the linker folded this into oldscape::dash3d::LightSource::LightSource(), which has identical code
    DrawCallParams::DrawCallParams();

    // 0x10037cf60: the linker folded this into oldscape::dash3d::LightSource::LightSource(), which has identical code
    GPUMemoryTrackingEntry::GPUMemoryTrackingEntry();

} // namespace jag::render

// 0x1004280d0, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}
