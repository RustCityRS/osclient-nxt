// libs/oldscape/clientlib/input/softkeyboard/InputForm.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::oldscape::input {
    class InputForm {
    public:
        SetCharacterLimit(int, int);
        void ShowKeyboard();
        int GetFocusedFieldIndex();
        void SetText(eastl::string const&, int);
        void ShowKeyboard(int);
        void SetText(eastl::string const&);
        InputForm(InputFormType, ApplicationContext&);
        void SetCharacterLimit(int);
        void Close();

        // data members, from how the methods use this: 20 bytes
        char _unknown_0[8];
        int m_focusedFieldIndex; // offset 8
        undefined4 field_12;     // offset 12
        char _unknown_16[4];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    InputForm::SetCharacterLimit(int, int);

    // 0x10011f3e0, 16 bytes, inline, placed by class name and debug map
    // InputForm::ShowKeyboard()
    void InputForm::ShowKeyboard() {
        ShowKeyboard(this, 0);
    }

    // 0x1001210d0, 64 bytes, inline, placed by class name
    // InputForm::GetFocusedFieldIndex()
    int InputForm::GetFocusedFieldIndex() {
        long* plVar2;
        Input* this_00;

        plVar2 = (long*)BaseApp::GetAppInstance();
        this_00 = (Input*)(**(code**)(*plVar2 + 88))(plVar2);
        if (this_00 != (Input*)0) {
            if (this_00->IsOnScreenKeyboardVisible() != '\0')
                goto LAB_1001210ff;
        }
        m_focusedFieldIndex = -1;
    LAB_1001210ff:
        return m_focusedFieldIndex;
    }

    // 0x100121170, 288 bytes, inline, placed by class name
    // InputForm::SetText(eastl::string const&, int)
    void InputForm::SetText(basic_string* param_1, int param_2) {
        BaseApp* this;
        undefined1 auVar1[16];
        basic_string<char, BucketAllocatorEASTL> local_108[24];
        basic_string local_f0[24];
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this = (BaseApp*)BaseApp::GetAppInstance();
        if (this != (BaseApp*)0) {
            auVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::destruct<highlight::NpcUID*>((eastl*)&local_d8, (NpcUID*)"EASTL basic_string", auVar1._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_108, auVar1._0_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(local_f0);
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                InputForm::SetText(eastl::stringconst&, int)::_lambda(BaseApp*) _1_, void>(
                (_lambda_jag__BaseApp___1_*)&local_d8);
            QueueMainThreadEvent(&local_d8);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            local_f0->~__alt();
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_108);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001235e0, 240 bytes, inline, placed by class name
    // InputForm::ShowKeyboard(int)
    void InputForm::ShowKeyboard(int param_1) {
        BaseApp* this_00;
        _lambda_jag__BaseApp___1_ local_d0[8];
        function local_c8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (BaseApp*)BaseApp::GetAppInstance();
        if (this_00 != (BaseApp*)0) {
            local_d0[0] = (_lambda_jag__BaseApp___1_)1;
            switch (field_12) {
            case 0:
                local_d0[0] = (_lambda_jag__BaseApp___1_)((param_1 == 0) * '\x02' + '\x02');
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
            m_focusedFieldIndex = param_1;
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                InputForm::ShowKeyboard(int)::_lambda(BaseApp*) _1_, void>(
                (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, local_d0);
            this_00->QueueMainThreadEvent(&local_c8);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100123870, 16 bytes, inline, placed by class name
    // InputForm::SetText(eastl::string const&)
    void InputForm::SetText(basic_string* param_1) {
        SetText((basic_string*)this, (int)param_1);
    }

    // 0x100131800, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp()
    /* std::__variant_detail::__alt<2ul, eastl::basic_string<char, BucketAllocatorEASTL>
   >::~__alt() */

    void std::__variant_detail::__alt<2ul, eastl::basic_string<char, BucketAllocatorEASTL>>::~__alt(
        __alt<2ul, eastl::basic_string<char, BucketAllocatorEASTL>>* this) {
        basic_string* in_RSI;

        ~__alt(this, in_RSI);
    }

    // 0x100131860, 16 bytes, inline, placed by class name
    // InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::BaseApp({lambda(BaseApp*)#1}&&)
    void InputForm::SetText(eastl::stringconst&, int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp___1____() {
        BaseApp___1____();
    }

    // 0x1001318a0, 16 bytes, inline, placed by class name
    // InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::BaseApp({lambda(BaseApp*)#1}&&)
    void InputForm::SetText(eastl::stringconst&, int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp___1____(basic_string* param_1) {
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(param_1);
    }

    // 0x1001318e0, 16 bytes, inline, placed by class name
    // InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::BaseApp({lambda(BaseApp*)#1} const&)
    void InputForm::SetText(eastl::stringconst&, int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp___1__const__() {
        BaseApp___1__const__();
    }

    // 0x1001318f0, 16 bytes, inline, placed by class name
    // InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::BaseApp({lambda(BaseApp*)#1} const&)
    void InputForm::SetText(eastl::stringconst&, int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp___1__const__(basic_string* param_1) {
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(param_1);
    }

    // 0x100131940, 112 bytes, inline, placed by class name
    // InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::operator()(BaseApp*) const
    /* InputForm::SetText(eastl::string const&,
   int)::{lambda(BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const */

    void InputForm::SetText(eastl::stringconst&, int)::{
        lambda(BaseApp*) #1
    }
    ::operator()(_lambda_jag__BaseApp___1_* this, BaseApp * param_1)

    {
        long lVar1;
        basic_string local_38[24];

        lVar1 = (*(code*)param_1->field_0[11])(param_1);
        if (lVar1 != 0) {
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string(local_38);
            jag::input::Input::SetOnScreenKeyboardText(lVar1, local_38, 200, 1);
            local_38->~basic_string();
        }
    }

    // 0x1001319d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}::~BaseApp()
    /* std::__variant_detail::__alt<2ul, eastl::basic_string<char, BucketAllocatorEASTL>
   >::~__alt() */

    void std::__variant_detail::__alt<2ul, eastl::basic_string<char, BucketAllocatorEASTL>>::~__alt(
        __alt<2ul, eastl::basic_string<char, BucketAllocatorEASTL>>* this, basic_string* param_1) {
        ~basic_string();
    }

    // 0x100131c50, 144 bytes, inline, placed by class name
    // InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}::operator()(BaseApp*) const
    /* InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const */

    void InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp * param_1) {
        _lambda_jag__BaseApp___1_ _Var1;
        undefined1 auVar2[16];
        basic_string<char, BucketAllocatorEASTL> local_48[24];
        eastl local_30[8];

        auVar2 = (*(code*)param_1->field_0[11])(param_1);
        if (auVar2._0_8_ != 0) {
            _Var1 = *this;
            eastl::destruct<highlight::NpcUID*>(local_30, (NpcUID*)"EASTL basic_string", auVar2._8_8_);
            eastl::basic_string<char, BucketAllocatorEASTL>::basic_string((char*)local_48, (BucketAllocatorEASTL*)"");
            auVar2._0_8_->ShowOnScreenKeyboard(_Var1, local_48, 200, 0);
            eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
        }
    }

    // 0x10014dca0, 16 bytes, complete-object constructor, inline, placed by class name
    // InputForm::InputForm(InputForm::InputFormType, ApplicationContext&): jumps straight to the base-object constructor

    // 0x10014de20, 32 bytes, base-object constructor, inline, placed by class name
    // InputForm::InputForm(InputForm::InputFormType, ApplicationContext&)
    void InputForm::InputForm(undefined4 param_2) {
        new (this) SoftKeyboardListener();
        field_12 = param_2;
    }

    // 0x100169f20, 16 bytes, inline, placed by class name
    // InputForm::SetCharacterLimit(int)
    void InputForm::SetCharacterLimit(int param_1) {
        ~AutoSingleton(param_1, 0);
    }

    // 0x100390800, 160 bytes, inline, placed by class name
    // InputForm::Close()
    void InputForm::Close() {
        BaseApp* this_00;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        m_focusedFieldIndex = -1;
        this_00 = (BaseApp*)BaseApp::GetAppInstance();
        if (this_00 != (BaseApp*)0) {
            fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                InputForm::Close()::_lambda(BaseApp*) _1_, void>((_lambda_jag__BaseApp___1_*)&local_c8);
            this_00->QueueMainThreadEvent(&local_c8);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100396d00, 32 bytes, inline, placed by class name
    // InputForm::Close()::{lambda(BaseApp*)#1}::operator()(BaseApp*) const
    /* InputForm::Close()::{lambda(BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(BaseApp*)
   const */

    void InputForm::Close()::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp * param_1) {
        if ((*(code*)param_1->field_0[11])(param_1) != 0) {
            jag::input::Input::HideOnScreenKeyboard();
        }
    }

} // namespace jag::oldscape::input
