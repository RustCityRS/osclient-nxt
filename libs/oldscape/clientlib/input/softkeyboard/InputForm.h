// libs/oldscape/clientlib/input/softkeyboard/InputForm.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::oldscape::input {
    class InputForm {
    public:
        void SetCharacterLimit(int arg1, int arg2);
        void ShowKeyboard();
        int GetFocusedFieldIndex();
        void SetText(const eastl::string& str, int arg2);
        void ShowKeyboard(int arg1);
        void SetText(const eastl::string& str);
        InputForm(InputFormType inputFormType, ApplicationContext& applicationContext);
        void SetCharacterLimit(int arg1);
        void Close();

    private:
        uint8_t _unknown_0[8];
        int m_focusedFieldIndex;
        InputFormType field_12;
        uint8_t _unknown_16[4];
    };

    // 0x100009e70: InputForm::SetCharacterLimit(int, int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10011f3e0
    void InputForm::ShowKeyboard() {
        ShowKeyboard(0);
    }

    // 0x1001210d0
    int InputForm::GetFocusedFieldIndex() {
        uint64_t extraout_var;

        uint8_t uVar1 = BaseApp::GetAppInstance()->GetInputHAL();
        if ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != nullptr) {
            if (((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->IsOnScreenKeyboardVisible() != '\0')
                goto LAB_1001210ff;
        }
        m_focusedFieldIndex = -1;
    LAB_1001210ff:
        return m_focusedFieldIndex;
    }

    // 0x100121170
    void InputForm::SetText(const eastl::string& str, int arg2) {
        char* str_00;
        basic_string<char, BucketAllocatorEASTL> local_108;
        basic_string<char, BucketAllocatorEASTL> local_f0;
        eastl local_d8;

        auto baseApp = BaseApp::GetAppInstance();
        if (baseApp != nullptr) {
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<highlight::NpcUID*>(&local_d8);
            local_108 = eastl::basic_string<char, BucketAllocatorEASTL>(str_00, &local_d8);
            local_f0 = eastl::basic_string<char, BucketAllocatorEASTL>(local_108);
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                InputForm::SetText(eastl::stringconst&, int)::_lambda(BaseApp*) _1_, void>(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8, &local_f0);
            baseApp->QueueMainThreadEvent(local_d8);
        }
    }

    // 0x1001235e0
    void InputForm::ShowKeyboard(int arg1) {
        _lambda_jag__BaseApp___1_ local_d0;
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[160];
        long local_28;

        auto this_00 = BaseApp::GetAppInstance();
        if (this_00 != nullptr) {
            local_d0[0] = (_lambda_jag__BaseApp___1_)1;
            switch (field_12) {
            case 0:
                local_d0[0] = (_lambda_jag__BaseApp___1_)((arg1 == 0) * '\x02' + '\x02');
                break;
            case 1:
                break;
            default:
                local_d0[0] = (_lambda_jag__BaseApp___1_)0;
                break;
            case 3:
                local_d0[0] = (_lambda_jag__BaseApp___1_)4;
                break;
            case 4:
                local_d0[0] = (_lambda_jag__BaseApp___1_)6;
            }
            m_focusedFieldIndex = arg1;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                InputForm::ShowKeyboard(int)::_lambda(BaseApp*) _1_, void>(local_c8, &local_d0);
            this_00->QueueMainThreadEvent(*local_c8);
        }
    }

    // 0x100123870
    void InputForm::SetText(const eastl::string& str) {
        SetText((eastl::string*)this, (int)str);
    }

    // 0x100131800
    void InputForm::SetText(eastl::string const&, int)::{
        lambda(BaseApp*) #1
    }
    ::~BaseApp() {
        ~__alt(this);
    }

    // 0x100131860
    void InputForm::SetText(eastl::string const&, int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp({ lambda(BaseApp*) #1 } && int) {
        lambda(BaseApp*) #1
    }
    ::BaseApp___1____(_lambda_jag__BaseApp___1_* this, lambda_jag__BaseApp___1_* arg1) {
        BaseApp___1____(this, arg1);
        return;
    }

    // 0x1001318a0
    void InputForm::SetText(eastl::string const&, int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp({ lambda(BaseApp*) #1 } && int) {
        lambda(BaseApp*) #1
    }
    ::BaseApp___1____(_lambda_jag__BaseApp___1_* this, lambda_jag__BaseApp___1_* arg1) {
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>(*arg1);
        return;
    }

    // 0x1001318e0
    void InputForm::SetText(eastl::string const&, int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp({ lambda(BaseApp*) #1 } const& int) {
        lambda(BaseApp*) #1
    }
    ::BaseApp___1__const__(_lambda_jag__BaseApp___1_* this, lambda_jag__BaseApp___1_* arg1) {
        BaseApp___1__const__(this, arg1);
        return;
    }

    // 0x1001318f0
    void InputForm::SetText(eastl::string const&, int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp({ lambda(BaseApp*) #1 } const& int) {
        lambda(BaseApp*) #1
    }
    ::BaseApp___1__const__(_lambda_jag__BaseApp___1_* this, lambda_jag__BaseApp___1_* arg1) {
        new (this) eastl::basic_string<char, BucketAllocatorEASTL>(*arg1);
        return;
    }

    // 0x100131940
    void InputForm::SetText(eastl::string const&, int)::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp* int) const {
        lambda(BaseApp*) #1
    }
    ::operator()(_lambda_jag__BaseApp___1_* this, BaseApp * baseApp) {
        uint8_t uVar1;
        uint64_t extraout_var;
        basic_string<char, BucketAllocatorEASTL> local_38;

        uVar1 = baseApp->GetInputHAL();
        if ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != nullptr) {
            local_38 = eastl::basic_string<char, BucketAllocatorEASTL>(*this);
            ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->SetOnScreenKeyboardText(&local_38, 200, true);
        }
        return;
    }

    // 0x1001319d0
    void InputForm::SetText(eastl::string const&, int)::{
        lambda(BaseApp*) #1
    }
    ::~BaseApp() {
        ~basic_string();
    }

    // 0x100131c50
    void InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp * baseApp) const {
        _lambda_jag__BaseApp___1_ _Var1;
        uint64_t extraout_var;
        basic_string<char, BucketAllocatorEASTL> local_48;
        eastl local_30;

        uint8_t uVar2 = baseApp->GetInputHAL();
        if ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2) != nullptr) {
            _Var1 = *this;
            eastl::destruct<highlight::NpcUID*>(&local_30);
            local_48 = eastl::basic_string<char, BucketAllocatorEASTL>("", &local_30);
            ((Input*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2))
                ->ShowOnScreenKeyboard((unsigned int)(uint8_t)_Var1, &local_48, 200, false);
        }
    }

    // 0x10014de20
    InputForm::InputForm(InputForm::InputFormType inputFormType, ApplicationContext& applicationContext)
        : SoftKeyboardListener(), field_12(inputFormType) {}

    // 0x100169f20
    void InputForm::SetCharacterLimit(int arg1) {
        ~AutoSingleton();
    }

    // 0x100390800
    void InputForm::Close() {
        _lambda_jag__BaseApp___1_ local_d0;
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        m_focusedFieldIndex = -1;
        auto this_00 = BaseApp::GetAppInstance();
        if (this_00 != nullptr) {
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                InputForm::Close()::_lambda(BaseApp*) _1_, void>(local_c8, &local_d0);
            this_00->QueueMainThreadEvent(*local_c8);
        }
    }

    // 0x100396d00
    void InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp * baseApp) const {
        uint64_t extraout_var;

        uint8_t uVar1 = baseApp->GetInputHAL();
        if ((((uint64_t)extraout_var << 8) | (uint8_t)uVar1) != 0) {
            jag::input::Input::HideOnScreenKeyboard();
        }
    }

} // namespace jag::oldscape::input
