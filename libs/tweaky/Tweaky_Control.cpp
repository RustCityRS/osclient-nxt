// libs/tweaky/Tweaky_Control.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Tweaky_Control.h"

namespace jag::tweak {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Control::InitDefault();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Control::SaveSettings(TweakSettingsValue&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Control::OnFocusChanged(bool);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Control::ResetToDefault();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Control::ResetAllToDefault();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Control::HandleChar(int);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Control::HandleKeyUp(int);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Control::OnMouseMove(float, float);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Control::OnMouseWheel(float, float, float);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Control::HandleKeyDown(int);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Control::HasKeyboardNavigation() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Control::IsTicked() const;

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    Control::LoadSettings(TweakSettingsValue const&);

    // 0x1000fa830: the linker folded this into oldscape::graphics::NXTPixScreen::GetWidth() const, which has identical code
    Control::GetType() const;

    // 0x100120420: the linker folded this into oldscape::javapal::GameShell::GetVisibleAppHeight(), which has identical code
    Control::GetRadioValue() const;

    // 0x100120420: the linker folded this into oldscape::javapal::GameShell::GetVisibleAppHeight(), which has identical code
    Control::GetCurrentListItem() const;

    // 0x10017a5a0: the linker folded this into http::HTTPRequest::GetData() const, which has identical code
    Control::GetPlacement() const;

    // 0x100a3f930, 160 bytes, placed by class name and debug map
    // Control::SetColour(unsigned int, bool)
    void Control::SetColour(uint param_1, bool param_2) {
        Tweaky* this_00;
        shared_ptr local_30;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_30)) {
            if (param_2) {
                this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_30);
                param_1 = math::Multiply(param_1, 1.4);
            } else {
                this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_30);
            }
            this_00->SetColour(param_1);
        }
        local_30.~shared_ptr();
    }

    // 0x100a3fc20, 160 bytes, placed by class name and debug map
    // Control::SetFocus()
    void Control::SetFocus() {
        Tweaky* this;
        shared_ptr local_38;
        shared_ptr local_28;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_38)) {
            this = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
            local_28.shared_from_this();
            SetFocus(&local_28);
            local_28.~shared_ptr();
        }
        local_38.~shared_ptr();
    }

    // 0x100a3fcc0, 224 bytes, placed by class name and debug map
    // Control::DoCallback(Event const&) const
    void Control::DoCallback(Event* param_1) {
        GraphicsApp* pGVar2;
        undefined1* this_00;
        function local_138[96];
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_160;
        pGVar2 = (GraphicsApp*)this_00;
        if (this_00->operator_cast_to_bool()) {
            pGVar2 = (GraphicsApp*)pGVar2->Instance();
            std::bind<std::function<void(Event_const&)> const&, Event_const&>(local_138, (Event*)this_00);
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                std::__bind<std::function<void(Event_const&)> const&, Event_const&>, void>(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, local_138);
            pGVar2->QueueMainDrawThreadEvent(&local_d8);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            std::__bind<std::function<void(Event_const&)> const&, Event_const&>::~__bind(
                (__bind<std::function<void(Event_const&)> const&, Event_const&>*)local_138);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100a42750, 48 bytes, placed by class name
    // Control::ClearControlSize()
    void Control::ClearControlSize() {
        _func_decltype_nullptr* in_RSI;
        undefined8 local_20;
        undefined8 uStack_18;

        new (&local_20) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_136 = (undefined4)local_20;
        field_140 = local_20._4_4_;
        field_144 = (undefined4)uStack_18;
        field_148 = uStack_18._4_4_;
        field_36 = 0;
    }

    // 0x100a428e0, 96 bytes, placed by class name
    // Control::ClearFocus()
    void Control::ClearFocus() {
        Tweaky* this;
        shared_ptr local_20;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_20)) {
            this = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_20);
            ClearFocus();
        }
        local_20.~shared_ptr();
    }

    // 0x100a42e70, 160 bytes, placed by class name
    // Control::DoOnShown()
    void Control::DoOnShown() {
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        local_28->shared_from_this();
        new (&local_40) Event(local_28, 1);
        DoCallback(this, &local_40);
        local_40.~LRUHashCacheWrapper();
        local_28->~shared_ptr();
        if (m_hasBeenShown == '\0') {
            (*(code*)field_0[11])(this);
            m_hasBeenShown = '\x01';
        }
    }

    // 0x100a44410: the linker folded this into Control::GetText() const, which has identical code
    Control::GetValue() const;

    // 0x100a44f90, 352 bytes, base-object constructor, placed by class name
    // Control::Control(int, int, Control::Type, eastl::string const&)
    void Control::Control(
        _func_decltype_nullptr* param_2_00, undefined4 param_2, undefined4 param_4,
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* param_5) {
        char* pcVar2;
        ulong uVar3;

        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_0 = &PTR__OptionStore_100f1d2c8;
        field_24 = (int)param_2_00;
        field_28 = param_2;
        field_32 = param_4;
        field_36 = 0;
        new (&field_48) eastl::fixed_string<char, 16, true, eastl::allocator>();
        new (&field_104, param_2_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_120, param_2_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_136, param_2_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        std::function<void(Event_const&)>::function((function<void(Event_const&)>*)&field_160);
        m_mouseOver = false;
        m_hasBeenShown = '\0';
        m_ignoreTags = false;
        if (eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(param_5, '=',
                                                                                                         0) != -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("text.find(\'=\') == eastl::string::npos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Control.cpp",
                      17, "Error: Tweaky control name cannot contain \'=\'");
        }
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        (&field_48, pcVar2, uVar3)->assign();
    }

    // 0x100a45110, 368 bytes, base-object constructor, placed by class name
    // Control::Control(int, int, Control::Type, char const*)
    void Control::Control(int param_1, undefined4 param_2, undefined4 param_4, _func_decltype_nullptr* param_5) {
        long lVar1;
        eastl::string local_70[32];
        allocator local_50[8];
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        local_48 = &field_8;
        new (local_48) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_0 = &PTR__OptionStore_100f1d2c8;
        field_24 = param_1;
        field_28 = param_2;
        field_32 = param_4;
        field_36 = 0;
        new (&field_48, (char*)param_5) eastl::fixed_string<char, 16, true, eastl::allocator>();
        local_40 = &field_48;
        new (&field_104, param_5) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_38 = &field_104;
        new (&field_120, param_5) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_136, param_5) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        std::function<void(Event_const&)>::function((function<void(Event_const&)>*)&field_160);
        m_mouseOver = false;
        m_hasBeenShown = '\0';
        m_ignoreTags = false;
        eastl::allocator::allocator(local_50, "EASTL basic_string");
        eastl::string::basic_string(local_70, (char*)param_5, local_50);
        lVar1 = local_70->find('=', 0);
        eastl::string::~basic_string(local_70);
        if (lVar1 != -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("eastl::string(text).find(\'=\') == eastl::string::npos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Control.cpp",
                      28, "Error: Tweaky control name cannot contain \'=\'");
        }
    }

    // 0x100a45290, 16 bytes, placed by class name
    // Control::SetText(char const*)
    void Control::SetText(char* param_1) {
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
            (fixed_string<char, 16, true, eastl::allocator>*)&field_48, param_1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Control::~Control();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Control::~Control();

} // namespace jag::tweak
