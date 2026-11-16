// libs/graphics/runetek7/gui/animations/GUIAnimationHelpers.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.ui

namespace jag::fixedfunction {
    // 0x1006d3620
    function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 80) = function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(
            unsigned int->AddCharacter(bool)::$_51&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(
            unsigned int->AddCharacter(bool)::$_51&)::{
            lambda(void*, unsigned int) #1
        }
        ::__invoke;
        *(void (**)(...))(this + 88) = function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(
            unsigned int->AddCharacter(bool)::$_51&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006d3660
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1006d3670
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x1006d3680
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*, unsigned int) #1
    }
    ::__invoke(void* arg1, unsigned int arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1006d3690
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*, unsigned int) #1
    }
    ::operator()(void* arg1, unsigned int arg2) const {
        unsigned int->AddCharacter(bool)::$_51::operator()((__51*)this, (unsigned int)arg1);
    }

    // 0x1006d36c0
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x1006d36d0
    function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 80) =
            function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
                (char const*)->AddContents(char const*, bool, bool)::$_52&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
                (char const*)->AddContents(char const*, bool, bool)::$_52&)::{
            lambda(void*, unsigned int) #1
        }
        ::__invoke;
        *(void (**)(...))(this + 88) =
            function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
                (char const*)->AddContents(char const*, bool, bool)::$_52&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006d3710
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1006d3720
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x1006d3730
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*, unsigned int) #1
    }
    ::__invoke(void* arg1, unsigned int arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1006d3740
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*, unsigned int) #1
    }
    ::operator()(void* arg1, unsigned int arg2) const {
        (char const*)->AddContents(char const*, bool, bool)::$_52::operator()((__52*)this, (unsigned int)arg1);
    }

    // 0x1006d3770
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x1006d9540
    function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 80) =
            function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_57&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_57&&)::{
            lambda(void*, int, StringView) #1
        }
        ::StringView_;
        *(void (**)(...))(this + 88) =
            function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_57&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006d9580
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1006d9590
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x1006d95a0
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*, int, StringView) #1
    }
    ::__invoke(void* arg1, int arg2, StringView stringView) {
        operator()(this, arg1, arg2, stringView);
    }

    // 0x1006d95b0
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*, int, StringView) #1
    }
    ::operator()(void* arg1, int arg2, StringView stringView) const {
        uint32_t in_register_00000014;

        StringView local_30(*((StringView*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2)));
        (ui::UIDataMappingProvider<int, StringView> const&)
            ->Setup()::$_57::operator()((__57*)this, (int)arg1, &local_30);
    }

    // 0x1006d96f0
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x1006daf10
    function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(void (**)(...))(this + 80) =
            function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_59&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_59&&)::{
            lambda(void*, int, StringView) #1
        }
        ::StringView_;
        *(void (**)(...))(this + 88) =
            function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_59&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006daf50
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1006daf60
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x1006daf70
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*, int, StringView) #1
    }
    ::__invoke(void* arg1, int arg2, StringView stringView) {
        uint32_t in_register_00000014;

        operator()(this, (void*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2), arg2, stringView);
    }

    // 0x1006daf80
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*, int, StringView) #1
    }
    ::operator()(void* arg1, int arg2, StringView stringView) const {
        uint32_t extraout_EDX;
        uint32_t extraout_var;

        StringView local_28(*arg1);
        (ui::UIDataMappingProvider<int, StringView> const&)
            ->Setup()::$_59::operator()((__59*)this, (int)&local_28,
                                        (StringView*)(((uint64_t)extraout_var << 32) | (uint32_t)extraout_EDX));
    }

    // 0x1006db2b0
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x1006cd9d0
    uint64_t GUIAnimationRGB::Lerp(GUIAnimationRGB guiAnimationRGB, float arg2) const {
        uint64_t uVar1;
        uint64_t in_RSI;
        GUIAnimationRGB local_30;

        float local_54 = (float)((int)(short)in_RSI - (int)field_0) * arg2 + (float)(int)field_0;
        float fVar2 = math::Clamp<float>(local_54, -255.0, 255.0);
        float local_48 = (float)(((int)in_RSI >> 16) - (int)(short)field_2) * arg2 + (float)(int)(short)field_2;
        float fVar3 = math::Clamp<float>(local_48, -255.0, 255.0);
        float local_3c =
            (float)(((int)((unsigned long)in_RSI >> 16) >> 16) - (int)field_4) * arg2 + (float)(int)field_4;
        float fVar4 = math::Clamp<float>(local_3c, -255.0, 255.0);
        GUIAnimationRGB(&local_30, (short)(int)fVar2, (short)(int)fVar3, (short)(int)fVar4);
        uVar1._0_2_ = local_30.field_0;
        uVar1._2_2_ = local_30.field_2;
        uVar1._4_2_ = local_30.field_4;
        uVar1._6_2_ = local_30._6_2_;
        return uVar1;
    }

    // 0x1006cdb00
    uint64_t GUIAnimationRGB::Delta(GUIAnimationRGB guiAnimationRGB) const {
        uint64_t uVar1;
        uint64_t in_RSI;
        uint8_t local_10[8];

        GUIAnimationRGB((GUIAnimationRGB*)local_10, field_0 - (short)in_RSI,
                        field_2 - (short)((unsigned long)in_RSI >> 16), field_4 - (short)((unsigned long)in_RSI >> 32));
        uVar1._0_2_ = local_10._0_2_;
        uVar1._2_2_ = local_10._2_2_;
        uVar1._4_2_ = local_10._4_2_;
        uVar1._6_2_ = local_10._6_2_;
        return uVar1;
    }

    // 0x1006cdb50
    unsigned int GUIAnimationRGB::EvalAdd(unsigned int arg1) const {
        int local_34[3];

        local_34[0] = (int)field_0 + (arg1 >> 16 & 255);
        local_34[1] = 0;
        local_34[2] = 255;
        int iVar1 = math::Clamp<int>(*local_34, *(local_34 + 1), *(local_34 + 2));
        local_34[0] = (int)(short)field_2 + (arg1 >> 8 & 255);
        local_34[1] = 0;
        local_34[2] = 255;
        int iVar2 = math::Clamp<int>(*local_34, *(local_34 + 1), *(local_34 + 2));
        local_34[0] = (int)field_4 + (arg1 & 255);
        local_34[1] = 0;
        local_34[2] = 255;
        return math::Clamp<int>(*local_34, *(local_34 + 1), *(local_34 + 2)) | iVar2 << 8 | iVar1 << 16;
    }

    // 0x1006cdf60
    unsigned int GUIAnimationRGB::EvalMultiply(unsigned int arg1) const {
        float local_34 = (float)(arg1 >> 16 & 255) * 0.001 * (float)(int)field_0;
        float local_30 = 0.0;
        float local_2c = 255.0;
        float fVar1 = math::Clamp<float>(local_34, local_30, local_2c);
        local_34 = (float)(arg1 >> 8 & 255) * 0.001 * (float)(int)(short)field_2;
        local_30 = 0.0;
        local_2c = 255.0;
        float fVar2 = math::Clamp<float>(local_34, local_30, local_2c);
        local_34 = (float)(arg1 & 255) * 0.001 * (float)(int)field_4;
        local_30 = 0.0;
        local_2c = 255.0;
        float fVar3 = math::Clamp<float>(local_34, local_30, local_2c);
        return (int)(long)fVar2 << 8 | (int)(long)fVar1 << 16 | (unsigned int)(long)fVar3;
    }

    // 0x1006ce300
    void DefaultAnimationAdvanceCallback<unsigned char, float>(
        std::variant<unsigned char*, int*>& arg1, float arg2,
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>* arg3,
        const std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                           GUIAnimationRGB>& arg4,
        const std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                           GUIAnimationRGB>& arg5,
        GUIAnimationTargetMode guiAnimationTargetMode) {
        uint8_t bVar2;
        uint8_t* pbVar5;
        float fVar6;

        float local_2c = arg2;
        auto pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(arg4);
        float local_34 = *pfVar3;
        pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                          GUIAnimationRGB>(arg5);
        float local_30 = *pfVar3;
        auto ppuVar4 = std::get<unsigned char*, unsigned char*, int*>(arg1);
        uint8_t* pbVar1 = *ppuVar4;
        if (guiAnimationTargetMode == 2) {
            pbVar5 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                              math::Vector2T<int>, GUIAnimationRGB>(*arg3);
            bVar2 = *pbVar5;
            fVar6 = math::Lerp<float, float>(local_34, local_30, local_2c);
            fVar6 = fVar6 * (float)bVar2;
        } else {
            if (guiAnimationTargetMode == 1) {
                local_2c = math::Lerp<float, float>(local_34, local_30, local_2c);
                pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                  math::Vector2T<int>, GUIAnimationRGB>(*arg3);
                fVar6 = local_2c - *pfVar3;
                *pfVar3 = local_2c;
                if ((fVar6 <= 0.0) || (bVar2 = 255, !CARRY1((uint8_t)(int)fVar6, *pbVar1))) {
                    if ((0.0 <= fVar6) || ((uint8_t)(int)-fVar6 <= *pbVar1)) {
                        bVar2 = (char)(int)fVar6 + *pbVar1;
                    } else {
                        bVar2 = 0;
                    }
                }
                goto LAB_1006ce3ff;
            }
            fVar6 = math::Lerp<float, float>(local_34, local_30, local_2c);
        }
        bVar2 = (uint8_t)(int)fVar6;
    LAB_1006ce3ff:
        *pbVar1 = bVar2;
    }

    // 0x1006ce410
    void DefaultAnimationAdvanceCallback<unsigned char, unsigned char>(
        std::variant<unsigned char*, int*>& arg1, float arg2,
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>* arg3,
        const std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                           GUIAnimationRGB>& arg4,
        const std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                           GUIAnimationRGB>& arg5,
        GUIAnimationTargetMode guiAnimationTargetMode) {
        unsigned char uVar1;
        uint8_t bVar3;
        uint8_t* pbVar7;
        uint8_t bVar8;
        unsigned int uVar9;

        auto puVar5 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(arg4);
        unsigned char local_2a = *puVar5;
        puVar5 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>(arg5);
        unsigned char local_29 = *puVar5;
        auto ppuVar6 = std::get<unsigned char*, unsigned char*, int*>(arg1);
        uint8_t* pbVar2 = *ppuVar6;
        if (guiAnimationTargetMode == 2) {
            puVar5 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                              math::Vector2T<int>, GUIAnimationRGB>(*arg3);
            uVar1 = *puVar5;
            bVar8 = math::Lerp<unsigned char, float>(local_2a, local_29, arg2) * uVar1;
        } else if (guiAnimationTargetMode == 1) {
            bVar3 = math::Lerp<unsigned char, float>(local_2a, local_29, arg2);
            pbVar7 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                              math::Vector2T<int>, GUIAnimationRGB>(*arg3);
            bVar8 = *pbVar7;
            *pbVar7 = bVar3;
            uVar9 = (unsigned int)bVar3 - (unsigned int)bVar8;
            if ((uVar9 == 0 || (unsigned int)bVar3 < (unsigned int)bVar8) ||
                (bVar8 = 255, (uVar9 & 255) <= (*pbVar2 ^ 255))) {
                if (((int)uVar9 < 0) && ((unsigned int)*pbVar2 < (-uVar9 & 255))) {
                    bVar8 = 0;
                } else {
                    bVar8 = (char)uVar9 + *pbVar2;
                }
            }
        } else {
            bVar8 = math::Lerp<unsigned char, float>(local_2a, local_29, arg2);
        }
        *pbVar2 = bVar8;
    }

} // namespace jag::graphics

