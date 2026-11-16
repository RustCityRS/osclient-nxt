// libs/game/runetek5/network/protocol/LoginProt.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    class LoginProt {
    public:
        LoginProt(int arg1, int arg2);
        static uint8_t m_typeLookup[536];
        static LoginProt INIT_GAME_CONNECTION;           // = LoginProt(14, 0)
        static LoginProt INIT_JS5REMOTE_CONNECTION;      // = LoginProt(15, -1)
        static LoginProt GAMELOGIN;                      // = LoginProt(16, -2)
        static LoginProt LOBBYLOGIN;                     // = LoginProt(19, -2)
        static LoginProt REQUEST_WORLDLIST;              // = LoginProt(23, 4)
        static LoginProt CHECK_WORLD_SUITABILITY;        // = LoginProt(24, -1)
        static LoginProt GAMELOGIN_CONTINUE;             // = LoginProt(26, 0)
        static LoginProt SSL_WEBCONNECTION;              // = LoginProt(27, 0)
        static LoginProt CREATE_ACCOUNT_CONNECT;         // = LoginProt(28, -2)
        static LoginProt INIT_SOCIAL_NETWORK_CONNECTION; // = LoginProt(29, -2)
        static LoginProt SOCIAL_NETWORK_LOGIN;           // = LoginProt(30, -2)
        static LoginProt INIT_DEBUG_CONNECTION;          // = LoginProt(31, 4)

    private:
        int field_0;
        int field_4;
        uint8_t _unknown_8[4];
    };

    // 0x1039b6228
    uint8_t LoginProt::m_typeLookup[536];

    // 0x1039b6440, set at startup by ___cxx_global_var_init.281
    LoginProt LoginProt::INIT_GAME_CONNECTION = LoginProt(14, 0);

    // 0x1039b6448, set at startup by ___cxx_global_var_init.282
    LoginProt LoginProt::INIT_JS5REMOTE_CONNECTION = LoginProt(15, -1);

    // 0x1039b6450, set at startup by ___cxx_global_var_init.283
    LoginProt LoginProt::GAMELOGIN = LoginProt(16, -2);

    // 0x1039b6458, set at startup by ___cxx_global_var_init.284
    LoginProt LoginProt::LOBBYLOGIN = LoginProt(19, -2);

    // 0x1039b6460, set at startup by ___cxx_global_var_init.285
    LoginProt LoginProt::REQUEST_WORLDLIST = LoginProt(23, 4);

    // 0x1039b6468, set at startup by ___cxx_global_var_init.286
    LoginProt LoginProt::CHECK_WORLD_SUITABILITY = LoginProt(24, -1);

    // 0x1039b6470, set at startup by ___cxx_global_var_init.287
    LoginProt LoginProt::GAMELOGIN_CONTINUE = LoginProt(26, 0);

    // 0x1039b6478, set at startup by ___cxx_global_var_init.288
    LoginProt LoginProt::SSL_WEBCONNECTION = LoginProt(27, 0);

    // 0x1039b6480, set at startup by ___cxx_global_var_init.289
    LoginProt LoginProt::CREATE_ACCOUNT_CONNECT = LoginProt(28, -2);

    // 0x1039b6488, set at startup by ___cxx_global_var_init.290
    LoginProt LoginProt::INIT_SOCIAL_NETWORK_CONNECTION = LoginProt(29, -2);

    // 0x1039b6490, set at startup by ___cxx_global_var_init.291
    LoginProt LoginProt::SOCIAL_NETWORK_LOGIN = LoginProt(30, -2);

    // 0x1039b6498, set at startup by ___cxx_global_var_init.292
    LoginProt LoginProt::INIT_DEBUG_CONNECTION = LoginProt(31, 4);

    // 0x1004a3190
    LoginProt::LoginProt(int arg1, int arg2) : field_0(arg1), field_4(arg2) {
        int local_14;

        uint64_t* puVar1 = &m_typeLookup[local_14];
        *puVar1 = this;
    }

} // namespace jag
