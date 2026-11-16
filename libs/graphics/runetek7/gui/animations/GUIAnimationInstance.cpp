// libs/graphics/runetek7/gui/animations/GUIAnimationInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GUIAnimationInstance.h"

namespace jag::graphics {
    // 0x100009ca0: GUIAnimationInstance::GetAnimation() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000b7910: GUIAnimationInstance::GetOnFinishHook() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x1000b9950: GUIAnimationInstance::GetComponent() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1008f65c0
    GUIAnimationInstance::GUIAnimationInstance(const shared_ptr<GUIAnimation>& guiAnimation,
                                               const shared_ptr<ui::Component>& component, float arg3, float arg4,
                                               unsigned int arg5, float arg6)
        : shared_ptr(guiAnimation), field_16(component), field_32(arg3), field_36(arg4), field_40(arg6),
          field_44(arg5) {
        field_48 = -3.4028235e+38;
        new (m_onFinishHook) game::Hook();
        field_296.variant<true, 0>();
        field_312.variant<true, 0>();
        field_328 = nullptr;
        new (&field_336) eastl::function<void(GUIAnimationResult const&)>();
        if (arg3 <= 0.0) {
            LogAssert("duration > 0.f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationInstance.cpp",
                      16, nullptr);
        }
    }

    // 0x1008f6750
    GUIAnimationInstance::GUIAnimationInstance(const shared_ptr<GUIAnimation>& guiAnimation,
                                               const shared_ptr<ui::Component>& component, float arg3, float arg4,
                                               unsigned int arg5, float arg6, game::Hook&& hook)
        : shared_ptr(guiAnimation), field_16(component), field_32(arg3), field_36(arg4), field_40(arg6),
          field_44(arg5) {
        field_48 = -3.4028235e+38;
        new (m_onFinishHook) game::Hook(hook);
        field_296.variant<true, 0>();
        field_312.variant<true, 0>();
        field_328 = nullptr;
        new (&field_336) eastl::function<void(GUIAnimationResult const&)>();
        if (arg3 <= 0.0) {
            LogAssert("duration > 0.f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationInstance.cpp",
                      28, nullptr);
        }
    }

    // 0x1008f6890
    unsigned int GUIAnimationInstance::Advance(float arg1) {
        int iVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        float fVar7;
        float fVar8;

        unsigned int uVar2 = Finished();
        if ((char)uVar2 != '\0')
            goto LAB_1008f69a8;
        float fVar9 = arg1 + field_48;
        field_48 = fVar9;
        if (fVar9 <= 0.0)
            goto LAB_1008f69a8;
        float fVar1 = field_32;
        if (fVar9 <= fVar1) {
            fVar9 = fVar9 / fVar1;
        } else {
            fVar8 = field_40 + fVar1;
            fVar9 = fVar9 - fVar8;
            field_48 = fVar9;
            uVar4 = field_44 - 1;
            field_44 = uVar4;
            if (0.0 < fVar9) {
                fVar7 = (float)::floor(fVar9 / fVar8);
                iVar3 = (int)fVar7;
                uVar6 = 0;
                uVar5 = uVar4 - iVar3;
                if (uVar5 != 0 && iVar3 <= (int)uVar4) {
                    field_44 = uVar5;
                    fVar9 = fVar9 - (float)iVar3 * fVar8;
                    field_48 = fVar9;
                    if (fVar9 <= fVar1)
                        goto LAB_1008f6973;
                    field_48 = fVar9 - fVar8;
                    uVar6 = uVar5 - 1;
                }
                field_44 = uVar6;
            }
        LAB_1008f6973:
            fVar9 = 1.0;
            if ((field_44 != 0) && (0.0 <= field_48)) {
                fVar9 = field_48 / fVar1;
            }
        }
        ApplyAnimation(fVar9);
    LAB_1008f69a8:
        return uVar2 ^ 1;
    }

    // 0x1008f6a00
    void GUIAnimationInstance::ApplyAnimation(float arg1) {
        void* pcVar1;
        uint32_t uVar3;
        uint8_t local_50[32];

        local_50._28_4_ = arg1;
        (*this).operator->();
        local_50->Evaluate((float)local_50._28_4_);
        if ((&field_336)->operator_cast_to_bool() == '\0') {
            pcVar1 = (void (*)(...))field_328;
            if (pcVar1 == (void (*)(...))0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/gui/animations/GUIAnimationInstance.cpp",
                                169, nullptr);
            }
            local_50._28_4_ = local_50._24_4_;
            uVar3 = GetTargetMode();
            (*pcVar1)(local_50._28_4_, &field_296, &field_312, local_50, local_50 + 12, uVar3);
        } else {
            eastl::function<void(GUIAnimationResult const&)>::operator()(
                (function<void(GUIAnimationResult const&)>*)&field_336, (GUIAnimationResult*)local_50);
        }
    }

    // 0x1008f6ac0
    void GUIAnimationInstance::Start() {
        field_48 = -field_36;
        auto plVar1 = field_16.operator->();
        (**(void (**)(...))(*plVar1 + 152))(plVar1, this);
    }

    // 0x1008f6b40
    void GUIAnimationInstance::Restart(unsigned int arg1) {
        field_44 = arg1;
        Start();
    }

    // 0x1008f6b50
    void GUIAnimationInstance::Restart(float arg1, float arg2, unsigned int arg3, float arg4) {
        long* plVar1;
        float fVar2;

        if (field_44 == 0) {
            field_48 = -arg2;
            plVar1 = (long*)field_16.operator->();
            (**(void (**)(...))(*plVar1 + 152))(plVar1, this);
        } else {
            fVar2 = field_48;
            if (fVar2 <= 0.0) {
                if (fVar2 <= -field_36)
                    goto LAB_1008f6be4;
                fVar2 = -arg2;
            } else {
                fVar2 = (fVar2 * arg1) / field_32;
            }
            field_48 = fVar2;
        }
    LAB_1008f6be4:
        field_44 = arg3;
        field_36 = arg2;
        field_32 = arg1;
        field_40 = arg4;
    }

    // 0x1008f6c00
    void GUIAnimationInstance::Kill(GUIAnimationKillBehaviour guiAnimationKillBehaviour) {
        float arg1;

        if (field_44 != 0) {
            field_44 = 0;
            if ((char)guiAnimationKillBehaviour == '\x02') {
                arg1 = 1.0;
            } else {
                if ((char)guiAnimationKillBehaviour != '\x01') {
                    return;
                }
                arg1 = 0.0;
            }
            ApplyAnimation(arg1);
        }
    }

} // namespace jag::graphics

// 0x1008f69f0
void floor(float arg1) {
    _floorf();
}
