// libs/graphics/runetek7/gui/animations/GUIAnimationHelpers.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.ui

namespace jag::fixedfunction {
    // 0x1006d3620, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&)
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::__51&, void>(
        function<bool(unsigned int), 64ul, 16ul, (Methods)0>* this, __51* param_1) {
        long lVar1;

        *(undefined8*)this = 0;
        lVar1 = param_1->field_8;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(long*)(this + 24) = lVar1;
        *(code**)(this + 80) = function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(
            unsigned int->AddCharacter(bool)::$_51&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(
            unsigned int->AddCharacter(bool)::$_51&)::{
            lambda(void*, unsigned int) #1
        }
        ::__invoke;
        *(code**)(this + 88) = function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(
            unsigned int->AddCharacter(bool)::$_51&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006d3660, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1006d3670, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<bool (unsigned int), 64ul, 16ul,
   (Methods)0>::function<ui::InputField::AddCharacter(unsigned int,
   bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x1006d3680, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&)::{lambda(void*, unsigned int)#1}::__invoke(void*, unsigned int)
    /* __invoke(void*, unsigned int) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*, unsigned int) #1
    }
    ::__invoke(void* param_1, uint param_2) {
        operator()(param_1, param_2);
    }

    // 0x1006d3690, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&)::{lambda(void*, unsigned int)#1}::operator()(void*, unsigned int) const
    /* function<bool (unsigned int), 64ul, 16ul,
   (Methods)0>::function<ui::InputField::AddCharacter(unsigned int,
   bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&)::{lambda(void*,
   unsigned int)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, unsigned int) const */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*, unsigned int) #1
    }
    ::operator()(void* param_1, uint param_2) {
        unsigned int->AddCharacter(bool)::$_51::operator()(param_1, param_2);
    }

    // 0x1006d36c0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int, bool)::$_51&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddCharacter(unsigned int, bool)::$_51&, void>(ui::InputField::AddCharacter(unsigned int,
                                                                                                    bool)::$_51&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x1006d36d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)
    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::__52&, void>(
        function<bool(unsigned int), 64ul, 16ul, (Methods)0>* this, __52* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 80) = function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
            (char const*)->AddContents(char const*, bool, bool)::$_52&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
            (char const*)->AddContents(char const*, bool, bool)::$_52&)::{
            lambda(void*, unsigned int) #1
        }
        ::__invoke;
        *(code**)(this + 88) = function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
            (char const*)->AddContents(char const*, bool, bool)::$_52&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006d3710, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1006d3720, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<bool (unsigned int), 64ul, 16ul,
   (Methods)0>::function<ui::InputField::AddContents(char const*, char
   const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*,
   bool, bool)::$_52&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x1006d3730, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{lambda(void*, unsigned int)#1}::__invoke(void*, unsigned int)
    /* __invoke(void*, unsigned int) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*, unsigned int) #1
    }
    ::__invoke(void* param_1, uint param_2) {
        operator()(param_1, param_2);
    }

    // 0x1006d3740, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{lambda(void*, unsigned int)#1}::operator()(void*, unsigned int) const
    /* function<bool (unsigned int), 64ul, 16ul,
   (Methods)0>::function<ui::InputField::AddContents(char const*, char
   const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*,
   bool, bool)::$_52&)::{lambda(void*, unsigned int)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, unsigned
   int) const */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*, unsigned int) #1
    }
    ::operator()(void* param_1, uint param_2) {
        (char const*)->AddContents(char const*, bool, bool)::$_52::operator()(param_1, param_2);
    }

    // 0x1006d3770, 16 bytes, inline, placed by debug map only (low confidence)
    // function<bool (unsigned int), 64ul, 16ul, (Methods)0>::function<ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<bool(unsigned int), 64ul, 16ul, (Methods)0>::function<
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&, void>(
        ui::InputField::AddContents(char const*, char const*, bool, bool)::$_52&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x1006d9540, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::__57, void>(
        function<void(int, StringView), 64ul, 16ul, (Methods)0>* this, __57* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 80) =
            function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_57&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
            (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_57&&)::{
            lambda(void*, int, StringView) #1
        }
        ::StringView_;
        *(code**)(this + 88) =
            function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_57&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006d9580, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1006d9590, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (int, StringView), 64ul, 16ul,
   (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int,
   StringView> const&)::$_57,
   void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView>
   const&)::$_57&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x1006d95a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{lambda(void*, int, StringView)#1}::__invoke(void*, int, StringView)
    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*, int, StringView) #1
    }
    ::StringView_(void* param_1, int param_2, ulong param_3, uchar* param_4) {
        StringView SVar1;

        SVar1.field_8 = param_4;
        SVar1.field_0 = param_3;
        operator()(param_1, param_2, SVar1);
    }

    // 0x1006d95b0, 64 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{lambda(void*, int, StringView)#1}::operator()(void*, int, StringView) const
    /* function<void (int, StringView), 64ul, 16ul,
   (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int,
   StringView> const&)::$_57,
   void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView>
   const&)::$_57&&)::{lambda(void*, int, StringView)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, int,
   StringView) const */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*, int, StringView) #1
    }
    ::operator()(void* param_1, int param_2, StringView param_3) {
        uchar* puVar1;
        StringView SVar2;
        StringView local_30;

        puVar1 = param_3.field_8;
        new (&local_30) StringView(param_3.field_0);
        SVar2.field_8 = puVar1;
        SVar2.field_0 = (ulong)&local_30;
        (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_57::operator()(param_1, param_2, SVar2);
    }

    // 0x1006d96f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57, void>(
        ui::RadioGroup::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_57&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x1006daf10, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)
    void function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::__59, void>(
        function<void(int, StringView), 64ul, 16ul, (Methods)0>* this, __59* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(code**)(this + 80) =
            function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_59&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
            (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_59&&)::{
            lambda(void*, int, StringView) #1
        }
        ::StringView_;
        *(code**)(this + 88) =
            function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
                (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_59&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1006daf50, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1006daf60, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (int, StringView), 64ul, 16ul,
   (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int,
   StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int,
   StringView> const&)::$_59&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x1006daf70, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{lambda(void*, int, StringView)#1}::__invoke(void*, int, StringView)
    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*, int, StringView) #1
    }
    ::StringView_(void* param_1, undefined8 param_2, ulong param_3, uchar* param_4) {
        StringView SVar1;

        SVar1.field_8 = param_4;
        SVar1.field_0 = param_3;
        operator()(param_1, (int)param_3, SVar1);
    }

    // 0x1006daf80, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{lambda(void*, int, StringView)#1}::operator()(void*, int, StringView) const
    /* function<void (int, StringView), 64ul, 16ul,
   (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int,
   StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int,
   StringView> const&)::$_59&&)::{lambda(void*, int,
   StringView)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, int, StringView) const */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*, int, StringView) #1
    }
    ::operator()(void* param_1, int param_2, StringView param_3) {
        uchar* extraout_RDX;
        undefined4 in_register_00000034;
        StringView SVar1;
        StringView local_28;

        new (&local_28) StringView((StringView*)CONCAT44(in_register_00000034, param_2));
        SVar1.field_8 = extraout_RDX;
        SVar1.field_0 = (ulong)&local_28;
        (ui::UIDataMappingProvider<int, StringView> const&)->Setup()::$_59::operator()((int)param_1, SVar1);
    }

    // 0x1006db2b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (int, StringView), 64ul, 16ul, (Methods)0>::function<ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(int, StringView), 64ul, 16ul, (Methods)0>::function<
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59, void>(
        ui::Slider::Setup(ui::UIDataMappingProvider<int, StringView> const&)::$_59&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x1006cd9d0, 304 bytes, inline, placed by debug map only (low confidence)
    // GUIAnimationRGB::Lerp(GUIAnimationRGB, float) const
    undefined8 GUIAnimationRGB::Lerp(GUIAnimationRGB param_1, float param_2) {
        undefined8 uVar1;
        undefined8 in_RSI;
        float fVar2;
        float fVar3;
        float fVar4;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        GUIAnimationRGB local_30;

        local_54 = (float)((int)(short)in_RSI - (int)field_0) * param_2 + (float)(int)field_0;
        local_50 = -255.0;
        local_4c = 255.0;
        fVar2 = math::Clamp<float>(&local_54, &local_50, &local_4c);
        local_48 = (float)(((int)in_RSI >> 16) - (int)(short)field_2) * param_2 + (float)(int)(short)field_2;
        local_44 = -255.0;
        local_40 = 255.0;
        fVar3 = math::Clamp<float>(&local_48, &local_44, &local_40);
        local_3c = (float)(((int)((ulong)in_RSI >> 16) >> 16) - (int)field_4) * param_2 + (float)(int)field_4;
        local_38 = -255.0;
        local_34 = 255.0;
        fVar4 = math::Clamp<float>(&local_3c, &local_38, &local_34);
        GUIAnimationRGB(&local_30, (int)(short)(int)fVar2, (int)(short)(int)fVar3, (int)(short)(int)fVar4);
        uVar1._0_2_ = local_30.field_0;
        uVar1._2_2_ = local_30.field_2;
        uVar1._4_2_ = local_30.field_4;
        uVar1._6_2_ = local_30._6_2_;
        return uVar1;
    }

    // 0x1006cdb00, 80 bytes, inline, placed by debug map only (low confidence)
    // GUIAnimationRGB::Delta(GUIAnimationRGB) const
    undefined8 GUIAnimationRGB::Delta(GUIAnimationRGB param_1) {
        undefined8 uVar1;
        undefined8 in_RSI;
        undefined1 local_10[8];

        GUIAnimationRGB((GUIAnimationRGB*)local_10, (int)field_0 - (int)(short)in_RSI,
                        (int)(short)field_2 - ((int)in_RSI >> 16), (int)field_4 - ((int)((ulong)in_RSI >> 16) >> 16));
        uVar1._0_2_ = local_10._0_2_;
        uVar1._2_2_ = local_10._2_2_;
        uVar1._4_2_ = local_10._4_2_;
        uVar1._6_2_ = local_10._6_2_;
        return uVar1;
    }

    // 0x1006cdb50, 192 bytes, inline, placed by debug map only (low confidence)
    // GUIAnimationRGB::EvalAdd(unsigned int) const
    uint GUIAnimationRGB::EvalAdd(uint param_1) {
        int iVar1;
        int iVar2;
        int local_34[3];

        local_34[0] = (int)field_0 + (param_1 >> 16 & 255);
        local_34[1] = 0;
        local_34[2] = 255;
        iVar1 = math::Clamp<int>(local_34, local_34 + 1, local_34 + 2);
        local_34[0] = (int)(short)field_2 + (param_1 >> 8 & 255);
        local_34[1] = 0;
        local_34[2] = 255;
        iVar2 = math::Clamp<int>(local_34, local_34 + 1, local_34 + 2);
        local_34[0] = (int)field_4 + (param_1 & 255);
        local_34[1] = 0;
        local_34[2] = 255;
        return math::Clamp<int>(local_34, local_34 + 1, local_34 + 2) | iVar2 << 8 | iVar1 << 16;
    }

    // 0x1006cdf60, 272 bytes, inline, placed by debug map only (low confidence)
    // GUIAnimationRGB::EvalMultiply(unsigned int) const
    uint GUIAnimationRGB::EvalMultiply(uint param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float local_34;
        float local_30;
        float local_2c;

        local_34 = (float)(param_1 >> 16 & 255) * 0.001 * (float)(int)field_0;
        local_30 = 0.0;
        local_2c = 255.0;
        fVar1 = math::Clamp<float>(&local_34, &local_30, &local_2c);
        local_34 = (float)(param_1 >> 8 & 255) * 0.001 * (float)(int)(short)field_2;
        local_30 = 0.0;
        local_2c = 255.0;
        fVar2 = math::Clamp<float>(&local_34, &local_30, &local_2c);
        local_34 = (float)(param_1 & 255) * 0.001 * (float)(int)field_4;
        local_30 = 0.0;
        local_2c = 255.0;
        fVar3 = math::Clamp<float>(&local_34, &local_30, &local_2c);
        return (int)(long)fVar2 << 8 | (int)(long)fVar1 << 16 | (uint)(long)fVar3;
    }

    // 0x1006ce300, 272 bytes, placed by debug map only (low confidence)
    // void DefaultAnimationAdvanceCallback<unsigned char, float>(std::variant<unsigned char*, int*>&, float, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&, GUIAnimationTargetMode)
    /* void DefaultAnimationAdvanceCallback<unsigned char, float>(std::variant<unsigned
   char*, int*>&, float, std::variant<unsigned char, unsigned int, int, float,
   math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*,
   std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
   math::Vector2T<int>, GUIAnimationRGB> const&, std::variant<unsigned char,
   unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
   GUIAnimationRGB> const&, GUIAnimationTargetMode) */

    void DefaultAnimationAdvanceCallback<unsigned char, float>(float param_2, variant* param_1, variant* param_3,
                                                               variant* param_4, variant* param_5, int param_6) {
        byte* pbVar1;
        byte bVar2;
        float* pfVar3;
        uchar** ppuVar4;
        byte* pbVar5;
        float fVar6;
        float local_34;
        float local_30;
        float local_2c;

        local_2c = param_2;
        pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                          GUIAnimationRGB>(param_4);
        local_34 = *pfVar3;
        pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                          GUIAnimationRGB>(param_5);
        local_30 = *pfVar3;
        ppuVar4 = std::get<unsigned char*, unsigned char*, int*>(param_1);
        pbVar1 = *ppuVar4;
        if (param_6 == 2) {
            pbVar5 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                              math::Vector2T<int>, GUIAnimationRGB>(param_3);
            bVar2 = *pbVar5;
            fVar6 = math::Lerp<float, float>(&local_34, &local_30, local_2c);
            fVar6 = fVar6 * (float)bVar2;
        } else {
            if (param_6 == 1) {
                local_2c = math::Lerp<float, float>(&local_34, &local_30, local_2c);
                pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                  math::Vector2T<int>, GUIAnimationRGB>(param_3);
                fVar6 = local_2c - *pfVar3;
                *pfVar3 = local_2c;
                if ((fVar6 <= 0.0) || (bVar2 = 255, !CARRY1((byte)(int)fVar6, *pbVar1))) {
                    if ((0.0 <= fVar6) || ((byte)(int)-fVar6 <= *pbVar1)) {
                        bVar2 = (char)(int)fVar6 + *pbVar1;
                    } else {
                        bVar2 = 0;
                    }
                }
                goto LAB_1006ce3ff;
            }
            fVar6 = math::Lerp<float, float>(&local_34, &local_30, local_2c);
        }
        bVar2 = (byte)(int)fVar6;
    LAB_1006ce3ff:
        *pbVar1 = bVar2;
    }

    // 0x1006ce410, 240 bytes, placed by debug map only (low confidence)
    // void DefaultAnimationAdvanceCallback<unsigned char, unsigned char>(std::variant<unsigned char*, int*>&, float, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&, GUIAnimationTargetMode)
    /* void DefaultAnimationAdvanceCallback<unsigned char, unsigned
   char>(std::variant<unsigned char*, int*>&, float, std::variant<unsigned char, unsigned int, int,
   float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*,
   std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
   math::Vector2T<int>, GUIAnimationRGB> const&, std::variant<unsigned char,
   unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
   GUIAnimationRGB> const&, GUIAnimationTargetMode) */

    void DefaultAnimationAdvanceCallback<unsigned char, unsigned char>(float param_2, variant* param_1,
                                                                       variant* param_3, variant* param_4,
                                                                       variant* param_5, int param_6) {
        uchar uVar1;
        byte* pbVar2;
        byte bVar3;
        uchar* puVar5;
        uchar** ppuVar6;
        byte* pbVar7;
        byte bVar8;
        uint uVar9;
        uchar local_2a;
        uchar local_29;

        puVar5 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>(param_4);
        local_2a = *puVar5;
        puVar5 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>(param_5);
        local_29 = *puVar5;
        ppuVar6 = std::get<unsigned char*, unsigned char*, int*>(param_1);
        pbVar2 = *ppuVar6;
        if (param_6 == 2) {
            puVar5 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                              math::Vector2T<int>, GUIAnimationRGB>(param_3);
            uVar1 = *puVar5;
            bVar8 = math::Lerp<unsigned char, float>(&local_2a, &local_29, param_2) * uVar1;
        } else if (param_6 == 1) {
            bVar3 = math::Lerp<unsigned char, float>(&local_2a, &local_29, param_2);
            pbVar7 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                              math::Vector2T<int>, GUIAnimationRGB>(param_3);
            bVar8 = *pbVar7;
            *pbVar7 = bVar3;
            uVar9 = (uint)bVar3 - (uint)bVar8;
            if ((uVar9 == 0 || (uint)bVar3 < (uint)bVar8) || (bVar8 = 255, (uVar9 & 255) <= (*pbVar2 ^ 255))) {
                if (((int)uVar9 < 0) && ((uint)*pbVar2 < (-uVar9 & 255))) {
                    bVar8 = 0;
                } else {
                    bVar8 = (char)uVar9 + *pbVar2;
                }
            }
        } else {
            bVar8 = math::Lerp<unsigned char, float>(&local_2a, &local_29, param_2);
        }
        *pbVar2 = bVar8;
    }

} // namespace jag::graphics

