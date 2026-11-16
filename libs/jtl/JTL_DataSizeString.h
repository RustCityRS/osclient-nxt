// libs/jtl/JTL_DataSizeString.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.shared

namespace jag::console::internal {
    template <typename...> // 1 instantiations, e.g. <void>
    class CallConsoleFnWrapper {
    public:
        void operator()<
            std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&);
        void
        operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 const&,
                   std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                                  game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 const&,
                                  std::tuple<>&);
        void
        operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 const&,
                   std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                                  game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 const&,
                                  std::tuple<>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 const&,
                        std::tuple<std::optional<bool>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 const&,
            std::tuple<std::optional<bool>>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 const&,
                        std::tuple<eastl::string, std::optional<bool>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 const&,
            std::tuple<eastl::string, std::optional<bool>>&);
        void
        operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 const&,
                   std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                                  game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 const&,
                                  std::tuple<>&);
        void
        operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 const&,
                   std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                                  game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 const&,
                                  std::tuple<>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 const&,
                        std::tuple<eastl::string>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 const&,
            std::tuple<eastl::string>&);
        void operator()<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&);
        void
        operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 const&,
                   std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                                  game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 const&,
                                  std::tuple<>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 const&,
                        std::tuple<std::optional<unsigned int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 const&,
            std::tuple<std::optional<unsigned int>>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 const&,
                        std::tuple<std::optional<int>, std::optional<int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 const&,
            std::tuple<std::optional<int>, std::optional<int>>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 const&,
                        std::tuple<std::optional<int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 const&,
            std::tuple<std::optional<int>>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 const&,
                        std::tuple<int>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 const&, std::tuple<int>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 const&,
                        std::tuple<int>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 const&, std::tuple<int>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 const&,
                        std::tuple<int, int, int, int>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 const&,
            std::tuple<int, int, int, int>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 const&, std::tuple<>&);
        void operator()<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 const&, std::tuple<>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 const&, std::tuple<>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 const&,
                        std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 const&, std::tuple<>&);
        void operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 const&,
                        std::tuple<std::optional<eastl::string>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 const&,
            std::tuple<std::optional<eastl::string>>&);
        void operator()<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&);
        void operator()<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&);
        void operator()<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&);
        void operator()<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&);
        void operator()<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26 const&,
            std::tuple<int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                              game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                        graphics::RT7Core*)::$_26 const&,
                              std::tuple<int>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27 const&,
            std::tuple<int, int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                                   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                             graphics::RT7Core*)::$_27 const&,
                                   std::tuple<int, int>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_28 const&,
                           std::tuple<>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_29 const&,
                           std::tuple<>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_30 const&,
                           std::tuple<>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_31 const&,
                           std::tuple<>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_32 const&,
                           std::tuple<>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_33 const&,
                           std::tuple<>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_34 const&,
                           std::tuple<>&);
        void operator()<
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35 const&,
            std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
                           game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                     graphics::RT7Core*)::$_35 const&,
                           std::tuple<>&);
        void operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                  graphics::RT7Core*)::$_36 const&,
                        std::tuple<StringView, std::optional<int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36 const&,
            std::tuple<StringView, std::optional<int>>&);
        void operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                  graphics::RT7Core*)::$_37 const&,
                        std::tuple<std::optional<StringView>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37 const&,
            std::tuple<std::optional<StringView>>&);
        void operator()<Console::RegisterCoreCommands()::$_0 const&, std::tuple<std::optional<int>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            Console::RegisterCoreCommands()::$_0 const&, std::tuple<std::optional<int>>&);
        void operator()<Console::RegisterCoreCommands()::$_1 const&, std::tuple<StringView>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            Console::RegisterCoreCommands()::$_1 const&, std::tuple<StringView>&);
        void operator()<Console::RegisterCoreCommands()::$_3 const&, std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            Console::RegisterCoreCommands()::$_3 const&, std::tuple<>&);
        void operator()<Console::RegisterCoreCommands()::$_4 const&, std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            Console::RegisterCoreCommands()::$_4 const&, std::tuple<>&);
        void operator()<Console::RegisterCoreCommands()::$_5 const&, std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            Console::RegisterCoreCommands()::$_5 const&, std::tuple<>&);
        void operator()<Console::RegisterCoreCommands()::$_6 const&, std::tuple<>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            Console::RegisterCoreCommands()::$_6 const&, std::tuple<>&);
        void operator()<Console::RegisterCoreCommands()::$_2 const&, std::tuple<std::optional<eastl::string>>&>(
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&,
            Console::RegisterCoreCommands()::$_2 const&, std::tuple<std::optional<eastl::string>>&);
    };

    // 0x10007b400, 48 bytes, inline, placed by class header (inline)
    // void CallConsoleFnWrapper<void>::operator()<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>
   const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, function* param_2, tuple* param_3) {
        std::apply<
            std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            param_2, param_3);
        param_1->reset();
    }

    // 0x1006f9370, 112 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<std::optional<unsigned int> >(std::tuple<std::optional<unsigned int> >*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<std::optional<unsigned int>
   >(std::tuple<std::optional<unsigned int> >*) */

    tuple* BuildArgInfos<std::optional<unsigned int>>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<std::optional<unsigned int>>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006f9ee0, 48 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<std::optional<unsigned int> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<std::optional<unsigned int> >*)
    /* auto DecodeArgs<std::optional<unsigned int>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<std::optional<unsigned int> >*) */

    undefined8 DecodeArgs<std::optional<unsigned int>>(fixed_vector* param_1, Console* param_2,
                                                       ArgDecodingError* param_3, tuple* param_4) {
        undefined8 local_18;
        undefined8 local_10;

        local_10 = DecodeArg<std::optional<unsigned int>>(param_1, param_2, param_3, (int)param_4);
        std::tuple<std::optional<unsigned int>>::tuple<std::optional<unsigned int>, 0>((optional*)&local_18);
        return local_18;
    }

    // 0x1006f9f10, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 const&, std::tuple<std::optional<unsigned int> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 const&, std::tuple<std::optional<unsigned int> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_9 const&, std::tuple<std::optional<unsigned int> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __9* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__9_const&,
                   std::tuple<std::optional<unsigned int>>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x1006f9f40, 96 bytes, placed by debug map only (low confidence)
    // auto DecodeArg<std::optional<unsigned int> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    /* auto DecodeArg<std::optional<unsigned int>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, int) */

    undefined8 DecodeArg<std::optional<unsigned int>>(fixed_vector* param_1, Console* param_2,
                                                      ArgDecodingError* param_3, int param_4) {
        long lVar1;
        undefined8 local_30;
        undefined4 local_24;

        lVar1 = param_3->size();
        if (lVar1 == 0) {
            new (&local_30) std::optional<unsigned int>();
        } else {
            local_24 = DecodeArg<unsigned int>(param_1, param_2, param_3, param_4);
            std::optional<unsigned int>::optional<unsigned int, 0>((uint*)&local_30);
        }
        return local_30;
    }

    // 0x1006f9fb0, 448 bytes, placed by debug map only (low confidence)
    // auto DecodeArg<unsigned int>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    ulong DecodeArg<unsigned int>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3, int param_4) {
        int iVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        StringView* pSVar5;
        variant* pvVar6;
        uint* puVar7;
        StringView SVar8;
        StringView local_d0;
        char* local_c0;
        int local_b4;
        StringView local_b0[7];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b4 = 0;
        lVar4 = param_3->size();
        if (lVar4 != 0) {
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
            new (&local_d0) StringView(pSVar5);
            SVar8.field_8 = (uchar*)&local_d0;
            SVar8.field_0 = (ulong)param_2;
            local_b0->FindStoredVariable(SVar8);
            bVar2 = local_b0->operator_cast_to_bool();
            if (bVar2) {
                pvVar6 = (variant*)local_b0->value();
                puVar7 =
                    (uint*)std::get_if<unsigned int, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar6);
                if ((puVar7 == (uint*)0) || (param_2 = (Console*)(ulong)*puVar7, puVar7 == (uint*)0))
                    goto LAB_1006fa098;
            LAB_1006fa05c:
                bVar2 = false;
            } else {
                local_c0 = (char*)((ulong)local_c0 & 18446744069414584320);
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
                bVar2 = FromString<StringView, unsigned int>(pSVar5, (uint*)&local_c0, 10);
                param_2 = (Console*)((ulong)local_c0 & 4294967295);
                if (bVar2)
                    goto LAB_1006fa05c;
            LAB_1006fa098:
                bVar2 = true;
            }
            local_b0->~optional();
            if (!bVar2)
                goto LAB_1006fa11c;
        }
        local_c0 = GetTypeName<unsigned int>();
        iVar1 = local_b4;
        iVar3 = param_3->size();
        if (iVar1 < iVar3) {
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
            StringView::StringView(local_b0, pSVar5);
        } else {
            StringView::StringView<13ul>(local_b0, "<lt>null<gt>");
        }
        eastl::vector<ArgDecodingError, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<char const*, StringView_const, int&>(
                (vector<ArgDecodingError, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_1,
                &local_c0, local_b0, &local_b4);
        param_2 = (Console*)0;
    LAB_1006fa11c:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (ulong)param_2 & 4294967295;
    }

    // 0x1006fa1a0, 16 bytes, inline, placed by debug map only (low confidence)
    // char const* GetTypeName<unsigned int>()
    char* GetTypeName<unsigned int>() {
        return "uint";
    }

    // 0x1006fa540, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<std::optional<unsigned int> >()
    /* CommandArgInfo GetArgInfo<std::optional<unsigned int> >()
    */

    void GetArgInfo<std::optional<unsigned int>>() {
        GetTypeName<unsigned int>();
    }

    // 0x1006fa5c0, 128 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<std::optional<int>, std::optional<int> >(std::tuple<std::optional<int>, std::optional<int> >*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<std::optional<int>, std::optional<int>
   >(std::tuple<std::optional<int>, std::optional<int> >*) */

    tuple* BuildArgInfos<std::optional<int>, std::optional<int>>(tuple* param_1) {
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        allocator local_48[8];
        undefined8 local_40;
        undefined1 local_38;
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_40 = GetArgInfo<std::optional<int>>();
        local_38 = extraout_DL;
        local_30 = GetArgInfo<std::optional<int>>();
        local_28 = extraout_DL_00;
        eastl::allocator::allocator(local_48, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_40, 2, local_48);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006fb170, 96 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<std::optional<int>, std::optional<int> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<std::optional<int>, std::optional<int> >*)
    /* auto DecodeArgs<std::optional<int>, std::optional<int>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<std::optional<int>, std::optional<int> >*) */

    undefined1[16] DecodeArgs<std::optional<int>, std::optional<int>>(fixed_vector* param_1, Console* param_2,
                                                                      ArgDecodingError* param_3, tuple* param_4) {
        undefined1 auVar1[16];
        optional local_40[16];
        undefined8 local_30;
        undefined8 local_28;

        local_30 = DecodeArg<std::optional<int>>(param_1, param_2, param_3, 0);
        local_28 = DecodeArg<std::optional<int>>(param_1, param_2, param_3, 1);
        std::tuple<std::optional<int>, std::optional<int>>::tuple<std::optional<int>, std::optional<int>, 0>(
            local_40, (optional*)&local_30);
        auVar1[0] = local_40[0];
        auVar1[1] = local_40[1];
        auVar1[2] = local_40[2];
        auVar1[3] = local_40[3];
        auVar1[4] = local_40[4];
        auVar1[5] = local_40[5];
        auVar1[6] = local_40[6];
        auVar1[7] = local_40[7];
        auVar1[8] = local_40[8];
        auVar1[9] = local_40[9];
        auVar1[10] = local_40[10];
        auVar1[11] = local_40[11];
        auVar1[12] = local_40[12];
        auVar1[13] = local_40[13];
        auVar1[14] = local_40[14];
        auVar1[15] = local_40[15];
        return auVar1;
    }

    // 0x1006fb1d0, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 const&, std::tuple<std::optional<int>, std::optional<int> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 const&, std::tuple<std::optional<int>, std::optional<int> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_10 const&, std::tuple<std::optional<int>, std::optional<int> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __10* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__10_const&,
                   std::tuple<std::optional<int>, std::optional<int>>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x1006fb200, 112 bytes, placed by debug map only (low confidence)
    // auto DecodeArg<std::optional<int> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    /* auto DecodeArg<std::optional<int>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, int) */

    undefined8 DecodeArg<std::optional<int>>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                             int param_4) {
        ulong uVar1;
        undefined8 local_40;
        undefined4 local_34;

        uVar1 = param_3->size();
        if ((uint)param_4 < uVar1) {
            local_34 = DecodeArg<int>(param_1, param_2, param_3, param_4);
            std::optional<int>::optional<int, 0>((int*)&local_40);
        } else {
            new (&local_40) std::optional<int>();
        }
        return local_40;
    }

    // 0x1006fb280, 464 bytes, placed by debug map only (low confidence)
    // auto DecodeArg<int>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    ulong DecodeArg<int>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3, int param_4) {
        int iVar1;
        bool bVar2;
        int iVar3;
        ulong uVar4;
        StringView* pSVar5;
        variant* pvVar6;
        uint* puVar7;
        ulong uVar8;
        StringView SVar9;
        StringView local_d8;
        fixed_vector* local_c8;
        char* local_c0;
        int local_b4;
        StringView local_b0[7];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar8 = (ulong)(uint)param_4;
        local_b4 = param_4;
        uVar4 = param_3->size();
        if (uVar8 < uVar4) {
            local_c8 = param_1;
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
            new (&local_d8) StringView(pSVar5);
            SVar9.field_8 = (uchar*)&local_d8;
            SVar9.field_0 = (ulong)param_2;
            local_b0->FindStoredVariable(SVar9);
            bVar2 = local_b0->operator_cast_to_bool();
            if (bVar2) {
                pvVar6 = (variant*)local_b0->value();
                puVar7 = (uint*)std::get_if<int, int, unsigned int, bool, float, eastl::string, VarAny>(pvVar6);
                if ((puVar7 == (uint*)0) || (uVar8 = (ulong)*puVar7, puVar7 == (uint*)0))
                    goto LAB_1006fb37b;
            LAB_1006fb338:
                bVar2 = false;
            } else {
                local_c0 = (char*)((ulong)local_c0 & 18446744069414584320);
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
                bVar2 = FromString<StringView, int>(pSVar5, (int*)&local_c0, 10);
                uVar8 = (ulong)local_c0 & 4294967295;
                if (bVar2)
                    goto LAB_1006fb338;
            LAB_1006fb37b:
                bVar2 = true;
            }
            param_1 = local_c8;
            local_b0->~optional();
            if (!bVar2)
                goto LAB_1006fb3ff;
        }
        local_c0 = GetTypeName<int>();
        iVar1 = local_b4;
        iVar3 = param_3->size();
        if (iVar1 < iVar3) {
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_3,
                    (long)local_b4);
            StringView::StringView(local_b0, pSVar5);
        } else {
            StringView::StringView<13ul>(local_b0, "<lt>null<gt>");
        }
        eastl::vector<ArgDecodingError, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<char const*, StringView_const, int&>(
                (vector<ArgDecodingError, eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_1,
                &local_c0, local_b0, &local_b4);
        uVar8 = 0;
    LAB_1006fb3ff:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar8;
    }

    // 0x1006fb480, 16 bytes, inline, placed by debug map only (low confidence)
    // char const* GetTypeName<int>()
    char* GetTypeName<int>() {
        return "int";
    }

    // 0x1006fb960, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<std::optional<int> >()
    /* CommandArgInfo GetArgInfo<std::optional<int> >() */

    void GetArgInfo<std::optional<int>>() {
        GetTypeName<int>();
    }

    // 0x1006fb9e0, 112 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<std::optional<int> >(std::tuple<std::optional<int> >*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<std::optional<int> >(std::tuple<std::optional<int> >*) */

    tuple* BuildArgInfos<std::optional<int>>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<std::optional<int>>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006fc550, 48 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<std::optional<int> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<std::optional<int> >*)
    /* auto DecodeArgs<std::optional<int>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<std::optional<int> >*) */

    undefined8 DecodeArgs<std::optional<int>>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                              tuple* param_4) {
        undefined8 local_18;
        undefined8 local_10;

        local_10 = DecodeArg<std::optional<int>>(param_1, param_2, param_3, 0);
        std::tuple<std::optional<int>>::tuple<std::optional<int>, 0>((optional*)&local_18);
        return local_18;
    }

    // 0x1006fc580, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 const&, std::tuple<std::optional<int> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 const&, std::tuple<std::optional<int> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_11 const&, std::tuple<std::optional<int> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __11* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__11_const&,
                   std::tuple<std::optional<int>>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x1006fc820, 112 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<int>(std::tuple<int>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<int>(std::tuple<int>*) */

    tuple* BuildArgInfos<int>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<int>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006fd390, 48 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<int>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<int>*)
    /* auto DecodeArgs<int>(eastl::fixed_vector<ArgDecodingError,
   4ul, true, eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<int>*) */

    int DecodeArgs<int>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3, tuple* param_4) {
        int local_10[2];

        DecodeArg<int>(param_1, param_2, param_3, 0);
        std::tuple<int>::tuple<int, 0>(local_10);
        return local_10[0];
    }

    // 0x1006fd3c0, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 const&, std::tuple<int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 const&, std::tuple<int>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_12 const&, std::tuple<int>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __12* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__12_const&,
                   std::tuple<int>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x1006fd5b0, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<int>()
    void GetArgInfo<int>() {
        GetTypeName<int>();
    }

    // 0x1006fe130, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 const&, std::tuple<int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 const&, std::tuple<int>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_13 const&, std::tuple<int>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __13* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__13_const&,
                   std::tuple<int>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x1006fe310, 160 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<int, int, int, int>(std::tuple<int, int, int, int>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<int, int, int, int>(std::tuple<int, int, int, int>*) */

    tuple* BuildArgInfos<int, int, int, int>(tuple* param_1) {
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        undefined1 extraout_DL_01;
        undefined1 extraout_DL_02;
        allocator local_68[8];
        undefined8 local_60;
        undefined1 local_58;
        undefined8 local_50;
        undefined1 local_48;
        undefined8 local_40;
        undefined1 local_38;
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_60 = GetArgInfo<int>();
        local_58 = extraout_DL;
        local_50 = GetArgInfo<int>();
        local_48 = extraout_DL_00;
        local_40 = GetArgInfo<int>();
        local_38 = extraout_DL_01;
        local_30 = GetArgInfo<int>();
        local_28 = extraout_DL_02;
        eastl::allocator::allocator(local_68, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_60, 4, local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1006feee0, 144 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<int, int, int, int>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<int, int, int, int>*)
    /* auto DecodeArgs<int, int, int,
   int>(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<int, int, int, int>*) */

    undefined1[16] DecodeArgs<int, int, int, int>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                                  tuple* param_4) {
        undefined1 local_40[16];
        int local_30;
        int local_2c;
        int local_28;
        undefined4 local_24;

        local_30 = DecodeArg<int>(param_1, param_2, param_3, 0);
        local_2c = DecodeArg<int>(param_1, param_2, param_3, 1);
        local_28 = DecodeArg<int>(param_1, param_2, param_3, 2);
        local_24 = DecodeArg<int>(param_1, param_2, param_3, 3);
        std::tuple<int, int, int, int>::tuple<int, int, int, int, 0>((int*)local_40, &local_30, &local_2c, &local_28);
        return local_40;
    }

    // 0x1006fef70, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 const&, std::tuple<int, int, int, int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 const&, std::tuple<int, int, int, int>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_14 const&, std::tuple<int, int, int, int>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __14* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__14_const&,
                   std::tuple<int, int, int, int>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x1006ffd60, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_15 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __15* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__15_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x1007009c0, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_16 const&,
   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __16* param_2, tuple* param_3) {
        std::apply<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__16_const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            param_2, param_3);
        param_1->reset();
    }

    // 0x100701b30, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_17 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __17* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__17_const&,
                   std::tuple<>&>(param_1, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100702610, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_18 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __18* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__18_const&,
                   std::tuple<>&>(param_1, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100703100, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_19 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __19* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__19_const&,
                   std::tuple<>&>(param_1, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100704330, 112 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<std::optional<eastl::string > const&>(std::tuple<std::optional<eastl::string > const&>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<std::optional<eastl::string >
   const&>(std::tuple<std::optional<eastl::string > const&>*) */

    tuple* internal::BuildArgInfos<std::optional<eastl::string> const&>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<std::optional<eastl::string> const&>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100704e10, 96 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<std::optional<eastl::string > const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, std::tuple<std::optional<eastl::string > const&>*)
    /* auto DecodeArgs<std::optional<eastl::string
   > const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&,
   Console const&, ArgDecodingError<StringView, 4ul, true,
   eastl::allocator> const&, std::tuple<std::optional<eastl::string >
   const&>*) */

    fixed_vector* DecodeArgs<std::optional<eastl::string> const&>(fixed_vector* param_1, Console* param_2,
                                                                  ArgDecodingError* param_3, tuple* param_4) {
        optional local_70[40];
        fixed_vector local_48[40];

        DecodeArg<std::optional<eastl::string> const&>(local_48, param_2, param_3, (int)param_4);
        std::tuple<std::optional<eastl::string>>::tuple<std::optional<eastl::string>, 0>(local_70);
        local_48->~optional();
        new (param_1) std::tuple<std::optional<eastl::string>>(local_70);
        local_70->~tuple();
        return param_1;
    }

    // 0x100704e90, 16 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 const&, std::tuple<std::optional<eastl::string > >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 const&, std::tuple<std::optional<eastl::string > >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_20 const&, std::tuple<std::optional<eastl::basic_string<char,
   eastl::allocator> > >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __20* param_2, tuple* param_3) {
        long lVar1;
        ArgDecodingError* extraout_RDX;
        fixed_vector afStack_58[32];

        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__20_const&,
                   std::tuple<std::optional<eastl::string>>&>(param_1, (tuple*)param_1);
        lVar1 = param_3->size();
        if (lVar1 == 0) {
            new (param_1) std::optional<eastl::string>();
        } else {
            DecodeArg<eastl::string>(afStack_58, (Console*)param_1, extraout_RDX, (int)param_3);
            std::optional<eastl::string>::optional<eastl::string, 0>((basic_string*)param_1);
            afStack_58->~basic_string();
        }
    }

    // 0x100704ea0, 144 bytes, placed by debug map only (low confidence)
    // auto DecodeArg<std::optional<eastl::string > const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, int)
    /* auto DecodeArg<std::optional<eastl::string
   > const&>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&,
   Console const&, ArgDecodingError<StringView, 4ul, true,
   eastl::allocator> const&, int) */

    fixed_vector* DecodeArg<std::optional<eastl::string> const&>(fixed_vector* param_1, Console* param_2,
                                                                 ArgDecodingError* param_3, int param_4) {
        long lVar1;
        undefined4 in_register_0000000c;
        fixed_vector local_50[32];

        lVar1 = (CONCAT44(in_register_0000000c, param_4))->size();
        if (lVar1 == 0) {
            new (param_1) std::optional<eastl::string>();
        } else {
            DecodeArg<eastl::string>(local_50, param_2, param_3, param_4);
            std::optional<eastl::string>::optional<eastl::string, 0>((basic_string*)param_1);
            local_50->~basic_string();
        }
        return param_1;
    }

    // 0x100704f50, 528 bytes, placed by debug map only (low confidence)
    // auto DecodeArg<eastl::string >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::allocator> const&, int)
    fixed_vector* DecodeArg<eastl::string>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                           int param_4) {
        int iVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        StringView* pSVar5;
        variant* pvVar6;
        basic_string* pbVar7;
        undefined4 in_register_0000000c;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this;
        StringView SVar8;
        StringView local_f0;
        char* local_e0[4];
        Console* local_c0;
        int local_b4;
        StringView local_b0[7];
        long local_38;

        this = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)CONCAT44(in_register_0000000c,
                                                                                                 param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b4 = 0;
        lVar4 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this);
        if (lVar4 == 0) {
        LAB_10070508c:
            local_e0[0] = GetTypeName<eastl::string>();
            iVar1 = local_b4;
            iVar3 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this);
            if (iVar1 < iVar3) {
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
                StringView::StringView(local_b0, pSVar5);
            } else {
                StringView::StringView<13ul>(local_b0, "<lt>null<gt>");
            }
            eastl::vector<ArgDecodingError,
                          eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                emplace_back<char const*, StringView_const, int&>(
                    (vector<ArgDecodingError,
                            eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                    local_e0, local_b0, &local_b4);
            new (param_1) eastl::string();
        } else {
            local_c0 = param_2;
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
            new (&local_f0) StringView(pSVar5);
            SVar8.field_8 = (uchar*)&local_f0;
            SVar8.field_0 = (ulong)param_3;
            local_b0->FindStoredVariable(SVar8);
            bVar2 = local_b0->operator_cast_to_bool();
            if (bVar2) {
                pvVar6 = (variant*)local_b0->value();
                pbVar7 =
                    (basic_string*)std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(
                        pvVar6);
                param_2 = local_c0;
                if (pbVar7 == (basic_string*)0) {
                LAB_100705080:
                    local_b0->~optional();
                    goto LAB_10070508c;
                }
                new (param_1) eastl::string(pbVar7);
            } else {
                new (local_e0) eastl::string();
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
                param_2 = local_c0;
                bVar2 = FromString<StringView, eastl::string>(pSVar5, (basic_string*)local_e0, 10);
                if (!bVar2) {
                    local_e0->~basic_string();
                    goto LAB_100705080;
                }
                new (param_1) eastl::string(local_e0);
                local_e0->~basic_string();
            }
            local_b0->~optional();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x1007055c0, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<std::optional<eastl::string > const&>()
    /* CommandArgInfo
   GetArgInfo<std::optional<eastl::string >
   const&>() */

    void internal::GetArgInfo<std::optional<eastl::string> const&>() {
        GetTypeName<eastl::string>();
    }

    // 0x100706060, 16 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_21 const&,
   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __21* param_2, tuple* param_3) {
        /* WARNING: Subroutine does not return */
        std::apply<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__21_const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            param_2, (tuple*)param_2);
    }

    // 0x100706b70, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_22 const&,
   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __22* param_2, tuple* param_3) {
        std::apply<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__22_const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            param_2, param_3);
        param_1->reset();
    }

    // 0x100707810, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_23 const&,
   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __23* param_2, tuple* param_3) {
        std::apply<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__23_const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            param_2, param_3);
        param_1->reset();
    }

    // 0x100708350, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_24 const&,
   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __24* param_2, tuple* param_3) {
        std::apply<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__24_const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100708f80, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_25 const&,
   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __25* param_2, tuple* param_3) {
        std::apply<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__25_const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100709c90, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26 const&, std::tuple<int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26 const&, std::tuple<int>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_26 const&, std::tuple<int>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __26* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__26_const&,
                   std::tuple<int>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x100709e90, 128 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<int, int>(std::tuple<int, int>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<int, int>(std::tuple<int, int>*) */

    tuple* BuildArgInfos<int, int>(tuple* param_1) {
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        allocator local_48[8];
        undefined8 local_40;
        undefined1 local_38;
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_40 = GetArgInfo<int>();
        local_38 = extraout_DL;
        local_30 = GetArgInfo<int>();
        local_28 = extraout_DL_00;
        eastl::allocator::allocator(local_48, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_40, 2, local_48);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x10070aa30, 96 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<int, int>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<int, int>*)
    /* auto DecodeArgs<int,
   int>(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<int, int>*) */

    undefined8 DecodeArgs<int, int>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                    tuple* param_4) {
        undefined8 local_30;
        int local_28;
        undefined4 local_24;

        local_28 = DecodeArg<int>(param_1, param_2, param_3, 0);
        local_24 = DecodeArg<int>(param_1, param_2, param_3, 1);
        std::tuple<int, int>::tuple<int, int, 0>((int*)&local_30, &local_28);
        return local_30;
    }

    // 0x10070aa90, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27 const&, std::tuple<int, int>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27 const&, std::tuple<int, int>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_27 const&, std::tuple<int, int>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __27* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__27_const&,
                   std::tuple<int, int>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x10070b800, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_28 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __28* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__28_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x10070c4c0, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_29 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __29* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__29_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x10070d0f0, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_30 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __30* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__30_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x10070dd20, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_31 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __31* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__31_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x10070e950, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_32 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __32* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__32_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x10070f580, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_33 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __33* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__33_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x1007101b0, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_34 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __34* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__34_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100710de0, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_35 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __35* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__35_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100710f40, 128 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<StringView, std::optional<int> >(std::tuple<StringView, std::optional<int> >*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<StringView, std::optional<int>
   >(std::tuple<StringView, std::optional<int> >*) */

    tuple* BuildArgInfos<StringView, std::optional<int>>(tuple* param_1) {
        undefined1 extraout_DL;
        undefined1 extraout_DL_00;
        allocator local_48[8];
        undefined8 local_40;
        undefined1 local_38;
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_40 = GetArgInfo<StringView>();
        local_38 = extraout_DL;
        local_30 = GetArgInfo<std::optional<int>>();
        local_28 = extraout_DL_00;
        eastl::allocator::allocator(local_48, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_40, 2, local_48);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100711b00, 112 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<StringView, std::optional<int> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<StringView, std::optional<int> >*)
    /* auto DecodeArgs<StringView, std::optional<int>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<StringView, std::optional<int> >*) */

    fixed_vector* DecodeArgs<StringView, std::optional<int>>(fixed_vector* param_1, Console* param_2,
                                                             ArgDecodingError* param_3, tuple* param_4) {
        StringView local_60;
        fixed_vector local_48[16];
        undefined8 local_38;

        DecodeArg<StringView>(local_48, param_2, param_3, (int)param_4);
        local_38 =
            DecodeArg<std::optional<int>>((fixed_vector*)param_2, (Console*)param_3, (ArgDecodingError*)param_4, 1);
        std::tuple<StringView, std::optional<int>>::tuple<StringView, std::optional<int>, 0>(&local_60,
                                                                                             (optional*)local_48);
        new (param_1) std::tuple<StringView, std::optional<int>>((tuple*)&local_60);
        return param_1;
    }

    // 0x100711b80, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36 const&, std::tuple<StringView, std::optional<int> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36 const&, std::tuple<StringView, std::optional<int> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_36 const&, std::tuple<StringView, std::optional<int> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __36* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__36_const&,
                   std::tuple<StringView, std::optional<int>>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x100711bb0, 480 bytes, placed by debug map only (low confidence)
    // auto DecodeArg<StringView>(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    fixed_vector* DecodeArg<StringView>(fixed_vector* param_1, Console* param_2, ArgDecodingError* param_3,
                                        int param_4) {
        int iVar1;
        bool bVar2;
        int iVar3;
        long lVar4;
        StringView* pSVar5;
        variant* pvVar6;
        fixed_string* pfVar7;
        undefined4 in_register_0000000c;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this;
        StringView SVar8;
        StringView local_e0;
        StringView local_d0;
        Console* local_c0;
        int local_b4;
        StringView local_b0[7];
        long local_38;

        this = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)CONCAT44(in_register_0000000c,
                                                                                                 param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b4 = 0;
        lVar4 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this);
        if (lVar4 == 0) {
        LAB_100711cd5:
            local_d0.field_0 = (ulong)GetTypeName<StringView>();
            iVar1 = local_b4;
            iVar3 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this);
            if (iVar1 < iVar3) {
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
                StringView::StringView(local_b0, pSVar5);
            } else {
                StringView::StringView<13ul>(local_b0, "<lt>null<gt>");
            }
            eastl::vector<ArgDecodingError,
                          eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                emplace_back<char const*, StringView_const, int&>(
                    (vector<ArgDecodingError,
                            eastl::fixed_vector_allocator<40ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                    (char**)&local_d0, local_b0, &local_b4);
            new (param_1) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        } else {
            local_c0 = param_2;
            pSVar5 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
            new (&local_e0) StringView(pSVar5);
            SVar8.field_8 = (uchar*)&local_e0;
            SVar8.field_0 = (ulong)param_3;
            local_b0->FindStoredVariable(SVar8);
            bVar2 = local_b0->operator_cast_to_bool();
            if (bVar2) {
                pvVar6 = (variant*)local_b0->value();
                pfVar7 =
                    (fixed_string*)std::get_if<eastl::string, int, unsigned int, bool, float, eastl::string, VarAny>(
                        pvVar6);
                if (pfVar7 == (fixed_string*)0) {
                LAB_100711cc9:
                    param_2 = local_c0;
                    local_b0->~optional();
                    goto LAB_100711cd5;
                }
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)param_1,
                                                                                              pfVar7);
            } else {
                new (&local_d0) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
                pSVar5 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<StringView,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           (long)local_b4);
                bVar2 = FromString<StringView, StringView>(pSVar5, &local_d0, 10);
                if (!bVar2)
                    goto LAB_100711cc9;
                new (param_1) StringView(&local_d0);
            }
            local_b0->~optional();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100711dc0, 16 bytes, inline, placed by debug map only (low confidence)
    // char const* GetTypeName<StringView>()
    char* GetTypeName<StringView>() {
        return "string";
    }

    // 0x1007123c0, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<StringView>()
    void GetArgInfo<StringView>() {
        GetTypeName<StringView>();
    }

    // 0x100712500, 112 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<std::optional<StringView> >(std::tuple<std::optional<StringView> >*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<std::optional<StringView>
   >(std::tuple<std::optional<StringView> >*) */

    tuple* BuildArgInfos<std::optional<StringView>>(tuple* param_1) {
        undefined1 extraout_DL;
        allocator local_38[8];
        undefined8 local_30;
        undefined1 local_28;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = GetArgInfo<std::optional<StringView>>();
        local_28 = extraout_DL;
        eastl::allocator::allocator(local_38, "EASTL fixed_vector");
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::fixed_vector(param_1, &local_30, 1, local_38);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100712fb0, 80 bytes, placed by debug map only (low confidence)
    // auto DecodeArgs<std::optional<StringView> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, std::tuple<std::optional<StringView> >*)
    /* auto DecodeArgs<std::optional<StringView>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, std::tuple<std::optional<StringView> >*) */

    fixed_vector* DecodeArgs<std::optional<StringView>>(fixed_vector* param_1, Console* param_2,
                                                        ArgDecodingError* param_3, tuple* param_4) {
        optional local_50[24];
        fixed_vector local_38[24];

        DecodeArg<std::optional<StringView>>(local_38, param_2, param_3, (int)param_4);
        std::tuple<std::optional<StringView>>::tuple<std::optional<StringView>, 0>(local_50);
        new (param_1) std::tuple<std::optional<StringView>>(local_50);
        return param_1;
    }

    // 0x100713010, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37 const&, std::tuple<std::optional<StringView> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37 const&, std::tuple<std::optional<StringView> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_37 const&, std::tuple<std::optional<StringView> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __37* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                             graphics::RT7Core*)::__37_const&,
                   std::tuple<std::optional<StringView>>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100713030, 112 bytes, placed by debug map only (low confidence)
    // auto DecodeArg<std::optional<StringView> >(eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator>&, Console const&, ArgDecodingError<StringView, 4ul, true, eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> > const&, int)
    /* auto DecodeArg<std::optional<StringView>
   >(eastl::fixed_vector<ArgDecodingError, 4ul, true,
   eastl::fixed_vector::allocator>&, Console const&,
   ArgDecodingError<StringView, 4ul, true,
   eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::fixed_vector::allocator> >
   const&, int) */

    fixed_vector* DecodeArg<std::optional<StringView>>(fixed_vector* param_1, Console* param_2,
                                                       ArgDecodingError* param_3, int param_4) {
        long lVar1;
        undefined4 in_register_0000000c;
        fixed_vector local_40[16];

        lVar1 = (CONCAT44(in_register_0000000c, param_4))->size();
        if (lVar1 == 0) {
            new (param_1) std::optional<StringView>();
        } else {
            DecodeArg<StringView>(local_40, param_2, param_3, param_4);
            std::optional<StringView>::optional<StringView, 0>((StringView*)param_1);
        }
        return param_1;
    }

    // 0x1007135a0, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<std::optional<StringView> >()
    /* CommandArgInfo GetArgInfo<std::optional<StringView>
   >() */

    void GetArgInfo<std::optional<StringView>>() {
        GetTypeName<StringView>();
    }

    // 0x100c8cae0, 48 bytes, inline, placed by class header (inline)
    // void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_0 const&, std::tuple<std::optional<int> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, Console::RegisterCoreCommands()::$_0 const&, std::tuple<std::optional<int> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   Console::RegisterCoreCommands()::$_0 const&, std::tuple<std::optional<int> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __0* param_2, tuple* param_3) {
        std::apply<Console::RegisterCoreCommands()::__0_const&, std::tuple<std::optional<int>>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x100c8dcc0, 48 bytes, inline, placed by class header (inline)
    // void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_1 const&, std::tuple<StringView>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, Console::RegisterCoreCommands()::$_1 const&, std::tuple<StringView>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   Console::RegisterCoreCommands()::$_1 const&, std::tuple<StringView>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __1* param_2, tuple* param_3) {
        std::apply<Console::RegisterCoreCommands()::__1_const&, std::tuple<StringView>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x100c8eb40, 32 bytes, inline, placed by class header (inline)
    // void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_3 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, Console::RegisterCoreCommands()::$_3 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   Console::RegisterCoreCommands()::$_3 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __3* param_2, tuple* param_3) {
        std::apply<Console::RegisterCoreCommands()::__3_const&, std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100c8f6c0, 32 bytes, inline, placed by class header (inline)
    // void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_4 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, Console::RegisterCoreCommands()::$_4 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   Console::RegisterCoreCommands()::$_4 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __4* param_2, tuple* param_3) {
        std::apply<Console::RegisterCoreCommands()::__4_const&, std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100c901b0, 32 bytes, inline, placed by class header (inline)
    // void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_5 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, Console::RegisterCoreCommands()::$_5 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   Console::RegisterCoreCommands()::$_5 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __5* param_2, tuple* param_3) {
        std::apply<Console::RegisterCoreCommands()::__5_const&, std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100c90ca0, 32 bytes, inline, placed by class header (inline)
    // void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_6 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, Console::RegisterCoreCommands()::$_6 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   Console::RegisterCoreCommands()::$_6 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __6* param_2, tuple* param_3) {
        std::apply<Console::RegisterCoreCommands()::__6_const&, std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x100c918e0, 48 bytes, inline, placed by class header (inline)
    // void CallConsoleFnWrapper<void>::operator()<Console::RegisterCoreCommands()::$_2 const&, std::tuple<std::optional<eastl::string > >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, Console::RegisterCoreCommands()::$_2 const&, std::tuple<std::optional<eastl::string > >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   Console::RegisterCoreCommands()::$_2 const&,
   std::tuple<std::optional<eastl::string > >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __2* param_2, tuple* param_3) {
        std::apply<Console::RegisterCoreCommands()::__2_const&, std::tuple<std::optional<eastl::string>>&>(param_2,
                                                                                                           param_3);
        param_1->reset();
    }

} // namespace jag::console::internal

