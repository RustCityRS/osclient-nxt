// libs/graphics/runetek7/gui/animations/GUIAnimationInstance.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GUIAnimationInstance.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    GUIAnimationInstance::GetAnimation() const;

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    Hook GUIAnimationInstance::GetOnFinishHook() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    GUIAnimationInstance::GetComponent() const;

    // 0x1008f65c0, 288 bytes, base-object constructor, placed by class name and debug map
    // GUIAnimationInstance::GUIAnimationInstance(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float)
    void GUIAnimationInstance::GUIAnimationInstance(shared_ptr* param_1, shared_ptr* param_2, float param_3,
                                                    float param_4, uint param_5, float param_6) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, param_2) shared_ptr<oldscape::dash3d::Decor>();
        field_32 = param_3;
        field_36 = param_4;
        field_40 = param_6;
        field_44 = param_5;
        field_48 = -3.4028235e+38;
        new (m_onFinishHook) game::Hook();
        std::variant<unsigned char*, int*>::variant<true, 0>();
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<true, 0>();
        field_328 = (undefined*)0;
        eastl::function<void(GUIAnimationResult_const&)>::function(
            (function<void(GUIAnimationResult_const&)>*)&field_336);
        if (param_3 <= 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("duration > 0.f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationInstance.cpp",
                      16, (char*)0);
        }
    }

    // 0x1008f6740, 16 bytes, complete-object constructor, placed by class name and debug map
    // GUIAnimationInstance::GUIAnimationInstance(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float): jumps straight to the base-object constructor

    // 0x1008f6750, 288 bytes, base-object constructor, placed by class name and debug map
    // GUIAnimationInstance::GUIAnimationInstance(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float, game::Hook&&)
    void GUIAnimationInstance::GUIAnimationInstance(shared_ptr* param_1, shared_ptr* param_2, float param_3,
                                                    float param_4, uint param_5, float param_6, Hook* param_7) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, param_2) shared_ptr<oldscape::dash3d::Decor>();
        field_32 = param_3;
        field_36 = param_4;
        field_40 = param_6;
        field_44 = param_5;
        field_48 = -3.4028235e+38;
        new (m_onFinishHook, param_7) game::Hook();
        std::variant<unsigned char*, int*>::variant<true, 0>();
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<true, 0>();
        field_328 = (undefined*)0;
        eastl::function<void(GUIAnimationResult_const&)>::function(
            (function<void(GUIAnimationResult_const&)>*)&field_336);
        if (param_3 <= 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("duration > 0.f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationInstance.cpp",
                      28, (char*)0);
        }
    }

    // 0x1008f6880, 16 bytes, complete-object constructor, placed by class name and debug map
    // GUIAnimationInstance::GUIAnimationInstance(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float, game::Hook&&): jumps straight to the base-object constructor

    // 0x1008f6890, 304 bytes, placed by class name and debug map
    // GUIAnimationInstance::Advance(float)
    uint GUIAnimationInstance::Advance(float param_1) {
        float fVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        uVar2 = Finished(this);
        if ((char)uVar2 != '\0')
            goto LAB_1008f69a8;
        fVar9 = param_1 + field_48;
        field_48 = fVar9;
        if (fVar9 <= 0.0)
            goto LAB_1008f69a8;
        fVar1 = field_32;
        if (fVar9 <= fVar1) {
            fVar9 = fVar9 / fVar1;
        } else {
            fVar8 = field_40 + fVar1;
            fVar9 = fVar9 - fVar8;
            field_48 = fVar9;
            uVar4 = field_44 - 1;
            field_44 = uVar4;
            if (0.0 < fVar9) {
                fVar7 = (float)floor(fVar9 / fVar8);
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
        ApplyAnimation(this, fVar9);
    LAB_1008f69a8:
        return uVar2 ^ 1;
    }

    // 0x1008f6a00, 192 bytes, placed by class name and debug map
    // GUIAnimationInstance::ApplyAnimation(float)
    void GUIAnimationInstance::ApplyAnimation(float param_1) {
        code* pcVar1;
        undefined4 uVar3;
        undefined1 local_50[32];

        local_50._28_4_ = param_1;
        shared_ptr<GUIAnimation>::operator->((shared_ptr<GUIAnimation>*)this);
        local_50->Evaluate((float)local_50._28_4_);
        if ((&field_336)->operator_cast_to_bool()) {
            eastl::function<void(GUIAnimationResult_const&)>::operator()(
                (function<void(GUIAnimationResult_const&)>*)&field_336, (GUIAnimationResult*)local_50);
        } else {
            pcVar1 = (code*)field_328;
            if (pcVar1 == (code*)0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/gui/animations/GUIAnimationInstance.cpp",
                                169, (char*)0);
            }
            local_50._28_4_ = local_50._24_4_;
            uVar3 = GetTargetMode(this);
            (*pcVar1)(local_50._28_4_, &field_296, &field_312, local_50, local_50 + 12, uVar3);
        }
    }

    // 0x1008f6ac0, 64 bytes, placed by class name and debug map
    // GUIAnimationInstance::Start()
    void GUIAnimationInstance::Start() {
        long* plVar1;

        field_48 = -field_36;
        plVar1 = (long*)shared_ptr<ui::Component>::operator->((shared_ptr<ui::Component>*)&field_16);
        (**(code**)(*plVar1 + 152))(plVar1, this);
    }

    // 0x1008f6b40, 16 bytes, placed by class name and debug map
    // GUIAnimationInstance::Restart(unsigned int)
    void GUIAnimationInstance::Restart(uint param_1) {
        field_44 = param_1;
        Start(this);
    }

    // 0x1008f6b50, 176 bytes, placed by class name and debug map
    // GUIAnimationInstance::Restart(float, float, unsigned int, float)
    void GUIAnimationInstance::Restart(float param_1, float param_2, uint param_3, float param_4) {
        long* plVar1;
        float fVar2;

        if (field_44 == 0) {
            field_48 = -param_2;
            plVar1 = (long*)shared_ptr<ui::Component>::operator->((shared_ptr<ui::Component>*)&field_16);
            (**(code**)(*plVar1 + 152))(plVar1, this);
        } else {
            fVar2 = field_48;
            if (fVar2 <= 0.0) {
                if (fVar2 <= -field_36)
                    goto LAB_1008f6be4;
                fVar2 = -param_2;
            } else {
                fVar2 = (fVar2 * param_1) / field_32;
            }
            field_48 = fVar2;
        }
    LAB_1008f6be4:
        field_44 = param_3;
        field_36 = param_2;
        field_32 = param_1;
        field_40 = param_4;
    }

    // 0x1008f6c00, 64 bytes, placed by class name and debug map
    // GUIAnimationInstance::Kill(GUIAnimationKillBehaviour)
    void GUIAnimationInstance::Kill(char param_2) {
        float fVar1;

        if (field_44 != 0) {
            field_44 = 0;
            if (param_2 == '\x02') {
                fVar1 = 1.0;
            } else {
                if (param_2 != '\x01') {
                    return;
                }
                fVar1 = 0.0;
            }
            ApplyAnimation(this, fVar1);
        }
    }

} // namespace jag::graphics

// 0x1008f69f0, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}