namespace jag::ui {
    // 0x1006cf510, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ComponentParams::ParamHolder::~ParamHolder(): jumps straight to the base-object destructor

    // 0x1006cf520, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ComponentParams::ParamHolder::~ParamHolder()
    void ComponentParams::ParamHolder::~ParamHolder() {
        ~vector_map();
    }

    // 0x1006d5260, 64 bytes, inline, placed by debug map only (low confidence)
    // int StyleSheetValueHelper::Get<int>(int, StyleSheetValueHelper::Type)
    int StyleSheetValueHelper::Get<int>(int param_1, int param_2) {
        if (param_2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      17, (char*)0);
        }
        return param_1;
    }

    // 0x1006d62f0, 64 bytes, inline, placed by debug map only (low confidence)
    // float StyleSheetValueHelper::Get<float>(int, StyleSheetValueHelper::Type)
    float StyleSheetValueHelper::Get<float>(int param_1, int param_2) {
        if (param_2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      24, (char*)0);
        }
        return (float)param_1 * 0.001;
    }

    // 0x1006d6340, 64 bytes, inline, placed by debug map only (low confidence)
    // bool StyleSheetValueHelper::Get<bool>(int, StyleSheetValueHelper::Type)
    bool StyleSheetValueHelper::Get<bool>(int param_1, int param_2) {
        if (param_2 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("type == Type::INT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/stylesheets/"
                      "StyleSheetValue.h",
                      23, (char*)0);
        }
        return param_1 == 1;
    }

} // namespace jag::ui

