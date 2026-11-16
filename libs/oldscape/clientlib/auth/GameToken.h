// libs/oldscape/clientlib/auth/GameToken.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::auth {
    class GameToken {
    public:
        GetTokenString() const;
        ~GameToken();
        GetStatus() const;
        void Reset(jag::auth::AuthSDKTokenResponse);
        GameToken(GameToken const&);
        GameToken();
        GameToken(eastl::string const&, jag::auth::AuthSDKTokenResponse);
        GameToken* operator=(GameToken&&);

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[32];
        undefined4 m_status; // offset 32
        char _unknown_36[4];
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    GameToken::GetTokenString() const;

    // 0x100024070: the linker folded this into eastl::pair<eastl::string, option::IOption*>::~pair(), which has identical code
    GameToken::~GameToken();

    // 0x100031840: the linker folded this into eastl::hash_node<eastl::pair<eastl::string const, unsigned int>, false>::~hash_node(), which has identical code
    GameToken::~GameToken();

    // 0x1000fa830: the linker folded this into graphics::NXTPixScreen::GetWidth() const, which has identical code
    GameToken::GetStatus() const;

    // 0x100131a00, 16 bytes, inline, placed by class name and debug map
    // GameToken::Reset(jag::auth::AuthSDKTokenResponse)
    void GameToken::Reset(undefined4 param_2) {
        m_status = param_2;
        eastl::string::clear();
    }

    // 0x1001871e0, 16 bytes, complete-object constructor, inline, placed by class name
    // GameToken::GameToken(GameToken const&): jumps straight to the base-object constructor

    // 0x1001871f0, 16 bytes, complete-object constructor, inline, placed by class name
    // GameToken::GameToken(): jumps straight to the base-object constructor

    // 0x100198e80, 16 bytes, base-object constructor, inline, placed by class name
    // GameToken::GameToken(GameToken const&)
    void GameToken::GameToken(GameToken* param_1) {
        new (this) jag::auth::GameTokenResult(param_1);
    }

    // 0x100198eb0, 32 bytes, base-object constructor, inline, placed by class name
    // GameToken::GameToken()
    void GameToken::GameToken() {
        new (this) jag::auth::GameTokenResult();
        m_status = 4294967294;
    }

    // 0x100390bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // GameToken::GameToken(eastl::string const&, jag::auth::AuthSDKTokenResponse): jumps straight to the base-object constructor

    // 0x100390bd0, 32 bytes, inline, placed by class name
    // GameToken::operator=(GameToken&&)
    /* GameToken::TEMPNAMEPLACEHOLDERVALUE(GameToken&&) */

    GameToken* GameToken::operator=(GameToken* param_1) {
        jag::auth::GameTokenResult::operator=((GameTokenResult*)this, (GameTokenResult*)param_1);
        return this;
    }

    // 0x100396d30, 80 bytes, base-object constructor, inline, placed by class name
    // GameToken::GameToken(eastl::string const&, jag::auth::AuthSDKTokenResponse)
    void GameToken::GameToken(basic_string* param_1, undefined4 param_3) {
        new (this) jag::auth::GameTokenResult();
        m_status = param_3;
        eastl::string::operator=((eastl::string*)this, param_1);
    }

} // namespace jag::oldscape::auth

namespace jag::fixedfunction {
    // 0x100131b50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&): jumps straight to the base-object constructor

    // 0x100131b60, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::input::InputForm::ShowKeyboard(int)::_lambda(BaseApp*) _1_, void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, _lambda_jag__BaseApp___1_* param_1) {
        _func_void_void_ptr_void_ptr* p_Var1;
        _func_void_void_ptr_BaseApp_ptr* p_Var2;
        _func_void_void_ptr* p_Var3;
        _lambda_void__void___1_ local_28[8];
        _lambda_void__jag__BaseApp___1_ local_20[8];
        _lambda_void___1_ local_18[8];

        *(undefined8*)this = 0;
        *(_lambda_jag__BaseApp___1_*)(this + 16) = *param_1;
        p_Var1 = fixedfunction::function::function(int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, void*) #1
        }
        ::operator_cast_to_function_pointer(local_28);
        *(_func_void_void_ptr_void_ptr**)(this + 144) = p_Var1;
        p_Var2 = fixedfunction::function::function(int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator_cast_to_function_pointer(local_20);
        *(_func_void_void_ptr_BaseApp_ptr**)this = p_Var2;
        p_Var3 = fixedfunction::function::function(int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*) #1
        }
        ::operator_cast_to_function_pointer(local_18);
        *(_func_void_void_ptr**)(this + 152) = p_Var3;
    }

    // 0x100131bb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::operator void (*)(void*, void*)() const
    _func_void_void_ptr_void_ptr* function::function(oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }&&)::{
        lambda(void*, void*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void__void___1_* this)

    {
        return (_func_void_void_ptr_void_ptr*)PTR___invoke_100ee95e8;
    }

    // 0x100131bc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::operator void (*)(void*, BaseApp*)() const
    _func_void_void_ptr_BaseApp_ptr* function::function(oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void__jag__BaseApp___1_* this)

    {
        return (_func_void_void_ptr_BaseApp_ptr*)PTR_BaseApp___100ee95e0;
    }

    // 0x100131bd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::operator void (*)(void*)() const
    _func_void_void_ptr* function::function(oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void___1_* this)

    {
        return (_func_void_void_ptr*)PTR___invoke_100ee95d8;
    }

    // 0x100131be0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(void*, void*) #1
    }
    (BaseApp*)#1
},void>(oldscape::input::InputForm::ShowKeyboard(int)::{
    lambda(void*, void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(param_1, param_1, param_2);
}

// 0x100131c00, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1},
   void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
    lambda(BaseApp*) #1
}
, void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined1*)param_2 = *(undefined1*)param_1;
}

// 0x100131c10, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
    lambda(void*, BaseApp*) #1
}
(BaseApp*)#1
},void>(oldscape::input::InputForm::ShowKeyboard(int)::{
    lambda(void*, BaseApp*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, BaseApp*) #1
}
::BaseApp__(_lambda_void__jag__BaseApp___1_* param_1, BaseApp* param_2) {
    function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(param_1, param_1, param_2);
}

// 0x100131c30, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1},
   void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
    lambda(BaseApp*) #1
}
, void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::operator()(void* param_1, BaseApp * param_2) {
    int->ShowKeyboard()::{
        lambda(BaseApp*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100131ce0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::ShowKeyboard(int)::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
    lambda(void*) #1
}
(BaseApp*)#1
},void>(oldscape::input::InputForm::ShowKeyboard(int)::{
    lambda(void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {
    param_1->~AutoSingleton(param_1);
}

} // namespace jag::fixedfunction

namespace jag::auth {
    class GameTokenResult {
    public:
        ~GameTokenResult();
        GameTokenResult* operator=(GameTokenResult&&);
        GameTokenResult(GameTokenResult const&);
        GameTokenResult();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[32];
        undefined4 field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x1003ae050, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // GameTokenResult::GameTokenResult(): jumps straight to the base-object constructor

} // namespace jag::auth

namespace jag::oldscape {
    // 0x100131cf0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // WorldSwitcherStructure::WorldSwitcherStructure()
    void WorldSwitcherStructure::WorldSwitcherStructure() {
        field_36 = 0;
    }

} // namespace jag::oldscape
