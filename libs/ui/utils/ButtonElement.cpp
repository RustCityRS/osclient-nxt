// libs/ui/utils/ButtonElement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "ButtonElement.h"

namespace jag::ui {
    // 0x100f3e6b8
    int64_t ButtonElement::m_animationDurationMultiplier = 1065353216;

    // 0x1000092e0: ButtonElement::IsMouseOver() const has the same machine code as BaseApp::GetAppRunning() const

    // 0x10000c2f0: ButtonElement::UpdateResult::UpdateResult(ButtonElement::UpdateResult::ResultType) has the same machine code as math::Rect<int>::SetX(int)

    // 0x100073980: ButtonElement::GetTrigger() const has the same machine code as math::Rect<int>::MinY() const

    // 0x10043b770: ButtonElement::IsToggled() const has the same machine code as game::StaticPointLight::GetLightLevelsAbove() const

    // 0x100674ad0
    void ButtonElement::Draw(graphics::RT7Core& rt7Core, int arg2, int arg3, unsigned short arg4, unsigned short arg5,
                             unsigned int arg6, bool arg7, const render::Texture* texture,
                             const math::Rect<float>& rect, const SpriteData& spriteData, bool arg11) {
        unsigned int arg6_00;
        VisualState VVar3;
        uint64_t in_register_0000008a;
        float fVar4;
        uint8_t local_68[36];
        float local_40;

        float local_34 = (float)(((uint64_t)in_register_0000008a << 16) | (uint16_t)arg5);
        local_68._24_8_ = rt7Core;
        if (texture == nullptr) {
            LogAssert(
                "texture != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/ButtonElement.cpp", 8,
                nullptr);
        }
        unsigned int uVar2 = spriteData.GetSpriteRGBA();
        uVar2 = math::Multiply(arg6, uVar2);
        if ((!arg11) || (VVar3 = 4, field_0 != 2)) {
            VVar3 = (unsigned int)!arg7 * 3;
        }
        GetCurrentVisualState(VVar3);
        VVar3 = (VisualState)rect;
        GetVisualUV((ButtonElement*)local_68, (Rect<float>*)this, VVar3);
        float fVar1 = local_34;
        local_34 = 0.0;
        unsigned int arg5_00 = (unsigned int)fVar1 & 65535;
        spriteData.DrawSpriteSlice(*local_68._24_8_, arg2, arg3, (unsigned int)arg4, arg5_00, uVar2, *local_68, texture,
                                   0.0);
        if (arg7) {
            local_40 = 0.0;
            if (field_16 != 0.2) {
                local_34 = field_16 * 5.0;
                fVar4 = (float)::abs(local_34 - 0.5);
                local_40 = 1.0 - (fVar4 + fVar4);
            }
            if ((0.0 < field_12) && (local_40 < 1.0)) {
                local_68._20_4_ = eastl::min<float>(field_12, 1.0 - local_40);
                GetCurrentVisualState(1);
                GetVisualUV((ButtonElement*)local_68, (Rect<float>*)this, VVar3);
                arg6_00 = math::MultiplyAlpha(uVar2, (float)local_68._20_4_);
                spriteData.DrawSpriteSlice(*local_68._24_8_, arg2, arg3, (unsigned int)arg4,
                                           (unsigned int)fVar1 & 65535, arg6_00, *local_68, texture, 0.0);
            }
            if (0.0 < local_40) {
                if (0.5 < local_34) {
                    field_24 = m_toggled;
                }
                GetVisualUV((ButtonElement*)local_68, (Rect<float>*)this, VVar3);
                uVar2 = math::MultiplyAlpha(uVar2, local_40);
                spriteData.DrawSpriteSlice(*local_68._24_8_, arg2, arg3, (unsigned int)arg4, arg5_00, uVar2, *local_68,
                                           texture, 0.0);
            }
        }
    }

