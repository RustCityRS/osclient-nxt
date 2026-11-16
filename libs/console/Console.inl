// libs/console/Console.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::console {
    class Console {
    public:
        class HistoryListener;
        class PendingCommand;
        class SearchResult;
        // virtual methods in vtable order
        virtual ~Console();
        virtual LoadCommandHistoryAndVars();
        virtual SanitizeCommand(StringView) const;
        GetCommands() const;
        SaveCommandHistoryAndVars();
        RegisteredCommand
        AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
            char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int);
        StringVector GetCommandHistory() const;
        void SetServerCommandHandler(std::function<void(StringView, bool, bool)> const&);
        GetMessageHistory() const;
        GetLastCommandExecutionResult() const;
        int GetShortestHiddenCommandLength() const;
        GetStoredVariables() const;
        GetAutocompletionPrefix() const;
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24, int);
        RegisteredCommand AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25>(
            char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36, int);
        RegisteredCommand
        AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37>(
            char const*,
            game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37, int);
        void SetCommandHistory(
            eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>&&);
        void SetStoredVariables(
            eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
                              eastl::less<eastl::string>, eastl::allocator,
                              eastl::vector<eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float,
                                                                                    eastl::string, VarAny>>,
                                            eastl::allocator>>&&);
        CloseMessageHistoryOutputFile();
        void DetachHistoryListener(HistoryListener*);
        void AttachHistoryListener(HistoryListener*);
        Console();
        void RegisterCoreCommands();
        void RunPendingCommands(float);
        void AddMessage(LineType, char const*, ...);
        void ExecuteCommand(StringView, bool, StringView, int, bool);
        Console* FindStoredVariable(StringView) const;
        void ReportStoredVariables();
        void PrintStoredVariable(StringView,
                                 std::variant<int, unsigned int, bool, float, eastl::string, VarAny> const&);
        void RecordMessageHistory(StringView);
        void QueueCommand(char const*, char const*, int, bool);
        GetCommandAndArguments(StringView, StringView&,
                               eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>&) const;
        void ResetCommandHistoryCursor();
        SearchResult* SearchCommands(StringView, int);
        void GetAlphabeticListOfMatchingCommands(eastl::vector<StringView, eastl::allocator>&, StringView) const;
        void ColouriseCommandAndHelp(eastl::string&, eastl::string&);
        ulong IsProtectedCommand(StringView) const;
        StringView* GetPreviousCommandFromHistory(StringView);
        StringView* GetNextCommandFromHistory(StringView);
        void StripVariablePromptParts(eastl::string&);
        void SplitArguments(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>&, StringView) const;
        void ReportArgDecodingErrors(char const*, WrapArray<ArgDecodingError>);
        void RunScript(StringView, bool);
        void RunScriptFromSource(eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                                     eastl::allocator> const&,
                                 eastl::string const&, bool);
        void QueueCommandNoHistory(char const*, char const*, int);
        void RunTestScript(eastl::fixed_vector<eastl::fixed_string<char, 64, true, eastl::allocator>, 8ul, true,
                                               eastl::allocator> const&,
                           eastl::string const&);
        SetMessageHistoryOutputFile(Filename const&);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_0>(char const*, RegisterCoreCommands()::$_0, int);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_1>(char const*, RegisterCoreCommands()::$_1, int);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_3>(char const*, RegisterCoreCommands()::$_3, int);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_4>(char const*, RegisterCoreCommands()::$_4, int);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_5>(char const*, RegisterCoreCommands()::$_5, int);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_6>(char const*, RegisterCoreCommands()::$_6, int);
        RegisteredCommand AddCommand<RegisterCoreCommands()::$_2>(char const*, RegisterCoreCommands()::$_2, int);
        void ClearMessageHistory();
        void ClearStoredVariables();

        // data members, from how the methods use this: 576 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[96];
        StringVector m_commandHistory; // offset 104
        char _unknown_137[23];
        bool field_160; // offset 160
        char field_161; // offset 161
        char _unknown_162[2];
        int field_164; // offset 164
        int field_168; // offset 168
        char _unknown_172[52];
        int m_shortestHiddenCommandLength; // offset 224
        char _unknown_228[92];
        float field_320; // offset 320
        char _unknown_324[244];
        int field_568;        // offset 568
        undefined1 field_572; // offset 572
        char _unknown_573[3];
    };

    class Console::HistoryListener {
    public:
        // virtual methods in vtable order
        virtual ~HistoryListener();
        HistoryListener();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class Console::PendingCommand {
    public:
        ~PendingCommand();
        PendingCommand(PendingCommand&&);
        PendingCommand();

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[64];
        undefined4 field_64; // offset 64
        undefined1 field_68; // offset 68
        char _unknown_69[3];
    };

    class Console::SearchResult {
    public:
        operator bool() const;
        SearchResult();
        ~SearchResult();

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[64];
        undefined4 field_64; // offset 64
        char _unknown_68[4];
    };

    // 0x10005c4b0, 480 bytes, inline, placed by class name and debug map
    // RegisteredCommand Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)
    /* RegisteredCommand Console::AddCommand<std::function<void
   (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*,
   std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>,
   int) */

    RegisteredCommand
    Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
        char* param_1, function* param_3, int param_4) {
        int iVar1;
        bool bVar2;
        function* this_00;
        undefined8 uVar3;
        size_t sVar4;
        int* piVar5;
        BucketAllocatorEASTL* extraout_RDX;
        BucketAllocatorEASTL* extraout_RDX_00;
        BucketAllocatorEASTL* pBVar6;
        allocator local_c8[8];
        long local_c0;
        function* local_b8;
        int local_ac;
        Console* local_a8[2];
        function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> local_98[48];
        char* local_68;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b8 = param_3;
        local_ac = param_4;
        eastl::allocator::allocator(local_c8, "EASTL basic_string");
        new (local_a8) eastl::string(param_1, local_c8);
        this_00 =
            (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                         eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
            operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                   eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)&field_8,
                       (basic_string*)local_a8);
        local_a8->~basic_string();
        bVar2 = std::function::operator_cast_to_bool(this_00);
        if (bVar2) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(
                uVar3, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", param_1);
        }
        local_a8[0] = this;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function(local_98,
                                                                                                           local_b8);
        local_68 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this_00,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a8);
        iVar1 = local_ac;
        AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
            char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>,
            int)::{
            lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
        }
        ::~RegisteredCommand(
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_*)local_a8);
        *(int*)(this_00 + 48) = iVar1;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>((tuple*)local_a8);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this_00 + 56), (fixed_vector*)local_a8);
        local_a8->~fixed_vector();
        pBVar6 = extraout_RDX;
        if (-1 < iVar1) {
            sVar4 = _strlen(param_1);
            local_a8[0] = (Console*)CONCAT44(local_a8[0]._4_4_, (int)sVar4);
            piVar5 = std::min<int>((int*)local_a8, &m_shortestHiddenCommandLength);
            m_shortestHiddenCommandLength = *piVar5;
            pBVar6 = extraout_RDX_00;
        }
        new (&local_c0)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this_00, pBVar6);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_c0;
    }

    // 0x1006dc4f0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__0>(
        long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("dumpmemory", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "dumpmemory");
        }
        local_98 = param_2;
        local_90 = "dumpmemory";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dc670, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__1>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("printmemory", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "printmemory");
        }
        local_90 = "printmemory";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dc7e0, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__2>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        allocator local_b0[8];
        long local_a8;
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (local_a0) eastl::string("dumpbucketallocations", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "dumpbucketallocations");
        }
        local_90 = "dumpbucketallocations";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<bool>>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        new (&local_a8)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_a8;
    }

    // 0x1006dc970, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__3>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        allocator local_b0[8];
        long local_a8;
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (local_a0) eastl::string("dumpbucketusage", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "dumpbucketusage");
        }
        local_90 = "dumpbucketusage";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::stringconst&, std::optional<bool>>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        new (&local_a8)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_a8;
    }

    // 0x1006dcae0, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__4>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("printbucketmetrics", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "printbucketmetrics");
        }
        local_90 = "printbucketmetrics";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dcc50, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__5>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("resetbucketmetrics", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "resetbucketmetrics");
        }
        local_90 = "resetbucketmetrics";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dcdc0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__6>(
        long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        allocator local_b8[8];
        long local_b0;
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b8, "EASTL basic_string");
        new (&local_a0) eastl::string("setoutput", local_b8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setoutput");
        }
        local_98 = param_2;
        local_90 = "setoutput";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::stringconst&>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        new (&local_b0)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_b0;
    }

    // 0x1006dcf40, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__7>(
        long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("closeoutput", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "closeoutput");
        }
        local_98 = param_2;
        local_90 = "closeoutput";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd0c0, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__8>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("sqlmem", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "sqlmem");
        }
        local_90 = "sqlmem";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd230, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__9>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("gscale", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "gscale");
        }
        local_90 = param_3;
        local_88 = "gscale";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<unsigned int>>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd3c0, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__10>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("ires", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "ires");
        }
        local_90 = param_3;
        local_88 = "ires";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<int>, std::optional<int>>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd550, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__11>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("iscale", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "iscale");
        }
        local_90 = param_3;
        local_88 = "iscale";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<int>>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dd6e0, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__12>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        allocator local_b8[8];
        long local_b0;
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b8, "EASTL basic_string");
        new (&local_a0) eastl::string("setdpi", local_b8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setdpi");
        }
        local_90 = param_3;
        local_88 = "setdpi";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<int>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        new (&local_b0)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_b0;
    }

    // 0x1006dd870, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__13>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        allocator local_b8[8];
        long local_b0;
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b8, "EASTL basic_string");
        new (&local_a0) eastl::string("forcedpi", local_b8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "forcedpi");
        }
        local_90 = param_3;
        local_88 = "forcedpi";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<int>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        new (&local_b0)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_b0;
    }

    // 0x1006dda00, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__14>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        allocator local_b8[8];
        long local_b0;
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b8, "EASTL basic_string");
        new (&local_a0) eastl::string("setzoomrect", local_b8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setzoomrect");
        }
        local_90 = param_3;
        local_88 = "setzoomrect";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<int, int, int, int>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        new (&local_b0)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_b0;
    }

    // 0x1006ddb90, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__15>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("resetzoomrect", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "resetzoomrect");
        }
        local_90 = param_3;
        local_88 = "resetzoomrect";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006ddd20, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__16>(
        long param_1, undefined8 param_2, undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("createdummytextures", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "createdummytextures");
        }
        local_90 = param_3;
        local_88 = "createdummytextures";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006ddeb0, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__17>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("printbufferpoolusage", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "printbufferpoolusage");
        }
        local_90 = "printbufferpoolusage";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de020, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__18>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("crash", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "crash");
        }
        local_90 = "crash";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de190, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__19>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("crashthread", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "crashthread");
        }
        local_90 = "crashthread";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de300, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__20>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("fatalassert", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "fatalassert");
        }
        local_90 = "fatalassert";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<eastl::string> const&>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de470, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__21>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("abort", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "abort");
        }
        local_90 = "abort";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de5e0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__22>(
        long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("printrendertargets", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "printrendertargets");
        }
        local_98 = param_2;
        local_90 = "printrendertargets";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de760, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__23>(
        long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("garbagecollectrendertargets", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "garbagecollectrendertargets");
        }
        local_98 = param_2;
        local_90 = "garbagecollectrendertargets";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006de8e0, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__24>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("log_warn", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "log_warn");
        }
        local_90 = "log_warn";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dea50, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__25>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("log_error", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "log_error");
        }
        local_90 = "log_error";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006ded60, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__26>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        allocator local_b8[8];
        long local_b0;
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b8, "EASTL basic_string");
        new (&local_a0) eastl::string("getclientoption", local_b8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "getclientoption");
        }
        local_90 = param_3;
        local_88 = "getclientoption";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<int>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        new (&local_b0)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_b0;
    }

    // 0x1006deef0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::__27>() {
        function* this_00;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        undefined8 in_stack_00000008;
        undefined8 in_stack_00000010;
        undefined8 in_stack_00000018;
        allocator local_b0[8];
        long local_a8;
        Console* local_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        char* local_80;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("setclientoption", local_b0);
        this_00 =
            (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                         eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
            operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                   eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)&field_8,
                       (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this_00)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setclientoption");
        }
        local_98 = in_stack_00000008;
        uStack_90 = in_stack_00000010;
        local_88 = in_stack_00000018;
        local_80 = "setclientoption";
        local_a0 = this;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this_00,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<int, int>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this_00 + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        new (&local_a8)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this_00, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_a8;
    }

    // 0x1006df070, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__28>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("listclientoptions", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "listclientoptions");
        }
        local_90 = param_3;
        local_88 = "listclientoptions";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df200, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__29>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("saveclientoptions", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "saveclientoptions");
        }
        local_90 = param_3;
        local_88 = "saveclientoptions";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df390, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__30>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("setgraphicsultra", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setgraphicsultra");
        }
        local_90 = param_3;
        local_88 = "setgraphicsultra";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df520, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__31>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("setgraphicshigh", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setgraphicshigh");
        }
        local_90 = param_3;
        local_88 = "setgraphicshigh";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df6b0, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__32>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("setgraphicsmedium", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setgraphicsmedium");
        }
        local_90 = param_3;
        local_88 = "setgraphicsmedium";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df840, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__33>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("setgraphicslow", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setgraphicslow");
        }
        local_90 = param_3;
        local_88 = "setgraphicslow";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006df9d0, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__34>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("setgraphicsmin", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setgraphicsmin");
        }
        local_90 = param_3;
        local_88 = "setgraphicsmin";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dfb60, 400 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(
        Console*, game::ClientOptions*, graphics::RT7Core*)::__35>(long param_1, undefined8 param_2,
                                                                   undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined8 local_90;
        char* local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("setgraphicspowersave", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "setgraphicspowersave");
        }
        local_90 = param_3;
        local_88 = "setgraphicspowersave";
        local_a0 = param_1;
        local_98 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x1006dfcf0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36, int)
    RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                                    graphics::RT7Core*)::__36>() {
        function* this_00;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        undefined8 in_stack_00000008;
        undefined8 in_stack_00000010;
        undefined8 in_stack_00000018;
        allocator local_b0[8];
        long local_a8;
        Console* local_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        char* local_80;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("graphicsetting", local_b0);
        this_00 =
            (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                         eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
            operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                   eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)&field_8,
                       (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this_00)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "graphicsetting");
        }
        local_98 = in_stack_00000008;
        uStack_90 = in_stack_00000010;
        local_88 = in_stack_00000018;
        local_80 = "graphicsetting";
        local_a0 = this;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this_00,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this_00 + 48) = 4294967295;
        internal::BuildArgInfos<StringView, std::optional<int>>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this_00 + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        new (&local_a8)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(this_00, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand)local_a8;
    }

    // 0x1006dfe90, 368 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37, int)
    RegisteredCommand
    Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                  graphics::RT7Core*)::__37>(long param_1) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b0[8];
        allocator local_a8[8];
        long local_a0[2];
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_a8, "EASTL basic_string");
        new (local_a0) eastl::string("screenshot", local_a8);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)local_a0);
        local_a0->~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "screenshot");
        }
        local_90 = "screenshot";
        local_a0[0] = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<StringView>>((tuple*)local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)local_a0);
        local_a0->~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b0, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7eeb0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::$_0>(char const*, Console::RegisterCoreCommands()::$_0, int)
    RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::__0>(long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("pause", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "pause");
        }
        local_98 = param_2;
        local_90 = "pause";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<int>>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f030, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::$_1>(char const*, Console::RegisterCoreCommands()::$_1, int)
    RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::__1>(long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("include", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "include");
        }
        local_98 = param_2;
        local_90 = "include";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<StringView>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f1b0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::$_3>(char const*, Console::RegisterCoreCommands()::$_3, int)
    RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::__3>(long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("cls", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", &DAT_100e6148f);
        }
        local_98 = param_2;
        local_90 = &DAT_100e6148f;
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f330, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::$_4>(char const*, Console::RegisterCoreCommands()::$_4, int)
    RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::__4>(long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("clear", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "clear");
        }
        local_98 = param_2;
        local_90 = "clear";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f4b0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::$_5>(char const*, Console::RegisterCoreCommands()::$_5, int)
    RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::__5>(long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        undefined* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("vars", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", &DAT_100e61499);
        }
        local_98 = param_2;
        local_90 = &DAT_100e61499;
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f630, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::$_6>(char const*, Console::RegisterCoreCommands()::$_6, int)
    RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::__6>(long param_1, undefined8 param_2) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string("clearvars", local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", "clearvars");
        }
        local_98 = param_2;
        local_90 = "clearvars";
        local_a0 = param_1;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

    // 0x100c7f7b0, 384 bytes, inline, placed by __FILE__ string
    // RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::$_2>(char const*, Console::RegisterCoreCommands()::$_2, int)
    RegisteredCommand Console::AddCommand<Console::RegisterCoreCommands()::__2>(long param_1, char* param_2,
                                                                                undefined8 param_3) {
        function* this;
        undefined8 uVar2;
        BucketAllocatorEASTL* extraout_RDX;
        compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL> local_b8[8];
        allocator local_b0[8];
        long local_a0;
        undefined8 local_98;
        char* local_90;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_b0, "EASTL basic_string");
        new (&local_a0) eastl::string(param_2, local_b0);
        this = (function*)eastl::vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                                            eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>::
        operator[]((vector_map<eastl::string, CommandData, eastl::less<eastl::string>, eastl::allocator,
                               eastl::vector<eastl::pair<eastl::string, CommandData>, eastl::allocator>>*)(param_1 + 8),
                   (basic_string*)&local_a0);
        local_a0.~basic_string();
        if (std::function::operator_cast_to_bool(this)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/Console.inl", 213,
                "Overwriting existing command \'%s\'", param_2);
        }
        local_98 = param_3;
        local_a0 = param_1;
        local_90 = param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> _const___1_*)&local_a0);
        *(undefined4*)(this + 48) = 4294967295;
        internal::BuildArgInfos<std::optional<eastl::string> const&>((tuple*)&local_a0);
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)(this + 56), (fixed_vector*)&local_a0);
        local_a0.~fixed_vector();
        eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>::compressed_pair(
            local_b8, (EntityHighlight**)this, extraout_RDX);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return (RegisteredCommand) * (long*)PTR____stack_chk_guard_100ee9d98;
    }

} // namespace jag::console
