// libs/oldscape/clientlib/input/keyboard/ClientKeyboardListener.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "ClientKeyboardListener.h"

namespace jag::oldscape::input {
    // 0x103992df8, set at startup by ___cxx_global_var_init.105
    eastl::hash_map<int, int> ClientKeyboardListener::m_keycodeMap;

    // 0x100392ff0
    void ClientKeyboardListener::Init(jag::input::InputHandler* inputHandler) {
        member_function_ptr arg1_00;
        member_function_ptr arg1_01;
        member_function_ptr arg1_02;
        ReturnValue local_2f8;
        pair<int, int> local_2f0;
        pair<int, int> local_2e8;
        pair<int, int> local_2e0;
        pair<int, int> local_2d8;
        pair<int, int> local_2d0;
        pair<int, int> local_2c8;
        pair<int, int> local_2c0;
        pair<int, int> local_2b8;
        pair<int, int> local_2b0;
        pair<int, int> local_2a8;
        pair<int, int> local_2a0;
        pair<int, int> local_298;
        pair<int, int> local_290;
        pair<int, int> local_288;
        pair<int, int> local_280;
        pair<int, int> local_278;
        pair<int, int> local_270;
        pair<int, int> local_268;
        pair<int, int> local_260;
        pair<int, int> local_258;
        pair<int, int> local_250;
        pair<int, int> local_248;
        pair<int, int> local_240;
        pair<int, int> local_238;
        pair<int, int> local_230;
        pair<int, int> local_228;
        pair<int, int> local_220;
        pair<int, int> local_218;
        pair<int, int> local_210;
        pair<int, int> local_208;
        pair<int, int> local_200;
        pair<int, int> local_1f8;
        pair<int, int> local_1f0;
        pair<int, int> local_1e8;
        pair<int, int> local_1e0;
        pair<int, int> local_1d8;
        pair<int, int> local_1d0;
        pair<int, int> local_1c8;
        pair<int, int> local_1c0;
        pair<int, int> local_1b8;
        pair<int, int> local_1b0;
        pair<int, int> local_1a8;
        pair<int, int> local_1a0;
        pair<int, int> local_198;
        pair<int, int> local_190;
        pair<int, int> local_188;
        pair<int, int> local_180;
        pair<int, int> local_178;
        pair<int, int> local_170;
        pair<int, int> local_168;
        pair<int, int> local_160;
        pair<int, int> local_158;
        pair<int, int> local_150;
        pair<int, int> local_148;
        pair<int, int> local_140;
        pair<int, int> local_138;
        pair<int, int> local_130;
        pair<int, int> local_128;
        pair<int, int> local_120;
        pair<int, int> local_118;
        pair<int, int> local_110;
        pair<int, int> local_108;
        pair<int, int> local_100;
        pair<int, int> local_f8;
        pair<int, int> local_f0;
        pair<int, int> local_e8;
        pair<int, int> local_e0;
        pair<int, int> local_d8;
        pair<int, int> local_d0;
        pair<int, int> local_c8;
        pair<int, int> local_c0;
        pair<int, int> local_b8;
        pair<int, int> local_b0;
        pair<int, int> local_a8;
        pair<int, int> local_a0;
        pair<int, int> local_98;
        pair<int, int> local_90;
        pair<int, int> local_88;
        pair<int, int> local_80;
        pair<int, int> local_78;
        pair<int, int> local_70;
        pair<int, int> local_68;
        pair<int, int> local_60;
        pair<int, int> local_58;
        pair<int, int> local_50;
        pair<int, int> local_48;
        pair<int, int> local_40;

        field_208 = inputHandler;
        field_216 = 0;
        field_224 = 0;
        field_232 = 0;
        field_240 = 0;
        field_248 = 0;
        field_256 = 0;
        field_264 = 0;
        field_272 = 0;
        field_280 = 0;
        field_288 = 0;
        field_296 = 0;
        field_304 = 0;
        *(uint64_t*)((long)&field_304 + 4) = 0;
        field_316 = 0;
        ClientKeyboardListener* local_480 = (ClientKeyboardListener*)HandleKeyUp;
        uint64_t local_478 = 0;
        ClientKeyboardListener* local_300 = this;
        member_function_ptr mVar2 = std::bind<bool (ClientKeyboardListener::*)(int), ClientKeyboardListener*,
                                              std::placeholders::__ph<1> const&>(
            (bool__jag__oldscape__input__ClientKeyboardListener_______int_)&local_2f8, local_480, local_300);
        mVar2.ptr = &local_2f8;
        ((function<bool(int)>*)&field_64)->operator=(mVar2);
        local_480 = (ClientKeyboardListener*)HandleKeyDown;
        local_478 = 0;
        local_300 = this;
        mVar2 = std::bind<bool (ClientKeyboardListener::*)(int), ClientKeyboardListener*,
                          std::placeholders::__ph<1> const&>(
            (bool__jag__oldscape__input__ClientKeyboardListener_______int_)&local_2f8, local_480, local_300);
        arg1_00.adj = mVar2.adj;
        arg1_00.ptr = &local_2f8;
        ((function<bool(int)>*)&field_16)->operator=(arg1_00);
        local_480 = (ClientKeyboardListener*)HandleKeyChar;
        local_478 = 0;
        local_300 = this;
        mVar2 = std::bind<bool (ClientKeyboardListener::*)(int), ClientKeyboardListener*,
                          std::placeholders::__ph<1> const&>(
            (bool__jag__oldscape__input__ClientKeyboardListener_______int_)&local_2f8, local_480, local_300);
        arg1_01.adj = mVar2.adj;
        arg1_01.ptr = &local_2f8;
        ((function<bool(int)>*)&field_112)->operator=(arg1_01);
        local_480 = (ClientKeyboardListener*)HandleTextCommand;
        local_478 = 0;
        local_300 = this;
        mVar2 = std::bind<bool (ClientKeyboardListener::*)(jag::input::TextCommand), ClientKeyboardListener*,
                          std::placeholders::__ph<1> const&>(
            (bool__jag__oldscape__input__ClientKeyboardListener_______jag__input__TextCommand_)&local_2f8, local_480,
            local_300);
        arg1_02.adj = mVar2.adj;
        arg1_02.ptr = &local_2f8;
        ((function<bool(jag::input::TextCommand)>*)&field_160)->operator=(arg1_02);
        inputHandler->RegisterKeyDown(&field_16);
        inputHandler->RegisterKeyUp(&field_64);
        inputHandler->RegisterKeyChar(&field_112);
        inputHandler->RegisterTextCommand(&field_160);
        uint32_t local_460 = 1;
        local_2f8.pair<int const&, KeyCode::_unnamed_type_1_, false>(&jag::input::NOWARN_KEY_F1, &local_460);
        uint32_t local_45c = 2;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2f0, &jag::input::NOWARN_KEY_F2,
                                                                                (_unnamed_type_1_*)&local_45c);
        uint32_t local_458 = 3;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2e8, &jag::input::NOWARN_KEY_F3,
                                                                                (_unnamed_type_1_*)&local_458);
        uint32_t local_454 = 4;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2e0, &jag::input::NOWARN_KEY_F4,
                                                                                (_unnamed_type_1_*)&local_454);
        uint32_t local_450 = 5;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2d8, &jag::input::NOWARN_KEY_F5,
                                                                                (_unnamed_type_1_*)&local_450);
        uint32_t local_44c = 6;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2d0, &jag::input::NOWARN_KEY_F6,
                                                                                (_unnamed_type_1_*)&local_44c);
        uint32_t local_448 = 7;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2c8, &jag::input::NOWARN_KEY_F7,
                                                                                (_unnamed_type_1_*)&local_448);
        uint32_t local_444 = 8;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2c0, &jag::input::NOWARN_KEY_F8,
                                                                                (_unnamed_type_1_*)&local_444);
        uint32_t local_440 = 9;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2b8, &jag::input::NOWARN_KEY_F9,
                                                                                (_unnamed_type_1_*)&local_440);
        uint32_t local_43c = 10;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2b0, &jag::input::NOWARN_KEY_F10,
                                                                                (_unnamed_type_1_*)&local_43c);
        uint32_t local_438 = 11;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2a8, &jag::input::NOWARN_KEY_F11,
                                                                                (_unnamed_type_1_*)&local_438);
        uint32_t local_434 = 12;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_2a0, &jag::input::NOWARN_KEY_F12,
                                                                                (_unnamed_type_1_*)&local_434);
        uint32_t local_430 = 13;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_298, &jag::input::NOWARN_KEY_ESCAPE, (_unnamed_type_1_*)&local_430);
        uint32_t local_42c = 16;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_290, &jag::input::NOWARN_KEY_1,
                                                                                (_unnamed_type_1_*)&local_42c);
        uint32_t local_428 = 17;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_288, &jag::input::NOWARN_KEY_2,
                                                                                (_unnamed_type_1_*)&local_428);
        uint32_t local_424 = 18;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_280, &jag::input::NOWARN_KEY_3,
                                                                                (_unnamed_type_1_*)&local_424);
        uint32_t local_420 = 19;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_278, &jag::input::NOWARN_KEY_4,
                                                                                (_unnamed_type_1_*)&local_420);
        uint32_t local_41c = 20;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_270, &jag::input::NOWARN_KEY_5,
                                                                                (_unnamed_type_1_*)&local_41c);
        uint32_t local_418 = 21;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_268, &jag::input::NOWARN_KEY_6,
                                                                                (_unnamed_type_1_*)&local_418);
        uint32_t local_414 = 22;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_260, &jag::input::NOWARN_KEY_7,
                                                                                (_unnamed_type_1_*)&local_414);
        uint32_t local_410 = 23;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_258, &jag::input::NOWARN_KEY_8,
                                                                                (_unnamed_type_1_*)&local_410);
        uint32_t local_40c = 24;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_250, &jag::input::NOWARN_KEY_9,
                                                                                (_unnamed_type_1_*)&local_40c);
        uint32_t local_408 = 25;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_248, &jag::input::NOWARN_KEY_0,
                                                                                (_unnamed_type_1_*)&local_408);
        uint32_t local_404 = 26;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_240, &jag::input::NOWARN_KEY_MINUS, (_unnamed_type_1_*)&local_404);
        uint32_t local_400 = 27;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_238, &jag::input::NOWARN_KEY_EQUALS, (_unnamed_type_1_*)&local_400);
        uint32_t local_3fc = 32;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_230, &jag::input::NOWARN_KEY_Q,
                                                                                (_unnamed_type_1_*)&local_3fc);
        uint32_t local_3f8 = 33;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_228, &jag::input::NOWARN_KEY_W,
                                                                                (_unnamed_type_1_*)&local_3f8);
        uint32_t local_3f4 = 34;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_220, &jag::input::NOWARN_KEY_E,
                                                                                (_unnamed_type_1_*)&local_3f4);
        uint32_t local_3f0 = 35;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_218, &jag::input::NOWARN_KEY_R,
                                                                                (_unnamed_type_1_*)&local_3f0);
        uint32_t local_3ec = 36;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_210, &jag::input::NOWARN_KEY_T,
                                                                                (_unnamed_type_1_*)&local_3ec);
        uint32_t local_3e8 = 37;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_208, &jag::input::NOWARN_KEY_Y,
                                                                                (_unnamed_type_1_*)&local_3e8);
        uint32_t local_3e4 = 38;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_200, &jag::input::NOWARN_KEY_U,
                                                                                (_unnamed_type_1_*)&local_3e4);
        uint32_t local_3e0 = 39;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1f8, &jag::input::NOWARN_KEY_I,
                                                                                (_unnamed_type_1_*)&local_3e0);
        uint32_t local_3dc = 40;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1f0, &jag::input::NOWARN_KEY_O,
                                                                                (_unnamed_type_1_*)&local_3dc);
        uint32_t local_3d8 = 41;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1e8, &jag::input::NOWARN_KEY_P,
                                                                                (_unnamed_type_1_*)&local_3d8);
        uint32_t local_3d4 = 42;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_1e0, &jag::input::NOWARN_KEY_LEFT_BRACKET, (_unnamed_type_1_*)&local_3d4);
        uint32_t local_3d0 = 43;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_1d8, &jag::input::NOWARN_KEY_RIGHT_BRACKET, (_unnamed_type_1_*)&local_3d0);
        uint32_t local_3cc = 48;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1d0, &jag::input::NOWARN_KEY_A,
                                                                                (_unnamed_type_1_*)&local_3cc);
        uint32_t local_3c8 = 49;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1c8, &jag::input::NOWARN_KEY_S,
                                                                                (_unnamed_type_1_*)&local_3c8);
        uint32_t local_3c4 = 50;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1c0, &jag::input::NOWARN_KEY_D,
                                                                                (_unnamed_type_1_*)&local_3c4);
        uint32_t local_3c0 = 51;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1b8, &jag::input::NOWARN_KEY_F,
                                                                                (_unnamed_type_1_*)&local_3c0);
        uint32_t local_3bc = 52;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1b0, &jag::input::NOWARN_KEY_G,
                                                                                (_unnamed_type_1_*)&local_3bc);
        uint32_t local_3b8 = 53;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1a8, &jag::input::NOWARN_KEY_H,
                                                                                (_unnamed_type_1_*)&local_3b8);
        uint32_t local_3b4 = 54;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_1a0, &jag::input::NOWARN_KEY_J,
                                                                                (_unnamed_type_1_*)&local_3b4);
        uint32_t local_3b0 = 55;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_198, &jag::input::NOWARN_KEY_K,
                                                                                (_unnamed_type_1_*)&local_3b0);
        uint32_t local_3ac = 56;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_190, &jag::input::NOWARN_KEY_L,
                                                                                (_unnamed_type_1_*)&local_3ac);
        uint32_t local_3a8 = 57;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_188, &jag::input::NOWARN_KEY_SEMICOLON, (_unnamed_type_1_*)&local_3a8);
        uint32_t local_3a4 = 58;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_180, &jag::input::NOWARN_KEY_APOSTROPHE, (_unnamed_type_1_*)&local_3a4);
        uint32_t local_3a0 = 64;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_178, &jag::input::NOWARN_KEY_Z,
                                                                                (_unnamed_type_1_*)&local_3a0);
        uint32_t local_39c = 65;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_170, &jag::input::NOWARN_KEY_X,
                                                                                (_unnamed_type_1_*)&local_39c);
        uint32_t local_398 = 66;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_168, &jag::input::NOWARN_KEY_C,
                                                                                (_unnamed_type_1_*)&local_398);
        uint32_t local_394 = 67;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_160, &jag::input::NOWARN_KEY_V,
                                                                                (_unnamed_type_1_*)&local_394);
        uint32_t local_390 = 68;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_158, &jag::input::NOWARN_KEY_B,
                                                                                (_unnamed_type_1_*)&local_390);
        uint32_t local_38c = 69;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_150, &jag::input::NOWARN_KEY_N,
                                                                                (_unnamed_type_1_*)&local_38c);
        uint32_t local_388 = 70;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_148, &jag::input::NOWARN_KEY_M,
                                                                                (_unnamed_type_1_*)&local_388);
        uint32_t local_384 = 71;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_140, &jag::input::NOWARN_KEY_COMMA, (_unnamed_type_1_*)&local_384);
        uint32_t local_380 = 72;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_138, &jag::input::NOWARN_KEY_PERIOD, (_unnamed_type_1_*)&local_380);
        uint32_t local_37c = 73;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_130, &jag::input::NOWARN_KEY_SLASH, (_unnamed_type_1_*)&local_37c);
        uint32_t local_378 = 80;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_128, &jag::input::NOWARN_KEY_TAB,
                                                                                (_unnamed_type_1_*)&local_378);
        uint32_t local_374 = 81;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_120, &jag::input::NOWARN_KEY_SHIFT_LEFT, (_unnamed_type_1_*)&local_374);
        uint32_t local_370 = 81;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_118, &jag::input::NOWARN_KEY_SHIFT_RIGHT, (_unnamed_type_1_*)&local_370);
        uint32_t local_36c = 82;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_110, &jag::input::NOWARN_KEY_CONTROL_LEFT, (_unnamed_type_1_*)&local_36c);
        uint32_t local_368 = 82;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_108, &jag::input::NOWARN_KEY_CONTROL_RIGHT, (_unnamed_type_1_*)&local_368);
        uint32_t local_364 = 83;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_100, &jag::input::NOWARN_KEY_SPACE, (_unnamed_type_1_*)&local_364);
        uint32_t local_360 = 84;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_f8, &jag::input::NOWARN_KEY_RETURN, (_unnamed_type_1_*)&local_360);
        uint32_t local_35c = 85;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_f0, &jag::input::NOWARN_KEY_BACKSPACE, (_unnamed_type_1_*)&local_35c);
        uint32_t local_358 = 86;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_e8, &jag::input::NOWARN_KEY_ALT_LEFT, (_unnamed_type_1_*)&local_358);
        uint32_t local_354 = 86;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_e0, &jag::input::NOWARN_KEY_ALT_RIGHT, (_unnamed_type_1_*)&local_354);
        uint32_t local_350 = 59;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_d8, &jag::input::NOWARN_KEY_HASH,
                                                                                (_unnamed_type_1_*)&local_350);
        uint32_t local_34c = 74;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_d0, &jag::input::NOWARN_KEY_BACKSLASH, (_unnamed_type_1_*)&local_34c);
        uint32_t local_348 = 87;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_c8, &jag::input::NOWARN_KEY_NUMPAD_ADD, (_unnamed_type_1_*)&local_348);
        uint32_t local_344 = 88;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_c0, &jag::input::NOWARN_KEY_NUMPAD_SUBTRACT, (_unnamed_type_1_*)&local_344);
        uint32_t local_340 = 89;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_b8, &jag::input::NOWARN_KEY_NUMPAD_MULTIPLY, (_unnamed_type_1_*)&local_340);
        uint32_t local_33c = 90;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_b0, &jag::input::NOWARN_KEY_NUMPAD_DIVIDE, (_unnamed_type_1_*)&local_33c);
        uint32_t local_338 = 91;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_a8, &jag::input::NOWARN_KEY_NUMPAD5, (_unnamed_type_1_*)&local_338);
        uint32_t local_334 = 96;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_a0, &jag::input::NOWARN_KEY_LEFT,
                                                                                (_unnamed_type_1_*)&local_334);
        uint32_t local_330 = 97;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_98, &jag::input::NOWARN_KEY_RIGHT, (_unnamed_type_1_*)&local_330);
        uint32_t local_32c = 98;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_90, &jag::input::NOWARN_KEY_UP,
                                                                                (_unnamed_type_1_*)&local_32c);
        uint32_t local_328 = 99;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_88, &jag::input::NOWARN_KEY_DOWN,
                                                                                (_unnamed_type_1_*)&local_328);
        uint32_t local_324 = 100;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_80, &jag::input::NOWARN_KEY_INSERT, (_unnamed_type_1_*)&local_324);
        uint32_t local_320 = 101;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_78, &jag::input::NOWARN_KEY_DEL,
                                                                                (_unnamed_type_1_*)&local_320);
        uint32_t local_31c = 102;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_70, &jag::input::NOWARN_KEY_HOME,
                                                                                (_unnamed_type_1_*)&local_31c);
        uint32_t local_318 = 103;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(&local_68, &jag::input::NOWARN_KEY_END,
                                                                                (_unnamed_type_1_*)&local_318);
        uint32_t local_314 = 104;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_60, &jag::input::NOWARN_KEY_PAGE_UP, (_unnamed_type_1_*)&local_314);
        uint32_t local_310 = 105;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_58, &jag::input::NOWARN_KEY_PAGE_DOWN, (_unnamed_type_1_*)&local_310);
        uint32_t local_30c = 106;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_50, &jag::input::NOWARN_KEY_CONSOLE, (_unnamed_type_1_*)&local_30c);
        uint32_t local_308 = 107;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_48, &jag::input::NOWARN_KEY_WIN_LEFT, (_unnamed_type_1_*)&local_308);
        uint32_t local_304 = 107;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            &local_40, (int*)&jag::input::NOWARN_KEY_WIN_RIGHT, (_unnamed_type_1_*)&local_304);
        new (&local_480) eastl::vector<std::pair<int, int>>(&local_2f8, *88);
        auto arg1 = local_480.HeapBeginPtr();
        auto piVar1 = local_480.end();
        if (arg1 != piVar1) {
            do {
                if (*arg1 != -1) {
                    local_2f8 = m_keycodeMap.emplace<int const&, int const&>(*arg1, *(arg1 + 1));
                }
                arg1 = arg1 + 2;
            } while (arg1 != piVar1);
        }
    }

    // 0x100393ef0
    uint64_t ClientKeyboardListener::HandleKeyUp(int arg1) {
        unsigned int uVar1 = GetClientKeyCode(arg1);
        if (0 < (int)uVar1) {
            if (0 < (int)(uVar1 & 4294967167)) {
                ReleaseKeyCode(uVar1 & 4294967167);
            }
        }
        return 1;
    }

    // 0x100393f90
    uint32_t ClientKeyboardListener::HandleKeyDown(int arg1) {
        int arg1_00 = GetClientKeyCode(arg1);
        if (-1 < (char)arg1_00) {
            PressKeyCode(arg1_00);
        }
        return 1;
    }

    // 0x100393fc0
    uint32_t ClientKeyboardListener::HandleKeyChar(int arg1) {
        uint8_t** ppuVar1;
        uint64_t uVar3;

        uint32_t uVar2 = core::stringtools::general::CP1252Tools::CanEncodeToCP1252(arg1);
        if ((char)uVar2 != '\0') {
            ppuVar1 = field_0;
            uVar3 = InputListener::GetCurrentTimeMS();
            (**(void (**)(...))(*ppuVar1 + 24))(ppuVar1, arg1 & 65535, uVar3);
        }
        return uVar2;
    }

    // 0x100394030
    uint8_t ClientKeyboardListener::HandleTextCommand(jag::input::TextCommand textCommand) {
        uint8_t** ppuVar1 = field_0;
        uint64_t uVar2 = InputListener::GetCurrentTimeMS();
        (**(void (**)(...))(*ppuVar1 + 88))(ppuVar1, textCommand, uVar2);
        return 1;
    }

    // 0x1003941d0
    void ClientKeyboardListener::Destroy() {
        if (field_208 != nullptr) {
            field_208->UnregisterKeyDown(&field_16);
            field_208->UnregisterKeyUp(&field_64);
            field_208->UnregisterKeyChar(&field_112);
        }
    }

    // 0x100394280
    bool ClientKeyboardListener::IsAltDown() {
        uint8_t* puVar1 = &field_216[86];
        return *puVar1;
    }

    // 0x1003942b0
    bool ClientKeyboardListener::IsCtrlDown() {
        uint8_t* puVar1 = &field_216[82];
        return *puVar1;
    }

    // 0x1003942d0
    bool ClientKeyboardListener::IsShiftDown() {
        uint8_t* puVar1 = &field_216[81];
        return *puVar1;
    }

    // 0x1003942f0
    uint32_t ClientKeyboardListener::GetClientKeyCode(int arg1) const {
        long lVar3;

        auto local_38 = m_keycodeMap.find(arg1);
        auto local_48 = m_keycodeMap.end();
        bool cVar1 = local_38 == local_48;
        uint32_t uVar2 = 4294967295;
        if (!cVar1) {
            lVar3 = local_38.HeapBeginPtr();
            uVar2 = *(uint32_t*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x100394360
    void ClientKeyboardListener::PressKeyCode(int arg1) {
        uint8_t** ppuVar1;
        uint64_t uVar3;

        uint64_t* this_00 = &field_216;
        char* pcVar2 = (char*)(*this_00)[(long)arg1];
        if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
            ppuVar1 = field_0;
            uVar3 = InputListener::GetCurrentTimeMS();
            (**(void (**)(...))*ppuVar1)(ppuVar1, arg1, uVar3);
        } else {
            ppuVar1 = field_0;
            uVar3 = InputListener::GetCurrentTimeMS();
            (**(void (**)(...))(*ppuVar1 + 8))(ppuVar1, arg1, uVar3);
        }
        pcVar2 = (char*)(*this_00)[82];
        if (*pcVar2 != '\0') {
            pcVar2 = (char*)(*this_00)[86];
            if (*pcVar2 != '\0') {
                pcVar2 = (char*)(*this_00)[81];
                if (*pcVar2 != '\0') {
                    pcVar2 = (char*)(*this_00)[66];
                    if (*pcVar2 != '\0') {
                        m_forceCrashDown = 1;
                    }
                }
            }
        }
    }

    // 0x100394420
    void ClientKeyboardListener::ReleaseKeyCode(int arg1) {
        uint8_t** ppuVar1;
        uint64_t uVar3;

        char* pcVar2 = &field_216[(long)arg1];
        if (*pcVar2 != '\0') {
            *pcVar2 = '\0';
            if ((arg1 - 66U < 21) && ((1146881U >> (arg1 - 66U & 31) & 1) != 0)) {
                m_forceCrashDown = 0;
            }
            ppuVar1 = field_0;
            uVar3 = InputListener::GetCurrentTimeMS();
            (**(void (**)(...))(*ppuVar1 + 16))(ppuVar1, arg1, uVar3);
        }
    }

    // 0x1003944c0
    bool ClientKeyboardListener::IsForceCrashDown() {
        return m_forceCrashDown;
    }

    // 0x1003944d0
    void ClientKeyboardListener::ReleaseAllKeys() {
        long lVar1 = 0;
        do {
            ReleaseKeyCode((int)lVar1);
            lVar1 = lVar1 + 1;
        } while (lVar1 != 108);
    }

    // 0x1003a0f40
    void ___cxx_global_var_init_105(void) {

        new ((hash_map<int, int>*)&ClientKeyboardListener::m_keycodeMap) eastl::hash_map(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6da8, &ClientKeyboardListener::m_keycodeMap, 4294967296);
    }

} // namespace jag::oldscape::input
