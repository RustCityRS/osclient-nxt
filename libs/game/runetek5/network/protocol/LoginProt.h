// libs/game/runetek5/network/protocol/LoginProt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class LoginProt {
    public:
        LoginProt(int, int);
        static /* 536 bytes */ m_typeLookup;
        static LoginProt /* 8 bytes */ INIT_GAME_CONNECTION;           // = LoginProt(14, 0)
        static LoginProt /* 8 bytes */ INIT_JS5REMOTE_CONNECTION;      // = LoginProt(15, -1)
        static LoginProt /* 8 bytes */ GAMELOGIN;                      // = LoginProt(16, -2)
        static LoginProt /* 8 bytes */ LOBBYLOGIN;                     // = LoginProt(19, -2)
        static LoginProt /* 8 bytes */ REQUEST_WORLDLIST;              // = LoginProt(23, 4)
        static LoginProt /* 8 bytes */ CHECK_WORLD_SUITABILITY;        // = LoginProt(24, -1)
        static LoginProt /* 8 bytes */ GAMELOGIN_CONTINUE;             // = LoginProt(26, 0)
        static LoginProt /* 8 bytes */ SSL_WEBCONNECTION;              // = LoginProt(27, 0)
        static LoginProt /* 8 bytes */ CREATE_ACCOUNT_CONNECT;         // = LoginProt(28, -2)
        static LoginProt /* 8 bytes */ INIT_SOCIAL_NETWORK_CONNECTION; // = LoginProt(29, -2)
        static LoginProt /* 8 bytes */ SOCIAL_NETWORK_LOGIN;           // = LoginProt(30, -2)
        static LoginProt /* 8 bytes */ INIT_DEBUG_CONNECTION;          // = LoginProt(31, 4)

        // data members, from how the methods use this: 12 bytes
        int field_0; // offset 0
        int field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x1039b6228, 536 bytes, __common; zero-initialised
    LoginProt::m_typeLookup;

    // 0x1039b6440, 8 bytes, __common; set at startup by ___cxx_global_var_init.281
    LoginProt LoginProt::INIT_GAME_CONNECTION = LoginProt(14, 0);

    // 0x1039b6448, 8 bytes, __common; set at startup by ___cxx_global_var_init.282
    LoginProt LoginProt::INIT_JS5REMOTE_CONNECTION = LoginProt(15, -1);

    // 0x1039b6450, 8 bytes, __common; set at startup by ___cxx_global_var_init.283
    LoginProt LoginProt::GAMELOGIN = LoginProt(16, -2);

    // 0x1039b6458, 8 bytes, __common; set at startup by ___cxx_global_var_init.284
    LoginProt LoginProt::LOBBYLOGIN = LoginProt(19, -2);

    // 0x1039b6460, 8 bytes, __common; set at startup by ___cxx_global_var_init.285
    LoginProt LoginProt::REQUEST_WORLDLIST = LoginProt(23, 4);

    // 0x1039b6468, 8 bytes, __common; set at startup by ___cxx_global_var_init.286
    LoginProt LoginProt::CHECK_WORLD_SUITABILITY = LoginProt(24, -1);

    // 0x1039b6470, 8 bytes, __common; set at startup by ___cxx_global_var_init.287
    LoginProt LoginProt::GAMELOGIN_CONTINUE = LoginProt(26, 0);

    // 0x1039b6478, 8 bytes, __common; set at startup by ___cxx_global_var_init.288
    LoginProt LoginProt::SSL_WEBCONNECTION = LoginProt(27, 0);

    // 0x1039b6480, 8 bytes, __common; set at startup by ___cxx_global_var_init.289
    LoginProt LoginProt::CREATE_ACCOUNT_CONNECT = LoginProt(28, -2);

    // 0x1039b6488, 8 bytes, __common; set at startup by ___cxx_global_var_init.290
    LoginProt LoginProt::INIT_SOCIAL_NETWORK_CONNECTION = LoginProt(29, -2);

    // 0x1039b6490, 8 bytes, __common; set at startup by ___cxx_global_var_init.291
    LoginProt LoginProt::SOCIAL_NETWORK_LOGIN = LoginProt(30, -2);

    // 0x1039b6498, 8 bytes, __common; set at startup by ___cxx_global_var_init.292
    LoginProt LoginProt::INIT_DEBUG_CONNECTION = LoginProt(31, 4);

    // 0x1004a2c10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LoginProt::LoginProt(int, int): jumps straight to the base-object constructor

    // 0x1004a3190, 48 bytes, base-object constructor, inline, placed by class name
    // LoginProt::LoginProt(int, int)
    void LoginProt::LoginProt(int param_1, int param_2) {
        undefined8* puVar1;
        int local_14;

        field_0 = param_1;
        field_4 = param_2;
        puVar1 = (undefined8*)eastl::hash_map<
            int, LoginProt_const*, eastl::hash<int>, eastl::equal_to<int>,
            eastl::fixed_hashtable_allocator<14ul, 24ul, 12ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[]((hash_map<int, LoginProt_const*, eastl::hash<int>, eastl::equal_to<int>,
                             eastl::fixed_hashtable_allocator<14ul, 24ul, 12ul, 8ul, 0ul, true, eastl::allocator>,
                             false>*)&m_typeLookup,
                   &local_14);
        *puVar1 = this;
    }

    // 0x1004a6310, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.281
    void ___cxx_global_var_init_281() {
        new (&LoginProt::INIT_GAME_CONNECTION) LoginProt(14, 0);
    }

    // 0x1004a6330, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.282
    void ___cxx_global_var_init_282() {
        new (&LoginProt::INIT_JS5REMOTE_CONNECTION) LoginProt(15, -1);
    }

    // 0x1004a6350, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.283
    void ___cxx_global_var_init_283() {
        new (&LoginProt::GAMELOGIN) LoginProt(16, -2);
    }

    // 0x1004a6370, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.284
    void ___cxx_global_var_init_284() {
        new (&LoginProt::LOBBYLOGIN) LoginProt(19, -2);
    }

    // 0x1004a6390, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.285
    void ___cxx_global_var_init_285() {
        new (&LoginProt::REQUEST_WORLDLIST) LoginProt(23, 4);
    }

    // 0x1004a63b0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.286
    void ___cxx_global_var_init_286() {
        new (&LoginProt::CHECK_WORLD_SUITABILITY) LoginProt(24, -1);
    }

    // 0x1004a63d0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.287
    void ___cxx_global_var_init_287() {
        new (&LoginProt::GAMELOGIN_CONTINUE) LoginProt(26, 0);
    }

    // 0x1004a63f0, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.288
    void ___cxx_global_var_init_288() {
        new (&LoginProt::SSL_WEBCONNECTION) LoginProt(27, 0);
    }

    // 0x1004a6410, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.289
    void ___cxx_global_var_init_289() {
        new (&LoginProt::CREATE_ACCOUNT_CONNECT) LoginProt(28, -2);
    }

    // 0x1004a6430, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.290
    void ___cxx_global_var_init_290() {
        new (&LoginProt::INIT_SOCIAL_NETWORK_CONNECTION) LoginProt(29, -2);
    }

    // 0x1004a6450, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.291
    void ___cxx_global_var_init_291() {
        new (&LoginProt::SOCIAL_NETWORK_LOGIN) LoginProt(30, -2);
    }

    // 0x1004a6470, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.292
    void ___cxx_global_var_init_292() {
        new (&LoginProt::INIT_DEBUG_CONNECTION) LoginProt(31, 4);
    }

} // namespace jag
