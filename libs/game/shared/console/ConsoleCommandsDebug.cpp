// libs/game/shared/console/ConsoleCommandsDebug.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

namespace jag::console::internal {
    // 0x1006ef2b0
    eastl::fixed_vector<CommandArgInfo, 4ul>
    BuildArgInfos<std::optional<bool>>(std::tuple<std::optional<bool>>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<std::optional<bool>>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x1006efd50
    auto DecodeArgs<std::optional<bool>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<std::optional<bool>>* tuple) {
        unsigned short local_c;

        auto aVar1 = DecodeArg<std::optional<bool>>(argDecodingErrors, console, argDecodingError, 0);
        uint16_t local_a = (uint16_t)aVar1;
        local_c.tuple<std::optional<bool>, 0>(local_a);
        return (auto)local_c;
    }

    // 0x1006efda0
    auto DecodeArg<std::optional<bool>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        auto aVar1;
        uint64_t in_RAX;

        uint64_t uStack_38 = in_RAX;
        unsigned long uVar2 = argDecodingError.size();
        if ((unsigned int)arg4 < uVar2) {
            aVar1 = DecodeArg<bool>(argDecodingErrors, console, argDecodingError, arg4);
            uStack_38 = (((uint64_t)((char)aVar1) << 56) | (uint64_t)((uint64_t)uStack_38));
            ((optional<bool>*)((long)&uStack_38 + 4))->optional<bool, 0>(*((bool*)((long)&uStack_38 + 7)));
        } else {
            new ((optional<bool>*)((long)&uStack_38 + 4)) std::optional();
        }
        return (auto)uStack_38._4_2_;
    }

    // 0x1006efe20
    auto DecodeArg<bool>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        uint32_t uVar1;
        bool cVar3;
        bool bVar4;
        StringView* pSVar7;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* arg1;
        char* pcVar8;
        StringView local_d8;
        fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator>* local_c8;
        char* local_c0;
        StringView local_b0;

        int local_b4 = arg4;
        unsigned long uVar6 = argDecodingError.size();
        if ((unsigned int)arg4 < uVar6) {
            local_c8 = argDecodingErrors;
            pSVar7 = &argDecodingError[(long)local_b4];
            local_d8 = StringView(*pSVar7);
            local_b0 = console.FindStoredVariable(&local_d8);
            cVar3 = std::optional::operator_cast_to_bool(&local_b0);
            uVar1 = (uint32_t)((unsigned int)arg4 >> 8);
            if (!cVar3) {
                local_c0 = (char*)((unsigned long)local_c0 & 18446744073709551360);
                pSVar7 = &argDecodingError[(long)local_b4];
                bVar4 = FromString<StringView, bool>(pSVar7, (bool*)&local_c0, 10);
                arg4 = (((uint32_t)uVar1 << 8) | (uint8_t)((char)local_c0 != '\0'));
                if (bVar4)
                    goto LAB_1006efedc;
            LAB_1006eff20:
                bVar4 = true;
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                pcVar8 = (char*)std::get_if<bool, int, unsigned int, bool, float, eastl::string, VarAny>(arg1);
                if ((pcVar8 == nullptr) ||
                    (arg4 = (((uint32_t)uVar1 << 8) | (uint8_t)(*pcVar8 != '\0')), pcVar8 == nullptr))
                    goto LAB_1006eff20;
            LAB_1006efedc:
                bVar4 = false;
            }
            argDecodingErrors = local_c8;
            if (!bVar4)
                goto LAB_1006effa4;
        }
        local_c0 = GetTypeName<bool>();
        int iVar2 = local_b4;
        int iVar5 = argDecodingError.size();
        if (iVar2 < iVar5) {
            pSVar7 = &argDecodingError[(long)local_b4];
            local_b0 = StringView(*pSVar7);
        } else {
            local_b0.StringView<13ul>("<lt>null<gt>");
        }
        argDecodingErrors.emplace_back<char const*, StringView const, int&>(local_c0, local_b0, local_b4);
        arg4 = 0;
    LAB_1006effa4:
        return arg4 & 4294967041;
    }

    // 0x1006f0b10
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<eastl::string const&, std::optional<bool>>(
        std::tuple<eastl::string const&, std::optional<bool>>* tuple) {
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;

        uint64_t local_40 = GetArgInfo<eastl::stringconst&>();
        uint8_t local_38 = extraout_DL;
        uint64_t local_30 = GetArgInfo<std::optional<bool>>();
        uint8_t local_28 = extraout_DL_00;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_40, *2);
        return tuple;
    }

    // 0x1006f1600
    auto DecodeArgs<eastl::string const&, std::optional<bool>>(
        eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors, const Console& console,
        const ArgDecodingError<StringView, 4ul, true>& argDecodingError,
        std::tuple<eastl::string const&, std::optional<bool>>* tuple) {
        tuple<eastl::string, std::optional<bool>> local_78;
        fixed_vector<ArgDecodingError, _4ul> local_50;

        DecodeArg<eastl::stringconst&>(&local_50, console, argDecodingError, (int)tuple);
        auto aVar1 = DecodeArg<std::optional<bool>>(
            (fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator>*)console,
            (Console*)argDecodingError,
            (ArgDecodingError<StringView, _4ul, true,
                              eastl::fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator> _>*)
                tuple,
            1);
        uint16_t local_2a = (uint16_t)aVar1;
        local_78.tuple<eastl::string, std::optional<bool>, 0>(local_50, local_2a);
        new (argDecodingErrors) std::tuple<eastl::string, std::optional<bool>>(local_78);
        return (auto)argDecodingErrors;
    }

    // 0x1006f16e0
    auto DecodeArg<eastl::string const&>(eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors,
                                         const Console& console,
                                         const ArgDecodingError<StringView, 4ul, true>& argDecodingError, int arg4) {
        int iVar4;
        StringView* pSVar6;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* arg1;
        eastl::string* str;
        uint32_t in_register_0000000c;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* vector;
        StringView local_f0;
        char* local_e0[4];
        Console* local_c0;
        StringView local_b0;

        vector =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000000c
                                                                                       << 32) |
                                                                                      (uint32_t)arg4);
        if (vector->size() == 0) {
        LAB_1006f181c:
            local_e0[0] = GetTypeName<eastl::string>();
            iVar4 = vector->size();
            if (0 < iVar4) {
                pSVar6 = (StringView*)(*vector)[(long)0];
                local_b0 = StringView(*pSVar6);
            } else {
                local_b0.StringView<13ul>("<lt>null<gt>");
            }
            console.emplace_back<char const*, StringView const, int&>(*local_e0, local_b0, 0);
            new (argDecodingErrors) eastl::string();
        } else {
            local_c0 = console;
            pSVar6 = (StringView*)(*vector)[(long)0];
            local_f0 = StringView(*pSVar6);
            local_b0 = argDecodingError.FindStoredVariable(&local_f0);
            if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
                new (local_e0) eastl::string();
                pSVar6 = (StringView*)(*vector)[(long)0];
                console = local_c0;
                if (!FromString<StringView, eastl::string>(pSVar6, (eastl::string*)local_e0, 10)) {
                    goto LAB_1006f1810;
                }
                new (argDecodingErrors) eastl::string(*local_e0);
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                str = (eastl::string*)std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(
                    arg1);
                console = local_c0;
                if (str == nullptr) {
                LAB_1006f1810:
                    goto LAB_1006f181c;
                }
                new (argDecodingErrors) eastl::string(*str);
            }
        }
        return (auto)argDecodingErrors;
    }

    // 0x1006f6b30
    eastl::fixed_vector<CommandArgInfo, 4ul>
    BuildArgInfos<eastl::string const&>(std::tuple<eastl::string const&>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<eastl::stringconst&>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x1006f7610
    auto DecodeArgs<eastl::string const&>(eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors,
                                          const Console& console,
                                          const ArgDecodingError<StringView, 4ul, true>& argDecodingError,
                                          std::tuple<eastl::string const&>* tuple) {
        tuple<eastl::string> local_60;
        fixed_vector<ArgDecodingError, _4ul> local_40;

        DecodeArg<eastl::stringconst&>(&local_40, console, argDecodingError, (int)tuple);
        local_60.tuple<eastl::string, 0>(local_40);
        new (argDecodingErrors) std::tuple<eastl::string>(local_60);
        return (auto)argDecodingErrors;
    }

    // 0x1006f78d0
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
        std::tuple<eastl::fixed_vector<StringView, 4ul> const&>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<eastl::fixed_vector<StringView, 4ul> const&>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x1006f8370
    auto DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(
        eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors, const Console& console,
        const eastl::fixed_vector<StringView, 4ul>& stringViews,
        std::tuple<eastl::fixed_vector<StringView, 4ul> const&>* tuple) {
        uint32_t extraout_var;
        return local_18;

        auto aVar1 =
            DecodeArg<eastl::fixed_vector<StringView, 4ul> const&>(argDecodingErrors, console, stringViews, (int)tuple);
        uint64_t local_10 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>::tuple<
            std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>, 0>(
            &local_18, (reference_wrapper<eastl::fixed_vector<StringView, _4ul> const>*)&local_10);
        return local_18[0];
    }

    // 0x1006f83d0
    auto DecodeArg<eastl::fixed_vector<StringView, 4ul> const&>(
        eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors, const Console& console,
        const eastl::fixed_vector<StringView, 4ul>& stringViews, int arg4) {
        return std::ref<eastl::fixed_vector<StringView, 4ul> const>(argDecodingErrors);
    }

} // namespace jag::console::internal