namespace jag::game {
    // 0x1006fa3b0, 192 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_9::operator()(std::optional<unsigned int>) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_9::TEMPNAMEPLACEHOLDERVALUE(std::optional<unsigned int>) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_9::operator()(undefined8 param_2) {
        int* piVar2;
        ScaleManager* pSVar3;
        uint* puVar4;
        ulong uVar5;
        char* pcVar6;
        undefined8 uVar7;
        float fVar8;
        undefined8 local_28;

        local_28 = param_2;
        if (local_28.operator_cast_to_bool()) {
            piVar2 = (int*)local_28.value();
            if (*piVar2 == 0) {
                return;
            }
            pSVar3 = (ScaleManager*)(*(RT7Core**)this)->GetScaleManager();
            puVar4 = (uint*)local_28.value();
            pSVar3->SetGameScale((float)*puVar4 * 0.01);
            uVar7 = *(undefined8*)(this + 8);
            puVar4 = (uint*)local_28.value();
            uVar5 = (ulong)*puVar4;
            pcVar6 = "Game scale changed: %u%%";
        } else {
            uVar7 = *(undefined8*)(this + 8);
            pSVar3 = (ScaleManager*)(*(RT7Core**)this)->GetScaleManager();
            fVar8 = (float)pSVar3->GetGameScale();
            uVar5 = (ulong)(fVar8 * 100.0);
            pcVar6 = "Current game scale: %u%%";
        }
        jag::console::Console::AddMessage(uVar7, 2, pcVar6, uVar5);
    }

    // 0x1006fb6f0, 400 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_10::operator()(std::optional<int>, std::optional<int>) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_10::TEMPNAMEPLACEHOLDERVALUE(std::optional<int>, std::optional<int>)
   const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_10::operator()(undefined8 param_2, undefined8 param_3) {
        bool bVar1;
        int iVar2;
        undefined4* puVar3;
        ScaleManager* pSVar4;
        int* piVar5;
        undefined8 local_48;
        undefined8 local_40;
        int local_38;
        undefined1 local_34;
        int local_2c;

        local_48 = param_2;
        local_40 = param_3;
        bVar1 = local_48.operator_cast_to_bool();
        if ((bVar1) && (bVar1 = local_40.operator_cast_to_bool(), bVar1)) {
            puVar3 = (undefined4*)local_48.value();
            iVar2 = eastl::min<graphics::GraphicsQuality>(*puVar3, 16000);
            local_2c = eastl::max<int>(100, iVar2);
            std::optional<int>::optional<int, 0>(&local_38);
            local_48 = CONCAT44(CONCAT31(local_48._5_3_, local_34), local_38);
            puVar3 = (undefined4*)local_40.value();
            iVar2 = eastl::min<graphics::GraphicsQuality>(*puVar3, 12000);
            local_2c = eastl::max<int>(100, iVar2);
            std::optional<int>::optional<int, 0>(&local_38);
            local_40 = CONCAT44(CONCAT31(local_40._5_3_, local_34), local_38);
            pSVar4 = (ScaleManager*)field_0->GetScaleManager();
            piVar5 = (int*)local_48.value();
            iVar2 = *piVar5;
            piVar5 = (int*)local_40.value();
            pSVar4->SetInterfaceResolutionOverride(iVar2, *piVar5);
            local_38 = field_0->GetBackBufferWidth();
            local_2c = field_0->GetBackBufferHeight();
            pSVar4 = (ScaleManager*)field_0->GetScaleManager();
            pSVar4->ScreenToInterfacePosition(&local_38, &local_2c, false);
            jag::console::Console::AddMessage(
                field_8, 2, "Interface resolution override set (%d x %d). Use \'ires\' without values to reset.",
                local_38, local_2c);
            return;
        }
        pSVar4 = (ScaleManager*)field_0->GetScaleManager();
        pSVar4->ResetInterfaceResolutionOverride();
        jag::console::Console::AddMessage(
            field_8, 2, "Interface resolution override reset. Use \'ires <width> <height>\' to set a resolution.");
    }

    // 0x1006fc650, 256 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_11::operator()(std::optional<int>) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_11::TEMPNAMEPLACEHOLDERVALUE(std::optional<int>) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_11::operator()(undefined8 param_2) {
        undefined8 uVar1;
        undefined4 uVar3;
        undefined4 uVar4;
        ScaleManager* pSVar5;
        uint* puVar6;
        undefined4* puVar7;
        undefined8 local_40;
        int local_38;
        int local_34;

        local_40 = param_2;
        if (local_40.operator_cast_to_bool()) {
            uVar3 = (*(RT7Core**)this)->GetBackBufferWidth();
            uVar4 = (*(RT7Core**)this)->GetBackBufferHeight();
            pSVar5 = (ScaleManager*)(*(RT7Core**)this)->GetScaleManager();
            puVar6 = (uint*)local_40.value();
            pSVar5->SetInterfaceScaleOverride(*puVar6);
            local_38 = (*(RT7Core**)this)->GetBackBufferWidth();
            local_34 = (*(RT7Core**)this)->GetBackBufferHeight();
            pSVar5 = (ScaleManager*)(*(RT7Core**)this)->GetScaleManager();
            pSVar5->ScreenToInterfacePosition(&local_38, &local_34, false);
            uVar1 = *(undefined8*)(this + 8);
            puVar7 = (undefined4*)local_40.value();
            jag::console::Console::AddMessage(
                uVar1, 2,
                "Interface scale override set to %d%% (%d x %d --> %d x %d). Use \'iscale\' without values to reset.",
                *puVar7, uVar3, uVar4, local_38, local_34);
        } else {
            pSVar5 = (ScaleManager*)(*(RT7Core**)this)->GetScaleManager();
            pSVar5->ResetInterfaceScaleOverride();
            jag::console::Console::AddMessage(
                *(undefined8*)(this + 8), 2,
                "Interface scale override reset. Use \'iscale <percentage>\' to set a resolution.");
        }
    }

    // 0x1006fd4a0, 160 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_12::operator()(int) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_12::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_12::operator()(int param_1) {
        undefined8 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        ScaleManager* this_00;
        NXTPixScreen* this_01;

        this_00 = (ScaleManager*)(*(RT7Core**)this)->GetScaleManager();
        this_00->SetTmpDPI(param_1, true);
        uVar1 = *(undefined8*)(this + 8);
        this_01 = (NXTPixScreen*)(*(RT7Core**)this)->GetScaleManager();
        uVar2 = this_01->GetUIHeight();
        jag::console::Console::AddMessage(uVar1, 4, "DPI set to: %d", uVar2);
        uVar1 = *(undefined8*)(this + 8);
        uVar2 = (*(RT7Core**)this)->GetInterfaceWidth();
        uVar3 = (*(RT7Core**)this)->GetInterfaceHeight();
        jag::console::Console::AddMessage(uVar1, 4, "Interface resolution set to: %d, %d", uVar2, uVar3);
    }

    // 0x1006fe1b0, 144 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_13::operator()(int) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_13::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_13::operator()(int param_1) {
        undefined8 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        ScaleManager* this_00;
        NXTPixScreen* this_01;

        this_00 = (ScaleManager*)(*(RT7Core**)this)->GetScaleManager();
        this_00->SetTmpDPI(param_1, false);
        uVar1 = *(undefined8*)(this + 8);
        this_01 = (NXTPixScreen*)(*(RT7Core**)this)->GetScaleManager();
        uVar2 = this_01->GetUIHeight();
        jag::console::Console::AddMessage(uVar1, 4, "DPI set to: %d", uVar2);
        uVar1 = *(undefined8*)(this + 8);
        uVar2 = (*(RT7Core**)this)->GetInterfaceWidth();
        uVar3 = (*(RT7Core**)this)->GetInterfaceHeight();
        jag::console::Console::AddMessage(uVar1, 4, "Interface resolution set to: %d, %d", uVar2, uVar3);
    }

    // 0x1006ff120, 96 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_14::operator()(int, int, int, int) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_14::TEMPNAMEPLACEHOLDERVALUE(int, int, int, int) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_14::operator()(int param_1, int param_2, int param_3,
                                                                           int param_4) {
        ScaleManager* this_00;

        this_00 = (ScaleManager*)field_0->GetScaleManager();
        this_00->SetZoomRect(param_1, param_2, param_3, param_4);
        jag::console::Console::AddMessage(field_8, 2, "Interface zoom rectangle updated.");
    }

    // 0x1006ffdb0, 64 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_15::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_15::TEMPNAMEPLACEHOLDERVALUE() const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_15::operator()() {
        ScaleManager* this_00;

        this_00 = (ScaleManager*)(*(RT7Core**)this)->GetScaleManager();
        this_00->ResetZoomRect();
        jag::console::Console::AddMessage(*(undefined8*)(this + 8), 2, "Interface zoom rectangle reset.");
    }

    // 0x100700a60, 432 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_16::operator()(fixed_vector* param_1) {
        BaseApp* this_00;
        int iVar1;
        long lVar2;
        StringView* pSVar3;
        ulong uVar4;
        char* pcVar5;
        int iVar6;
        int local_e0;
        int local_dc;
        function local_d8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_dc = 1;
        lVar2 = param_1->size();
        if (lVar2 == 1) {
            pSVar3 = (StringView*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            FromString<StringView, int>(pSVar3, &local_dc, 10);
        LAB_100700ad7:
            if (0 < local_dc) {
                iVar6 = 0;
                do {
                    if ((operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::memory ==
                         '\0') &&
                        (iVar1 = ___cxa_guard_acquire(
                             &operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::memory),
                         iVar1 != 0)) {
                        pcVar5 = "EASTL vector";
                        new (&local_d8) eastl::allocator("EASTL vector");
                        eastl::vector<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                  graphics::RT7Core*)::$_16::
                                      operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
                                          const ::Pixel,
                                      eastl::allocator>::vector((ulong)&local_d8, (allocator*)pcVar5);
                        ___cxa_atexit(
                            eastl::vector<RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::$_16::
                                          operator()(eastl::fixed_vector<StringView, 4ul, true,
                                                                         eastl::allocator> const&) const ::Pixel,
                                          eastl::allocator>::~vector,
                            &operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::memory,
                            4294967296);
                        ___cxa_guard_release(
                            &operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)::memory);
                    }
                    this_00 = *(BaseApp**)(this + 8);
                    local_e0 = iVar6;
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                        (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                        (_lambda_jag__BaseApp___1_*)&local_e0);
                    this_00->QueueMainThreadEvent(&local_d8);
                    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::
                        ~function(
                            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
                    iVar6 = iVar6 + 1;
                } while (iVar6 < local_dc);
                goto LAB_100700bad;
            }
            pcVar5 = "[count] must be one or larger.";
        } else {
            uVar4 = param_1->size();
            if (uVar4 < 2)
                goto LAB_100700ad7;
            pcVar5 = "Usage: createdummytextures [count] (don\'t specify count to default to 1)";
        }
        jag::console::Console::AddMessage(*(undefined8*)this, 5, pcVar5);
    LAB_100700bad:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100700ea0, 416 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}::operator()(BaseApp*) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&)
   const::{lambda(BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(BaseApp*) const */

    _func_TEMPNAMEPLACEHOLDERVALUE_fixed_vector_ptr* const ::{
        lambda(BaseApp*) #1
    }
    ::operator()(BaseApp * param_1) {
        undefined8 uVar1;
        undefined1 local_270[64];
        undefined8 local_230;
        undefined8 local_228;
        undefined1 local_220;
        Texture2D local_218;
        _func_TEMPNAMEPLACEHOLDERVALUE_fixed_vector_ptr* local_18;

        local_18 = *(_func_TEMPNAMEPLACEHOLDERVALUE_fixed_vector_ptr**)PTR____stack_chk_guard_100ee9d98;
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
        new (&local_230) render::ResourceDataT<unsigned char const>(0, 0, 0, false);
        local_230 = eastl::vector<
            RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::Pixel,
            eastl::allocator>::data();
        local_228 = 1152921504606912512;
        local_220 = 0;
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                            "ConsoleCommandsDebug.cpp",
                            293, "Creating dummy texture (Count: %d - DIM: %ux%u)", *(undefined4*)this, 4096, 4096);
        new (&local_218) render::Texture2D("Texture2D");
        local_218.Create(local_270, (ResourceDataT*)&local_230, 0);
        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                            "ConsoleCommandsDebug.cpp",
                            296, "Created dummy texture %d", *(undefined4*)this);
        local_218.~Texture2D();
        local_230.~ResourceDataT();
        if (*(_func_TEMPNAMEPLACEHOLDERVALUE_fixed_vector_ptr**)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return *(_func_TEMPNAMEPLACEHOLDERVALUE_fixed_vector_ptr**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100701b80, 16 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_17::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_17::TEMPNAMEPLACEHOLDERVALUE() const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_17::operator()() {
        render::BufferPoolStats::PrintPoolUsage();
    }

    // 0x100702660, 32 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_18::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_18::TEMPNAMEPLACEHOLDERVALUE() const */

    undefined1 RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_18::operator()() {
        return DAT_00000001;
    }

    // 0x100703150, 64 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE() const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() {
        Layout* this_00;
        vector* pvVar1;
        _lambda___1_* extraout_RDX;
        type* in_RSI;
        undefined1 local_18[8];

        this_00 = (Layout*)Instance();
        pvVar1 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        ThreadPool::operator()((ThreadPool*)local_18, (char*)pvVar1, extraout_RDX);
        local_18->~future();
    }

    // 0x1007037c0, 32 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}::operator()() const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    _func_TEMPNAMEPLACEHOLDERVALUE* const ::{
        lambda() #1
    }
    ::operator()() {
        undefined7 in_register_00000001;

        return (_func_TEMPNAMEPLACEHOLDERVALUE*)CONCAT71(in_register_00000001, DAT_00000001);
    }

    // 0x1007054f0, 96 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_20::operator()(std::optional<eastl::string > const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_20::TEMPNAMEPLACEHOLDERVALUE(std::optional<eastl::basic_string<char,
   eastl::allocator> > const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_20::operator()(optional* param_1) {
        char* pcVar2;
        int iVar3;
        char* this_00;

        if (operator_cast_to_bool()) {
            value();
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            iVar3 = 321;
        } else {
            iVar3 = 325;
            pcVar2 = (char*)0;
        }
        this_00 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                  "ConsoleCommandsDebug.cpp";
        LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                      "ConsoleCommandsDebug.cpp",
                      iVar3, 0, pcVar2);
        /* WARNING: Subroutine does not return */
        this_00->~OptionStore();
    }

    // 0x1007060b0, 16 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_21::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_21::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_21::operator()(fixed_vector* param_1) {
        /* WARNING: Subroutine does not return */
        _abort();
    }

    // 0x100706bf0, 128 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_22::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_22::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_22::operator()(fixed_vector* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        string local_30[24];

        uVar1 = logger::default_logger();
        (*(RT7Core**)this)->GetRenderTargetsManager();
        local_30->GetStats();
        uVar2 = std::string::c_str(local_30);
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                            "ConsoleCommandsDebug.cpp",
                            336, uVar2);
        std::string::~string(local_30);
    }

    // 0x100707890, 32 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_23::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_23::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_23::operator()(fixed_vector* param_1) {
        RenderTargetsManager* this_00;

        this_00 = (RenderTargetsManager*)(*(RT7Core**)this)->GetRenderTargetsManager();
        this_00->GarbageCollect(true);
    }

    // 0x1007083c0, 288 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_24::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_24::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_24::operator()(fixed_vector* param_1) {
        ShuffledPacketFactory* this_00;
        ShuffledPacketFactory* pSVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        fixed_string<char, 1024, true, eastl::allocator> local_460[1064];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 1024, true, eastl::allocator>::fixed_string(local_460);
        this_00 = (ShuffledPacketFactory*)HeapBeginPtr();
        pSVar1 = (ShuffledPacketFactory*)end();
        if (this_00 != pSVar1) {
            do {
                uVar2 = ShuffledPacketFactory::p2_alt2(this_00);
                uVar3 = this_00->end();
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_460, "%.*s ", uVar2 & 4294967295, uVar3);
                this_00 = this_00 + 1;
            } while (this_00 != pSVar1);
        }
        uVar3 = logger::default_logger();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar3, 0, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                            "ConsoleCommandsDebug.cpp",
                            371, &DAT_100e377c0, uVar4);
        /* WARNING: Subroutine does not return */
        local_460->~fixed_string();
    }

    // 0x100708ff0, 288 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_25::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_25::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_25::operator()(fixed_vector* param_1) {
        ShuffledPacketFactory* this_00;
        ShuffledPacketFactory* pSVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        fixed_string<char, 1024, true, eastl::allocator> local_460[1064];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 1024, true, eastl::allocator>::fixed_string(local_460);
        this_00 = (ShuffledPacketFactory*)HeapBeginPtr();
        pSVar1 = (ShuffledPacketFactory*)end();
        if (this_00 != pSVar1) {
            do {
                uVar2 = ShuffledPacketFactory::p2_alt2(this_00);
                uVar3 = this_00->end();
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_460, "%.*s ", uVar2 & 4294967295, uVar3);
                this_00 = this_00 + 1;
            } while (this_00 != pSVar1);
        }
        uVar3 = logger::default_logger();
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(uVar3, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/console/"
                            "ConsoleCommandsDebug.cpp",
                            383, &DAT_100e377c0, uVar4);
        /* WARNING: Subroutine does not return */
        local_460->~fixed_string();
    }

    // 0x100709d10, 128 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_26::operator()(int) const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_26::TEMPNAMEPLACEHOLDERVALUE(int) const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_26::operator()(int param_1) {
        undefined4 uVar1;
        undefined8 uVar2;
        char* pcVar3;
        char* pcVar4;

        uVar2 = (*(ClientOptions**)this)->GetOptionName();
        uVar1 = (*(ClientOptions**)this)->GetOptionValue(param_1);
        pcVar3 = (char*)(*(ClientOptions**)this)->GetOptionValueLabel(param_1, uVar1);
        pcVar4 = "";
        if (pcVar3 != (char*)0) {
            pcVar4 = pcVar3;
        }
        jag::console::Console::AddMessage(
            *(undefined8*)(this + 8), 3,
            "ClientOption <col=0x009966FF>%i</col> <col=0xAAAAAAFF>(%s)</col> is %i <col=0x009966FF>(%s)<col>", param_1,
            uVar2, uVar1, pcVar4);
    }

    // 0x10070aba0, 176 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_27::operator()(int, int) const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_27::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_27::operator()(int param_1, int param_2) {
        ClientOptions* pCVar1;
        RT7Core* this_00;
        undefined8 uVar2;
        char* pcVar3;
        undefined8 uVar4;
        char* pcVar5;

        uVar2 = field_0->GetOptionName();
        pcVar3 = (char*)(field_0, param_1, param_2)->GetOptionValueLabel();
        pCVar1 = field_0;
        this_00 = field_8;
        uVar4 = this_00->GetEffectManager();
        pCVar1->SetOptionValue(param_1, param_2, this_00, uVar4);
        pcVar5 = "";
        if (pcVar3 != (char*)0) {
            pcVar5 = pcVar3;
        }
        jag::console::Console::AddMessage(
            field_16, 3, "Attempted to set ClientOption %i <col=0x009966FF>(%s)</col> to %i <col=0x009966FF>(%s)<col>",
            param_1, uVar2, param_2, pcVar5);
    }

    // 0x10070b850, 192 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_28::operator()() const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_28::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_28::operator()() {
        undefined4 uVar1;
        undefined8 uVar2;
        char* pcVar4;
        int iVar5;

        jag::console::Console::AddMessage(*(undefined8*)this, 2, "Supported options:");
        iVar5 = 0;
        do {
            uVar2 = (*(ClientOptions**)(this + 8))->GetOptionName(iVar5);
            uVar1 = (*(ClientOptions**)(this + 8))->GetOptionValue(iVar5);
            if ((*(ClientOptions**)(this + 8))->GetOptionValueLabel(iVar5, uVar1) == 0) {
                pcVar4 = "  [ID <col=0x009966FF>%i</col>] <col=0xAAAAAAFF>%s</col> - <col=0x009966FF>%i</col>";
            } else {
                pcVar4 = "  [ID <col=0x009966FF>%i</col>] <col=0xAAAAAAFF>%s</col> - <col=0x009966FF>%i</col> (%s)";
            }
            jag::console::Console::AddMessage(*(undefined8*)this, 3, pcVar4, iVar5, uVar2, uVar1);
            iVar5 = iVar5 + 1;
        } while (iVar5 != 41);
    }

    // 0x10070c510, 48 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_29::operator()() const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_29::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_29::operator()() {
        (*(ClientOptions**)this)->SaveSettings();
        jag::console::Console::AddMessage(*(undefined8*)(this + 8), 2, "ClientOptions saved");
    }

    // 0x10070d140, 48 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_30::operator()() const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_30::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_30::operator()() {
        ClientOptions* pCVar1;
        RT7Core* this_00;
        undefined8 uVar2;

        pCVar1 = *(ClientOptions**)this;
        this_00 = *(RT7Core**)(this + 8);
        uVar2 = this_00->GetEffectManager();
        pCVar1->ApplyAutoSetupPreset(5, this_00, uVar2);
    }

    // 0x10070dd70, 48 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_31::operator()() const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_31::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_31::operator()() {
        ClientOptions* pCVar1;
        RT7Core* this_00;
        undefined8 uVar2;

        pCVar1 = *(ClientOptions**)this;
        this_00 = *(RT7Core**)(this + 8);
        uVar2 = this_00->GetEffectManager();
        pCVar1->ApplyAutoSetupPreset(4, this_00, uVar2);
    }

    // 0x10070e9a0, 48 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_32::operator()() const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_32::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_32::operator()() {
        ClientOptions* pCVar1;
        RT7Core* this_00;
        undefined8 uVar2;

        pCVar1 = *(ClientOptions**)this;
        this_00 = *(RT7Core**)(this + 8);
        uVar2 = this_00->GetEffectManager();
        pCVar1->ApplyAutoSetupPreset(3, this_00, uVar2);
    }

    // 0x10070f5d0, 48 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_33::operator()() const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_33::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_33::operator()() {
        ClientOptions* pCVar1;
        RT7Core* this_00;
        undefined8 uVar2;

        pCVar1 = *(ClientOptions**)this;
        this_00 = *(RT7Core**)(this + 8);
        uVar2 = this_00->GetEffectManager();
        pCVar1->ApplyAutoSetupPreset(2, this_00, uVar2);
    }

    // 0x100710200, 48 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_34::operator()() const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_34::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_34::operator()() {
        ClientOptions* pCVar1;
        RT7Core* this_00;
        undefined8 uVar2;

        pCVar1 = *(ClientOptions**)this;
        this_00 = *(RT7Core**)(this + 8);
        uVar2 = this_00->GetEffectManager();
        pCVar1->ApplyAutoSetupPreset(1, this_00, uVar2);
    }

    // 0x100710e30, 48 bytes, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_35::operator()() const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_35::TEMPNAMEPLACEHOLDERVALUE() const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_35::operator()() {
        ClientOptions* pCVar1;
        RT7Core* this_00;
        undefined8 uVar2;

        pCVar1 = *(ClientOptions**)this;
        this_00 = *(RT7Core**)(this + 8);
        uVar2 = this_00->GetEffectManager();
        pCVar1->ApplyAutoSetupPreset(6, this_00, uVar2);
    }

    // 0x100711f60, 880 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_36::operator()(StringView, std::optional<int>) const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_36::TEMPNAMEPLACEHOLDERVALUE(StringView, std::optional<int>)
   const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_36::operator()(StringView* param_2,
                                                                                         undefined8 param_3) {
        undefined4 uVar1;
        ClientOptions* pCVar2;
        RT7Core* this_00;
        char cVar3;
        byte bVar4;
        int iVar6;
        undefined4* puVar7;
        undefined8 uVar8;
        ulong uVar9;
        undefined8 uVar10;
        byte bVar11;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        uchar* extraout_RDX_01;
        uchar* extraout_RDX_02;
        uchar* extraout_RDX_03;
        uchar* extraout_RDX_04;
        uchar* extraout_RDX_05;
        uchar* extraout_RDX_06;
        uchar* extraout_RDX_07;
        uchar* extraout_RDX_08;
        uchar* extraout_RDX_09;
        uchar* extraout_RDX_10;
        undefined4 uVar12;
        uint uVar13;
        char* pcVar14;
        int iVar15;
        StringView SVar16;
        StringView SVar17;
        StringView SVar18;
        StringView SVar19;
        StringView SVar20;
        StringView SVar21;
        StringView SVar22;
        StringView SVar23;
        StringView SVar24;
        StringView SVar25;
        StringView SVar26;
        StringView SVar27;
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
        undefined8 local_48;
        ClientOptions* local_40;
        undefined4 local_34;

        local_48 = param_3;
        StringView::StringView<3ul>(&local_108, "aa");
        SVar16.field_8 = extraout_RDX;
        SVar16.field_0 = (ulong)&local_108;
        cVar3 = StringView::operator==(param_2, SVar16);
        if (cVar3 == '\0') {
            StringView::StringView<10ul>(&local_f8, "aaquality");
            SVar17.field_8 = extraout_RDX_00;
            SVar17.field_0 = (ulong)&local_f8;
            cVar3 = StringView::operator==(param_2, SVar17);
            uVar12 = 0;
            if (cVar3 == '\0') {
                StringView::StringView<3ul>(&local_e8, "ao");
                SVar18.field_8 = extraout_RDX_01;
                SVar18.field_0 = (ulong)&local_e8;
                cVar3 = StringView::operator==(param_2, SVar18);
                bVar11 = 0;
                if (cVar3 == '\0') {
                    StringView::StringView<6ul>(&local_d8, "bloom");
                    SVar19.field_8 = extraout_RDX_02;
                    SVar19.field_0 = (ulong)&local_d8;
                    cVar3 = StringView::operator==(param_2, SVar19);
                    if (cVar3 == '\0') {
                        StringView::StringView<13ul>(&local_c8, "drawdistance");
                        SVar20.field_8 = extraout_RDX_03;
                        SVar20.field_0 = (ulong)&local_c8;
                        cVar3 = StringView::operator==(param_2, SVar20);
                        if (cVar3 == '\0') {
                            StringView::StringView<9ul>(&local_b8, "lighting");
                            SVar21.field_8 = extraout_RDX_04;
                            SVar21.field_0 = (ulong)&local_b8;
                            cVar3 = StringView::operator==(param_2, SVar21);
                            if (cVar3 == '\0') {
                                StringView::StringView<8ul>(&local_a8, "shadows");
                                SVar22.field_8 = extraout_RDX_05;
                                SVar22.field_0 = (ulong)&local_a8;
                                cVar3 = StringView::operator==(param_2, SVar22);
                                if (cVar3 == '\0') {
                                    StringView::StringView<14ul>(&local_98, "shadowquality");
                                    SVar23.field_8 = extraout_RDX_06;
                                    SVar23.field_0 = (ulong)&local_98;
                                    cVar3 = StringView::operator==(param_2, SVar23);
                                    if (cVar3 == '\0') {
                                        StringView::StringView<9ul>(&local_88, "textures");
                                        SVar24.field_8 = extraout_RDX_07;
                                        SVar24.field_0 = (ulong)&local_88;
                                        cVar3 = StringView::operator==(param_2, SVar24);
                                        if (cVar3 == '\0') {
                                            StringView::StringView<12ul>(&local_78, "reflections");
                                            SVar25.field_8 = extraout_RDX_08;
                                            SVar25.field_0 = (ulong)&local_78;
                                            cVar3 = StringView::operator==(param_2, SVar25);
                                            if (cVar3 == '\0') {
                                                StringView::StringView<12ul>(&local_68, "volumetrics");
                                                SVar26.field_8 = extraout_RDX_09;
                                                SVar26.field_0 = (ulong)&local_68;
                                                cVar3 = StringView::operator==(param_2, SVar26);
                                                if (cVar3 == '\0') {
                                                    StringView::StringView<6ul>(&local_58, "vsync");
                                                    SVar27.field_8 = extraout_RDX_10;
                                                    SVar27.field_0 = (ulong)&local_58;
                                                    bVar4 = StringView::operator==(param_2, SVar27);
                                                    bVar11 = bVar4 ^ 1;
                                                    uVar12 = 41;
                                                    if (bVar4 != 0) {
                                                        uVar12 = 28;
                                                    }
                                                } else {
                                                    uVar12 = 27;
                                                    bVar11 = 0;
                                                }
                                            } else {
                                                uVar12 = 15;
                                                bVar11 = 0;
                                            }
                                        } else {
                                            uVar12 = 21;
                                            bVar11 = 0;
                                        }
                                    } else {
                                        uVar12 = 20;
                                        bVar11 = 0;
                                    }
                                } else {
                                    uVar12 = 19;
                                    bVar11 = 0;
                                }
                            } else {
                                uVar12 = 12;
                                bVar11 = 0;
                            }
                        } else {
                            uVar12 = 8;
                            bVar11 = 0;
                        }
                    } else {
                        uVar12 = 4;
                        bVar11 = 0;
                    }
                }
            } else {
                uVar12 = 3;
                bVar11 = 0;
            }
        } else {
            uVar12 = 2;
            bVar11 = 0;
        }
        if (bVar11 == 0) {
            pCVar2 = field_0;
            if (local_48.operator_cast_to_bool()) {
                puVar7 = (undefined4*)local_48.value();
                uVar1 = *puVar7;
                this_00 = field_8;
                uVar8 = this_00->GetEffectManager();
                pCVar2->SetOptionValue(uVar12, uVar1, this_00, uVar8);
            } else {
                local_34 = uVar12;
                cVar3 = pCVar2->ValueLabelsAvailableForOption(uVar12);
                uVar12 = local_34;
                if (cVar3 != '\0') {
                    local_40 = pCVar2;
                    uVar9 = pCVar2->GetOptionValueRange(local_34);
                    iVar6 = local_40->GetOptionValue(uVar12);
                    jag::console::Console::AddMessage(field_16, 2, "Supported settings:");
                    iVar15 = (int)(uVar9 >> 32);
                    if ((int)uVar9 <= iVar15) {
                        do {
                            uVar8 = field_16;
                            uVar10 = local_40->GetOptionValueLabel(local_34, uVar9 & 4294967295);
                            pcVar14 = "";
                            if (iVar6 == (int)uVar9) {
                                pcVar14 = "<----";
                            }
                            jag::console::Console::AddMessage(uVar8, 2, "\t%s - %d %s", uVar10, uVar9 & 4294967295,
                                                              pcVar14);
                            uVar13 = (int)uVar9 + 1;
                            uVar9 = (ulong)uVar13;
                        } while (iVar15 + 1U != uVar13);
                    }
                }
            }
        }
    }

    // 0x1007133a0, 96 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*, graphics::RT7Core*)::$_37::operator()(std::optional<StringView>) const
    /* RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
   graphics::RT7Core*)::$_37::TEMPNAMEPLACEHOLDERVALUE(std::optional<StringView>) const */

    void game::RegisterCommonCommandsClientOptions(jag::console::Console*, ClientOptions*,
                                                   graphics::RT7Core*)::$_37::operator()() {
        Screengrabber* this_00;
        StringView* this_01;
        optional<StringView> local_40[16];
        StringView local_30[2];

        std::optional<StringView>::value_or<char const*&>(local_40, (char**)this);
        this_01 = local_30;
        StringView::to_owned_string<eastl::string>(this_01);
        this_00 = (Screengrabber*)this_01->Instance();
        this_00->RequestScreenshot(local_30);
        local_30->~basic_string();
    }

    // 0x100715a00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GWCLocation::GWCLocation(GWCLocation&&): jumps straight to the base-object constructor

    // 0x100715a50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GWCLocation::GWCLocation(): jumps straight to the base-object constructor

    // 0x100715a60, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GWCLocation::GWCLocation()
    void GWCLocation::GWCLocation() {
        field_0 = -1;
        new (&field_8) eastl::string();
    }

    // 0x100715a80, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GWCLocation::GWCLocation(GWCLocation&&)
    void GWCLocation::GWCLocation(GWCLocation* param_1) {
        field_0 = param_1->field_0;
        new (&field_8, (basic_string*)&param_1->field_8) eastl::string();
    }

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x100700c30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&): jumps straight to the base-object constructor

    // 0x100700e20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&)
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*,
   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1},
   void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::operator()(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, _lambda_jag__BaseApp___1_* param_1) {
        *(undefined8*)this = 0;
        *(undefined4*)(this + 16) = *(undefined4*)param_1;
        *(code**)(this + 144) =
            function <
            game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
            lambda(void*, void*) #1
        }
        (BaseApp*)#1
    },void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView,4ul,true,eastl::allocator>const&)const::{
        lambda(void*, void*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(code**)this =
    function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                   eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
    lambda(void*, BaseApp*) #1
}
(BaseApp*)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView,4ul,true,eastl::allocator>const&)const::{
    lambda(void*, BaseApp*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*, BaseApp*) #1
}
::BaseApp__;
*(code**)(this + 152) =
    function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
                   eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
    lambda(void*) #1
}
(BaseApp*)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView,4ul,true,eastl::allocator>const&)const::{
    lambda(void*) #1}(BaseApp*)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x100700e60, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
    lambda(void*, void*) #1
}
(BaseApp*)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView,4ul,true,eastl::allocator>const&)const::{
    lambda(void*, void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    function < game::RegisterCommonCommandsDebug(
                   console::Console*, BaseApp*,
                   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
                                                                                           eastl::allocator> const&)
                   const ::{
        lambda(BaseApp*) #1
    }
    , void > (game::RegisterCommonCommandsDebug(
                 console::Console*, BaseApp*,
                 graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
                                                                                         eastl::allocator> const&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100700e70, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*,
   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1},
   void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(
        eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
    lambda(BaseApp*) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::
              TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined4*)param_2 = *(undefined4*)param_1;
}

// 0x100700e80, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
    lambda(void*, BaseApp*) #1
}
(BaseApp*)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView,4ul,true,eastl::allocator>const&)const::{
    lambda(void*, BaseApp*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, BaseApp*) #1
}
::BaseApp__(void* param_1, BaseApp* param_2) {
    function < game::RegisterCommonCommandsDebug(
                   console::Console*, BaseApp*,
                   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
                                                                                           eastl::allocator> const&)
                   const ::{
        lambda(BaseApp*) #1
    }
    , void > (game::RegisterCommonCommandsDebug(
                 console::Console*, BaseApp*,
                 graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
                                                                                         eastl::allocator> const&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100700e90, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*,
   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1},
   void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
   graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView,
   4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::TEMPNAMEPLACEHOLDERVALUE(
        eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
    lambda(BaseApp*) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::
              TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)
                  const ::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::operator()(void* param_1, BaseApp * param_2) {
    const ::{
        lambda(BaseApp*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100701050, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_16::operator()(
        eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const ::{
    lambda(void*) #1
}
(BaseApp*)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_16::operator()(eastl::fixed_vector<StringView,4ul,true,eastl::allocator>const&)const::{
    lambda(void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x1006f9270, 128 bytes, inline, placed by debug map only (low confidence)
    // char const* DataSizeString<eastl::fixed_string<char, 256, true, eastl::allocator> >(eastl::fixed_string<char, 256, true, eastl::allocator>&, unsigned long long)
    char* DataSizeString<eastl::fixed_string<char, 256, true, eastl::allocator>>(fixed_string* param_1,
                                                                                 ulonglong param_2) {
        char* pcVar1;
        float fVar2;

        if (param_2 < 1048577) {
            if (param_2 < 1025) {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)param_1, "%d bytes");
                goto LAB_1006f92d3;
            }
            fVar2 = Bytes2Kilobytes<unsigned long long>(param_2);
            pcVar1 = "%.3fKB";
        } else {
            fVar2 = Bytes2Megabytes<unsigned long long>(param_2);
            pcVar1 = "%.3fMB";
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, (double)fVar2, pcVar1);
    LAB_1006f92d3:
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return pcVar1;
    }

    // 0x100703770, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE() const::{lambda()#1}>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE() const::{lambda()#1}>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < std::__bind <
        game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                          graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE() const ::{
        lambda() #1
    }
    >, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::operator()(__packaged_task_func * param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, 16);
    }

    // 0x100711da0, 16 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<StringView, StringView>(StringView const&, StringView&, int)
    bool FromString<StringView, StringView>(StringView* param_1, StringView* param_2, int param_3) {
        uchar* puVar1;

        puVar1 = param_1->field_8;
        param_2->field_0 = param_1->field_0;
        param_2->field_8 = puVar1;
        return true;
    }

} // namespace jag
