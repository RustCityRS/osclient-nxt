// libs/console/Console.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::console {
    class Console {
    public:
        class HistoryListener;
        class PendingCommand;
        class SearchResult;
        // virtual methods in vtable order
        virtual ~Console();
        virtual uint8_t LoadCommandHistoryAndVars();
        virtual Console* SanitizeCommand(StringView stringView) const;
        void GetCommands() const;
        uint8_t SaveCommandHistoryAndVars();
        RegisteredCommand AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
            const char* str, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> callback, int arg3);
        StringVector GetCommandHistory() const;
        void SetServerCommandHandler(const std::function<void(StringView, bool, bool)>& callback);
        uint8_t* GetMessageHistory() const;
        uint8_t* GetLastCommandExecutionResult() const;
        int GetShortestHiddenCommandLength() const;
        uint8_t* GetStoredVariables() const;
        auto GetAutocompletionPrefix() const;
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 arg2,
            int arg3);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25>(
            const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36 arg2,
            int arg3);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37>(
            const char* str,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37 arg2,
            int arg3);
        void SetCommandHistory(eastl::ring_buffer<eastl::string, eastl::vector<eastl::string>>&& ring_buffer);
        void SetStoredVariables(
            eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&&
                arg1);
        uint64_t CloseMessageHistoryOutputFile();
        void DetachHistoryListener(HistoryListener* historyListener);
        void AttachHistoryListener(HistoryListener* historyListener);
        Console();
        void RegisterCoreCommands();
        void RunPendingCommands(float arg1);
        void AddMessage(LineType lineType, const char* str, ...);
        void ExecuteCommand(StringView stringView1, bool arg2, StringView stringView2, int arg4, bool arg5);
        auto FindStoredVariable(StringView stringView) const;
        void ReportStoredVariables();
        void PrintStoredVariable(StringView stringView,
                                 const std::variant<int, unsigned int, bool, float, eastl::string, VarAny>& arg2);
        void RecordMessageHistory(StringView stringView);
        void QueueCommand(const char* str1, const char* str2, int arg3, bool arg4);
        uint64_t GetCommandAndArguments(StringView stringView1, StringView& stringView2,
                                        eastl::fixed_vector<StringView, 4ul>& stringViews) const;
        void ResetCommandHistoryCursor();
        SearchResult SearchCommands(StringView stringView, int arg2);
        void GetAlphabeticListOfMatchingCommands(eastl::vector<StringView>& stringViews, StringView stringView) const;
        void ColouriseCommandAndHelp(eastl::string& str1, eastl::string& str2);
        unsigned long IsProtectedCommand(StringView stringView) const;
        StringView GetPreviousCommandFromHistory(StringView stringView);
        StringView GetNextCommandFromHistory(StringView stringView);
        void StripVariablePromptParts(eastl::string& str);
        void SplitArguments(eastl::fixed_vector<StringView, 4ul>& stringViews, StringView stringView) const;
        void ReportArgDecodingErrors(const char* str, WrapArray<ArgDecodingError> wrapArray);
        void RunScript(StringView stringView, bool arg2);
        void RunScriptFromSource(const eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>& strs,
                                 const eastl::string& str, bool arg3);
        void QueueCommandNoHistory(const char* str1, const char* str2, int arg3);
        void RunTestScript(const eastl::fixed_vector<eastl::fixed_string<char, 64>, 8ul>& strs,
                           const eastl::string& str);
        uint64_t SetMessageHistoryOutputFile(const Filename& filename);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_0>(const char* str, RegisterCoreCommands()::$_0 arg2,
                                                                  int arg3);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_1>(const char* str, RegisterCoreCommands()::$_1 arg2,
                                                                  int arg3);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_3>(const char* str, RegisterCoreCommands()::$_3 arg2,
                                                                  int arg3);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_4>(const char* str, RegisterCoreCommands()::$_4 arg2,
                                                                  int arg3);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_5>(const char* str, RegisterCoreCommands()::$_5 arg2,
                                                                  int arg3);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_6>(const char* str, RegisterCoreCommands()::$_6 arg2,
                                                                  int arg3);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_2>(const char* str, RegisterCoreCommands()::$_2 arg2,
                                                                  int arg3);
        void ClearMessageHistory();
        void ClearStoredVariables();

    private:
        uint8_t _unknown_8[96];
        StringVector m_commandHistory;
        uint8_t _unknown_137[23];
        uint16_t field_160;
        uint8_t _unknown_162[2];
        uint32_t field_164;
        uint8_t _unknown_168[56];
        int m_shortestHiddenCommandLength;
        uint8_t _unknown_228[92];
        uint32_t field_320;
        uint8_t _unknown_324[36];
        HistoryListener* field_360;
        uint8_t _unknown_368[200];
        int field_568;
        uint8_t field_572;
        uint8_t _unknown_573[3];
    };

    class Console::HistoryListener {
    public:
        // virtual methods in vtable order
        virtual ~HistoryListener();
        HistoryListener();
    };

    class Console::PendingCommand {
    public:
        ~PendingCommand();
        PendingCommand(PendingCommand&& pendingCommand);
        PendingCommand();

    private:
        uint8_t _unknown_0[64];
        uint32_t field_64;
        uint8_t field_68;
        uint8_t _unknown_69[3];
    };

    class Console::SearchResult {
    public:
        operator bool() const;
        SearchResult();
        ~SearchResult();

    private:
        uint8_t _unknown_0[64];
        uint32_t field_64;
        uint8_t _unknown_68[4];
    };

    // 0x10005c4b0
    RegisteredCommand Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
        const char* str, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)> callback, int arg3) {
        RegisteredCommand result;
        Logger* this_01;
        size_t sVar3;
        int* piVar4;
        RegisteredCommand* local_c0;
        function<void_(eastl::fixed_vector<StringView, _4ul> const&)>* local_b8;
        RegisteredCommand* local_a8[2];
        function<void(eastl::fixed_vector<StringView, 4ul> const&)> local_98[48];
        long local_38;

        int local_ac = (int)callback;
        local_b8 = (function<void_(eastl::fixed_vector<StringView, _4ul> const&)>*)str;
        new (local_a8) eastl::string(this);
        function* this_00 = (function*)(*((&result + 1)))[*local_a8];
        if (std::function::operator_cast_to_bool(this_00)) {
            this_01 = logger::default_logger();
            this_01->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl",
                         213, "Overwriting existing command \'%s\'", this);
        }
        local_a8[0] = &result;
        new (local_98) std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>(*local_b8);
        Console* local_68 = this;
        *this_00 = *local_a8;
        int iVar1 = local_ac;
        AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
            char const*, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>, int)::{
            lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
        }
        ::~RegisteredCommand((_lambda_eastl__fixed_vector<StringView, 4ul, true> const___1_*)local_a8);
        *(int*)(this_00 + 48) = iVar1;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
            (tuple<eastl::fixed_vector<StringView, _4ul> const&>*)local_a8);
        (*((this_00 + 56))) = *local_a8;
        if (-1 < iVar1) {
            sVar3 = _strlen((char*)this);
            local_a8[0] = (RegisteredCommand*)(((uint64_t)local_a8[0]._4_4_ << 32) | (uint32_t)((int)sVar3));
            piVar4 = std::min<int>(*local_a8, *((&result + 28)));
            *(int*)(&result + 28) = *piVar4;
        }
        return local_c0(this_00);
    }

    // 0x1006dc4f0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("dumpmemory");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "dumpmemory");
        }
        Console* local_98 = this;
        char* local_90 = "dumpmemory";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dc670
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("printmemory");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "printmemory");
        }
        char* local_90 = "printmemory";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dc7e0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 arg2,
        int arg3) {
        RegisteredCommand result;
        RegisteredCommand* local_a8;
        RegisteredCommand* local_a0[2];

        new (local_a0) eastl::string("dumpbucketallocations");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "dumpbucketallocations");
        }
        char* local_90 = "dumpbucketallocations";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<bool>>((tuple<std::optional<bool> _>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        return local_a8(this_00);
    }

    // 0x1006dc970
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 arg2,
        int arg3) {
        RegisteredCommand result;
        RegisteredCommand* local_a8;
        RegisteredCommand* local_a0[2];

        new (local_a0) eastl::string("dumpbucketusage");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "dumpbucketusage");
        }
        char* local_90 = "dumpbucketusage";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<eastl::stringconst&, std::optional<bool>>(
            (tuple<eastl::string const&, std::optional<bool> _>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        return local_a8(this_00);
    }

    // 0x1006dcae0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("printbucketmetrics");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "printbucketmetrics");
        }
        char* local_90 = "printbucketmetrics";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dcc50
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("resetbucketmetrics");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "resetbucketmetrics");
        }
        char* local_90 = "resetbucketmetrics";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dcdc0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 arg2,
        int arg3) {
        RegisteredCommand result;
        RegisteredCommand* local_b0;
        RegisteredCommand* local_a0;

        new (&local_a0) eastl::string("setoutput");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setoutput");
        }
        Console* local_98 = this;
        char* local_90 = "setoutput";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<eastl::stringconst&>((tuple<eastl::string const&>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        return local_b0(this_00);
    }

    // 0x1006dcf40
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("closeoutput");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "closeoutput");
        }
        Console* local_98 = this;
        char* local_90 = "closeoutput";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
            (tuple<eastl::fixed_vector<StringView, _4ul> const&>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd0c0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("sqlmem");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "sqlmem");
        }
        char* local_90 = "sqlmem";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd230
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("gscale");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "gscale");
        }
        __9* local_90 = arg2;
        char* local_88 = "gscale";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<unsigned int>>((tuple<std::optional<unsigned int> _>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd3c0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("ires");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "ires");
        }
        __10* local_90 = arg2;
        char* local_88 = "ires";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<int>, std::optional<int>>(
            (tuple<std::optional<int>, std::optional<int> _>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd550
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("iscale");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "iscale");
        }
        __11* local_90 = arg2;
        char* local_88 = "iscale";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<int>>((tuple<std::optional<int> _>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd6e0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        RegisteredCommand* local_b0;
        RegisteredCommand* local_a0;

        new (&local_a0) eastl::string("setdpi");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setdpi");
        }
        __12* local_90 = arg2;
        char* local_88 = "setdpi";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<int>((tuple<int>*)&local_a0);
        (*((function + 56))) = local_a0;
        return local_b0(function);
    }

    // 0x1006dd870
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        RegisteredCommand* local_b0;
        RegisteredCommand* local_a0;

        new (&local_a0) eastl::string("forcedpi");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "forcedpi");
        }
        __13* local_90 = arg2;
        char* local_88 = "forcedpi";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<int>((tuple<int>*)&local_a0);
        (*((function + 56))) = local_a0;
        return local_b0(function);
    }

    // 0x1006dda00
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        RegisteredCommand* local_b0;
        RegisteredCommand* local_a0;

        new (&local_a0) eastl::string("setzoomrect");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setzoomrect");
        }
        __14* local_90 = arg2;
        char* local_88 = "setzoomrect";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<int, int, int, int>((tuple<int, int, int, int>*)&local_a0);
        (*((function + 56))) = local_a0;
        return local_b0(function);
    }

    // 0x1006ddb90
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("resetzoomrect");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "resetzoomrect");
        }
        __15* local_90 = arg2;
        char* local_88 = "resetzoomrect";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006ddd20
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("createdummytextures");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "createdummytextures");
        }
        __16* local_90 = arg2;
        char* local_88 = "createdummytextures";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
            (tuple<eastl::fixed_vector<StringView, _4ul> const&>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006ddeb0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("printbufferpoolusage");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "printbufferpoolusage");
        }
        char* local_90 = "printbufferpoolusage";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de020
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("crash");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "crash");
        }
        char* local_90 = "crash";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de190
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("crashthread");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "crashthread");
        }
        char* local_90 = "crashthread";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de300
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("fatalassert");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "fatalassert");
        }
        char* local_90 = "fatalassert";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<eastl::string> const&>(
            (tuple<std::optional<eastl::string_> const&>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de470
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("abort");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "abort");
        }
        char* local_90 = "abort";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
            (tuple<eastl::fixed_vector<StringView, _4ul> const&>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de5e0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("printrendertargets");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "printrendertargets");
        }
        Console* local_98 = this;
        char* local_90 = "printrendertargets";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
            (tuple<eastl::fixed_vector<StringView, _4ul> const&>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de760
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("garbagecollectrendertargets");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "garbagecollectrendertargets");
        }
        Console* local_98 = this;
        char* local_90 = "garbagecollectrendertargets";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
            (tuple<eastl::fixed_vector<StringView, _4ul> const&>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de8e0
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("log_warn");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "log_warn");
        }
        char* local_90 = "log_warn";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
            (tuple<eastl::fixed_vector<StringView, _4ul> const&>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dea50
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25>(
        const char* str, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("log_error");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "log_error");
        }
        char* local_90 = "log_error";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul> const&>(
            (tuple<eastl::fixed_vector<StringView, _4ul> const&>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006ded60
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_26>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        RegisteredCommand* local_b0;
        RegisteredCommand* local_a0;

        new (&local_a0) eastl::string("getclientoption");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "getclientoption");
        }
        __26* local_90 = arg2;
        char* local_88 = "getclientoption";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<int>((tuple<int>*)&local_a0);
        (*((function + 56))) = local_a0;
        return local_b0(function);
    }

    // 0x1006deef0
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_27>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27 arg2,
        int arg3) {
        RegisteredCommand result;
        RegisteredCommand* local_a8;
        RegisteredCommand* local_a0[4];

        new (local_a0) eastl::string("setclientoption");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setclientoption");
        }
        char* local_80 = "setclientoption";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<int, int>((tuple<int, int>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        return local_a8(this_00);
    }

    // 0x1006df070
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_28>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("listclientoptions");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "listclientoptions");
        }
        __28* local_90 = arg2;
        char* local_88 = "listclientoptions";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df200
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_29>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("saveclientoptions");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "saveclientoptions");
        }
        __29* local_90 = arg2;
        char* local_88 = "saveclientoptions";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df390
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_30>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("setgraphicsultra");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setgraphicsultra");
        }
        __30* local_90 = arg2;
        char* local_88 = "setgraphicsultra";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df520
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_31>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("setgraphicshigh");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setgraphicshigh");
        }
        __31* local_90 = arg2;
        char* local_88 = "setgraphicshigh";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df6b0
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_32>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("setgraphicsmedium");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setgraphicsmedium");
        }
        __32* local_90 = arg2;
        char* local_88 = "setgraphicsmedium";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df840
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_33>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("setgraphicslow");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setgraphicslow");
        }
        __33* local_90 = arg2;
        char* local_88 = "setgraphicslow";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df9d0
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_34>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("setgraphicsmin");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setgraphicsmin");
        }
        __34* local_90 = arg2;
        char* local_88 = "setgraphicsmin";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dfb60
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_35>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35 arg2,
        int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("setgraphicspowersave");
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "setgraphicspowersave");
        }
        __35* local_90 = arg2;
        char* local_88 = "setgraphicspowersave";
        local_a0 = &result;
        char* local_98 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dfcf0
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_36>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36 arg2,
        int arg3) {
        RegisteredCommand result;
        RegisteredCommand* local_a8;
        RegisteredCommand* local_a0[4];

        new (local_a0) eastl::string("graphicsetting");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "graphicsetting");
        }
        char* local_80 = "graphicsetting";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<StringView, std::optional<int>>((tuple<StringView, std::optional<int> _>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        return local_a8(this_00);
    }

    // 0x1006dfe90
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::$_37>(
        const char* str,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37 arg2,
        int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        RegisteredCommand* local_a0[2];

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (local_a0) eastl::string("screenshot");
        function* this_00 = (function*)(*((&result + 1)))[*local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "screenshot");
        }
        char* local_90 = "screenshot";
        local_a0[0] = &result;
        *this_00 = *local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<StringView>>((tuple<std::optional<StringView> _>*)local_a0);
        (*((this_00 + 56))) = *local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7eeb0
    RegisteredCommand
    Console::AddCommand<Console::RegisterCoreCommands()::$_0>(const char* str,
                                                              Console::RegisterCoreCommands()::$_0 arg2, int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("pause");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "pause");
        }
        Console* local_98 = this;
        char* local_90 = "pause";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<int>>((tuple<std::optional<int> _>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f030
    RegisteredCommand
    Console::AddCommand<Console::RegisterCoreCommands()::$_1>(const char* str,
                                                              Console::RegisterCoreCommands()::$_1 arg2, int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("include");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "include");
        }
        Console* local_98 = this;
        char* local_90 = "include";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<StringView>((tuple<StringView>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f1b0
    RegisteredCommand
    Console::AddCommand<Console::RegisterCoreCommands()::$_3>(const char* str,
                                                              Console::RegisterCoreCommands()::$_3 arg2, int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("cls");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", &DAT_100e6148f);
        }
        Console* local_98 = this;
        uint8_t* local_90 = &DAT_100e6148f;
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f330
    RegisteredCommand
    Console::AddCommand<Console::RegisterCoreCommands()::$_4>(const char* str,
                                                              Console::RegisterCoreCommands()::$_4 arg2, int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("clear");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "clear");
        }
        Console* local_98 = this;
        char* local_90 = "clear";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f4b0
    RegisteredCommand
    Console::AddCommand<Console::RegisterCoreCommands()::$_5>(const char* str,
                                                              Console::RegisterCoreCommands()::$_5 arg2, int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("vars");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", &DAT_100e61499);
        }
        Console* local_98 = this;
        uint8_t* local_90 = &DAT_100e61499;
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f630
    RegisteredCommand
    Console::AddCommand<Console::RegisterCoreCommands()::$_6>(const char* str,
                                                              Console::RegisterCoreCommands()::$_6 arg2, int arg3) {
        RegisteredCommand result;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string("clearvars");
        function* this_00 = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(this_00) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", "clearvars");
        }
        Console* local_98 = this;
        char* local_90 = "clearvars";
        local_a0 = &result;
        *this_00 = local_a0;
        *(uint32_t*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple<>*)&local_a0);
        (*((this_00 + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_00);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f7b0
    RegisteredCommand
    Console::AddCommand<Console::RegisterCoreCommands()::$_2>(const char* str,
                                                              Console::RegisterCoreCommands()::$_2 arg2, int arg3) {
        RegisteredCommand result;
        function* function;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        RegisteredCommand* local_a0;

        RegisteredCommand* local_38 = *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
        new (&local_a0) eastl::string(str);
        function = (function*)(*((&result + 1)))[local_a0];
        if (std::function::operator_cast_to_bool(function) != '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                      "Overwriting existing command \'%s\'", str);
        }
        __2* local_98 = arg2;
        local_a0 = &result;
        char* local_90 = str;
        *function = local_a0;
        *(uint32_t*)(function + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<eastl::string> const&>(
            (tuple<std::optional<eastl::string_> const&>*)&local_a0);
        (*((function + 56))) = local_a0;
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (PlayerDataComparator<oldscape::social::FriendChatUser>*)function);
        if (*(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98 != local_38) {
        }
        return *(RegisteredCommand**)PTR____stack_chk_guard_100ee9d98;
    }

} // namespace jag::console
