// libs/oldscape/clientlib/input/keyboard/ClientKeyboardListener.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "ClientKeyboardListener.h"

namespace jag::oldscape::input {
    // 0x103992df8, 56 bytes, __common; set at startup by ___cxx_global_var_init.105
    eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>
        ClientKeyboardListener::m_keycodeMap;

    // 0x100392ff0, 3808 bytes, placed by class name and debug map
    // ClientKeyboardListener::Init(jag::input::InputHandler*)
    void ClientKeyboardListener::Init(InputHandler* param_1) {
        int* piVar1;
        int* piVar2;
        ClientKeyboardListener* local_480;
        undefined8 local_478;
        undefined4 local_460;
        undefined4 local_45c;
        undefined4 local_458;
        undefined4 local_454;
        undefined4 local_450;
        undefined4 local_44c;
        undefined4 local_448;
        undefined4 local_444;
        undefined4 local_440;
        undefined4 local_43c;
        undefined4 local_438;
        undefined4 local_434;
        undefined4 local_430;
        undefined4 local_42c;
        undefined4 local_428;
        undefined4 local_424;
        undefined4 local_420;
        undefined4 local_41c;
        undefined4 local_418;
        undefined4 local_414;
        undefined4 local_410;
        undefined4 local_40c;
        undefined4 local_408;
        undefined4 local_404;
        undefined4 local_400;
        undefined4 local_3fc;
        undefined4 local_3f8;
        undefined4 local_3f4;
        undefined4 local_3f0;
        undefined4 local_3ec;
        undefined4 local_3e8;
        undefined4 local_3e4;
        undefined4 local_3e0;
        undefined4 local_3dc;
        undefined4 local_3d8;
        undefined4 local_3d4;
        undefined4 local_3d0;
        undefined4 local_3cc;
        undefined4 local_3c8;
        undefined4 local_3c4;
        undefined4 local_3c0;
        undefined4 local_3bc;
        undefined4 local_3b8;
        undefined4 local_3b4;
        undefined4 local_3b0;
        undefined4 local_3ac;
        undefined4 local_3a8;
        undefined4 local_3a4;
        undefined4 local_3a0;
        undefined4 local_39c;
        undefined4 local_398;
        undefined4 local_394;
        undefined4 local_390;
        undefined4 local_38c;
        undefined4 local_388;
        undefined4 local_384;
        undefined4 local_380;
        undefined4 local_37c;
        undefined4 local_378;
        undefined4 local_374;
        undefined4 local_370;
        undefined4 local_36c;
        undefined4 local_368;
        undefined4 local_364;
        undefined4 local_360;
        undefined4 local_35c;
        undefined4 local_358;
        undefined4 local_354;
        undefined4 local_350;
        undefined4 local_34c;
        undefined4 local_348;
        undefined4 local_344;
        undefined4 local_340;
        undefined4 local_33c;
        undefined4 local_338;
        undefined4 local_334;
        undefined4 local_330;
        undefined4 local_32c;
        undefined4 local_328;
        undefined4 local_324;
        undefined4 local_320;
        undefined4 local_31c;
        undefined4 local_318;
        undefined4 local_314;
        undefined4 local_310;
        undefined4 local_30c;
        undefined4 local_308;
        undefined4 local_304;
        ClientKeyboardListener* local_300;
        pair<int, int> local_2f8[8];
        pair<int, int> local_2f0[8];
        pair<int, int> local_2e8[8];
        pair<int, int> local_2e0[8];
        pair<int, int> local_2d8[8];
        pair<int, int> local_2d0[8];
        pair<int, int> local_2c8[8];
        pair<int, int> local_2c0[8];
        pair<int, int> local_2b8[8];
        pair<int, int> local_2b0[8];
        pair<int, int> local_2a8[8];
        pair<int, int> local_2a0[8];
        pair<int, int> local_298[8];
        pair<int, int> local_290[8];
        pair<int, int> local_288[8];
        pair<int, int> local_280[8];
        pair<int, int> local_278[8];
        pair<int, int> local_270[8];
        pair<int, int> local_268[8];
        pair<int, int> local_260[8];
        pair<int, int> local_258[8];
        pair<int, int> local_250[8];
        pair<int, int> local_248[8];
        pair<int, int> local_240[8];
        pair<int, int> local_238[8];
        pair<int, int> local_230[8];
        pair<int, int> local_228[8];
        pair<int, int> local_220[8];
        pair<int, int> local_218[8];
        pair<int, int> local_210[8];
        pair<int, int> local_208[8];
        pair<int, int> local_200[8];
        pair<int, int> local_1f8[8];
        pair<int, int> local_1f0[8];
        pair<int, int> local_1e8[8];
        pair<int, int> local_1e0[8];
        pair<int, int> local_1d8[8];
        pair<int, int> local_1d0[8];
        pair<int, int> local_1c8[8];
        pair<int, int> local_1c0[8];
        pair<int, int> local_1b8[8];
        pair<int, int> local_1b0[8];
        pair<int, int> local_1a8[8];
        pair<int, int> local_1a0[8];
        pair<int, int> local_198[8];
        pair<int, int> local_190[8];
        pair<int, int> local_188[8];
        pair<int, int> local_180[8];
        pair<int, int> local_178[8];
        pair<int, int> local_170[8];
        pair<int, int> local_168[8];
        pair<int, int> local_160[8];
        pair<int, int> local_158[8];
        pair<int, int> local_150[8];
        pair<int, int> local_148[8];
        pair<int, int> local_140[8];
        pair<int, int> local_138[8];
        pair<int, int> local_130[8];
        pair<int, int> local_128[8];
        pair<int, int> local_120[8];
        pair<int, int> local_118[8];
        pair<int, int> local_110[8];
        pair<int, int> local_108[8];
        pair<int, int> local_100[8];
        pair<int, int> local_f8[8];
        pair<int, int> local_f0[8];
        pair<int, int> local_e8[8];
        pair<int, int> local_e0[8];
        pair<int, int> local_d8[8];
        pair<int, int> local_d0[8];
        pair<int, int> local_c8[8];
        pair<int, int> local_c0[8];
        pair<int, int> local_b8[8];
        pair<int, int> local_b0[8];
        pair<int, int> local_a8[8];
        pair<int, int> local_a0[8];
        pair<int, int> local_98[8];
        pair<int, int> local_90[8];
        pair<int, int> local_88[8];
        pair<int, int> local_80[8];
        pair<int, int> local_78[8];
        pair<int, int> local_70[8];
        pair<int, int> local_68[8];
        pair<int, int> local_60[8];
        pair<int, int> local_58[8];
        pair<int, int> local_50[8];
        pair<int, int> local_48[8];
        pair<int, int> local_40[8];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_208 = param_1;
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
        *(undefined8*)((long)&field_304 + 4) = 0;
        field_316 = 0;
        local_480 = (ClientKeyboardListener*)HandleKeyUp;
        local_478 = 0;
        local_300 = this;
        std::bind<bool (ClientKeyboardListener::*)(int), ClientKeyboardListener*, std::placeholders::__ph<1> const&>(
            (_func_bool_int*)local_2f8, &local_480, (__ph*)&local_300);
        std::function<bool(int)>::operator=((function<bool(int)>*)&field_64, local_2f8);
        local_480 = (ClientKeyboardListener*)HandleKeyDown;
        local_478 = 0;
        local_300 = this;
        std::bind<bool (ClientKeyboardListener::*)(int), ClientKeyboardListener*, std::placeholders::__ph<1> const&>(
            (_func_bool_int*)local_2f8, &local_480, (__ph*)&local_300);
        std::function<bool(int)>::operator=((function<bool(int)>*)&field_16, local_2f8);
        local_480 = (ClientKeyboardListener*)HandleKeyChar;
        local_478 = 0;
        local_300 = this;
        std::bind<bool (ClientKeyboardListener::*)(int), ClientKeyboardListener*, std::placeholders::__ph<1> const&>(
            (_func_bool_int*)local_2f8, &local_480, (__ph*)&local_300);
        std::function<bool(int)>::operator=((function<bool(int)>*)&field_112, local_2f8);
        local_480 = (ClientKeyboardListener*)HandleTextCommand;
        local_478 = 0;
        local_300 = this;
        std::bind<bool (ClientKeyboardListener::*)(jag::input::TextCommand), ClientKeyboardListener*,
                  std::placeholders::__ph<1> const&>((_func_bool_TextCommand*)local_2f8, &local_480, (__ph*)&local_300);
        std::function<bool(jag::input::TextCommand)>::operator=((function<bool(jag::input::TextCommand)>*)&field_160,
                                                                local_2f8);
        param_1->RegisterKeyDown((function*)&field_16);
        param_1->RegisterKeyUp((function*)&field_64);
        param_1->RegisterKeyChar((function*)&field_112);
        param_1->RegisterTextCommand((function*)&field_160);
        local_460 = 1;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2f8, &jag::input::NOWARN_KEY_F1,
                                                                                (_unnamed*)&local_460);
        local_45c = 2;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2f0, &jag::input::NOWARN_KEY_F2,
                                                                                (_unnamed*)&local_45c);
        local_458 = 3;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2e8, &jag::input::NOWARN_KEY_F3,
                                                                                (_unnamed*)&local_458);
        local_454 = 4;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2e0, &jag::input::NOWARN_KEY_F4,
                                                                                (_unnamed*)&local_454);
        local_450 = 5;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2d8, &jag::input::NOWARN_KEY_F5,
                                                                                (_unnamed*)&local_450);
        local_44c = 6;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2d0, &jag::input::NOWARN_KEY_F6,
                                                                                (_unnamed*)&local_44c);
        local_448 = 7;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2c8, &jag::input::NOWARN_KEY_F7,
                                                                                (_unnamed*)&local_448);
        local_444 = 8;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2c0, &jag::input::NOWARN_KEY_F8,
                                                                                (_unnamed*)&local_444);
        local_440 = 9;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2b8, &jag::input::NOWARN_KEY_F9,
                                                                                (_unnamed*)&local_440);
        local_43c = 10;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2b0, &jag::input::NOWARN_KEY_F10,
                                                                                (_unnamed*)&local_43c);
        local_438 = 11;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2a8, &jag::input::NOWARN_KEY_F11,
                                                                                (_unnamed*)&local_438);
        local_434 = 12;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_2a0, &jag::input::NOWARN_KEY_F12,
                                                                                (_unnamed*)&local_434);
        local_430 = 13;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_298, &jag::input::NOWARN_KEY_ESCAPE, (_unnamed*)&local_430);
        local_42c = 16;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_290, &jag::input::NOWARN_KEY_1,
                                                                                (_unnamed*)&local_42c);
        local_428 = 17;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_288, &jag::input::NOWARN_KEY_2,
                                                                                (_unnamed*)&local_428);
        local_424 = 18;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_280, &jag::input::NOWARN_KEY_3,
                                                                                (_unnamed*)&local_424);
        local_420 = 19;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_278, &jag::input::NOWARN_KEY_4,
                                                                                (_unnamed*)&local_420);
        local_41c = 20;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_270, &jag::input::NOWARN_KEY_5,
                                                                                (_unnamed*)&local_41c);
        local_418 = 21;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_268, &jag::input::NOWARN_KEY_6,
                                                                                (_unnamed*)&local_418);
        local_414 = 22;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_260, &jag::input::NOWARN_KEY_7,
                                                                                (_unnamed*)&local_414);
        local_410 = 23;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_258, &jag::input::NOWARN_KEY_8,
                                                                                (_unnamed*)&local_410);
        local_40c = 24;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_250, &jag::input::NOWARN_KEY_9,
                                                                                (_unnamed*)&local_40c);
        local_408 = 25;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_248, &jag::input::NOWARN_KEY_0,
                                                                                (_unnamed*)&local_408);
        local_404 = 26;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_240, &jag::input::NOWARN_KEY_MINUS, (_unnamed*)&local_404);
        local_400 = 27;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_238, &jag::input::NOWARN_KEY_EQUALS, (_unnamed*)&local_400);
        local_3fc = 32;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_230, &jag::input::NOWARN_KEY_Q,
                                                                                (_unnamed*)&local_3fc);
        local_3f8 = 33;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_228, &jag::input::NOWARN_KEY_W,
                                                                                (_unnamed*)&local_3f8);
        local_3f4 = 34;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_220, &jag::input::NOWARN_KEY_E,
                                                                                (_unnamed*)&local_3f4);
        local_3f0 = 35;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_218, &jag::input::NOWARN_KEY_R,
                                                                                (_unnamed*)&local_3f0);
        local_3ec = 36;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_210, &jag::input::NOWARN_KEY_T,
                                                                                (_unnamed*)&local_3ec);
        local_3e8 = 37;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_208, &jag::input::NOWARN_KEY_Y,
                                                                                (_unnamed*)&local_3e8);
        local_3e4 = 38;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_200, &jag::input::NOWARN_KEY_U,
                                                                                (_unnamed*)&local_3e4);
        local_3e0 = 39;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1f8, &jag::input::NOWARN_KEY_I,
                                                                                (_unnamed*)&local_3e0);
        local_3dc = 40;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1f0, &jag::input::NOWARN_KEY_O,
                                                                                (_unnamed*)&local_3dc);
        local_3d8 = 41;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1e8, &jag::input::NOWARN_KEY_P,
                                                                                (_unnamed*)&local_3d8);
        local_3d4 = 42;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_1e0, &jag::input::NOWARN_KEY_LEFT_BRACKET, (_unnamed*)&local_3d4);
        local_3d0 = 43;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_1d8, &jag::input::NOWARN_KEY_RIGHT_BRACKET, (_unnamed*)&local_3d0);
        local_3cc = 48;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1d0, &jag::input::NOWARN_KEY_A,
                                                                                (_unnamed*)&local_3cc);
        local_3c8 = 49;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1c8, &jag::input::NOWARN_KEY_S,
                                                                                (_unnamed*)&local_3c8);
        local_3c4 = 50;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1c0, &jag::input::NOWARN_KEY_D,
                                                                                (_unnamed*)&local_3c4);
        local_3c0 = 51;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1b8, &jag::input::NOWARN_KEY_F,
                                                                                (_unnamed*)&local_3c0);
        local_3bc = 52;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1b0, &jag::input::NOWARN_KEY_G,
                                                                                (_unnamed*)&local_3bc);
        local_3b8 = 53;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1a8, &jag::input::NOWARN_KEY_H,
                                                                                (_unnamed*)&local_3b8);
        local_3b4 = 54;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_1a0, &jag::input::NOWARN_KEY_J,
                                                                                (_unnamed*)&local_3b4);
        local_3b0 = 55;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_198, &jag::input::NOWARN_KEY_K,
                                                                                (_unnamed*)&local_3b0);
        local_3ac = 56;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_190, &jag::input::NOWARN_KEY_L,
                                                                                (_unnamed*)&local_3ac);
        local_3a8 = 57;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_188, &jag::input::NOWARN_KEY_SEMICOLON, (_unnamed*)&local_3a8);
        local_3a4 = 58;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_180, &jag::input::NOWARN_KEY_APOSTROPHE, (_unnamed*)&local_3a4);
        local_3a0 = 64;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_178, &jag::input::NOWARN_KEY_Z,
                                                                                (_unnamed*)&local_3a0);
        local_39c = 65;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_170, &jag::input::NOWARN_KEY_X,
                                                                                (_unnamed*)&local_39c);
        local_398 = 66;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_168, &jag::input::NOWARN_KEY_C,
                                                                                (_unnamed*)&local_398);
        local_394 = 67;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_160, &jag::input::NOWARN_KEY_V,
                                                                                (_unnamed*)&local_394);
        local_390 = 68;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_158, &jag::input::NOWARN_KEY_B,
                                                                                (_unnamed*)&local_390);
        local_38c = 69;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_150, &jag::input::NOWARN_KEY_N,
                                                                                (_unnamed*)&local_38c);
        local_388 = 70;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_148, &jag::input::NOWARN_KEY_M,
                                                                                (_unnamed*)&local_388);
        local_384 = 71;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_140, &jag::input::NOWARN_KEY_COMMA, (_unnamed*)&local_384);
        local_380 = 72;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_138, &jag::input::NOWARN_KEY_PERIOD, (_unnamed*)&local_380);
        local_37c = 73;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_130, &jag::input::NOWARN_KEY_SLASH, (_unnamed*)&local_37c);
        local_378 = 80;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_128, &jag::input::NOWARN_KEY_TAB,
                                                                                (_unnamed*)&local_378);
        local_374 = 81;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_120, &jag::input::NOWARN_KEY_SHIFT_LEFT, (_unnamed*)&local_374);
        local_370 = 81;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_118, &jag::input::NOWARN_KEY_SHIFT_RIGHT, (_unnamed*)&local_370);
        local_36c = 82;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_110, &jag::input::NOWARN_KEY_CONTROL_LEFT, (_unnamed*)&local_36c);
        local_368 = 82;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_108, &jag::input::NOWARN_KEY_CONTROL_RIGHT, (_unnamed*)&local_368);
        local_364 = 83;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_100, &jag::input::NOWARN_KEY_SPACE, (_unnamed*)&local_364);
        local_360 = 84;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_f8, &jag::input::NOWARN_KEY_RETURN, (_unnamed*)&local_360);
        local_35c = 85;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_f0, &jag::input::NOWARN_KEY_BACKSPACE, (_unnamed*)&local_35c);
        local_358 = 86;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_e8, &jag::input::NOWARN_KEY_ALT_LEFT, (_unnamed*)&local_358);
        local_354 = 86;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_e0, &jag::input::NOWARN_KEY_ALT_RIGHT, (_unnamed*)&local_354);
        local_350 = 59;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_d8, &jag::input::NOWARN_KEY_HASH,
                                                                                (_unnamed*)&local_350);
        local_34c = 74;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_d0, &jag::input::NOWARN_KEY_BACKSLASH, (_unnamed*)&local_34c);
        local_348 = 87;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_c8, &jag::input::NOWARN_KEY_NUMPAD_ADD, (_unnamed*)&local_348);
        local_344 = 88;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_c0, &jag::input::NOWARN_KEY_NUMPAD_SUBTRACT, (_unnamed*)&local_344);
        local_340 = 89;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_b8, &jag::input::NOWARN_KEY_NUMPAD_MULTIPLY, (_unnamed*)&local_340);
        local_33c = 90;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_b0, &jag::input::NOWARN_KEY_NUMPAD_DIVIDE, (_unnamed*)&local_33c);
        local_338 = 91;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_a8, &jag::input::NOWARN_KEY_NUMPAD5, (_unnamed*)&local_338);
        local_334 = 96;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_a0, &jag::input::NOWARN_KEY_LEFT,
                                                                                (_unnamed*)&local_334);
        local_330 = 97;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_98, &jag::input::NOWARN_KEY_RIGHT,
                                                                                (_unnamed*)&local_330);
        local_32c = 98;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_90, &jag::input::NOWARN_KEY_UP,
                                                                                (_unnamed*)&local_32c);
        local_328 = 99;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_88, &jag::input::NOWARN_KEY_DOWN,
                                                                                (_unnamed*)&local_328);
        local_324 = 100;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_80, &jag::input::NOWARN_KEY_INSERT, (_unnamed*)&local_324);
        local_320 = 101;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_78, &jag::input::NOWARN_KEY_DEL,
                                                                                (_unnamed*)&local_320);
        local_31c = 102;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_70, &jag::input::NOWARN_KEY_HOME,
                                                                                (_unnamed*)&local_31c);
        local_318 = 103;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(local_68, &jag::input::NOWARN_KEY_END,
                                                                                (_unnamed*)&local_318);
        local_314 = 104;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_60, &jag::input::NOWARN_KEY_PAGE_UP, (_unnamed*)&local_314);
        local_310 = 105;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_58, &jag::input::NOWARN_KEY_PAGE_DOWN, (_unnamed*)&local_310);
        local_30c = 106;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_50, &jag::input::NOWARN_KEY_CONSOLE, (_unnamed*)&local_30c);
        local_308 = 107;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_48, &jag::input::NOWARN_KEY_WIN_LEFT, (_unnamed*)&local_308);
        local_304 = 107;
        std::pair<int, int>::pair<int const&, KeyCode::_unnamed_type_1_, false>(
            local_40, (int*)&jag::input::NOWARN_KEY_WIN_RIGHT, (_unnamed*)&local_304);
        new (&local_300) eastl::allocator("EASTL vector");
        eastl::vector<std::pair<int, int>, eastl::allocator>::vector((Layout*)&local_480, local_2f8, 88,
                                                                     (allocator*)&local_300);
        piVar1 = (int*)local_480.HeapBeginPtr();
        piVar2 = (int*)local_480.end();
        if (piVar1 != piVar2) {
            do {
                if (*piVar1 != -1) {
                    eastl::hashtable<int, eastl::pair<int const, int>, eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, true,
                                     true>::emplace<int const&, int const&>((int*)local_2f8, (int*)&m_keycodeMap);
                }
                piVar1 = piVar1 + 2;
            } while (piVar1 != piVar2);
        }
        local_480.~vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100393ef0, 48 bytes, placed by class name and debug map
    // ClientKeyboardListener::HandleKeyUp(int)
    undefined8 ClientKeyboardListener::HandleKeyUp(int param_1) {
        uint uVar1;

        uVar1 = GetClientKeyCode(this, param_1);
        if (0 < (int)uVar1) {
            if (0 < (int)(uVar1 & 4294967167)) {
                ReleaseKeyCode(this, uVar1 & 4294967167);
            }
        }
        return 1;
    }

    // 0x100393f90, 48 bytes, placed by class name and debug map
    // ClientKeyboardListener::HandleKeyDown(int)
    undefined4 ClientKeyboardListener::HandleKeyDown(int param_1) {
        int iVar1;

        iVar1 = GetClientKeyCode(this, param_1);
        if (-1 < (char)iVar1) {
            PressKeyCode(this, iVar1);
        }
        return 1;
    }

    // 0x100393fc0, 80 bytes, placed by class name and debug map
    // ClientKeyboardListener::HandleKeyChar(int)
    undefined4 ClientKeyboardListener::HandleKeyChar(int param_1) {
        undefined** ppuVar1;
        undefined4 uVar2;
        undefined8 uVar3;
        InputListener* this_00;

        this_00 = (InputListener*)(ulong)(uint)param_1;
        uVar2 = core::stringtools::general::CP1252Tools::CanEncodeToCP1252(param_1);
        if ((char)uVar2 != '\0') {
            ppuVar1 = field_0;
            uVar3 = this_00->GetCurrentTimeMS();
            (**(code**)(*ppuVar1 + 24))(ppuVar1, param_1 & 65535, uVar3);
        }
        return uVar2;
    }

    // 0x100394030, 48 bytes, placed by class name and debug map
    // ClientKeyboardListener::HandleTextCommand(jag::input::TextCommand)
    undefined1 ClientKeyboardListener::HandleTextCommand(undefined4 param_2) {
        undefined** ppuVar1;
        undefined8 uVar2;

        ppuVar1 = field_0;
        uVar2 = GetCurrentTimeMS();
        (**(code**)(*ppuVar1 + 88))(ppuVar1, param_2, uVar2);
        return 1;
    }

    // 0x1003941d0, 80 bytes, placed by class name and debug map
    // ClientKeyboardListener::Destroy()
    void ClientKeyboardListener::Destroy() {
        if (field_208 != (InputHandler*)0) {
            (field_208, (function*)&field_16)->UnregisterKeyDown();
            (field_208, (function*)&field_64)->UnregisterKeyUp();
            (field_208, (function*)&field_112)->UnregisterKeyChar();
        }
    }

    // 0x100394280, 32 bytes, placed by class name and debug map
    // ClientKeyboardListener::IsAltDown()
    undefined1 ClientKeyboardListener::IsAltDown() {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_216, 86);
        return *puVar1;
    }

    // 0x1003942b0, 32 bytes, placed by class name and debug map
    // ClientKeyboardListener::IsCtrlDown()
    undefined1 ClientKeyboardListener::IsCtrlDown() {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_216, 82);
        return *puVar1;
    }

    // 0x1003942d0, 32 bytes, placed by class name and debug map
    // ClientKeyboardListener::IsShiftDown()
    undefined1 ClientKeyboardListener::IsShiftDown() {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)&field_216, 81);
        return *puVar1;
    }

    // 0x1003942f0, 112 bytes, placed by class name and debug map
    // ClientKeyboardListener::GetClientKeyCode(int) const
    undefined4 ClientKeyboardListener::GetClientKeyCode(int param_1) {
        bool bVar1;
        undefined4 uVar2;
        long lVar3;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[20];
        int local_24;

        local_24 = param_1;
        eastl::hashtable<int, eastl::pair<int const, int>, BucketAllocatorEASTL,
                         eastl::use_first<eastl::pair<int const, int>>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         true>::find((int*)local_38);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator==(local_38, local_48, extraout_RDX);
        uVar2 = 4294967295;
        if (!bVar1) {
            lVar3 = local_38->HeapBeginPtr();
            uVar2 = *(undefined4*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x100394360, 192 bytes, placed by class name and debug map
    // ClientKeyboardListener::PressKeyCode(int)
    void ClientKeyboardListener::PressKeyCode(int param_1) {
        undefined8* this_00;
        undefined** ppuVar1;
        char* pcVar2;
        undefined8 uVar3;
        InputListener* this_01;

        this_00 = &field_216;
        this_01 = (InputListener*)this_00;
        pcVar2 = (char*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)this_00, (long)param_1);
        if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
            ppuVar1 = field_0;
            uVar3 = this_01->GetCurrentTimeMS();
            (**(code**)*ppuVar1)(ppuVar1, param_1, uVar3);
        } else {
            ppuVar1 = field_0;
            uVar3 = this_01->GetCurrentTimeMS();
            (**(code**)(*ppuVar1 + 8))(ppuVar1, param_1, uVar3);
        }
        pcVar2 = (char*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)this_00, 82);
        if (*pcVar2 != '\0') {
            pcVar2 = (char*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)this_00, 86);
            if (*pcVar2 != '\0') {
                pcVar2 = (char*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)this_00, 81);
                if (*pcVar2 != '\0') {
                    pcVar2 = (char*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)this_00, 66);
                    if (*pcVar2 != '\0') {
                        m_forceCrashDown = 1;
                    }
                }
            }
        }
    }

    // 0x100394420, 96 bytes, placed by class name and debug map
    // ClientKeyboardListener::ReleaseKeyCode(int)
    void ClientKeyboardListener::ReleaseKeyCode(int param_1) {
        undefined** ppuVar1;
        char* pcVar2;
        undefined8 uVar3;
        InputListener* this_00;

        this_00 = (InputListener*)&field_216;
        pcVar2 = (char*)std::array<bool, 108ul>::operator[]((array<bool, 108ul>*)this_00, (long)param_1);
        if (*pcVar2 != '\0') {
            *pcVar2 = '\0';
            if ((param_1 - 66U < 21) && ((1146881U >> (param_1 - 66U & 31) & 1) != 0)) {
                m_forceCrashDown = 0;
            }
            ppuVar1 = field_0;
            uVar3 = this_00->GetCurrentTimeMS();
            (**(code**)(*ppuVar1 + 16))(ppuVar1, param_1, uVar3);
        }
    }

    // 0x1003944c0, 16 bytes, placed by class name and debug map
    // ClientKeyboardListener::IsForceCrashDown()
    undefined1 ClientKeyboardListener::IsForceCrashDown() {
        return m_forceCrashDown;
    }

    // 0x1003944d0, 48 bytes, placed by class name and debug map
    // ClientKeyboardListener::ReleaseAllKeys()
    void ClientKeyboardListener::ReleaseAllKeys() {
        long lVar1;

        lVar1 = 0;
        do {
            ReleaseKeyCode(this, (int)lVar1);
            lVar1 = lVar1 + 1;
        } while (lVar1 != 108);
    }

    // 0x1003a0f40, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.105
    void ___cxx_global_var_init_105() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&ClientKeyboardListener::m_keycodeMap)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6da8, &ClientKeyboardListener::m_keycodeMap, 4294967296);
    }

} // namespace jag::oldscape::input