namespace jag {
    // 0x1006db4b0, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketDeleter<ui::HTTPSpriteData>::operator()(ui::HTTPSpriteData*) const
    /* BucketDeleter<ui::HTTPSpriteData>::TEMPNAMEPLACEHOLDERVALUE(ui::HTTPSpriteData*)
   const */

    void BucketDeleter<ui::HTTPSpriteData>::operator()(HTTPSpriteData* param_1) {
        param_1->~HTTPSpriteData();
        BucketManager::DeAllocate(param_1, 72);
    }

    // 0x1006db5c0, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketDeleter<http::HTTPRequest>::operator()(http::HTTPRequest*) const
    /* BucketDeleter<http::HTTPRequest>::TEMPNAMEPLACEHOLDERVALUE(http::HTTPRequest*)
   const */

    void BucketDeleter<http::HTTPRequest>::operator()(HTTPRequest* param_1) {
        param_1->~HTTPRequest();
        BucketManager::DeAllocate(param_1, 664);
    }

} // namespace jag

namespace jag::math {
    // 0x1006ce790, 32 bytes, inline, placed by debug map only (low confidence)
    // unsigned char Lerp<unsigned char, float>(unsigned char const&, unsigned char const&, float)
    uchar Lerp<unsigned char, float>(uchar* param_1, uchar* param_2, float param_3) {
        return (char)(int)((float)(int)((uint)*param_2 - (uint)*param_1) * param_3) + *param_1;
    }

} // namespace jag::math
