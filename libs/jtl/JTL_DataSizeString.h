// libs/jtl/JTL_DataSizeString.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.shared

namespace jag::console::internal {
    template <typename...> // 1 instantiations, e.g. <void>
    class CallConsoleFnWrapper {
    public:
        void operator()<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const&,
                        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const& callback,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 const&,
                        std::tuple<std::optional<bool>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 const& arg2,
            std::tuple<std::optional<bool>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 const&,
                        std::tuple<eastl::string, std::optional<bool>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 const& arg2,
            std::tuple<eastl::string, std::optional<bool>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 const&,
                        std::tuple<eastl::string>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 const& arg2,
            std::tuple<eastl::string>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 const&,
                        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 const& arg2,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 const&,
                        std::tuple<std::optional<unsigned int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 const& arg2,
            std::tuple<std::optional<unsigned int>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 const&,
                        std::tuple<std::optional<int>, std::optional<int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 const& arg2,
            std::tuple<std::optional<int>, std::optional<int>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 const&,
                        std::tuple<std::optional<int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 const& arg2,
            std::tuple<std::optional<int>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 const&,
                        std::tuple<int>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 const& arg2,
            std::tuple<int>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 const&,
                        std::tuple<int>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 const& arg2,
            std::tuple<int>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 const&,
                        std::tuple<int, int, int, int>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 const& arg2,
            std::tuple<int, int, int, int>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 const&,
                        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 const& arg2,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 const& arg2,
            std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 const&,
                        std::tuple<std::optional<eastl::string>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 const& arg2,
            std::tuple<std::optional<eastl::string>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 const&,
                        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 const& arg2,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 const&,
                        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 const& arg2,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 const&,
                        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 const& arg2,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 const&,
                        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 const& arg2,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 const&,
                        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 const& arg2,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26 const&,
            std::tuple<int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                              game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                        graphics::RT7Core*)::$_26 const& arg2,
                              std::tuple<int>& tuple);
        void operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                  graphics::RT7Core*)::$_27 const&,
                        std::tuple<int, int>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                      graphics::RT7Core*)::$_27 const& arg2,
            std::tuple<int, int>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_28 const& arg2,
                           std::tuple<>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_29 const& arg2,
                           std::tuple<>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_30 const& arg2,
                           std::tuple<>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_31 const& arg2,
                           std::tuple<>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_32 const& arg2,
                           std::tuple<>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_33 const& arg2,
                           std::tuple<>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_34 const& arg2,
                           std::tuple<>& tuple);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_35 const& arg2,
                           std::tuple<>& tuple);
        void operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                  graphics::RT7Core*)::$_36 const&,
                        std::tuple<StringView, std::optional<int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                      graphics::RT7Core*)::$_36 const& arg2,
            std::tuple<StringView, std::optional<int>>& tuple);
        void operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                  graphics::RT7Core*)::$_37 const&,
                        std::tuple<std::optional<StringView>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                      graphics::RT7Core*)::$_37 const& arg2,
            std::tuple<std::optional<StringView>>& tuple);
        void operator()<Console::RegisterCoreCommands()::$_0 const&, std::tuple<std::optional<int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            const Console::RegisterCoreCommands()::$_0& arg2, std::tuple<std::optional<int>>& tuple);
        void operator()<Console::RegisterCoreCommands()::$_1 const&, std::tuple<StringView>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            const Console::RegisterCoreCommands()::$_1& arg2, std::tuple<StringView>& tuple);
        void operator()<Console::RegisterCoreCommands()::$_3 const&, std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            const Console::RegisterCoreCommands()::$_3& arg2, std::tuple<>& tuple);
        void operator()<Console::RegisterCoreCommands()::$_4 const&, std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            const Console::RegisterCoreCommands()::$_4& arg2, std::tuple<>& tuple);
        void operator()<Console::RegisterCoreCommands()::$_5 const&, std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            const Console::RegisterCoreCommands()::$_5& arg2, std::tuple<>& tuple);
        void operator()<Console::RegisterCoreCommands()::$_6 const&, std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            const Console::RegisterCoreCommands()::$_6& arg2, std::tuple<>& tuple);
        void operator()<Console::RegisterCoreCommands()::$_2 const&, std::tuple<std::optional<eastl::string>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
            const Console::RegisterCoreCommands()::$_2& arg2, std::tuple<std::optional<eastl::string>>& tuple);
    };

    // 0x10007b400
    void CallConsoleFnWrapper<void>::operator()<
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const&,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const& callback,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple) {
        std::apply<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> const&,
                   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(callback, tuple);
        arg1.reset();
    }

    // 0x1006f9370
    eastl::fixed_vector<CommandArgInfo, 4ul>
    BuildArgInfos<std::optional<unsigned int>>(std::tuple<std::optional<unsigned int>>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<std::optional<unsigned int>>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x1006f9ee0
    auto DecodeArgs<std::optional<unsigned int>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<std::optional<unsigned int>>* tuple) {
        uint32_t extraout_var;
        return local_18;

        auto aVar1 = DecodeArg<std::optional<unsigned int>>(argDecodingErrors, console, argDecodingError, (int)tuple);
        uint64_t local_10 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        local_18.tuple<std::optional<unsigned int>, 0>(local_10);
        return local_18[0];
    }

    // 0x1006f9f10
    void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*,
                                                                                  graphics::RT7Core*)::$_9 const&,
                                                std::tuple<std::optional<unsigned int>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 const& arg2,
        std::tuple<std::optional<unsigned int>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__9 const&,
                   std::tuple<std::optional<unsigned int>>&>((__9*)arg1, (tuple<std::optional<unsigned int> _>*)arg2);
        reset();
    }

    // 0x1006f9f40
    auto DecodeArg<std::optional<unsigned int>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        return local_30;
        auto local_24;

        if (argDecodingError.size() == 0) {
            local_30 = std::optional();
        } else {
            local_24 = DecodeArg<unsigned int>(argDecodingErrors, console, argDecodingError, arg4);
            local_30.optional<unsigned int, 0>(local_24);
        }
        return local_30[0];
    }

    // 0x1006f9fb0
    auto DecodeArg<unsigned int>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        bool bVar3;
        StringView* pSVar6;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* arg1;
        auto* paVar7;
        auto aVar8;
        StringView local_d0;
        char* local_c0;
        StringView local_b0;

        if (argDecodingError.size() != 0) {
            pSVar6 = &argDecodingError[(long)0];
            local_d0 = StringView(*pSVar6);
            local_b0 = console.FindStoredVariable(&local_d0);
            if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
                local_c0 = (char*)((unsigned long)local_c0 & 18446744069414584320);
                pSVar6 = &argDecodingError[(long)0];
                bVar3 = FromString<StringView, unsigned int>(pSVar6, (unsigned int*)&local_c0, 10);
                console = (Console*)((unsigned long)local_c0 & 4294967295);
                aVar8 = (auto)local_c0;
                if (!bVar3)
                    goto LAB_1006fa098;
            LAB_1006fa05c:
                bVar3 = false;
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                paVar7 = (auto*)std::get_if<unsigned int, int, unsigned int, bool, float, eastl::string, VarAny>(arg1);
                if (paVar7 != nullptr) {
                    aVar8 = *paVar7;
                    console = (Console*)(unsigned long)aVar8;
                    if (paVar7 != nullptr)
                        goto LAB_1006fa05c;
                }
            LAB_1006fa098:
                aVar8 = (auto)console;
                bVar3 = true;
            }
            if (!bVar3)
                goto LAB_1006fa11c;
        }
        local_c0 = GetTypeName<unsigned int>();
        int iVar4 = argDecodingError.size();
        if (0 < iVar4) {
            pSVar6 = &argDecodingError[(long)0];
            local_b0 = StringView(*pSVar6);
        } else {
            local_b0.StringView<13ul>("<lt>null<gt>");
        }
        argDecodingErrors.emplace_back<char const*, StringView const, int&>(local_c0, local_b0, 0);
        aVar8 = 0;
    LAB_1006fa11c:
        return aVar8;
    }

    // 0x1006fa1a0
    char const* GetTypeName<unsigned int>() {
        return "uint";
    }

    // 0x1006fa540
    CommandArgInfo GetArgInfo<std::optional<unsigned int>>() {
        GetTypeName<unsigned int>();
    }

    // 0x1006fa5c0
    eastl::fixed_vector<CommandArgInfo, 4ul>
    BuildArgInfos<std::optional<int>, std::optional<int>>(std::tuple<std::optional<int>, std::optional<int>>* tuple) {
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;

        uint64_t local_40 = GetArgInfo<std::optional<int>>();
        uint8_t local_38 = extraout_DL;
        uint64_t local_30 = GetArgInfo<std::optional<int>>();
        uint8_t local_28 = extraout_DL_00;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_40, *2);
        return tuple;
    }

    // 0x1006fb170
    auto DecodeArgs<std::optional<int>, std::optional<int>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<std::optional<int>, std::optional<int>>* tuple) {
        uint32_t extraout_var;
        uint32_t extraout_var_00;
        return local_40;

        auto aVar1 = DecodeArg<std::optional<int>>(argDecodingErrors, console, argDecodingError, 0);
        uint64_t local_30 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        aVar1 = DecodeArg<std::optional<int>>(argDecodingErrors, console, argDecodingError, 1);
        uint64_t local_28 = (((uint64_t)extraout_var_00 << 32) | (uint32_t)aVar1);
        local_40.tuple<std::optional<int>, std::optional<int>, 0>(local_30, local_28);
        return local_40[0];
    }

    // 0x1006fb1d0
    void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*,
                                                                                  graphics::RT7Core*)::$_10 const&,
                                                std::tuple<std::optional<int>, std::optional<int>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 const& arg2,
        std::tuple<std::optional<int>, std::optional<int>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__10 const&,
                   std::tuple<std::optional<int>, std::optional<int>>&>(
            (__10*)arg1, (tuple<std::optional<int>, std::optional<int> _>*)arg2);
        reset();
    }

    // 0x1006fb200
    auto DecodeArg<std::optional<int>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        return local_40;
        auto local_34;

        unsigned long uVar1 = argDecodingError.size();
        if ((unsigned int)arg4 < uVar1) {
            local_34 = DecodeArg<int>(argDecodingErrors, console, argDecodingError, arg4);
            local_40.optional<int, 0>(local_34);
        } else {
            local_40 = std::optional();
        }
        return local_40[0];
    }

    // 0x1006fb280
    auto DecodeArg<int>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        bool bVar3;
        StringView* pSVar6;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* arg1;
        auto* paVar7;
        StringView local_d8;
        fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator>* local_c8;
        char* local_c0;
        StringView local_b0;

        int local_b4 = arg4;
        unsigned long uVar5 = argDecodingError.size();
        if ((unsigned int)arg4 < uVar5) {
            local_c8 = argDecodingErrors;
            pSVar6 = &argDecodingError[(long)local_b4];
            local_d8 = StringView(*pSVar6);
            local_b0 = console.FindStoredVariable(&local_d8);
            if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
                local_c0 = (char*)((unsigned long)local_c0 & 18446744069414584320);
                pSVar6 = &argDecodingError[(long)local_b4];
                bVar3 = FromString<StringView, int>(pSVar6, (int*)&local_c0, 10);
                arg4 = (auto)local_c0;
                if (bVar3)
                    goto LAB_1006fb338;
            LAB_1006fb37b:
                bVar3 = true;
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                paVar7 = (auto*)std::get_if<int, int, unsigned int, bool, float, eastl::string, VarAny>(arg1);
                if ((paVar7 == nullptr) || (arg4 = *paVar7, paVar7 == nullptr))
                    goto LAB_1006fb37b;
            LAB_1006fb338:
                bVar3 = false;
            }
            argDecodingErrors = local_c8;
            if (!bVar3)
                goto LAB_1006fb3ff;
        }
        local_c0 = GetTypeName<int>();
        int iVar1 = local_b4;
        int iVar4 = argDecodingError.size();
        if (iVar1 < iVar4) {
            pSVar6 = &argDecodingError[(long)local_b4];
            local_b0 = StringView(*pSVar6);
        } else {
            local_b0.StringView<13ul>("<lt>null<gt>");
        }
        argDecodingErrors.emplace_back<char const*, StringView const, int&>(local_c0, local_b0, local_b4);
        arg4 = 0;
    LAB_1006fb3ff:
        return arg4;
    }

    // 0x1006fb480
    char const* GetTypeName<int>() {
        return "int";
    }

    // 0x1006fb960
    CommandArgInfo GetArgInfo<std::optional<int>>() {
        GetTypeName<int>();
    }

    // 0x1006fb9e0
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<std::optional<int>>(std::tuple<std::optional<int>>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<std::optional<int>>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x1006fc550
    auto DecodeArgs<std::optional<int>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<std::optional<int>>* tuple) {
        uint32_t extraout_var;
        return local_18;

        auto aVar1 = DecodeArg<std::optional<int>>(argDecodingErrors, console, argDecodingError, 0);
        uint64_t local_10 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        local_18.tuple<std::optional<int>, 0>(local_10);
        return local_18[0];
    }

    // 0x1006fc580
    void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*,
                                                                                  graphics::RT7Core*)::$_11 const&,
                                                std::tuple<std::optional<int>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 const& arg2,
        std::tuple<std::optional<int>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__11 const&,
                   std::tuple<std::optional<int>>&>((__11*)arg1, (tuple<std::optional<int> _>*)arg2);
        reset();
    }

    // 0x1006fc820
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<int>(std::tuple<int>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<int>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x1006fd390
    auto DecodeArgs<int>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<int>* tuple) {
        return local_10;

        auto local_14 = DecodeArg<int>(argDecodingErrors, console, argDecodingError, 0);
        local_10.tuple<int, 0>(local_14);
        return local_10[0];
    }

    // 0x1006fd3c0
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 const&, std::tuple<int>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 const& arg2,
        std::tuple<int>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__12 const&,
                   std::tuple<int>&>((__12*)arg1, (tuple<int>*)arg2);
        reset();
    }

    // 0x1006fd5b0
    CommandArgInfo GetArgInfo<int>() {
        GetTypeName<int>();
    }

    // 0x1006fe130
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 const&, std::tuple<int>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 const& arg2,
        std::tuple<int>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__13 const&,
                   std::tuple<int>&>((__13*)arg1, (tuple<int>*)arg2);
        reset();
    }

    // 0x1006fe310
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<int, int, int, int>(std::tuple<int, int, int, int>* tuple) {
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;
        uint8_t extraout_DL_01;
        uint8_t extraout_DL_02;

        uint64_t local_60 = GetArgInfo<int>();
        uint8_t local_58 = extraout_DL;
        uint64_t local_50 = GetArgInfo<int>();
        uint8_t local_48 = extraout_DL_00;
        uint64_t local_40 = GetArgInfo<int>();
        uint8_t local_38 = extraout_DL_01;
        uint64_t local_30 = GetArgInfo<int>();
        uint8_t local_28 = extraout_DL_02;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_60, *4);
        return tuple;
    }

    // 0x1006feee0
    auto DecodeArgs<int, int, int, int>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<int, int, int, int>* tuple) {
        return local_40;

        auto local_30 = DecodeArg<int>(argDecodingErrors, console, argDecodingError, 0);
        auto local_2c = DecodeArg<int>(argDecodingErrors, console, argDecodingError, 1);
        auto local_28 = DecodeArg<int>(argDecodingErrors, console, argDecodingError, 2);
        auto local_24 = DecodeArg<int>(argDecodingErrors, console, argDecodingError, 3);
        local_40.tuple<int, int, int, int, 0>(local_30, local_2c, local_28, local_24);
        return local_40[0];
    }

    // 0x1006fef70
    void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*,
                                                                                  graphics::RT7Core*)::$_14 const&,
                                                std::tuple<int, int, int, int>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 const& arg2,
        std::tuple<int, int, int, int>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__14 const&,
                   std::tuple<int, int, int, int>&>((__14*)arg1, (tuple<int, int, int, int>*)arg2);
        reset();
    }

    // 0x1006ffd60
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__15 const&,
                   std::tuple<>&>((__15*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x1007009c0
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 const&,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 const& arg2,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__16 const&,
                   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            (__16*)arg1, (tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>*)arg2);
        reset();
    }

    // 0x100701b30
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__17 const&,
                   std::tuple<>&>((__17*)this, (tuple<>*)arg1);
        reset();
    }

    // 0x100702610
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__18 const&,
                   std::tuple<>&>((__18*)this, (tuple<>*)arg1);
        reset();
    }

    // 0x100703100
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__19 const&,
                   std::tuple<>&>((__19*)this, (tuple<>*)arg1);
        reset();
    }

    // 0x100704330
    eastl::fixed_vector<CommandArgInfo, 4ul>
    BuildArgInfos<std::optional<eastl::string> const&>(std::tuple<std::optional<eastl::string> const&>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<std::optional<eastl::string> const&>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x100704e10
    auto
    DecodeArgs<std::optional<eastl::string> const&>(eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors,
                                                    const Console& console,
                                                    const ArgDecodingError<StringView, 4ul, true>& argDecodingError,
                                                    std::tuple<std::optional<eastl::string> const&>* tuple) {
        tuple<std::optional<eastl::string>> local_70;
        fixed_vector<ArgDecodingError, _4ul> local_48;

        DecodeArg<std::optional<eastl::string> const&>(&local_48, console, argDecodingError, (int)tuple);
        local_70.tuple<std::optional<eastl::string>, 0>(local_48);
        new (argDecodingErrors) std::tuple<std::optional<eastl::string>>(local_70);
        return (auto)argDecodingErrors;
    }

    // 0x100704e90
    void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*,
                                                                                  graphics::RT7Core*)::$_20 const&,
                                                std::tuple<std::optional<eastl::string>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 const& arg2,
        std::tuple<std::optional<eastl::string>>& tuple) {
        ArgDecodingError<StringView, _4ul, true>* argDecodingError;
        fixed_vector<ArgDecodingError, _4ul> afStack_58;

        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__20 const&,
                   std::tuple<std::optional<eastl::string>>&>((__20*)arg1,
                                                              (tuple<std::optional<eastl::string_> _>*)arg1);
        if (tuple.size() == 0) {
            new (arg1) std::optional<eastl::string>();
        } else {
            DecodeArg<eastl::string>(&afStack_58, (Console*)arg1, argDecodingError, (int)tuple);
            arg1.optional<eastl::string, 0>(afStack_58);
        }
    }

    // 0x100704ea0
    auto DecodeArg<std::optional<eastl::string> const&>(eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors,
                                                        const Console& console,
                                                        const ArgDecodingError<StringView, 4ul, true>& argDecodingError,
                                                        int arg4) {
        uint32_t in_register_0000000c;
        fixed_vector<ArgDecodingError, _4ul> local_50;

        if (((vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000000c
                                                                                        << 32) |
                                                                                       (uint32_t)arg4))
                ->size() == 0) {
            new (argDecodingErrors) std::optional<eastl::string>();
        } else {
            DecodeArg<eastl::string>(&local_50, console, argDecodingError, arg4);
            argDecodingErrors.optional<eastl::string, 0>(local_50);
        }
        return (auto)argDecodingErrors;
    }

    // 0x100704f50
    auto DecodeArg<eastl::string>(eastl::fixed_vector<ArgDecodingError, 4ul>& argDecodingErrors, const Console& console,
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
        LAB_10070508c:
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
                    goto LAB_100705080;
                }
                new (argDecodingErrors) eastl::string(*local_e0);
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                str = (eastl::string*)std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(
                    arg1);
                console = local_c0;
                if (str == nullptr) {
                LAB_100705080:
                    goto LAB_10070508c;
                }
                new (argDecodingErrors) eastl::string(*str);
            }
        }
        return (auto)argDecodingErrors;
    }

    // 0x1007055c0
    CommandArgInfo GetArgInfo<std::optional<eastl::string> const&>() {
        GetTypeName<eastl::string>();
    }

    // 0x100706060
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 const&,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 const& arg2,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__21 const&,
                   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            (__21*)arg1, (tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>*)arg1);
    }

    // 0x100706b70
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 const&,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 const& arg2,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__22 const&,
                   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            (__22*)arg1, (tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>*)arg2);
        reset();
    }

    // 0x100707810
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 const&,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 const& arg2,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__23 const&,
                   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            (__23*)arg1, (tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>*)arg2);
        reset();
    }

    // 0x100708350
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 const&,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 const& arg2,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__24 const&,
                   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            (__24*)arg1, (tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>*)arg1);
        reset();
    }

    // 0x100708f80
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 const&,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 const& arg2,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__25 const&,
                   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            (__25*)arg1, (tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>*)arg1);
        reset();
    }

    // 0x100709c90
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26 const&,
        std::tuple<int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                          game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                    graphics::RT7Core*)::$_26 const& arg2,
                          std::tuple<int>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__26 const&,
                   std::tuple<int>&>((__26*)arg1, (tuple<int>*)arg2);
        reset();
    }

    // 0x100709e90
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<int, int>(std::tuple<int, int>* tuple) {
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;

        uint64_t local_40 = GetArgInfo<int>();
        uint8_t local_38 = extraout_DL;
        uint64_t local_30 = GetArgInfo<int>();
        uint8_t local_28 = extraout_DL_00;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_40, *2);
        return tuple;
    }

    // 0x10070aa30
    auto DecodeArgs<int, int>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<int, int>* tuple) {
        return local_30;

        auto local_28 = DecodeArg<int>(argDecodingErrors, console, argDecodingError, 0);
        auto local_24 = DecodeArg<int>(argDecodingErrors, console, argDecodingError, 1);
        local_30.tuple<int, int, 0>(local_28, local_24);
        return local_30[0];
    }

    // 0x10070aa90
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27 const&,
        std::tuple<int, int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                               game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                         graphics::RT7Core*)::$_27 const& arg2,
                               std::tuple<int, int>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__27 const&,
                   std::tuple<int, int>&>((__27*)arg1, (tuple<int, int>*)arg2);
        reset();
    }

    // 0x10070b800
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28 const&,
        std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                       game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                 graphics::RT7Core*)::$_28 const& arg2,
                       std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__28 const&,
                   std::tuple<>&>((__28*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x10070c4c0
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29 const&,
        std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                       game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                 graphics::RT7Core*)::$_29 const& arg2,
                       std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__29 const&,
                   std::tuple<>&>((__29*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x10070d0f0
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30 const&,
        std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                       game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                 graphics::RT7Core*)::$_30 const& arg2,
                       std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__30 const&,
                   std::tuple<>&>((__30*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x10070dd20
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31 const&,
        std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                       game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                 graphics::RT7Core*)::$_31 const& arg2,
                       std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__31 const&,
                   std::tuple<>&>((__31*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x10070e950
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32 const&,
        std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                       game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                 graphics::RT7Core*)::$_32 const& arg2,
                       std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__32 const&,
                   std::tuple<>&>((__32*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x10070f580
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33 const&,
        std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                       game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                 graphics::RT7Core*)::$_33 const& arg2,
                       std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__33 const&,
                   std::tuple<>&>((__33*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x1007101b0
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34 const&,
        std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                       game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                 graphics::RT7Core*)::$_34 const& arg2,
                       std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__34 const&,
                   std::tuple<>&>((__34*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x100710de0
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35 const&,
        std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
                       game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                 graphics::RT7Core*)::$_35 const& arg2,
                       std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__35 const&,
                   std::tuple<>&>((__35*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x100710f40
    eastl::fixed_vector<CommandArgInfo, 4ul>
    BuildArgInfos<StringView, std::optional<int>>(std::tuple<StringView, std::optional<int>>* tuple) {
        uint8_t extraout_DL;
        uint8_t extraout_DL_00;

        uint64_t local_40 = GetArgInfo<StringView>();
        uint8_t local_38 = extraout_DL;
        uint64_t local_30 = GetArgInfo<std::optional<int>>();
        uint8_t local_28 = extraout_DL_00;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_40, *2);
        return tuple;
    }

    // 0x100711b00
    auto DecodeArgs<StringView, std::optional<int>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<StringView, std::optional<int>>* tuple) {
        uint32_t extraout_var;
        tuple<StringView, std::optional<int>> local_60;
        StringView local_48;

        DecodeArg<StringView>((fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator>*)&local_48,
                              console, argDecodingError, (int)tuple);
        auto aVar1 = DecodeArg<std::optional<int>>(
            (fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator>*)console,
            (Console*)argDecodingError,
            (ArgDecodingError<StringView, _4ul, true,
                              eastl::fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator> _>*)
                tuple,
            1);
        uint64_t local_38 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar1);
        local_60.tuple<StringView, std::optional<int>, 0>(local_48, local_38);
        new (argDecodingErrors) std::tuple<StringView, std::optional<int>>(local_60);
        return (auto)argDecodingErrors;
    }

    // 0x100711b80
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36 const&,
        std::tuple<StringView, std::optional<int>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36 const& arg2,
        std::tuple<StringView, std::optional<int>>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__36 const&,
                   std::tuple<StringView, std::optional<int>>&>((__36*)arg1,
                                                                (tuple<StringView, std::optional<int> _>*)arg2);
        reset();
    }

    // 0x100711bb0
    auto DecodeArg<StringView>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        int iVar4;
        StringView* pSVar6;
        variant<int, unsigned int, bool, float, eastl::string, VarAny>* arg1;
        basic_string<char, BucketAllocatorEASTL>* str;
        uint32_t in_register_0000000c;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* vector;
        StringView local_e0;
        StringView local_d0;
        Console* local_c0;
        StringView local_b0;

        vector =
            (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000000c
                                                                                       << 32) |
                                                                                      (uint32_t)arg4);
        if (vector->size() == 0) {
        LAB_100711cd5:
            local_d0.field_0 = (unsigned long)GetTypeName<StringView>();
            iVar4 = vector->size();
            if (0 < iVar4) {
                pSVar6 = (StringView*)(*vector)[(long)0];
                local_b0 = StringView(*pSVar6);
            } else {
                local_b0.StringView<13ul>("<lt>null<gt>");
            }
            console.emplace_back<char const*, StringView const, int&>(local_d0, local_b0, 0);
            new (argDecodingErrors) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            local_c0 = console;
            pSVar6 = (StringView*)(*vector)[(long)0];
            local_e0 = StringView(*pSVar6);
            local_b0 = argDecodingError.FindStoredVariable(&local_e0);
            if (std::optional::operator_cast_to_bool(&local_b0) == '\0') {
                local_d0 = oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
                pSVar6 = (StringView*)(*vector)[(long)0];
                if (!FromString<StringView, StringView>(pSVar6, &local_d0, 10))
                    goto LAB_100711cc9;
                new (argDecodingErrors) StringView(local_d0);
            } else {
                arg1 = (variant<int, unsigned int, bool, float, eastl::string, VarAny>*)local_b0.value();
                str = (basic_string<char, BucketAllocatorEASTL>*)
                    std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(arg1);
                if (str == nullptr) {
                LAB_100711cc9:
                    console = local_c0;
                    goto LAB_100711cd5;
                }
                argDecodingErrors.StringView<eastl::fixed_string<char, 40>>(*str);
            }
        }
        return (auto)argDecodingErrors;
    }

    // 0x100711dc0
    char const* GetTypeName<StringView>() {
        return "string";
    }

    // 0x1007123c0
    CommandArgInfo GetArgInfo<StringView>() {
        GetTypeName<StringView>();
    }

    // 0x100712500
    eastl::fixed_vector<CommandArgInfo, 4ul>
    BuildArgInfos<std::optional<StringView>>(std::tuple<std::optional<StringView>>* tuple) {
        uint8_t extraout_DL;

        uint64_t local_30 = GetArgInfo<std::optional<StringView>>();
        uint8_t local_28 = extraout_DL;
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>(&local_30, DAT_00000001);
        return tuple;
    }

    // 0x100712fb0
    auto DecodeArgs<std::optional<StringView>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        std::tuple<std::optional<StringView>>* tuple) {
        tuple<std::optional<StringView>> local_50;
        fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator> local_38;

        DecodeArg<std::optional<StringView>>(&local_38, console, argDecodingError, (int)tuple);
        local_50.tuple<std::optional<StringView>, 0>(local_38);
        new (argDecodingErrors) std::tuple<std::optional<StringView>>(local_50);
        return (auto)argDecodingErrors;
    }

    // 0x100713010
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37 const&,
        std::tuple<std::optional<StringView>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37 const& arg2,
        std::tuple<std::optional<StringView>>& tuple) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__37 const&,
                   std::tuple<std::optional<StringView>>&>((__37*)arg1, (tuple<std::optional<StringView> _>*)arg1);
        reset();
    }

    // 0x100713030
    auto DecodeArg<std::optional<StringView>>(
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>& argDecodingErrors,
        const Console& console,
        const ArgDecodingError<StringView, 4ul, true,
                               eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>>&
            argDecodingError,
        int arg4) {
        uint32_t in_register_0000000c;
        StringView local_40;

        if (((vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000000c
                                                                                        << 32) |
                                                                                       (uint32_t)arg4))
                ->size() == 0) {
            new (argDecodingErrors) std::optional<StringView>();
        } else {
            DecodeArg<StringView>(
                (fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator>*)&local_40, console,
                argDecodingError, arg4);
            argDecodingErrors.optional<StringView, 0>(local_40);
        }
        return (auto)argDecodingErrors;
    }

    // 0x1007135a0
    CommandArgInfo GetArgInfo<std::optional<StringView>>() {
        GetTypeName<StringView>();
    }

    // 0x100c8cae0
    void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_0 const&,
                                                std::tuple<std::optional<int>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        const Console::RegisterCoreCommands()::$_0& arg2, std::tuple<std::optional<int>>& tuple) {
        std::apply<Console::RegisterCoreCommands()::__0 const&, std::tuple<std::optional<int>>&>(
            (__0*)arg1, (tuple<std::optional<int> _>*)arg2);
        reset();
    }

    // 0x100c8dcc0
    void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_1 const&, std::tuple<StringView>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        const Console::RegisterCoreCommands()::$_1& arg2, std::tuple<StringView>& tuple) {
        std::apply<Console::RegisterCoreCommands()::__1 const&, std::tuple<StringView>&>((__1*)arg1,
                                                                                         (tuple<StringView>*)arg2);
        reset();
    }

    // 0x100c8eb40
    void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_3 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        const Console::RegisterCoreCommands()::$_3& arg2, std::tuple<>& tuple) {
        std::apply<Console::RegisterCoreCommands()::__3 const&, std::tuple<>&>((__3*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x100c8f6c0
    void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_4 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        const Console::RegisterCoreCommands()::$_4& arg2, std::tuple<>& tuple) {
        std::apply<Console::RegisterCoreCommands()::__4 const&, std::tuple<>&>((__4*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x100c901b0
    void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_5 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        const Console::RegisterCoreCommands()::$_5& arg2, std::tuple<>& tuple) {
        std::apply<Console::RegisterCoreCommands()::__5 const&, std::tuple<>&>((__5*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x100c90ca0
    void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_6 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        const Console::RegisterCoreCommands()::$_6& arg2, std::tuple<>& tuple) {
        std::apply<Console::RegisterCoreCommands()::__6 const&, std::tuple<>&>((__6*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x100c918e0
    void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_2 const&,
                                                std::tuple<std::optional<eastl::string>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        const Console::RegisterCoreCommands()::$_2& arg2, std::tuple<std::optional<eastl::string>>& tuple) {
        std::apply<Console::RegisterCoreCommands()::__2 const&, std::tuple<std::optional<eastl::string>>&>(
            (__2*)arg1, (tuple<std::optional<eastl::string_> _>*)arg2);
        reset();
    }

} // namespace jag::console::internal

namespace jag::game {
    // 0x1006fa3b0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_9::operator()(std::optional<unsigned int> arg1) const {
        int* piVar2;
        ScaleManager* pSVar3;
        unsigned int* puVar4;
        unsigned long uVar5;
        char* str;
        Console* this_00;
        float fVar6;

        if ((arg1).operator_cast_to_bool() == '\0') {
            this_00 = *(Console**)(this + 8);
            pSVar3 = (*(RT7Core**)this)->GetScaleManager();
            fVar6 = (float)pSVar3->GetGameScale();
            uVar5 = (unsigned long)(fVar6 * 100.0);
            str = "Current game scale: %u%%";
        } else {
            piVar2 = (int*)(arg1).value();
            if (*piVar2 == 0) {
                return;
            }
            pSVar3 = (*(RT7Core**)this)->GetScaleManager();
            puVar4 = (unsigned int*)(arg1).value();
            pSVar3->SetGameScale((float)*puVar4 * 0.01);
            this_00 = *(Console**)(this + 8);
            puVar4 = (unsigned int*)(arg1).value();
            uVar5 = (unsigned long)*puVar4;
            str = "Game scale changed: %u%%";
        }
        this_00->AddMessage(2, str, uVar5);
    }

    // 0x1006fb6f0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_10::operator()(std::optional<int> arg1,
                                                                           std::optional<int> arg2) const {
        ScaleManager* pSVar4;
        unsigned int local_38;
        uint8_t local_34;

        uint64_t local_48 = arg1;
        uint64_t local_40 = arg2;
        bool cVar1 = local_48.operator_cast_to_bool();
        if ((!cVar1) || (cVar1 = local_40.operator_cast_to_bool(), !cVar1)) {
            pSVar4 = field_0->GetScaleManager();
            pSVar4->ResetInterfaceResolutionOverride();
            field_8->AddMessage(
                2, "Interface resolution override reset. Use \'ires <width> <height>\' to set a resolution.");
            return;
        }
        auto pEVar3 = local_48.value();
        auto SVar2 = eastl::min<graphics::GraphicsQuality>(*pEVar3, 16000);
        unsigned int local_2c = eastl::max<int>(100, SVar2);
        local_38.optional<int, 0>(local_2c);
        local_48 = (optional<int>*)(((uint64_t)((((uint32_t)local_48._5_3_ << 8) | (uint8_t)local_34)) << 32) |
                                    (uint32_t)local_38);
        pEVar3 = (EnumOptionToggle*)local_40.value();
        SVar2 = eastl::min<graphics::GraphicsQuality>(*pEVar3, 12000);
        local_2c = eastl::max<int>(100, SVar2);
        local_38.optional<int, 0>(local_2c);
        local_40 = (optional<int>*)(((uint64_t)((((uint32_t)local_40._5_3_ << 8) | (uint8_t)local_34)) << 32) |
                                    (uint32_t)local_38);
        pSVar4 = field_0->GetScaleManager();
        auto piVar5 = local_48.value();
        int arg1_00 = *piVar5;
        piVar5 = (int*)local_40.value();
        pSVar4->SetInterfaceResolutionOverride(arg1_00, *piVar5);
        local_38 = field_0->GetBackBufferWidth();
        local_2c = field_0->GetBackBufferHeight();
        pSVar4 = field_0->GetScaleManager();
        pSVar4->ScreenToInterfacePosition(local_38, local_2c, false);
        field_8->AddMessage(2, "Interface resolution override set (%d x %d). Use \'ires\' without values to reset.",
                            (unsigned long)local_38, (unsigned long)local_2c);
    }

    // 0x1006fc650
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_11::operator()(std::optional<int> arg1) const {
        Console* this_00;
        unsigned int uVar2;
        unsigned int uVar3;
        ScaleManager* pSVar4;
        unsigned int* puVar5;
        unsigned int local_38;
        unsigned int local_34;

        if ((arg1).operator_cast_to_bool() == '\0') {
            pSVar4 = (*(RT7Core**)this)->GetScaleManager();
            pSVar4->ResetInterfaceScaleOverride();
            (*(Console**)(this + 8))
                ->AddMessage(2, "Interface scale override reset. Use \'iscale <percentage>\' to set a resolution.");
        } else {
            uVar2 = (*(RT7Core**)this)->GetBackBufferWidth();
            uVar3 = (*(RT7Core**)this)->GetBackBufferHeight();
            pSVar4 = (*(RT7Core**)this)->GetScaleManager();
            puVar5 = (unsigned int*)(arg1).value();
            pSVar4->SetInterfaceScaleOverride(*puVar5);
            local_38 = (*(RT7Core**)this)->GetBackBufferWidth();
            local_34 = (*(RT7Core**)this)->GetBackBufferHeight();
            pSVar4 = (*(RT7Core**)this)->GetScaleManager();
            pSVar4->ScreenToInterfacePosition(local_38, local_34, false);
            this_00 = *(Console**)(this + 8);
            puVar5 = (unsigned int*)(arg1).value();
            this_00->AddMessage(
                2,
                "Interface scale override set to %d%% (%d x %d --> %d x %d). Use \'iscale\' without values to reset.",
                (unsigned long)*puVar5, (unsigned long)uVar2, (unsigned long)uVar3, (unsigned long)local_38,
                (unsigned long)local_34);
        }
    }

    // 0x1006fd4a0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_12::operator()(int arg1) const {
        ScaleManager* pSVar4 = (*(RT7Core**)this)->GetScaleManager();
        pSVar4->SetTmpDPI(arg1, true);
        Console* pCVar1 = *(Console**)(this + 8);
        pSVar4 = (*(RT7Core**)this)->GetScaleManager();
        unsigned int uVar2 = pSVar4->GetUIHeight();
        pCVar1->AddMessage(4, "DPI set to: %d", (unsigned long)uVar2);
        pCVar1 = *(Console**)(this + 8);
        uVar2 = (*(RT7Core**)this)->GetInterfaceWidth();
        unsigned int uVar3 = (*(RT7Core**)this)->GetInterfaceHeight();
        pCVar1->AddMessage(4, "Interface resolution set to: %d, %d", (unsigned long)uVar2, (unsigned long)uVar3);
    }

    // 0x1006fe1b0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_13::operator()(int arg1) const {
        ScaleManager* pSVar4 = (*(RT7Core**)this)->GetScaleManager();
        pSVar4->SetTmpDPI(arg1, false);
        Console* pCVar1 = *(Console**)(this + 8);
        pSVar4 = (*(RT7Core**)this)->GetScaleManager();
        unsigned int uVar2 = pSVar4->GetUIHeight();
        pCVar1->AddMessage(4, "DPI set to: %d", (unsigned long)uVar2);
        pCVar1 = *(Console**)(this + 8);
        uVar2 = (*(RT7Core**)this)->GetInterfaceWidth();
        unsigned int uVar3 = (*(RT7Core**)this)->GetInterfaceHeight();
        pCVar1->AddMessage(4, "Interface resolution set to: %d, %d", (unsigned long)uVar2, (unsigned long)uVar3);
    }

    // 0x1006ff120
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_14::operator()(int arg1, int arg2, int arg3,
                                                                           int arg4) const {
        field_0->GetScaleManager()->SetZoomRect(arg1, arg2, arg3, arg4);
        field_8->AddMessage(2, "Interface zoom rectangle updated.");
    }

    // 0x1006ffdb0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_15::operator()() const {
        ((*(RT7Core**)this)->GetScaleManager())->ResetZoomRect();
        (*(Console**)(this + 8))->AddMessage(2, "Interface zoom rectangle reset.");
    }

    // 0x100700a60
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        BaseApp* this_00;
        int iVar1;
        StringView* stringView;
        unsigned long uVar3;
        allocator* allocator;
        char* pcVar4;
        int iVar5;
        int local_e0;
        function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[160];
        long local_38;

        int local_dc = 1;
        long lVar2 = stringViews.size();
        if (lVar2 == 1) {
            stringView = &stringViews[0];
            FromString<StringView, int>(stringView, &local_dc, 10);
        LAB_100700ad7:
            if (0 < local_dc) {
                iVar5 = 0;
                do {
                    if ((operator()(eastl::fixed_vector<StringView, 4ul> const&)::memory == '\0') &&
                        (iVar1 = ___cxa_guard_acquire(&operator()(eastl::fixed_vector<StringView, 4ul> const&)::memory),
                         iVar1 != 0)) {
                        pcVar4 = "EASTL vector";
                        new (local_d8) eastl::allocator("EASTL vector");
                        new (local_d8) eastl::vector<RegisterCommonCommandsDebug(
                            jag::console::Console*, BaseApp*,
                            graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul> const&)
                                                         const ::Pixel>((unsigned long)pcVar4, *allocator);
                        ___cxa_atexit(
                            eastl::vector<RegisterCommonCommandsDebug(
                                jag::console::Console*, BaseApp*,
                                graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul> const&)
                                              const ::Pixel>::~vector,
                            &operator()(eastl::fixed_vector<StringView, 4ul> const&)::memory, 4294967296);
                        ___cxa_guard_release(&operator()(eastl::fixed_vector<StringView, 4ul> const&)::memory);
                    }
                    this_00 = *(BaseApp**)(this + 8);
                    local_e0 = iVar5;
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                        local_d8, (_lambda_jag__BaseApp___1_*)&local_e0);
                    this_00->QueueMainThreadEvent(*local_d8);
                    iVar5 = iVar5 + 1;
                } while (iVar5 < local_dc);
                goto LAB_100700bad;
            }
            pcVar4 = "[count] must be one or larger.";
        } else {
            uVar3 = stringViews.size();
            if (uVar3 < 2)
                goto LAB_100700ad7;
            pcVar4 = "Usage: createdummytextures [count] (don\'t specify count to default to 1)";
        }
        (*(Console**)this)->AddMessage(5, pcVar4);
    LAB_100700bad:
    }

    // 0x100700ea0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul> const&) const ::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp * baseApp) const {
        uint8_t local_270[64];
        uint64_t local_230;

        new (local_270) render::Texture::Desc();
        local_270._0_4_ = 4096;
        local_270._4_4_ = 4096;
        local_270._8_4_ = 1;
        local_270._12_4_ = 1;
        local_270._16_4_ = 1;
        local_270._20_4_ = 0;
        local_270._24_4_ = 1;
        local_270._28_4_ = 1;
        local_270[32] = 0;
        local_270._36_4_ = 0;
        local_270[40] = 0;
        local_270._56_2_ = 0;
        new (&local_230) render::ResourceDataT(nullptr, 0, 0, false);
        local_230 = eastl::vector<RegisterCommonCommandsDebug(
            jag::console::Console*, BaseApp*,
            graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul> const&) const ::Pixel>::data();
        uint64_t local_228 = 1152921504606912512;
        uint8_t local_220 = 0;
        auto pLVar1 = logger::default_logger();
        pLVar1->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                    "ConsoleCommandsDebug.cpp",
                    293, "Creating dummy texture (Count: %d - DIM: %ux%u)", *(uint32_t*)this, 4096, 4096);
        Texture2D local_218("Texture2D");
        local_218.Create(*local_270, &local_230, 0);
        pLVar1 = logger::default_logger();
        pLVar1->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                    "ConsoleCommandsDebug.cpp",
                    296, "Created dummy texture %d", *(uint32_t*)this);
    }

    // 0x100701b80
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_17::operator()() const {
        render::BufferPoolStats::PrintPoolUsage();
    }

    // 0x100702660
    uint8_t RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                        graphics::RT7Core*)::$_18::operator()() const {
        return DAT_00000001;
    }

    // 0x100703150
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const {
        future<void> local_18;

        auto this_00 = Instance();
        auto arg2 = this_00->SSOBeginPtr();
        ThreadPool::operator()(&local_18, arg2);
        std::future<void>::~future(&local_18);
    }

    // 0x1007037c0
    uint8_t RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                        graphics::RT7Core*)::$_19::operator()() const ::{
        lambda() #1
    }
    ::operator()() const {
        return DAT_00000001;
    }

    // 0x1007054f0
    void
    RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                graphics::RT7Core*)::$_20::operator()(const std::optional<eastl::string>& str) const {
        char* str2;
        int arg2;

        if (operator_cast_to_bool() == '\0') {
            arg2 = 325;
            str2 = nullptr;
        } else {
            value();
            str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            arg2 = 321;
        }
        char* this_00 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                        "ConsoleCommandsDebug.cpp";
        LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                      "ConsoleCommandsDebug.cpp",
                      arg2, 0, str2);
        this_00->~OptionStore();
    }

    // 0x1007060b0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_21::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        _abort();
    }

    // 0x100706bf0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_22::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        string local_30;

        auto this_00 = logger::default_logger();
        (*(RT7Core**)this)->GetRenderTargetsManager();
        local_30.GetStats();
        auto str2 = std::string::c_str(&local_30);
        this_00->Log(false, 7,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                     "ConsoleCommandsDebug.cpp",
                     336, str2);
        std::string::~string(&local_30);
    }

    // 0x100707890
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_23::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        ((RenderTargetsManager*)(*(RT7Core**)this)->GetRenderTargetsManager())->GarbageCollect(true);
    }

    // 0x1007083c0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_24::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        unsigned long uVar2;
        uint64_t uVar3;

        fixed_string<char, 1024> local_460;
        auto this_00 = HeapBeginPtr();
        auto pvVar1 = end();
        if (this_00 != pvVar1) {
            do {
                uVar2 = ShuffledPacketFactory::p2_alt2();
                uVar3 = this_00->end();
                local_460.append_sprintf("%.*s ", uVar2 & 4294967295, uVar3);
                this_00 = this_00 + 16;
            } while (this_00 != pvVar1);
        }
        auto this_01 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(false, 3,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                     "ConsoleCommandsDebug.cpp",
                     371, "%s", uVar3);
    }

    // 0x100708ff0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_25::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        unsigned long uVar2;
        uint64_t uVar3;

        fixed_string<char, 1024> local_460;
        auto this_00 = HeapBeginPtr();
        auto pvVar1 = end();
        if (this_00 != pvVar1) {
            do {
                uVar2 = ShuffledPacketFactory::p2_alt2();
                uVar3 = this_00->end();
                local_460.append_sprintf("%.*s ", uVar2 & 4294967295, uVar3);
                this_00 = this_00 + 16;
            } while (this_00 != pvVar1);
        }
        auto this_01 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                     "ConsoleCommandsDebug.cpp",
                     383, "%s", uVar3);
    }

    // 0x100709d10
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_26::operator()(int arg1) const {
        uint64_t uVar1 = (*(ClientOptions**)this)->GetOptionName(arg1);
        unsigned int arg2 = (*(ClientOptions**)this)->GetOptionValue(arg1);
        char* pcVar2 = (*(ClientOptions**)this)->GetOptionValueLabel(arg1, arg2);
        char* pcVar3 = "";
        if (pcVar2 != nullptr) {
            pcVar3 = pcVar2;
        }
        (*(Console**)(this + 8))
            ->AddMessage(
                3, "ClientOption <col=0x009966FF>%i</col> <col=0xAAAAAAFF>(%s)</col> is %i <col=0x009966FF>(%s)<col>",
                (unsigned long)(unsigned int)arg1, uVar1, (unsigned long)arg2, pcVar3);
    }

    // 0x10070aba0
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_27::operator()(int arg1, int arg2) const {
        uint64_t uVar1 = field_0->GetOptionName(arg1);
        auto pcVar2 = field_0->GetOptionValueLabel(arg1, arg2);
        ClientOptions* this_00 = field_0;
        RT7Core* this_01 = field_8;
        auto effectManager = this_01->GetEffectManager();
        this_00->SetOptionValue(arg1, arg2, *this_01, *effectManager);
        char* pcVar3 = "";
        if (pcVar2 != nullptr) {
            pcVar3 = pcVar2;
        }
        field_16->AddMessage(
            3, "Attempted to set ClientOption %i <col=0x009966FF>(%s)</col> to %i <col=0x009966FF>(%s)<col>",
            (unsigned long)(unsigned int)arg1, uVar1, (unsigned long)(unsigned int)arg2, pcVar3);
    }

    // 0x10070b850
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_28::operator()() const {
        unsigned int arg2;
        uint64_t uVar1;
        char* pcVar2;
        ClientOptionId clientOptionId;

        (*(Console**)this)->AddMessage(2, "Supported options:");
        unsigned long uVar3 = 0;
        do {
            clientOptionId = (ClientOptionId)uVar3;
            uVar1 = (*(ClientOptions**)(this + 8))->GetOptionName(clientOptionId);
            arg2 = (*(ClientOptions**)(this + 8))->GetOptionValue(clientOptionId);
            pcVar2 = (*(ClientOptions**)(this + 8))->GetOptionValueLabel(clientOptionId, arg2);
            if (pcVar2 == nullptr) {
                pcVar2 = "  [ID <col=0x009966FF>%i</col>] <col=0xAAAAAAFF>%s</col> - <col=0x009966FF>%i</col>";
            } else {
                pcVar2 = "  [ID <col=0x009966FF>%i</col>] <col=0xAAAAAAFF>%s</col> - <col=0x009966FF>%i</col> (%s)";
            }
            (*(Console**)this)->AddMessage(3, pcVar2, uVar3, uVar1, (unsigned long)arg2);
            uVar3 = (unsigned long)(clientOptionId + 1);
        } while (clientOptionId + 1 != 41);
    }

    // 0x10070c510
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_29::operator()() const {
        (*(ClientOptions**)this)->SaveSettings();
        (*(Console**)(this + 8))->AddMessage(2, "ClientOptions saved");
    }

    // 0x10070d140
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_30::operator()() const {
        ClientOptions* this_00 = *(ClientOptions**)this;
        RT7Core* this_01 = *(RT7Core**)(this + 8);
        auto effectManager = this_01->GetEffectManager();
        this_00->ApplyAutoSetupPreset(5, *this_01, *effectManager);
    }

    // 0x10070dd70
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_31::operator()() const {
        ClientOptions* this_00 = *(ClientOptions**)this;
        RT7Core* this_01 = *(RT7Core**)(this + 8);
        auto effectManager = this_01->GetEffectManager();
        this_00->ApplyAutoSetupPreset(4, *this_01, *effectManager);
    }

    // 0x10070e9a0
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_32::operator()() const {
        ClientOptions* this_00 = *(ClientOptions**)this;
        RT7Core* this_01 = *(RT7Core**)(this + 8);
        auto effectManager = this_01->GetEffectManager();
        this_00->ApplyAutoSetupPreset(3, *this_01, *effectManager);
    }

    // 0x10070f5d0
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_33::operator()() const {
        ClientOptions* this_00 = *(ClientOptions**)this;
        RT7Core* this_01 = *(RT7Core**)(this + 8);
        auto effectManager = this_01->GetEffectManager();
        this_00->ApplyAutoSetupPreset(2, *this_01, *effectManager);
    }

    // 0x100710200
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_34::operator()() const {
        ClientOptions* this_00 = *(ClientOptions**)this;
        RT7Core* this_01 = *(RT7Core**)(this + 8);
        auto effectManager = this_01->GetEffectManager();
        this_00->ApplyAutoSetupPreset(1, *this_01, *effectManager);
    }

    // 0x100710e30
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_35::operator()() const {
        ClientOptions* this_00 = *(ClientOptions**)this;
        RT7Core* this_01 = *(RT7Core**)(this + 8);
        auto effectManager = this_01->GetEffectManager();
        this_00->ApplyAutoSetupPreset(6, *this_01, *effectManager);
    }

    // 0x100711f60
    void RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                             graphics::RT7Core*)::$_36::operator()(StringView stringView,
                                                                                   std::optional<int> arg2) const {
        ClientOptions* this_00;
        RT7Core* this_01;
        Console* this_02;
        uint8_t bVar2;
        int iVar3;
        int* piVar4;
        EffectManager* effectManager;
        unsigned long uVar5;
        char* pcVar6;
        uint8_t bVar7;
        ClientOptionId CVar8;
        int arg2_00;
        char* pcVar9;
        int iVar10;
        StringView local_108;
        StringView local_f8;
        StringView local_e8;
        StringView local_d8;
        StringView local_c8;
        StringView local_b8;
        StringView local_a8;
        StringView local_98;
        StringView local_88;
        StringView local_78;
        StringView local_68;
        StringView local_58;
        ClientOptions* local_40;
        ClientOptionId local_34;

        local_108.StringView<3ul>("aa");
        bool cVar1 = *stringView == &local_108;
        if (!cVar1) {
            local_f8.StringView<10ul>("aaquality");
            cVar1 = *stringView == &local_f8;
            CVar8 = 0;
            if (!cVar1) {
                local_e8.StringView<3ul>("ao");
                cVar1 = *stringView == &local_e8;
                bVar7 = 0;
                if (!cVar1) {
                    local_d8.StringView<6ul>("bloom");
                    cVar1 = *stringView == &local_d8;
                    if (!cVar1) {
                        local_c8.StringView<13ul>("drawdistance");
                        cVar1 = *stringView == &local_c8;
                        if (!cVar1) {
                            local_b8.StringView<9ul>("lighting");
                            cVar1 = *stringView == &local_b8;
                            if (!cVar1) {
                                local_a8.StringView<8ul>("shadows");
                                cVar1 = *stringView == &local_a8;
                                if (!cVar1) {
                                    local_98.StringView<14ul>("shadowquality");
                                    cVar1 = *stringView == &local_98;
                                    if (!cVar1) {
                                        local_88.StringView<9ul>("textures");
                                        cVar1 = *stringView == &local_88;
                                        if (!cVar1) {
                                            local_78.StringView<12ul>("reflections");
                                            cVar1 = *stringView == &local_78;
                                            if (!cVar1) {
                                                local_68.StringView<12ul>("volumetrics");
                                                cVar1 = *stringView == &local_68;
                                                if (!cVar1) {
                                                    local_58.StringView<6ul>("vsync");
                                                    bVar2 = *stringView == &local_58;
                                                    bVar7 = bVar2 ^ 1;
                                                    CVar8 = 41;
                                                    if (bVar2 != 0) {
                                                        CVar8 = 28;
                                                    }
                                                } else {
                                                    CVar8 = 27;
                                                    bVar7 = 0;
                                                }
                                            } else {
                                                CVar8 = 15;
                                                bVar7 = 0;
                                            }
                                        } else {
                                            CVar8 = 21;
                                            bVar7 = 0;
                                        }
                                    } else {
                                        CVar8 = 20;
                                        bVar7 = 0;
                                    }
                                } else {
                                    CVar8 = 19;
                                    bVar7 = 0;
                                }
                            } else {
                                CVar8 = 12;
                                bVar7 = 0;
                            }
                        } else {
                            CVar8 = 8;
                            bVar7 = 0;
                        }
                    } else {
                        CVar8 = 4;
                        bVar7 = 0;
                    }
                }
            } else {
                CVar8 = 3;
                bVar7 = 0;
            }
        } else {
            CVar8 = 2;
            bVar7 = 0;
        }
        if (bVar7 == 0) {
            this_00 = field_0;
            cVar1 = (arg2).operator_cast_to_bool();
            if (!cVar1) {
                local_34 = CVar8;
                cVar1 = this_00->ValueLabelsAvailableForOption(CVar8);
                CVar8 = local_34;
                if (cVar1) {
                    local_40 = this_00;
                    uVar5 = this_00->GetOptionValueRange(local_34);
                    iVar3 = local_40->GetOptionValue(CVar8);
                    field_16->AddMessage(2, "Supported settings:");
                    iVar10 = (int)(uVar5 >> 32);
                    if ((int)uVar5 <= iVar10) {
                        do {
                            this_02 = field_16;
                            arg2_00 = (int)uVar5;
                            pcVar6 = local_40->GetOptionValueLabel(local_34, arg2_00);
                            pcVar9 = "";
                            if (iVar3 == arg2_00) {
                                pcVar9 = "<----";
                            }
                            this_02->AddMessage(2, "\t%s - %d %s", pcVar6, uVar5 & 4294967295, pcVar9);
                            uVar5 = (unsigned long)(arg2_00 + 1U);
                        } while (iVar10 + 1U != arg2_00 + 1U);
                    }
                }
            } else {
                piVar4 = (int*)(arg2).value();
                iVar3 = *piVar4;
                this_01 = field_8;
                effectManager = this_01->GetEffectManager();
                this_00->SetOptionValue(CVar8, iVar3, *this_01, *effectManager);
            }
        }
    }

    // 0x1007133a0
    void RegisterCommonCommandsClientOptions(
        jag::console::Console*, ClientOptions*,
        graphics::RT7Core*)::$_37::operator()(std::optional<StringView> stringView) const {
        void result;
        ReturnValue result;
        StringView local_40;
        ReturnValue local_30;

        local_40.value_or<char const*&>(this);
        &result = &local_30;
        result = local_40.to_owned_string<eastl::string>();
        ((Screengrabber*)result.Instance())->RequestScreenshot(local_30);
    }

    // 0x100715a60
    GWCLocation::GWCLocation() : field_0(-1) {}

    // 0x100715a80
    GWCLocation::GWCLocation(GWCLocation&& gwcLocation) : field_0(gwcLocation.field_0), field_8(gwcLocation.field_8) {}

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x100700e20
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
        game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
            eastl::fixed_vector<StringView, 4ul> const&) const ::{
        lambda(BaseApp*) #1
    }
    , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                  eastl::fixed_vector<StringView, 4ul> const&) const ::{ lambda(BaseApp*) #1 } &&
              arg1) {
        *(uint64_t*)this = 0;
        *(uint32_t*)(this + 16) = *(uint32_t*)arg1;
        *(void (**)(...))(this + 144) =
            function <
            game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                eastl::fixed_vector<StringView, 4ul> const&) const ::{
            lambda(void*, void*) #1
        }
        (BaseApp*)#1
    },void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul>const&)const::{
        lambda(void*, void*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(void (**)(...))this =
    function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                   eastl::fixed_vector<StringView, 4ul> const&) const ::{
    lambda(void*, BaseApp*) #1
}
(BaseApp*)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul>const&)const::{
    lambda(void*, BaseApp*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*, BaseApp*) #1
}
::BaseApp__;
*(void (**)(...))(this + 152) =
    function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                   eastl::fixed_vector<StringView, 4ul> const&) const ::{
    lambda(void*) #1
}
(BaseApp*)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul>const&)const::{
    lambda(void*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x100700e60
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul> const&) const ::{
    lambda(BaseApp*) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
             eastl::fixed_vector<StringView, 4ul> const&) const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    function < game::RegisterCommonCommandsDebug(
                   console::Console*, BaseApp*,
                   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul> const&)
                   const ::{
        lambda(BaseApp*) #1
    }
    , void > (game::RegisterCommonCommandsDebug(
                 console::Console*, BaseApp*,
                 graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul> const&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()((_lambda_void__void___1_*)this, arg1, arg2);
}

// 0x100700e70
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul> const&) const ::{
    lambda(BaseApp*) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
             eastl::fixed_vector<StringView, 4ul> const&) const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint32_t*)arg1 = *(uint32_t*)this;
}