namespace jag::ui {
    // 0x1006cf520
    ComponentParams::ParamHolder::~ParamHolder() {}

    // 0x1006d5260
    int StyleSheetValueHelper::Get<int>(int arg1, StyleSheetValueHelper::Type arg2) {
        if (arg2 != 0) {
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      17, nullptr);
        }
        return arg1;
    }

    // 0x1006d62f0
    float StyleSheetValueHelper::Get<float>(int arg1, StyleSheetValueHelper::Type arg2) {
        if (arg2 != 0) {
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      24, nullptr);
        }
        return (float)arg1 * 0.001;
    }

    // 0x1006d6340
    bool StyleSheetValueHelper::Get<bool>(int arg1, StyleSheetValueHelper::Type arg2) {
        if (arg2 != 0) {
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      23, nullptr);
        }
        return arg1 == 1;
    }

} // namespace jag::ui

namespace jag {
    // 0x1006db4b0
    void BucketDeleter<ui::HTTPSpriteData>::operator()(ui::HTTPSpriteData* httpSpriteData) const {
        unsigned long arg2;

        httpSpriteData->~HTTPSpriteData();
        httpSpriteData->DeAllocate(72, arg2);
    }

    // 0x1006db5c0
    void BucketDeleter<http::HTTPRequest>::operator()(http::HTTPRequest* httpRequest) const {
        unsigned long arg2;

        httpRequest->~HTTPRequest();
        httpRequest->DeAllocate(664, arg2);
    }

} // namespace jag

namespace jag::math {
    // 0x1006ce790
    unsigned char Lerp<unsigned char, float>(const unsigned char& arg1, const unsigned char& arg2, float arg3) {
        return (char)(int)((float)(int)((unsigned int)*arg2 - (unsigned int)*arg1) * arg3) + arg1;
    }

} // namespace jag::math
