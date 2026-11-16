// libs/ui/utils/ButtonElement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "ButtonElement.h"

namespace jag::ui {
    // 0x100f3e6b8, 8 bytes, __data
    ButtonElement::m_animationDurationMultiplier = 1065353216;

    // 0x1000092e0: the linker folded this into BaseApp::GetAppRunning() const, which has identical code
    ButtonElement::IsMouseOver() const;

    // 0x10000c2f0: the linker folded this into math::Rect<int>::SetX(int), which has identical code
    ButtonElement::UpdateResult::UpdateResult(ButtonElement::UpdateResult::ResultType);

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    ButtonElement::GetTrigger() const;

    // 0x10017ebb0: the linker folded this into oldscape::CoordType<oldscape::UICoordSpecializer>::CoordType(int), which has identical code
    ButtonElement::UpdateResult::UpdateResult(ButtonElement::UpdateResult::ResultType);

    // 0x10043b770: the linker folded this into game::StaticPointLight::GetLightLevelsAbove() const, which has identical code
    ButtonElement::IsToggled() const;

    // 0x100674ad0, 608 bytes, placed by class name and debug map
    // ButtonElement::Draw(graphics::RT7Core&, int, int, unsigned short, unsigned short, unsigned int, bool, render::Texture const*, math::Rect<float> const&, SpriteData const&, bool)
    void ButtonElement::Draw(RT7Core* param_1, int param_2, int param_3, ushort param_4, ushort param_5, uint param_6,
                             bool param_7, Texture* param_8, Rect* param_9, SpriteData* param_10, bool param_11) {
        float fVar1;
        uint uVar2;
        undefined4 uVar3;
        uint uVar4;
        char cVar5;
        uint uVar6;
        undefined6 in_register_0000008a;
        float fVar7;
        undefined1 local_68[36];
        float local_40;
        float local_34;

        local_34 = (float)CONCAT62(in_register_0000008a, param_5);
        local_68._24_8_ = param_1;
        if (param_8 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "texture != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ButtonElement.cpp", 8,
                (char*)0);
        }
        uVar2 = param_10->GetSpriteRGBA();
        uVar2 = math::Multiply(param_6, uVar2);
        if ((!param_11) || (cVar5 = '\x04', field_0 != 2)) {
            cVar5 = !param_7 * '\x03';
        }
        uVar3 = GetCurrentVisualState(this, cVar5);
        GetVisualUV((ButtonElement*)local_68, this, param_9, uVar3);
        fVar1 = local_34;
        local_34 = 0.0;
        uVar6 = (uint)fVar1 & 65535;
        param_10->DrawSpriteSlice(local_68._24_8_, param_2, param_3, (uint)param_4, uVar6, uVar2, local_68, param_8,
                                  0.0);
        if (param_7) {
            local_40 = 0.0;
            if (field_16 != 0.2) {
                local_34 = field_16 * 5.0;
                fVar7 = (float)::abs(local_34 + -0.5);
                local_40 = 1.0 - (fVar7 + fVar7);
            }
            if ((0.0 < field_12) && (local_40 < 1.0)) {
                local_68._20_4_ = eastl::min<float>(field_12, 1.0 - local_40);
                uVar3 = GetCurrentVisualState(this, 1);
                GetVisualUV((ButtonElement*)local_68, this, param_9, uVar3);
                uVar4 = math::MultiplyAlpha(uVar2, (float)local_68._20_4_);
                param_10->DrawSpriteSlice(local_68._24_8_, param_2, param_3, (uint)param_4, (uint)fVar1 & 65535, uVar4,
                                          local_68, param_8, 0.0);
            }
            if (0.0 < local_40) {
                if (0.5 < local_34) {
                    field_24 = m_toggled;
                }
                GetVisualUV((ButtonElement*)local_68, this, param_9, (uint)m_toggled * 4 + 2);
                uVar2 = math::MultiplyAlpha(uVar2, local_40);
                param_10->DrawSpriteSlice(local_68._24_8_, param_2, param_3, (uint)param_4, uVar6, uVar2, local_68,
                                          param_8, 0.0);
            }
        }
    }

    // 0x100674d30, 176 bytes, placed by class name and debug map
    // ButtonElement::GetVisualUV(math::Rect<float> const&, ButtonElement::VisualState) const
    ButtonElement* ButtonElement::GetVisualUV(ButtonElement* param_1, Vector4T* param_3, int param_4) {
        float fVar1;
        float fVar2;
        byte bVar3;
        float* pfVar4;

        bVar3 = GetStateCount(param_1);
        new (this) math::Float4(param_3);
        pfVar4 = (float*)qw();
        fVar1 = *pfVar4;
        pfVar4 = (float*)y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)y();
        *pfVar4 = (float)param_4 * fVar1 * (1.0 / (float)bVar3) + fVar2;
        SetVerticalFov((1.0 / (float)bVar3) * fVar1);
        return this;
    }

    // 0x100674de0, 16 bytes, placed by class name and debug map
    // ButtonElement::GetCurrentVisualState(ButtonElement::VisualState) const
    int ButtonElement::GetCurrentVisualState(int param_2) {
        int iVar1;

        iVar1 = param_2 + 4;
        if (field_24 == false) {
            iVar1 = param_2;
        }
        return iVar1;
    }

    // 0x100676280, 480 bytes, placed by class name
    // ButtonElement::UpdateLogic(math::Vector2T<float>, int, int, int, int, bool, bool, bool)
    ulong ButtonElement::UpdateLogic(undefined8 param_1, ButtonElement* this, int param_3, int param_4, int param_5,
                                     int param_6, int param_7, char param_8, byte param_9) {
        int iVar1;
        bool bVar2;
        char cVar3;
        ulong in_RAX;
        int iVar4;
        float fVar5;
        ulong local_28;

        local_28 = in_RAX;
        if (param_7 == 0) {
            m_mouseOver = 0;
        LAB_100676347:
            iVar1 = field_4;
            iVar4 = 2;
            if (iVar1 == 0) {
                if (((m_pressed != '\0') && (param_9 == 0)) && (param_8 == '\0')) {
                    m_pressed = 0;
                    field_11 = 1;
                    iVar4 = 1;
                    goto switchD_100676333_caseD_4;
                }
                if ((field_11 == '\0') || (field_16 <= 0.2 && field_16 != 0.2))
                    goto switchD_100676333_caseD_4;
                if (field_0 == 4) {
                    m_toggled = (bool)(m_toggled ^ 1);
                }
                field_11 = 0;
            } else {
                if (iVar1 != 3) {
                    if (((iVar1 != 2) || (m_pressed == '\0')) || ((param_9 != 0 || (param_8 != '\0'))))
                        goto switchD_100676333_caseD_4;
                    m_pressed = 0;
                    if (m_mouseOver == '\0') {
                        iVar4 = 3;
                        goto switchD_100676333_caseD_4;
                    }
                    iVar1 = field_0;
                    goto joined_r0x000100676392;
                }
                param_9 = m_pressed & param_9;
                m_pressed = param_9;
                if (param_9 == 0)
                    goto switchD_100676333_caseD_4;
                iVar1 = field_20;
                field_20 = iVar1 + -1;
                iVar4 = 1;
                if (1 < iVar1)
                    goto switchD_100676333_caseD_4;
                if (field_0 == 4) {
                    m_toggled = (bool)(m_toggled ^ 1);
                }
                field_20 = 10;
            }
            iVar4 = 0;
        } else {
            fVar5 = (float)param_1 - (float)param_3;
            bVar2 = false;
            if ((0.0 <= fVar5) && (fVar5 < (float)param_5)) {
                fVar5 = (float)((ulong)param_1 >> 32) - (float)param_4;
                bVar2 = fVar5 < (float)param_6 && 0.0 <= fVar5;
            }
            m_mouseOver = bVar2;
            if (((bVar2 == false) || (param_8 == '\0')) ||
                ((iVar1 = field_4, iVar1 != 1 && ((iVar1 != 4 && (cVar3 = IsIdle(this), cVar3 == '\0'))))))
                goto LAB_100676347;
            field_16 = 0.0;
            field_8 = 0;
            iVar4 = 0;
            switch (iVar1) {
            case 0:
            case 2:
                m_pressed = 1;
                iVar4 = 1;
                break;
            default:
                iVar1 = field_0;
            joined_r0x000100676392:
                iVar4 = 0;
                if (iVar1 == 4) {
                    iVar4 = 0;
                    m_toggled = (bool)(m_toggled ^ 1);
                }
                break;
            case 3:
                if (field_0 == 4) {
                    m_toggled = (bool)(m_toggled ^ 1);
                }
                field_20 = 20;
                m_pressed = 1;
                break;
            case 4:
                break;
            }
        }
    switchD_100676333_caseD_4:
        oldscape::graphics::XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>::XPlotBlender<int>(
            (XPlotBlender<oldscape::graphics::XPlot_NormalAlpha>*)&local_28, iVar4);
        return local_28 & 4294967295;
    }

    // 0x100676460, 48 bytes, placed by class name
    // ButtonElement::IsIdle() const
    bool ButtonElement::IsIdle() {
        if ((m_pressed == '\0') && (field_11 == '\0')) {
            return 0.2 < field_16 || field_16 == 0.2;
        }
        return false;
    }

    // 0x100676490, 240 bytes, placed by class name
    // ButtonElement::UpdateAnimations(float)
    void ButtonElement::UpdateAnimations(float param_1) {
        float fVar1;
        float fVar2;
        float local_18;
        float local_14;

        fVar2 = param_1 / *(float*)PTR_m_animationDurationMultiplier_100ee6408;
        fVar1 = 0.2;
        if (field_16 < 0.2) {
            if (m_pressed != '\0') {
                if (field_4 == 2) {
                    fVar1 = 0.1;
                } else {
                    fVar1 = *(float*)(&DAT_100d43308 + (ulong)(field_4 == 0) * 4);
                }
            }
            fVar1 = (float)eastl::min<float>(field_16 + fVar2, fVar1);
            if (field_8 == '\0') {
                fVar1 = (float)(-(uint)(fVar1 == 0.2) & 1036831949 | ~-(uint)(fVar1 == 0.2) & (uint)fVar1);
            }
            field_16 = fVar1;
            field_8 = 1;
        }
        if (m_mouseOver == '\0') {
            fVar2 = -fVar2;
        }
        field_12 = fVar2 * 10.0 + field_12;
        local_18 = 0.0;
        local_14 = 1.0;
        fVar1 = math::Clamp<float>(&field_12, &local_18, &local_14);
        field_12 = fVar1;
    }

    // 0x100676580, 48 bytes, placed by class name
    // ButtonElement::FinishTransitions()
    void ButtonElement::FinishTransitions() {
        field_24 = m_toggled;
        field_8 = 1;
        m_mouseOver = 0;
        m_pressed = 0;
        field_11 = 0;
        field_20 = 0;
        field_12 = 0.0;
        field_16 = 0.2;
    }

    // 0x1006765b0, 64 bytes, placed by class name
    // ButtonElement::SetToggled(bool, bool)
    undefined8 ButtonElement::SetToggled(bool param_1, bool param_2) {
        if ((field_0 != 4) || (m_toggled == param_1)) {
            return 0;
        }
        m_toggled = param_1;
        if (param_2) {
            FinishTransitions(this);
        } else {
            field_16 = 0.0;
            field_8 = 0;
        }
        return 1;
    }

    // 0x1006765f0, 80 bytes, placed by class name
    // ButtonElement::SetBehaviour(ButtonElement::Behaviour, ButtonElement::Trigger)
    void ButtonElement::SetBehaviour(int param_2, int param_3) {
        if ((field_0 != param_2) || (field_4 != param_3)) {
            if (param_2 != 4) {
                m_toggled = false;
            }
            FinishTransitions(this);
            field_0 = param_2;
            field_4 = param_3;
        }
    }

    // 0x100676640, 48 bytes, placed by class name
    // ButtonElement::GetStateCount() const
    uint ButtonElement::GetStateCount() {
        uint uVar1;

        uVar1 = 4;
        if (field_0 - 1U < 4) {
            uVar1 = 134743304 >> ((char)field_0 * '\b' - 8U & 31);
        }
        return uVar1 & 255;
    }

} // namespace jag::ui
