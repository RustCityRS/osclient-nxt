// libs/console/Console.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::console {
    // 0x10005e470
    void Console::SetServerCommandHandler(const std::function<void(StringView, bool, bool)>& callback) {
        field_240 = callback;
    }

    // 0x10007a570
    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::~RegisteredCommand() {
        ~RegisteredCommand(this);
    }

    // 0x10007a740
    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::RegisteredCommand({ lambda(eastl::fixed_vector<StringView, 4ul> const&) #1 } && arg1) {
        allocator > _const___1____(this, arg1);
    }

    // 0x10007a760
    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::RegisteredCommand({ lambda(eastl::fixed_vector<StringView, 4ul> const&) #1 } && arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 16)) std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>(*((arg1 + 16)));
        *(uint64_t*)(this + 64) = *(uint64_t*)(arg1 + 64);
    }

    // 0x10007afe0
    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::RegisteredCommand({ lambda(eastl::fixed_vector<StringView, 4ul> const&) #1 } const& arg1) {
        allocator > _const___1__const__(this, arg1);
    }

    // 0x10007b000
    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::RegisteredCommand({ lambda(eastl::fixed_vector<StringView, 4ul> const&) #1 } const& arg1) {
        *(uint64_t*)this = *(uint64_t*)arg1;
        new ((this + 16)) std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>(*((arg1 + 16)));
        *(uint64_t*)(this + 64) = *(uint64_t*)(arg1 + 64);
    }

    // 0x10007b2a0
    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<eastl::fixed_vector<StringView, _4ul> const&>* in_RCX;
        fixed_vector<StringView, _4ul>* stringViews_00;
        WrapArray<ArgDecodingError> local_188;
        CallConsoleFnWrapper<void> local_170;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8(Console*) stringViews::ArgDecodingError, 4ul, true,
            eastl::allocator>();
        auto aVar2 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(stringViews, stringViews,
                                                                                       *stringViews_00, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 64);
            WrapArray<jag::(Console*)stringViews::ArgDecodingError>::WrapArray<
                eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>>(
                &local_188, (fixed_vector<jag::(Console*)stringViews::ArgDecodingError, _4ul>*)&local_f8);
            ReportArgDecodingErrors(this_00, str, &local_188);
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
                optional((optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                                jag::(Console*)stringViews::VarAny>>*)&local_170);
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
            operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_170);
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
                ~optional((optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                                 jag::(Console*)stringViews::VarAny>>*)&local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                &local_170,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&this_00->field_408,
                (function<void_(eastl::fixed_vector<StringView, _4ul> const&)>*)(this + 16),
                (tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>*)&local_178);
        }
        eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>::~fixed_vector(&local_f8);
    }

    // 0x10007c9d0
    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::~RegisteredCommand() {
        ((this + 16))->~function();
    }

    // 0x100687620
    auto Console::GetAutocompletionPrefix() const {
        auto result;
        result.StringView<eastl::fixed_string<char, 40>>(field_192);
        return result;
    }

    // 0x1006889d0
    Console::SearchResult::operator bool() const {
        bool cVar1 = empty();
        unsigned int uVar2 = 1;
        if (cVar1) {
            uVar2 = field_32.empty();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

    // 0x1006e0c20
    void Console::SetCommandHistory(eastl::ring_buffer<eastl::string, eastl::vector<eastl::string>>&& ring_buffer) {
        *m_commandHistory = ring_buffer;
    }

    // 0x1006e1390
    void Console::SetStoredVariables(
        eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>&& arg1) {
        field_528 = arg1;
    }

    // 0x1006ec6a0
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __0* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x1006ef050
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __1* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)stringViews, arg2,
                in_RCX);
        }
    }

    // 0x1006efc20
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<std::optional<bool> _>* in_RCX;
        __2* arg2;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        auto aVar2 = internal::DecodeArgs<std::optional<bool>>(local_f8, *console, stringViews, in_RCX);
        uint16_t local_172 = (uint16_t)aVar2;
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            local_188.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_188);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)&local_172, arg2,
                in_RCX);
        }
    }

    // 0x1006f1490
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        __3* arg2;
        WrapArray<ArgDecodingError> local_180;
        fixed_vector<ArgDecodingError, _4ul> local_170;

        Console* this_00 = *(Console**)this;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>> local_f8;
        internal::DecodeArgs<eastl::stringconst&, std::optional<bool>>(local_170, local_f8, *this_00, stringViews);
        tuple<eastl::string, std::optional<bool>> local_1a8(local_170);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            local_180.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(this_00, str, &local_180);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((CallConsoleFnWrapper<void>*)&this_00->field_408,
                                                             &local_1a8, arg2,
                                                             (tuple<eastl::string, std::optional<bool> _>*)stringViews);
        }
    }

    // 0x1006f2570
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __4* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)stringViews, arg2,
                in_RCX);
        }
    }

    // 0x1006f5640
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __5* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)stringViews, arg2,
                in_RCX);
        }
    }

    // 0x1006f74a0
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        WrapArray<ArgDecodingError> local_180;
        fixed_vector<ArgDecodingError, _4ul> local_170;

        Console* this_00 = *(Console**)this;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>> local_f8;
        internal::DecodeArgs<eastl::stringconst&>(local_170, local_f8, *this_00, stringViews);
        tuple<eastl::string> local_1a0(local_170);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            local_180.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(this_00, str, &local_180);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                &local_1a0, (tuple<eastl::string_>*)stringViews);
        }
    }

    // 0x1006f8240
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>* in_RCX;
        fixed_vector<StringView, _4ul>* stringViews_00;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8(Console*) stringViews::ArgDecodingError, 4ul, true,
            eastl::allocator>();
        auto aVar2 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(stringViews, stringViews,
                                                                                       *stringViews_00, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            WrapArray<jag::(Console*)stringViews::ArgDecodingError>::WrapArray<
                eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>>(
                &local_188, (fixed_vector<jag::(Console*)stringViews::ArgDecodingError, _4ul>*)&local_f8);
            ReportArgDecodingErrors(this_00, str, &local_188);
            local_170 = std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>();
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
            operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>::~optional(&local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)(this + 8),
                (__7*)&local_178, in_RCX);
        }
        eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>::~fixed_vector(&local_f8);
    }

    // 0x1006f8520
    uint64_t Console::CloseMessageHistoryOutputFile() {
        uint64_t uVar2;

        if ((&field_184)->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((File*)field_184.operator->())->close(nullptr);
        }
        return uVar2;
    }

    // 0x1006f8f60
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __8* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)stringViews, arg2,
                in_RCX);
        }
    }

    // 0x1006f9db0
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::optional<unsigned int> _>* in_RCX;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        auto aVar2 = internal::DecodeArgs<std::optional<unsigned int>>(local_f8, *console, stringViews, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 24);
            local_188.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_188);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                (__9*)&local_178, in_RCX);
        }
    }

    // 0x1006fb010
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::optional<int>, std::optional<int> _>* in_RCX;
        WrapArray<ArgDecodingError> local_198;
        uint64_t local_188[3];
        uint64_t local_170[15];

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        auto aVar2 =
            internal::DecodeArgs<std::optional<int>, std::optional<int>>(local_f8, *console, stringViews, in_RCX);
        local_188[0] = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        local_170[0] = local_188[0];
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 24);
            local_198.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_198);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = *local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                (__10*)local_188, in_RCX);
        }
    }

    // 0x1006fc420
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::optional<int> _>* in_RCX;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        auto aVar2 = internal::DecodeArgs<std::optional<int>>(local_f8, *console, stringViews, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 24);
            local_188.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_188);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                (__11*)&local_178, in_RCX);
        }
    }

    // 0x1006fd260
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<int>* in_RCX;
        WrapArray<ArgDecodingError> local_188;
        auto local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        local_178[0] = internal::DecodeArgs<int>(local_f8, *console, stringViews, in_RCX);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 24);
            local_188.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_188);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                &local_178, in_RCX);
        }
    }

    // 0x1006fe000
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<int>* in_RCX;
        WrapArray<ArgDecodingError> local_188;
        auto local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        local_178[0] = internal::DecodeArgs<int>(local_f8, *console, stringViews, in_RCX);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 24);
            local_188.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_188);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                &local_178, in_RCX);
        }
    }

    // 0x1006fed80
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<int, int, int, int>* in_RCX;
        WrapArray<ArgDecodingError> local_198;
        uint64_t local_188[3];
        uint64_t local_170[15];

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        auto aVar2 = internal::DecodeArgs<int, int, int, int>(local_f8, *console, stringViews, in_RCX);
        local_188[0] = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        local_170[0] = local_188[0];
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 24);
            local_198.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_198);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = *local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                (__14*)local_188, in_RCX);
        }
    }

    // 0x1006ffc50
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __15* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x100700890
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>* in_RCX;
        fixed_vector<StringView, _4ul>* stringViews_00;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8(Console*) stringViews::ArgDecodingError, 4ul, true,
            eastl::allocator>();
        auto aVar2 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(stringViews, stringViews,
                                                                                       *stringViews_00, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 24);
            WrapArray<jag::(Console*)stringViews::ArgDecodingError>::WrapArray<
                eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>>(
                &local_188, (fixed_vector<jag::(Console*)stringViews::ArgDecodingError, _4ul>*)&local_f8);
            ReportArgDecodingErrors(this_00, str, &local_188);
            local_170 = std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>();
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
            operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>::~optional(&local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)(this + 8),
                (__16*)&local_178, in_RCX);
        }
        eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>::~fixed_vector(&local_f8);
    }

    // 0x100701a30
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __17* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)stringViews, arg2,
                in_RCX);
        }
    }

    // 0x100702510
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __18* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)stringViews, arg2,
                in_RCX);
        }
    }

    // 0x100703000
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __19* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)stringViews, arg2,
                in_RCX);
        }
    }

    // 0x100704ca0
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        __20* arg2;
        WrapArray<ArgDecodingError> local_180;
        fixed_vector<ArgDecodingError, _4ul> local_170;

        Console* this_00 = *(Console**)this;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>> local_f8;
        internal::DecodeArgs<std::optional<eastl::string> const&>(local_170, local_f8, *this_00, stringViews);
        tuple<std::optional<eastl::string>> local_1a8(local_170);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            local_180.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(this_00, str, &local_180);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((CallConsoleFnWrapper<void>*)&this_00->field_408,
                                                             &local_1a8, arg2,
                                                             (tuple<std::optional<eastl::string_> _>*)stringViews);
        }
    }

    // 0x100705f40
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>* in_RCX;
        fixed_vector<StringView, _4ul>* stringViews_00;
        __21* arg2;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8(Console*) stringViews::ArgDecodingError, 4ul, true,
            eastl::allocator>();
        auto aVar2 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(stringViews, stringViews,
                                                                                       *stringViews_00, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            WrapArray<jag::(Console*)stringViews::ArgDecodingError>::WrapArray<
                eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>>(
                &local_188, (fixed_vector<jag::(Console*)stringViews::ArgDecodingError, _4ul>*)&local_f8);
            ReportArgDecodingErrors(this_00, str, &local_188);
            local_170 = std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>();
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
            operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>::~optional(&local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_178,
                arg2, in_RCX);
        }
        eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>::~fixed_vector(&local_f8);
    }

    // 0x100706a40
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>* in_RCX;
        fixed_vector<StringView, _4ul>* stringViews_00;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8(Console*) stringViews::ArgDecodingError, 4ul, true,
            eastl::allocator>();
        auto aVar2 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(stringViews, stringViews,
                                                                                       *stringViews_00, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            WrapArray<jag::(Console*)stringViews::ArgDecodingError>::WrapArray<
                eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>>(
                &local_188, (fixed_vector<jag::(Console*)stringViews::ArgDecodingError, _4ul>*)&local_f8);
            ReportArgDecodingErrors(this_00, str, &local_188);
            local_170 = std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>();
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
            operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>::~optional(&local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)(this + 8),
                (__22*)&local_178, in_RCX);
        }
        eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>::~fixed_vector(&local_f8);
    }

    // 0x1007076e0
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>* in_RCX;
        fixed_vector<StringView, _4ul>* stringViews_00;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8(Console*) stringViews::ArgDecodingError, 4ul, true,
            eastl::allocator>();
        auto aVar2 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(stringViews, stringViews,
                                                                                       *stringViews_00, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            WrapArray<jag::(Console*)stringViews::ArgDecodingError>::WrapArray<
                eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>>(
                &local_188, (fixed_vector<jag::(Console*)stringViews::ArgDecodingError, _4ul>*)&local_f8);
            ReportArgDecodingErrors(this_00, str, &local_188);
            local_170 = std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>();
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
            operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>::~optional(&local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)(this + 8),
                (__23*)&local_178, in_RCX);
        }
        eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>::~fixed_vector(&local_f8);
    }

    // 0x100708230
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>* in_RCX;
        fixed_vector<StringView, _4ul>* stringViews_00;
        __24* arg2;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8(Console*) stringViews::ArgDecodingError, 4ul, true,
            eastl::allocator>();
        auto aVar2 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(stringViews, stringViews,
                                                                                       *stringViews_00, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            WrapArray<jag::(Console*)stringViews::ArgDecodingError>::WrapArray<
                eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>>(
                &local_188, (fixed_vector<jag::(Console*)stringViews::ArgDecodingError, _4ul>*)&local_f8);
            ReportArgDecodingErrors(this_00, str, &local_188);
            local_170 = std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>();
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
            operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>::~optional(&local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_178,
                arg2, in_RCX);
        }
        eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>::~fixed_vector(&local_f8);
    }

    // 0x100708e60
    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>* in_RCX;
        fixed_vector<StringView, _4ul>* stringViews_00;
        __25* arg2;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8(Console*) stringViews::ArgDecodingError, 4ul, true,
            eastl::allocator>();
        auto aVar2 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul> const&>(stringViews, stringViews,
                                                                                       *stringViews_00, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            WrapArray<jag::(Console*)stringViews::ArgDecodingError>::WrapArray<
                eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>>(
                &local_188, (fixed_vector<jag::(Console*)stringViews::ArgDecodingError, _4ul>*)&local_f8);
            ReportArgDecodingErrors(this_00, str, &local_188);
            local_170 = std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>();
            std::optional<
                std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>>::
            operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string,
                                       jag::(Console*)stringViews::VarAny>>::~optional(&local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<
                    std::variant<int, unsigned int, bool, float, eastl::string, jag::(Console*)stringViews::VarAny>
                        _>*)&local_178,
                arg2, in_RCX);
        }
        eastl::fixed_vector<jag::(Console*)stringViews::ArgDecodingError, 4ul>::~fixed_vector(&local_f8);
    }

    // 0x100709b60
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_26>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<int>* in_RCX;
        WrapArray<ArgDecodingError> local_188;
        auto local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        local_178[0] = internal::DecodeArgs<int>(local_f8, *console, stringViews, in_RCX);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 24);
            local_188.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_188);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                &local_178, in_RCX);
        }
    }

    // 0x10070a900
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_27>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<int, int>* in_RCX;
        WrapArray<ArgDecodingError> local_188;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        auto aVar2 = internal::DecodeArgs<int, int>(local_f8, *console, stringViews, in_RCX);
        uint64_t local_178 = (((uint64_t)extraout_var << 32) | (uint32_t)aVar2);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 32);
            local_188.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_188);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                (__27*)&local_178, in_RCX);
        }
    }

    // 0x10070b6f0
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_28>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __28* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x10070c3b0
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_29>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __29* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x10070cfe0
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_30>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __30* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x10070dc10
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_31>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __31* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x10070e840
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_32>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __32* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x10070f470
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_33>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __33* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x1007100a0
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_34>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __34* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x100710cd0
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_35>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __35* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 24);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x1007119b0
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_36>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        WrapArray<ArgDecodingError> local_180;
        fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator> local_170;

        Console* this_00 = *(Console**)this;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>> local_f8;
        internal::DecodeArgs<StringView, std::optional<int>>(local_170, local_f8, *this_00, stringViews);
        tuple<StringView, std::optional<int>> local_198(local_170);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 32);
            local_180.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(this_00, str, &local_180);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                &local_198, (tuple<StringView, std::optional<int> _>*)stringViews);
        }
    }

    // 0x100712e70
    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_37>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        __37* arg2;
        WrapArray<ArgDecodingError> local_180;
        fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator> local_170;

        Console* this_00 = *(Console**)this;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>> local_f8;
        internal::DecodeArgs<std::optional<StringView>>(local_170, local_f8, *this_00, stringViews);
        tuple<std::optional<StringView>> local_198(local_170);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            local_180.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(this_00, str, &local_180);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((CallConsoleFnWrapper<void>*)&this_00->field_408,
                                                             &local_198, arg2,
                                                             (tuple<std::optional<StringView> _>*)stringViews);
        }
    }

    // 0x100ba90a0
    void Console::DetachHistoryListener(Console::HistoryListener* historyListener) {
        eastl::set<Console::HistoryListener*>::erase(field_360);
    }

    // 0x100ba9880
    void Console::AttachHistoryListener(Console::HistoryListener* historyListener) {
        field_360.insert<Console::HistoryListener*&, void>(historyListener);
    }

    // 0x100bb1c70
    Console::HistoryListener::HistoryListener() {}

    // 0x100c7c620
    void Console::ResetCommandHistoryCursor() {
        field_172.reset();
    }

    // 0x100c7ed30
    void Console::QueueCommandNoHistory(const char* str1, const char* str2, int arg3) {
        QueueCommand(str1, str2, arg3, false);
    }

    // 0x100c80520
    Console::PendingCommand::PendingCommand(Console::PendingCommand&& pendingCommand)
        : eastl::string(pendingCommand), field_32(pendingCommand.field_32), field_68(pendingCommand.field_68),
          field_64(pendingCommand.field_64) {}

    // 0x100c81b80
    Console::SearchResult::SearchResult() : eastl::string(), field_64(0) {}

    // 0x100c81c00
    Console::SearchResult::~SearchResult() {
        field_32.~vector();
    }

    // 0x100c893f0
    Console::PendingCommand::PendingCommand() : eastl::string() {}

    // 0x100c8c980
    void Console::AddCommand<Console::RegisterCoreCommands()::$_0>(char const*, Console::RegisterCoreCommands()::$_0,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        uint32_t extraout_var;
        tuple<std::optional<int> _>* in_RCX;
        WrapArray<ArgDecodingError> local_188;
        __0 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170;

        Console* console = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f8;
        local_178.field_0._0_4_ = internal::DecodeArgs<std::optional<int>>(local_f8, *console, stringViews, in_RCX);
        local_178.field_0._4_4_ = extraout_var;
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            local_188.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(console, str, &local_188);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            console->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&console->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                &local_178, in_RCX);
        }
    }

    // 0x100c8ce60
    void Console::RegisterCoreCommands()::$_0::operator()(std::optional<int> arg1) const {
        int* piVar2;
        float fVar4;

        long lVar1 = field_0;
        if ((arg1).operator_cast_to_bool() == '\0') {
            fVar4 = 5.0;
        } else {
            piVar2 = (int*)(arg1).value();
            fVar4 = (float)*piVar2;
        }
        *(float*)(lVar1 + 320) = fVar4;
    }

    // 0x100c8db10
    void Console::AddCommand<Console::RegisterCoreCommands()::$_1>(char const*, Console::RegisterCoreCommands()::$_1,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        WrapArray<ArgDecodingError> local_180;
        fixed_vector<ArgDecodingError, _4ul, true, eastl::fixed_vector::allocator> local_170;

        Console* this_00 = *(Console**)this;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>> local_f8;
        internal::DecodeArgs<StringView>(local_170, local_f8, *this_00, stringViews);
        __1 local_190(local_170);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            local_180.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(this_00, str, &local_180);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                &local_190, (tuple<StringView>*)stringViews);
        }
    }

    // 0x100c8ea30
    void Console::AddCommand<Console::RegisterCoreCommands()::$_3>(char const*, Console::RegisterCoreCommands()::$_3,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __3* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x100c8eba0
    void Console::ClearMessageHistory() {
        uint64_t* puVar2;

        field_48.clear();
        uint64_t local_28 = field_360.begin();
        uint64_t local_20 = field_360.end();
        bool cVar1 = local_28 != local_20;
        if (cVar1) {
            do {
                puVar2 = (uint64_t*)*local_28;
                (**(void (**)(...))(*(long*)*puVar2 + 24))();
                ++local_28;
                cVar1 = local_28 != local_20;
            } while (cVar1);
        }
    }

    // 0x100c8f5b0
    void Console::AddCommand<Console::RegisterCoreCommands()::$_4>(char const*, Console::RegisterCoreCommands()::$_4,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __4* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x100c900a0
    void Console::AddCommand<Console::RegisterCoreCommands()::$_5>(char const*, Console::RegisterCoreCommands()::$_5,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __5* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x100c90b90
    void Console::AddCommand<Console::RegisterCoreCommands()::$_6>(char const*, Console::RegisterCoreCommands()::$_6,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        tuple<>* in_RCX;
        __6* arg2;
        WrapArray<ArgDecodingError> local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168;

        Console* this_00 = *(Console**)this;
        fixed_vector<ArgDecodingError, 4ul> local_f0;
        if (local_f0.empty() == '\0') {
            str = *(char**)(this + 16);
            local_178.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f0);
            ReportArgDecodingErrors(this_00, str, &local_178);
            local_168 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_168;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8), arg2,
                in_RCX);
        }
    }

    // 0x100c90d00
    void Console::ClearStoredVariables() {
        field_528.clear();
    }

    // 0x100c91710
    void Console::AddCommand<Console::RegisterCoreCommands()::$_2>(char const*, Console::RegisterCoreCommands()::$_2,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul> const&) #1
    }
    ::operator()(const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        WrapArray<ArgDecodingError> local_180;
        fixed_vector<ArgDecodingError, _4ul> local_170;

        Console* this_00 = *(Console**)this;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>> local_f8;
        internal::DecodeArgs<std::optional<eastl::string> const&>(local_170, local_f8, *this_00, stringViews);
        __2 local_1a8(local_170);
        if (local_f8.empty() == '\0') {
            str = *(char**)(this + 16);
            local_180.WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul>>(local_f8);
            ReportArgDecodingErrors(this_00, str, &local_180);
            local_170 = std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            this_00->field_408 = local_170;
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(
                (CallConsoleFnWrapper<void>*)&this_00->field_408,
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> _>*)(this + 8),
                &local_1a8, (tuple<std::optional<eastl::string_> _>*)stringViews);
        }
    }

    // 0x100c91e20
    void Console::RegisterCoreCommands()::$_2::operator()(const std::optional<eastl::string>& str) const {
        bool cVar1;
        eastl::string* str2;
        char* pcVar3;
        StringView local_278;

        Console* this_00 = field_0;
        fixed_string<char, 512> local_260;
        Console* local_268 = this_00;
        auto this_01 = this_00->second();
        auto str1 = this_01->HeapBeginPtr();
        auto pbVar2 = this_01->end();
        if (str1 != pbVar2) {
            do {
                cVar1 = str.operator_cast_to_bool();
                if (!cVar1) {
                LAB_100c91ecf:
                    local_278.StringView<eastl::fixed_string<char, 40>>(*str1);
                    cVar1 = ((str1 + 32))->AppendUsage(local_260, &local_278);
                    if (!cVar1) {
                        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        local_260 = pcVar3;
                    }
                    pcVar3 = (char*)local_260.begin();
                    AddMessage(local_268, 3, pcVar3);
                    local_260.clear();
                } else {
                    str2 = (eastl::string*)str.value();
                    cVar1 = MatchString(str1, str2);
                    if (cVar1)
                        goto LAB_100c91ecf;
                }
                str1 = str1 + 288;
            } while (str1 != pbVar2);
        }
    }

} // namespace jag::console

namespace jag::oldscape {
    class ConsoleCommandHelp {
    public:
        void Usage() const;
        Option<float>* Description() const;
        ConsoleCommandHelp(ConsoleCommandHelp&& displayName);
        ConsoleCommandHelp(const char* str1, const char* str2);
        ~ConsoleCommandHelp();
        ConsoleCommandHelp(const ConsoleCommandHelp& consoleCommandHelp);
        DisplayName* operator=(ConsoleCommandHelp&& consoleCommandHelp);

        uint8_t _unknown_0[40];
    };

    // 0x10007d0d0
    DisplayName* ConsoleCommandHelp::operator=(ConsoleCommandHelp&& consoleCommandHelp) {
        *this = consoleCommandHelp;
        field_32 = &consoleCommandHelp.field_32;
        return this;
    }

} // namespace jag::oldscape