namespace jag::game {
    // 0x1006dc2c0
    void RegisterCommonCommandsDebug(jag::console::Console* console, BaseApp* baseApp, graphics::RT7Core* rt7Core) {
        int in_ECX;
        uint32_t in_register_0000000c;
        char* str;
        char* str_00;
        char* str_01;
        char* str_02;
        char* str_03;
        char* str_04;
        char* str_05;
        char* str_06;
        char* str_07;
        char* str_08;
        char* str_09;
        char* str_10;
        char* str_11;
        char* str_12;
        char* str_13;
        char* str_14;
        char* str_15;
        int in_R8D;

        Console* pCVar1 = console;
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__0>(
            (RegisteredCommand*)console, console, (char*)rt7Core,
            (__0*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__1>(
            (RegisteredCommand*)console, pCVar1, str, (__1*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX),
            in_R8D);
        RegisteredCommand local_58 = (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__2>(
            (RegisteredCommand*)console, pCVar1, str_00,
            (__2*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        RegisteredCommand local_38 = (RegisteredCommand)4309533054;
        pCVar1 = (Console*)&local_38;
        local_58.SetArgNames(pCVar1);
        local_38 = (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__3>(
            (RegisteredCommand*)console, pCVar1, str_01,
            (__3*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        local_58 = (RegisteredCommand)4309897557;
        char* pcStack_50 = "verbose";
        pCVar1 = (Console*)&local_58;
        local_38.SetArgNames(pCVar1);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__4>(
            (RegisteredCommand*)console, pCVar1, str_02,
            (__4*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__5>(
            (RegisteredCommand*)console, pCVar1, str_03,
            (__5*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        local_58 = (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__6>(
            (RegisteredCommand*)console, console, str_04,
            (__6*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        local_38 = (RegisteredCommand)4309897557;
        local_58.SetArgNames(&local_38);
        pCVar1 = console;
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__7>(
            (RegisteredCommand*)console, console, str_05,
            (__7*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__8>(
            (RegisteredCommand*)console, pCVar1, str_06,
            (__8*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__9>((RegisteredCommand*)console, (char*)rt7Core,
                                                                        (__9*)console, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__10>((RegisteredCommand*)console, (char*)rt7Core,
                                                                         (__10*)console, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__11>((RegisteredCommand*)console, (char*)rt7Core,
                                                                         (__11*)console, in_ECX);
        local_58 = (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__12>((RegisteredCommand*)console, (char*)rt7Core,
                                                                         (__12*)console, in_ECX);
        local_38 = (RegisteredCommand)4309533200;
        local_58.SetArgNames(&local_38);
        local_58 = (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__13>((RegisteredCommand*)console, (char*)rt7Core,
                                                                         (__13*)console, in_ECX);
        local_38 = (RegisteredCommand)4309533200;
        local_58.SetArgNames(&local_38);
        local_38 = (RegisteredCommand)jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__14>((RegisteredCommand*)console, (char*)rt7Core,
                                                                         (__14*)console, in_ECX);
        char* local_48 = "width";
        char* pcStack_40 = "height";
        local_58 = (RegisteredCommand)&DAT_100e54345;
        pcStack_50 = "y";
        local_38.SetArgNames(&local_58);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__15>((RegisteredCommand*)console, (char*)rt7Core,
                                                                         (__15*)console, in_ECX);
        pCVar1 = console;
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*, graphics::RT7Core*)::__16>((RegisteredCommand*)console, (char*)console,
                                                                         (__16*)baseApp, in_ECX);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__17>(
            (RegisteredCommand*)console, pCVar1, str_07,
            (__17*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__18>(
            (RegisteredCommand*)console, pCVar1, str_08,
            (__18*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__19>(
            (RegisteredCommand*)console, pCVar1, str_09,
            (__19*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__20>(
            (RegisteredCommand*)console, pCVar1, str_10,
            (__20*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__21>(
            (RegisteredCommand*)console, pCVar1, str_11,
            (__21*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__22>(
            (RegisteredCommand*)console, (Console*)rt7Core, str_12,
            (__22*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__23>(
            (RegisteredCommand*)console, (Console*)rt7Core, str_13,
            (__23*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__24>(
            (RegisteredCommand*)console, (Console*)rt7Core, str_14,
            (__24*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
        jag::console::Console::AddCommand<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::__25>(
            (RegisteredCommand*)console, (Console*)rt7Core, str_15,
            (__25*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)in_ECX), in_R8D);
    }

    // 0x1006ec970
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_0::operator()() const {
        Console* this_00;
        HeapInterface* this_01;
        function<void(char const*, unsigned long)> local_3f8[56];
        long local_28;

        auto filename = SystemPaths::GetCacheFolder();
        Filename local_158(filename);
        auto pLVar2 = logger::default_logger();
        auto pcVar3 = local_158.GetName();
        pLVar2->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                    "ConsoleCommandsDebug.cpp",
                    24, "Cache folder at: %s", pcVar3);
        auto local_288 = local_158 + "/MemoryDump.xml";
        pcVar3 = local_288.GetName();
        ClientCompositeZone local_3c0(pcVar3, 1538, nullptr);
        if (!(local_3c0.IsValid())) {
            local_3c0.create(nullptr);
        }
        if (local_3c0.IsValid()) {
            this_01 = HeapInterface::Instance();
            std::function<void(char const*, unsigned long)>::operator()(local_3f8, &local_3c0);
            this_01->SaveMemoryUsageToXML(*local_3f8);
            pLVar2 = logger::default_logger();
            pcVar3 = local_288.GetName();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "ConsoleCommandsDebug.cpp",
                        38, "Wrote memory dump at file : %s", pcVar3);
            this_00 = *(Console**)this;
            pcVar3 = local_288.GetName();
            this_00->AddMessage(2, "Wrote memory dump at file : %s", pcVar3);
        }
    }

    // 0x1006ed4f0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_0::operator()() const ::{
        lambda(char const*, unsigned long) #1
    }
    ::operator()(const char* str, unsigned long arg2) const {
        (*(File**)this)->write(str, (unsigned int)arg2, nullptr);
    }

    // 0x1006ef1a0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_1::operator()() const {
        auto pHVar1 = HeapInterface::Instance();
        unsigned long uVar2 = pHVar1->GetUsed();
        unsigned long uVar3 = ((RenderDevice*)pHVar1->Instance())->GetTotalAllocatedGPUMemory();
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                  "ConsoleCommandsDebug.cpp",
                  52, "\nTotal memory usage (excluding static/global data) / MB - Total: %llu, CPU: %llu, GPU: %llu\n",
                  (uVar3 >> 20) + (uVar2 >> 20), uVar2 >> 20, uVar3 >> 20);
        pHVar1 = HeapInterface::Instance();
        pHVar1->SaveMemoryUsageToConsole();
        pHVar1 = HeapInterface::Instance();
        pHVar1->SaveMemoryUsageBottomUpToConsole();
        render::GPUMemoryReportToConsole();
    }

    // 0x1006f26c0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const {
        _lambda_jag__render__RenderContext___1_* in_RSI;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>* this_02;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>* this_03;
        uint8_t auVar1[16];
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        auto this_00 = Instance();
        this_02 = local_c8;
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            this_02, in_RSI);
        this_00->RunSynchronouslyOnRenderThread(*this_02, true);
        this_03 = local_c8;
        this_03->~function();
        auto this_01 = this_03->Instance();
        auVar1 = this_01->SSOBeginPtr();
        ThreadPool::operator()(auVar1._0_8_, (char*)this_02, auVar1._8_8_);
        BucketManager::PrintMetrics();
    }

    // 0x1006f2a70
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(render::RenderContext & renderContext) const {
        BucketManager::PrintMetrics();
    }

    // 0x1006f3350
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
        lambda() #1
    }
    ::operator()() const {
        BucketManager::PrintMetrics();
    }

    // 0x1006f5790
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const {
        _lambda_jag__render__RenderContext___1_* in_RSI;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>* this_02;
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>* this_03;
        uint8_t auVar1[16];
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        auto this_00 = Instance();
        this_02 = local_c8;
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
            this_02, in_RSI);
        this_00->RunSynchronouslyOnRenderThread(*this_02, true);
        this_03 = local_c8;
        this_03->~function();
        auto this_01 = this_03->Instance();
        auVar1 = this_01->SSOBeginPtr();
        ThreadPool::operator()(auVar1._0_8_, (char*)this_02, auVar1._8_8_);
        BucketManager::ResetMetrics();
    }

    // 0x1006f5b10
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(render::RenderContext & renderContext) const {
        BucketManager::ResetMetrics();
    }

    // 0x1006f5fd0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
        lambda() #1
    }
    ::operator()() const {
        BucketManager::ResetMetrics();
    }

    // 0x1006f90b0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_8::operator()() const {
        Logger* pLVar2;
        char* pcVar3;
        char* pcVar4;
        SQLiteMemoryStatus* in_RSI;
        uint32_t uVar5;
        uint32_t uVar6;
        int local_3c0;
        int local_3bc;
        uint32_t local_3b4;
        uint32_t local_3b0;
        int local_3ac;
        fixed_string<char, 256> local_3a0;
        fixed_string<char, 256> local_278;
        fixed_string<char, 256> local_150;

        if (local_3c0.GetMemoryUsage(*in_RSI) != '\0') {
            local_150 = eastl::fixed_string<char, 256>();
            local_278 = eastl::fixed_string<char, 256>();
            local_3a0 = eastl::fixed_string<char, 256>();
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "ConsoleCommandsDebug.cpp",
                        133, "SQL> Memory Status\nSQL> -------------");
            pLVar2 = logger::default_logger();
            pcVar3 = DataSizeString<eastl::fixed_string<char, 256>>(&local_150, (long)local_3c0);
            pcVar4 = DataSizeString<eastl::fixed_string<char, 256>>(&local_278, (long)local_3bc);
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "ConsoleCommandsDebug.cpp",
                        134, "SQL> Memory Used: %s (Max: %s)", pcVar3, pcVar4);
            uVar5 = (uint32_t)((unsigned long)pcVar3 >> 32);
            uVar6 = (uint32_t)((unsigned long)pcVar4 >> 32);
            pLVar2 = logger::default_logger();
            pcVar3 = DataSizeString<eastl::fixed_string<char, 256>>(&local_3a0, (long)local_3ac);
            pLVar2->Log(false, 7,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "ConsoleCommandsDebug.cpp",
                        135, "SQL> Page cache pages overflow count: %i/%i (Page cache size: %s)",
                        (((uint64_t)uVar5 << 32) | (uint32_t)local_3b4),
                        (((uint64_t)uVar6 << 32) | (uint32_t)local_3b0), pcVar3);
        }
    }

} // namespace jag::game