    // 0x100674d30
    ButtonElement* ButtonElement::GetVisualUV(const math::Rect<float>& rect,
                                              ButtonElement::VisualState visualState) const {
        int in_ECX;
        uint32_t in_register_00000014;

        uint8_t bVar3 = GetStateCount((ButtonElement*)rect);
        new (this) math::Float4(*((Rect<float>*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)visualState)));
        auto pfVar4 = qw();
        float fVar1 = *pfVar4;
        pfVar4 = (float*)y();
        float fVar2 = *pfVar4;
        pfVar4 = (float*)y();
        *pfVar4 = (float)in_ECX * fVar1 * (1.0 / (float)bVar3) + fVar2;
        SetVerticalFov((1.0 / (float)bVar3) * fVar1);
        return this;
    }

    // 0x100674de0
    VisualState ButtonElement::GetCurrentVisualState(ButtonElement::VisualState visualState) const {
        VisualState VVar1 = visualState + 4;
        if (field_24 == false) {
            VVar1 = visualState;
        }
        return VVar1;
    }

    // 0x100676280
    unsigned long ButtonElement::UpdateLogic(math::Vector2T<float> vector2, int arg2, int arg3, int arg4, int arg5,
                                             bool arg6, bool arg7, bool arg8) {
        Trigger TVar1;
        int iVar2;
        Behaviour BVar3;
        uint8_t bVar4;
        bool bVar5;
        bool cVar6;
        unsigned long in_RAX;
        ResultType resultType;
        float in_XMM0_Da;
        float in_XMM0_Db;
        float fVar7;

        unsigned long local_28 = in_RAX;
        if (arg5 == 0) {
            m_mouseOver = false;
        LAB_100676347:
            TVar1 = m_trigger;
            resultType = 2;
            if (TVar1 == 0) {
                if (((m_pressed != 0) && (!arg7)) && (!arg6)) {
                    m_pressed = 0;
                    field_11 = 1;
                    resultType = 1;
                    goto switchD_100676333_caseD_4;
                }
                if ((field_11 == '\0') || (field_16 <= 0.2 && field_16 != 0.2))
                    goto switchD_100676333_caseD_4;
                if (field_0 == 4) {
                    m_toggled = (bool)(m_toggled ^ 1);
                }
                field_11 = 0;
            } else {
                if (TVar1 != 3) {
                    if (((TVar1 != 2) || (m_pressed == 0)) || ((arg7 || (arg6))))
                        goto switchD_100676333_caseD_4;
                    m_pressed = 0;
                    if (m_mouseOver == false) {
                        resultType = 3;
                        goto switchD_100676333_caseD_4;
                    }
                    BVar3 = field_0;
                    goto joined_r0x000100676392;
                }
                bVar4 = m_pressed & arg7;
                m_pressed = bVar4;
                if (bVar4 == 0)
                    goto switchD_100676333_caseD_4;
                iVar2 = field_20;
                field_20 = iVar2 - 1;
                resultType = 1;
                if (1 < iVar2)
                    goto switchD_100676333_caseD_4;
                if (field_0 == 4) {
                    m_toggled = (bool)(m_toggled ^ 1);
                }
                field_20 = 10;
            }
            resultType = 0;
        } else {
            fVar7 = in_XMM0_Da - (float)(int)vector2;
            bVar5 = false;
            if ((0.0 <= fVar7) && (fVar7 < (float)arg3)) {
                bVar5 = in_XMM0_Db - (float)arg2 < (float)arg4 && 0.0 <= in_XMM0_Db - (float)arg2;
            }
            m_mouseOver = bVar5;
            if (((bVar5 == false) || (!arg6)) ||
                ((TVar1 = m_trigger, TVar1 != 1 && ((TVar1 != 4 && (cVar6 = IsIdle(), !cVar6))))))
                goto LAB_100676347;
            field_16 = 0.0;
            field_8 = 0;
            resultType = 0;
            switch (TVar1) {
            case 0:
            case 2:
                m_pressed = 1;
                resultType = 1;
                break;
            default:
                BVar3 = field_0;
            joined_r0x000100676392:
                resultType = 0;
                if (BVar3 == 4) {
                    resultType = 0;
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
        local_28.XPlotBlender<int>(resultType);
        return local_28 & 4294967295;
    }

    // 0x100676460
    bool ButtonElement::IsIdle() const {
        if ((m_pressed == 0) && (field_11 == '\0')) {
            return 0.2 < field_16 || field_16 == 0.2;
        }
        return false;
    }

    // 0x100676490
    void ButtonElement::UpdateAnimations(float arg1) {
        float fVar2 = arg1 / *(float*)PTR_m_animationDurationMultiplier_100ee6408;
        float fVar1 = 0.2;
        if (field_16 < 0.2) {
            if (m_pressed != 0) {
                if (m_trigger == 2) {
                    fVar1 = 0.1;
                } else {
                    fVar1 = *(float*)(&reinterpret_cast<const uint64_t*>(&ACCELERATION_INFINITE)[15] +
                                      (unsigned long)(m_trigger == 0) * 4);
                }
            }
            fVar1 = (float)eastl::min<float>(field_16 + fVar2, fVar1);
            if (field_8 == '\0') {
                fVar1 = (float)(-(unsigned int)(fVar1 == 0.2) & 1036831949 |
                                ~-(unsigned int)(fVar1 == 0.2) & (unsigned int)fVar1);
            }
            field_16 = fVar1;
            field_8 = 1;
        }
        if (m_mouseOver == false) {
            fVar2 = -fVar2;
        }
        field_12 = fVar2 * 10.0 + field_12;
        fVar1 = math::Clamp<float>(field_12, 0.0, 1.0);
        field_12 = fVar1;
    }

    // 0x100676580
    void ButtonElement::FinishTransitions() {
        field_24 = m_toggled;
        field_8 = 1;
        m_mouseOver = false;
        m_pressed = 0;
        field_11 = 0;
        field_20 = 0;
        field_12 = 0.0;
        field_16 = 0.2;
    }

    // 0x1006765b0
    uint64_t ButtonElement::SetToggled(bool arg1, bool arg2) {
        if ((field_0 != 4) || (m_toggled == arg1)) {
            return 0;
        }
        m_toggled = arg1;
        if (arg2) {
            FinishTransitions();
        } else {
            field_16 = 0.0;
            field_8 = 0;
        }
        return 1;
    }

    // 0x1006765f0
    void ButtonElement::SetBehaviour(ButtonElement::Behaviour behaviour, ButtonElement::Trigger trigger) {
        if ((field_0 != behaviour) || (m_trigger != trigger)) {
            if (behaviour != 4) {
                m_toggled = false;
            }
            FinishTransitions();
            field_0 = behaviour;
            m_trigger = trigger;
        }
    }

    // 0x100676640
    unsigned int ButtonElement::GetStateCount() const {
        unsigned int uVar1 = 4;
        if (field_0 - 1 < 4) {
            uVar1 = 134743304 >> ((char)field_0 * '\b' - 8U & 31);
        }
        return uVar1 & 255;
    }

} // namespace jag::ui
