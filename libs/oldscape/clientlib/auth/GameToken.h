// libs/oldscape/clientlib/auth/GameToken.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::auth {
    class GameToken {
    public:
        void GetTokenString() const;
        ~GameToken();
        AuthSDKTokenResponse GetStatus() const;
        void Reset(jag::auth::AuthSDKTokenResponse authSDKTokenResponse);
        GameToken(const GameToken& gameToken);
        GameToken();
        GameToken(const eastl::string& str, jag::auth::AuthSDKTokenResponse authSDKTokenResponse);
        GameToken* operator=(GameToken&& gameToken);

    private:
        uint8_t _unknown_0[32];
        AuthSDKTokenResponse m_status;
        uint8_t _unknown_36[4];
    };

    // 0x100009ca0: GameToken::GetTokenString() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100024070: GameToken::~GameToken() has the same machine code as eastl::pair<eastl::string, option::IOption*>::~pair()

    // 0x100031840: GameToken::~GameToken() has the same machine code as eastl::hash_node<eastl::pair<eastl::string const, unsigned int>, false>::~hash_node()

    // 0x1000fa830: GameToken::GetStatus() const has the same machine code as graphics::NXTPixScreen::GetWidth() const

    // 0x100131a00
    void GameToken::Reset(jag::auth::AuthSDKTokenResponse authSDKTokenResponse) {
        m_status = authSDKTokenResponse;
        clear();
    }

    // 0x100198e80
    GameToken::GameToken(const GameToken& gameToken) : jag::auth::GameTokenResult(gameToken) {}

    // 0x100198eb0
    GameToken::GameToken() : jag::auth::GameTokenResult(), m_status(4294967294) {}

    // 0x100390bd0
    GameToken* GameToken::operator=(GameToken&& gameToken) {
        *this = gameToken;
        return this;
    }

    // 0x100396d30
    GameToken::GameToken(const eastl::string& str, jag::auth::AuthSDKTokenResponse authSDKTokenResponse)
        : jag::auth::GameTokenResult(), m_status(authSDKTokenResponse) {
        *this = str;
    }

} // namespace jag::oldscape::auth

namespace jag::fixedfunction {
    // 0x100131b60
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 } && arg1) {
        _lambda_void__void___1_ local_28;
        _lambda_void__jag__BaseApp___1_ local_20;
        _lambda_void___1_ local_18;

        *(uint64_t*)this = 0;
        *(_lambda_jag__BaseApp___1_*)(this + 16) = arg1;
        uint64_t uVar1 = fixedfunction::function::function(int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, void*) #1
        }
        ::operator_cast_to_function_pointer(&local_28);
        *(uint64_t*)(this + 144) = uVar1;
        uVar1 = fixedfunction::function::function(int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator_cast_to_function_pointer(&local_20);
        *(uint64_t*)this = uVar1;
        uVar1 = fixedfunction::function::function(int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*) #1
        }
        ::operator_cast_to_function_pointer(&local_18);
        *(uint64_t*)(this + 152) = uVar1;
    }

    // 0x100131bb0
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator void (*)(void*, void*)() const {
        lambda(void*, void*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void__void___1_* this) {
        return PTR___invoke_100ee95e8;
    }

    // 0x100131bc0
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator void (*)(void*, BaseApp*)() const {
        lambda(void*, BaseApp*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void__jag__BaseApp___1_* this) {
        return PTR_BaseApp___100ee95e0;
    }

    // 0x100131bd0
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*) #1
    }
    ::operator void (*)(void*)() const {
        lambda(void*) #1
    }
    ::operator_cast_to_function_pointer(_lambda_void___1_* this) {
        return PTR___invoke_100ee95d8;
    }

    // 0x100131be0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        function < oldscape::input::InputForm::ShowKeyboard(int)::{
            lambda(BaseApp*) #1
        }
        , void > (int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, void*) #1
        }
        ::operator()(arg1, arg1, arg2);
    }

    // 0x100131c00
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint8_t*)arg2 = *(uint8_t*)arg1;
    }

    // 0x100131c10
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {
        function < oldscape::input::InputForm::ShowKeyboard(int)::{
            lambda(BaseApp*) #1
        }
        , void > (int->ShowKeyboard()::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator()(arg1, arg1, baseApp);
    }

    // 0x100131c30
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * baseApp) const {
        int->ShowKeyboard()::{
            lambda(BaseApp*) #1
        }
        ::operator()(arg1, baseApp);
    }

    // 0x100131ce0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function < oldscape::input::InputForm::ShowKeyboard(int)::{
        lambda(BaseApp*) #1
    }
    , void > (oldscape::input::InputForm::ShowKeyboard(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        arg1->~AutoSingleton();
    }

} // namespace jag::fixedfunction

namespace jag::auth {
    class GameTokenResult {
    public:
        ~GameTokenResult();
        GameTokenResult* operator=(GameTokenResult&& minimenuGlobalEntryData);
        GameTokenResult(const GameTokenResult& gameTokenResult);
        GameTokenResult();

    private:
        uint8_t _unknown_0[32];
        uint32_t field_32;
        uint8_t _unknown_36[4];
    };

} // namespace jag::auth

namespace jag::oldscape {
    // 0x100131cf0
    WorldSwitcherStructure::WorldSwitcherStructure() : field_36(0) {}

} // namespace jag::oldscape