// 0x100700e80
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul> const&) const ::{
    lambda(BaseApp*) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
             eastl::fixed_vector<StringView, 4ul> const&) const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::__invoke(void* arg1, BaseApp* baseApp) {
    function < game::RegisterCommonCommandsDebug(
                   console::Console*, BaseApp*,
                   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul> const&)
                   const ::{
        lambda(BaseApp*) #1
    }
    , void > (game::RegisterCommonCommandsDebug(
                 console::Console*, BaseApp*,
                 graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul> const&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()((_lambda_void__jag__BaseApp___1_*)this, arg1, baseApp);
}

// 0x100700e90
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul> const&) const ::{
    lambda(BaseApp*) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
             eastl::fixed_vector<StringView, 4ul> const&) const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::operator()(void* arg1, BaseApp * baseApp) const {
    const ::{
        lambda(BaseApp*) #1
    }
    ::operator()((_lambda_jag__BaseApp___1_*)this, arg1);
}

// 0x100701050
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul> const&) const ::{
    lambda(BaseApp*) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
             eastl::fixed_vector<StringView, 4ul> const&) const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x1006f9270
    char const* DataSizeString<eastl::fixed_string<char, 256>>(eastl::fixed_string<char, 256>& str,
                                                               unsigned long long arg2) {
        char* pcVar1;
        float fVar2;

        if (arg2 < 1048577) {
            if (arg2 < 1025) {
                str.sprintf("%d bytes");
                goto LAB_1006f92d3;
            }
            fVar2 = Bytes2Kilobytes<unsigned long long>(arg2);
            pcVar1 = "%.3fKB";
        } else {
            fVar2 = Bytes2Megabytes<unsigned long long>(arg2);
            pcVar1 = "%.3fMB";
        }
        str.sprintf(pcVar1, (double)fVar2);
    LAB_1006f92d3:
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

    // 0x100703770
    void SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >>
            ::deallocate(
                std::__packaged_task_func<
                    std::__bind<game::RegisterCommonCommandsDebug(
                        console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{ lambda() #1 }>,
                    SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                unsigned long arg2) {
        DeAllocate(16, arg2);
    }

    // 0x100711da0
    bool FromString<StringView, StringView>(const StringView& stringView1, StringView& stringView2, int arg3) {
        Particle* pPVar1 = stringView1.field_8;
        stringView2.field_0 = stringView1.field_0;
        stringView2.field_8 = pPVar1;
        return true;
    }

} // namespace jag
