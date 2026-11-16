// libs/tweaky/Tweaky_Control.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Tweaky_Control.h"

namespace jag::tweak {
    // 0x100009e70: Control::InitDefault() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Control::SaveSettings(TweakSettingsValue&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Control::OnFocusChanged(bool) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Control::ResetToDefault() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: Control::ResetAllToDefault() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: Control::HandleChar(int) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Control::HandleKeyUp(int) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Control::OnMouseMove(float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Control::OnMouseWheel(float, float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Control::HandleKeyDown(int) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Control::HasKeyboardNavigation() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Control::IsTicked() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: Control::LoadSettings(TweakSettingsValue const&) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1000fa830: Control::GetType() const has the same machine code as oldscape::graphics::NXTPixScreen::GetWidth() const

    // 0x100120420: Control::GetRadioValue() const has the same machine code as oldscape::javapal::GameShell::GetVisibleAppHeight()

    // 0x100120420: Control::GetCurrentListItem() const has the same machine code as oldscape::javapal::GameShell::GetVisibleAppHeight()

    // 0x10017a5a0: Control::GetPlacement() const has the same machine code as http::HTTPRequest::GetData() const

    // 0x100a3f930
    void Control::SetColour(unsigned int arg1, bool arg2) {
        Tweaky* this_00;

        shared_ptr local_30 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_30) != '\0') {
            if (arg2) {
                this_00 = (Tweaky*)local_30.operator->();
                arg1 = math::Multiply(arg1, 1.4);
            } else {
                this_00 = (Tweaky*)local_30.operator->();
            }
            this_00->SetColour(arg1);
        }
    }

    // 0x100a3fc20
    void Control::SetFocus() {
        Tweaky* this_00;
        enable_shared_from_this<PathingEntity> local_28;

        shared_ptr local_38 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_38) != '\0') {
            this_00 = (Tweaky*)local_38.operator->();
            local_28.shared_from_this();
            this_00->SetFocus(local_28);
        }
    }

    // 0x100a3fcc0
    void Control::DoCallback(const Event& event) const {
        GraphicsApp* this_00;
        function<void_(Event const&)> local_138[96];
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        if ((&field_160)->operator_cast_to_bool()) {
            this_00 = (GraphicsApp*)GraphicsApp::Instance();
            std::bind<std::function<void(Event const&)> const&, Event const&>(local_138, (Event*)&field_160);
            local_d8->function<std::__bind<std::function<void(Event const&)> const&, Event const&>, void>(*local_138);
            this_00->QueueMainDrawThreadEvent(*local_d8);
        }
    }

    // 0x100a42750
    void Control::ClearControlSize() {
        uint64_t local_20;
        uint64_t uStack_18;

        new (&local_20) shared_ptr();
        m_pPlacement = (uint32_t)local_20;
        field_140 = local_20._4_4_;
        field_144 = (uint32_t)uStack_18;
        field_148 = uStack_18._4_4_;
        field_36 = 0;
    }

    // 0x100a428e0
    void Control::ClearFocus() {

        shared_ptr local_20 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_20) != '\0') {
            ((Tweaky*)local_20.operator->())->ClearFocus();
        }
    }

    // 0x100a42e70
    void Control::DoOnShown() {
        enable_shared_from_this<PathingEntity> local_28;

        local_28.shared_from_this();
        Event local_40(local_28, 1);
        DoCallback(local_40);
        if (m_hasBeenShown == '\0') {
            (*this->_vptr[2].ResetToDefault)(this);
            m_hasBeenShown = '\x01';
        }
    }

    // 0x100a44410: Control::GetValue() const has the same machine code as Control::GetText() const

    // 0x100a44f90
    Control::Control(int arg1, int arg2, Control::Type arg3, const eastl::string& str)
        : field_24(arg1), field_28(arg2), m_type(arg3), field_36(0) {
        new (&field_104) shared_ptr();
        new (&field_120) shared_ptr();
        new (&m_pPlacement) shared_ptr();
        new (&field_160) std::function<void(Event const&)>();
        m_mouseOver = false;
        m_hasBeenShown = '\0';
        m_ignoreTags = false;
        if (str.find('=', 0) != -1) {
            LogAssert("text.find(\'=\') == eastl::string::npos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Control.cpp",
                      17, "Error: Tweaky control name cannot contain \'=\'");
        }
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2_00 = str.size();
        (&field_48)->assign(str_00, arg2_00);
    }

    // 0x100a45110
    Control::Control(int arg1, int arg2, Control::Type arg3, const char* str) {
        uint8_t* local_48 = &field_8;
        new (local_48) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_24 = arg1;
        field_28 = arg2;
        m_type = arg3;
        field_36 = 0;
        new (&field_48) eastl::fixed_string<char, 16>(str);
        uint8_t* local_40 = &field_48;
        new (&field_104) shared_ptr();
        uint8_t* local_38 = &field_104;
        new (&field_120) shared_ptr();
        new (&m_pPlacement) shared_ptr();
        new (&field_160) std::function<void(Event const&)>();
        m_mouseOver = false;
        m_hasBeenShown = '\0';
        m_ignoreTags = false;
        eastl::string local_70(str);
        long lVar1 = local_70.find('=', 0);
        if (lVar1 != -1) {
            LogAssert("eastl::string(text).find(\'=\') == eastl::string::npos",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Control.cpp",
                      28, "Error: Tweaky control name cannot contain \'=\'");
        }
    }

    // 0x100a45290
    void Control::SetText(const char* str) {
        field_48 = str;
    }

    // 0x100c92b50: Control::~Control() has the same machine code as InlineFatalBreak()

} // namespace jag::tweak
