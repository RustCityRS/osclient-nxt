// libs/console/Console.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::console {
    // 0x10005e470, 32 bytes, inline, placed by class name and debug map
    // Console::SetServerCommandHandler(std::function<void (StringView, bool, bool)> const&)
    /* Console::SetServerCommandHandler(std::function<void (StringView, bool, bool)>
   const&) */

    void Console::SetServerCommandHandler(function* param_1) {
        std::function<void(StringView, bool, bool)>::operator=((function<void(StringView, bool, bool)>*)&field_240,
                                                               param_1);
    }

    // 0x10007a570, 16 bytes, inline, placed by class name
    // Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::~RegisteredCommand()
    /* ~RegisteredCommand() */

    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::~RegisteredCommand(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this) {
        ~RegisteredCommand(this);
    }

    // 0x10007a740, 16 bytes, inline, placed by class name
    // Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::RegisteredCommand({lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}&&)
    /* Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&)> >(char const*, std::function<void
   (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::RegisteredCommand({lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}&&) */

    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::allocator > _const___1____() {
        allocator > _const___1____();
    }

    // 0x10007a760, 48 bytes, inline, placed by class name
    // Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::RegisteredCommand({lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}&&)
    /* Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&)> >(char const*, std::function<void
   (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::RegisteredCommand({lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}&&) */

    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::allocator > _const___1____(undefined8* param_1, undefined8* param_2) {
        *param_1 = *param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)(param_1 + 2),
            (function*)(param_2 + 2));
        param_1[8] = param_2[8];
    }

    // 0x10007afe0, 16 bytes, inline, placed by class name
    // Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::RegisteredCommand({lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1} const&)
    /* Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&)> >(char const*, std::function<void
   (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::RegisteredCommand({lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1} const&) */

    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::allocator > _const___1__const__() {
        allocator > _const___1__const__();
    }

    // 0x10007b000, 48 bytes, inline, placed by class name
    // Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::RegisteredCommand({lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1} const&)
    /* Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&)> >(char const*, std::function<void
   (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::RegisteredCommand({lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1} const&) */

    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::allocator > _const___1__const__(undefined8* param_1, undefined8* param_2) {
        *param_1 = *param_2;
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)(param_1 + 2),
            (function*)(param_2 + 2));
        param_1[8] = param_2[8];
    }

    // 0x10007b2a0, 304 bytes, inline, placed by class name
    // Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&)> >(char const*, std::function<void
   (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&) const */

    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        fixed_vector* extraout_RDX;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        CallConsoleFnWrapper<void> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, (Console*)param_1, extraout_RDX, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 64);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            local_170->~optional();
        } else {
            internal::CallConsoleFnWrapper<void>::operator()(local_170, (optional*)&pCVar1->field_408,
                                                             (function*)(this + 16), (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10007c9d0, 16 bytes, inline, placed by class name
    // Console::AddCommand<std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)> >(char const*, std::function<void (eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::~RegisteredCommand()
    /* ~RegisteredCommand() */

    void Console::AddCommand<std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>>(
        char const*, std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::~RegisteredCommand(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this) {
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)(this + 16));
    }

    // 0x100687620, 32 bytes, inline, placed by class name
    // Console::GetAutocompletionPrefix() const
    Console* Console::GetAutocompletionPrefix() {
        long in_RSI;

        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)this,
                                                                                      (fixed_string*)(in_RSI + 192));
        return this;
    }

    // 0x1006889d0, 48 bytes, inline, placed by class name
    // Console::SearchResult::operator bool() const
    bool Console::SearchResult::operator_cast_to_bool() {
        char cVar1;
        byte bVar2;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        bVar2 = 1;
        if (cVar1 != '\0') {
            bVar2 = (&field_32)->empty();
            bVar2 = bVar2 ^ 1;
        }
        return (bool)bVar2;
    }

    // 0x1006e0c20, 16 bytes, inline, placed by class name
    // Console::SetCommandHistory(eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>&&)
    void Console::SetCommandHistory(ring_buffer* param_1) {
        eastl::ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>::operator=(
            (ring_buffer<eastl::string, eastl::vector<eastl::string, eastl::allocator>, eastl::allocator>*)field_104,
            param_1);
    }

    // 0x1006e1390, 32 bytes, inline, placed by class name
    // Console::SetStoredVariables(eastl::vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>, eastl::less<eastl::string >, eastl::allocator, eastl::vector<eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >, eastl::allocator> >&&)
    /* Console::SetStoredVariables(eastl::vector_map<eastl::basic_string<char,
   eastl::allocator>, std::variant<int, unsigned int, bool, float, eastl::basic_string<char,
   eastl::allocator>, VarAny>, eastl::less<eastl::string
   >, eastl::allocator, eastl::vector<eastl::pair<eastl::string,
   std::variant<int, unsigned int, bool, float, eastl::string,
   VarAny> >, eastl::allocator> >&&) */

    void Console::SetStoredVariables(vector_map* param_1) {
        eastl::vector_map<
            eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
            eastl::less<eastl::string>, eastl::allocator,
            eastl::vector<
                eastl::pair<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>,
                eastl::allocator>>::
        operator=(
            (vector_map<eastl::string, std::variant<int, unsigned int, bool, float, eastl::string, VarAny>,
                        eastl::less<eastl::string>, eastl::allocator,
                        eastl::vector<eastl::pair<eastl::string,
                                                  std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>,
                                      eastl::allocator>>*)&field_528,
            param_1);
    }

    // 0x1006ec6a0, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_0>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_0, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006ef050, 256 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_1>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_1, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, param_1, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006efc20, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_2>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_2, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_188[22];
        undefined2 local_172;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_172 = internal::DecodeArgs<std::optional<bool>>((fixed_vector*)local_f8, pCVar1,
                                                              (ArgDecodingError*)param_1, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, (__2*)&local_172,
                                                             extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f1490, 368 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_3>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_3, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        tuple* extraout_RDX;
        tuple<eastl::string, std::optional<bool>> local_1a8[40];
        WrapArray<ArgDecodingError> local_180[16];
        fixed_vector local_170[120];
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        new (local_f8) eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>();
        internal::DecodeArgs<eastl::stringconst&, std::optional<bool>>(local_170, (Console*)local_f8,
                                                                       (ArgDecodingError*)pCVar1, (tuple*)param_1);
        std::tuple<eastl::string, std::optional<bool>>::tuple(local_1a8, (tuple*)local_170);
        local_170->~tuple();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                local_f8) == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_180, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_180);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            local_170->~optional();
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, local_1a8, extraout_RDX);
        }
        local_1a8->~tuple();
        local_f8->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f2570, 256 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_4>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_4, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, param_1, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f5640, 256 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_5>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_5, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, param_1, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f74a0, 368 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_6>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_6, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        tuple<eastl::string> local_1a0[32];
        WrapArray<ArgDecodingError> local_180[16];
        fixed_vector local_170[120];
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        new (local_f8) eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>();
        internal::DecodeArgs<eastl::stringconst&>(local_170, (Console*)local_f8, (ArgDecodingError*)pCVar1,
                                                  (tuple*)param_1);
        std::tuple<eastl::string>::tuple(local_1a0, (tuple*)local_170);
        local_170->~tuple();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                local_f8) == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_180, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_180);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            local_170->~optional();
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)local_1a0);
        }
        std::tuple<eastl::string>::~tuple(local_1a0);
        local_f8->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f8240, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_7>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_7, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        fixed_vector* extraout_RDX;
        Console* pCVar4;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        pCVar4 = (Console*)param_1;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, pCVar4, extraout_RDX, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f8520, 64 bytes, inline, placed by class name
    // Console::CloseMessageHistoryOutputFile()
    undefined8 Console::CloseMessageHistoryOutputFile() {
        File* this_00;
        undefined8 uVar2;

        if ((&field_184)->operator_cast_to_bool()) {
            this_00 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)&field_184);
            uVar2 = this_00->close(0);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1006f8f60, 256 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_8>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_8, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, param_1, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f9db0, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_9>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_9, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_9, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<std::optional<unsigned int>>((fixed_vector*)local_f8, pCVar1,
                                                                      (ArgDecodingError*)param_1, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006fb010, 352 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_10>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_10, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_10, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_198[16];
        tuple local_188[24];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_170._0_16_ = internal::DecodeArgs<std::optional<int>, std::optional<int>>(
            (fixed_vector*)local_f8, pCVar1, (ArgDecodingError*)param_1, in_RCX);
        local_188._0_16_ = local_170._0_16_;
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_198, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_198);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, local_188);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006fc420, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_11>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_11, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_11, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<std::optional<int>>((fixed_vector*)local_f8, pCVar1,
                                                             (ArgDecodingError*)param_1, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006fd260, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_12>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_12, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_12, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_188[16];
        undefined4 local_178[2];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178[0] = internal::DecodeArgs<int>((fixed_vector*)local_f8, pCVar1, (ArgDecodingError*)param_1, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006fe000, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_13>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_13, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_13, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_188[16];
        undefined4 local_178[2];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178[0] = internal::DecodeArgs<int>((fixed_vector*)local_f8, pCVar1, (ArgDecodingError*)param_1, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006fed80, 352 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_14>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_14, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_14, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_198[16];
        tuple local_188[24];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_170._0_16_ = internal::DecodeArgs<int, int, int, int>((fixed_vector*)local_f8, pCVar1,
                                                                    (ArgDecodingError*)param_1, in_RCX);
        local_188._0_16_ = local_170._0_16_;
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_198, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_198);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, local_188);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006ffc50, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_15>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_15, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_15, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100700890, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_16>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_16, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_16, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        fixed_vector* extraout_RDX;
        Console* pCVar4;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        pCVar4 = (Console*)param_1;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, pCVar4, extraout_RDX, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100701a30, 256 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_17>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_17, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_17, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, param_1, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100702510, 256 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_18>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_18, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_18, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, param_1, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100703000, 256 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_19>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_19, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_19, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, param_1, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100704ca0, 368 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_20>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_20, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_20, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        __20* extraout_RDX;
        tuple<std::optional<eastl::string>> local_1a8[40];
        WrapArray<ArgDecodingError> local_180[16];
        fixed_vector local_170[120];
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        new (local_f8) eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>();
        internal::DecodeArgs<std::optional<eastl::string> const&>(local_170, (Console*)local_f8,
                                                                  (ArgDecodingError*)pCVar1, (tuple*)param_1);
        std::tuple<std::optional<eastl::string>>::tuple(local_1a8, (tuple*)local_170);
        local_170->~tuple();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                local_f8) == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_180, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_180);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            local_170->~optional();
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((CallConsoleFnWrapper<void>*)&pCVar1->field_408,
                                                             (optional*)local_1a8, extraout_RDX, (tuple*)param_1);
        }
        std::tuple<std::optional<eastl::string>>::~tuple(local_1a8);
        local_f8->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100705f40, 288 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_21>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_21, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_21, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        fixed_vector* extraout_RDX;
        tuple* extraout_RDX_00;
        Console* pCVar4;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        pCVar4 = (Console*)param_1;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, pCVar4, extraout_RDX, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, (__21*)&local_178,
                                                             extraout_RDX_00);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100706a40, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_22>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_22, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_22, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        fixed_vector* extraout_RDX;
        Console* pCVar4;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        pCVar4 = (Console*)param_1;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, pCVar4, extraout_RDX, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007076e0, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_23>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_23, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_23, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        fixed_vector* extraout_RDX;
        Console* pCVar4;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        pCVar4 = (Console*)param_1;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, pCVar4, extraout_RDX, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100708230, 288 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_24>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_24, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_24, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        fixed_vector* extraout_RDX;
        tuple* extraout_RDX_00;
        Console* pCVar4;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        pCVar4 = (Console*)param_1;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, pCVar4, extraout_RDX, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, (__24*)&local_178,
                                                             extraout_RDX_00);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100708e60, 288 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25>(char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsDebug(Console*,
   BaseApp*, graphics::RT7Core*)::$_25>(char const*,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_25, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25>(
        char const*, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_25, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        fixed_vector* extraout_RDX;
        tuple* extraout_RDX_00;
        Console* pCVar4;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        pCVar4 = (Console*)param_1;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>(
            param_1, pCVar4, extraout_RDX, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, (__25*)&local_178,
                                                             extraout_RDX_00);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100709b60, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_26>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_26, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_26>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_26, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_188[16];
        undefined4 local_178[2];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178[0] = internal::DecodeArgs<int>((fixed_vector*)local_f8, pCVar1, (ArgDecodingError*)param_1, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10070a900, 304 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_27>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_27, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_27>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_27, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<int, int>((fixed_vector*)local_f8, pCVar1, (ArgDecodingError*)param_1, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 32);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10070b6f0, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_28>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_28, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_28>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_28, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10070c3b0, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_29>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_29, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_29>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_29, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10070cfe0, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_30>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_30, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_30>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_30, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10070dc10, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_31>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_31, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_31>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_31, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10070e840, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_32>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_32, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_32>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_32, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10070f470, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_33>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_33, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_33>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_33, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007100a0, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_34>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_34, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_34>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_34, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100710cd0, 272 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_35>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_35, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_35>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_35, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 24);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007119b0, 336 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_36>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_36, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_36>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_36, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        tuple<StringView, std::optional<int>> local_198[24];
        WrapArray<ArgDecodingError> local_180[16];
        fixed_vector local_170[120];
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        new (local_f8) eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>();
        internal::DecodeArgs<StringView, std::optional<int>>(local_170, (Console*)local_f8, (ArgDecodingError*)pCVar1,
                                                             (tuple*)param_1);
        std::tuple<StringView, std::optional<int>>::tuple(local_198, (tuple*)local_170);
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                local_f8) == '\0') {
            uVar2 = *(undefined8*)(this + 32);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_180, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_180);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            local_170->~optional();
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)local_198);
        }
        local_f8->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100712e70, 320 bytes, inline, placed by class name
    // Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37>(char const*, game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*,
   game::ClientOptions*, graphics::RT7Core*)::$_37>(char const*,
   game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
   graphics::RT7Core*)::$_37, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void Console::AddCommand<game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*,
                                                                       graphics::RT7Core*)::$_37>(
        char const*,
        game::RegisterCommonCommandsClientOptions(Console*, game::ClientOptions*, graphics::RT7Core*)::$_37, int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        tuple* extraout_RDX;
        tuple<std::optional<StringView>> local_198[24];
        WrapArray<ArgDecodingError> local_180[16];
        fixed_vector local_170[120];
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        new (local_f8) eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>();
        internal::DecodeArgs<std::optional<StringView>>(local_170, (Console*)local_f8, (ArgDecodingError*)pCVar1,
                                                        (tuple*)param_1);
        std::tuple<std::optional<StringView>>::tuple(local_198, (tuple*)local_170);
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                local_f8) == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_180, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_180);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            local_170->~optional();
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, local_198, extraout_RDX);
        }
        local_f8->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ba90a0, 48 bytes, inline, placed by class name
    // Console::DetachHistoryListener(Console::HistoryListener*)
    void Console::DetachHistoryListener(HistoryListener* param_1) {
        eastl::set<Console::HistoryListener*, eastl::less<Console::HistoryListener*>, eastl::allocator>::erase(
            (HistoryListener**)(param_1 + 45));
    }

    // 0x100ba9880, 48 bytes, inline, placed by class name
    // Console::AttachHistoryListener(Console::HistoryListener*)
    void Console::AttachHistoryListener(HistoryListener* param_1) {
        HistoryListener* local_10;

        local_10 = param_1;
        eastl::rbtree<Console::HistoryListener*, Console::HistoryListener*, eastl::less<Console::HistoryListener*>,
                      eastl::allocator, eastl::use_self<Console::HistoryListener*>, false, true>::
            insert<Console::HistoryListener*&, void>(
                (rbtree<Console::HistoryListener*, Console::HistoryListener*, eastl::less<Console::HistoryListener*>,
                        eastl::allocator, eastl::use_self<Console::HistoryListener*>, false, true>*)&field_360,
                &local_10);
    }

    // 0x100bb1c70, 32 bytes, base-object constructor, inline, placed by class name
    // Console::HistoryListener::HistoryListener()
    void Console::HistoryListener::HistoryListener() {
        field_0 = PTR_vtable_100ee86d8 + 16;
    }

    // 0x100c7b0e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Console::PendingCommand::PendingCommand(Console::PendingCommand&&): jumps straight to the base-object constructor

    // 0x100c7c620, 32 bytes, inline, placed by class name
    // Console::ResetCommandHistoryCursor()
    void Console::ResetCommandHistoryCursor() {
        (&field_172)->reset();
    }

    // 0x100c7cc70, 16 bytes, complete-object constructor, inline, placed by class name
    // Console::SearchResult::SearchResult(): jumps straight to the base-object constructor

    // 0x100c7d000, 16 bytes, complete-object destructor, inline, placed by class name
    // Console::SearchResult::~SearchResult(): jumps straight to the base-object destructor

    // 0x100c7ed30, 16 bytes, inline, placed by class name
    // Console::QueueCommandNoHistory(char const*, char const*, int)
    void Console::QueueCommandNoHistory(char* param_1, char* param_2, int param_3) {
        QueueCommand(this, param_1, param_2, param_3, false);
    }

    // 0x100c80520, 64 bytes, base-object constructor, inline, placed by class name
    // Console::PendingCommand::PendingCommand(Console::PendingCommand&&)
    void Console::PendingCommand::PendingCommand(PendingCommand* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
        field_68 = param_1->field_68;
        field_64 = param_1->field_64;
    }

    // 0x100c81b80, 64 bytes, base-object constructor, inline, placed by class name
    // Console::SearchResult::SearchResult()
    void Console::SearchResult::SearchResult() {
        new (this) eastl::string();
        new (&field_32) eastl::vector<eastl::string, eastl::allocator>();
        field_64 = 0;
    }

    // 0x100c81c00, 48 bytes, base-object destructor, inline, placed by class name
    // Console::SearchResult::~SearchResult()
    void Console::SearchResult::~SearchResult() {
        (&field_32)->~vector();
        ~basic_string();
    }

    // 0x100c893e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Console::PendingCommand::PendingCommand(): jumps straight to the base-object constructor

    // 0x100c893f0, 48 bytes, base-object constructor, inline, placed by class name
    // Console::PendingCommand::PendingCommand()
    void Console::PendingCommand::PendingCommand() {
        new (this) eastl::string();
        new (&field_32) eastl::string();
    }

    // 0x100c8c980, 304 bytes, inline, placed by class name
    // Console::AddCommand<Console::RegisterCoreCommands()::$_0>(char const*, Console::RegisterCoreCommands()::$_0, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<Console::RegisterCoreCommands()::$_0>(char
   const*, Console::RegisterCoreCommands()::$_0,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&) const */

    void Console::AddCommand<Console::RegisterCoreCommands()::$_0>(char const*, Console::RegisterCoreCommands()::$_0,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* in_RCX;
        WrapArray<ArgDecodingError> local_188[16];
        undefined8 local_178;
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_170[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f8);
        local_178 = internal::DecodeArgs<std::optional<int>>((fixed_vector*)local_f8, pCVar1,
                                                             (ArgDecodingError*)param_1, in_RCX);
        cVar3 = local_f8->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_188, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_188);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_170);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)&local_178);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c8ce60, 64 bytes, inline, placed by class name
    // Console::RegisterCoreCommands()::$_0::operator()(std::optional<int>) const
    /* Console::RegisterCoreCommands()::$_0::TEMPNAMEPLACEHOLDERVALUE(std::optional<int>)
   const */

    void Console::RegisterCoreCommands()::$_0::operator()(undefined8 param_2) {
        long lVar1;
        int* piVar2;
        float fVar4;
        undefined8 local_18;

        lVar1 = *(long*)this;
        local_18 = param_2;
        if (local_18.operator_cast_to_bool()) {
            piVar2 = (int*)local_18.value();
            fVar4 = (float)*piVar2;
        } else {
            fVar4 = 5.0;
        }
        *(float*)(lVar1 + 320) = fVar4;
    }

    // 0x100c8db10, 336 bytes, inline, placed by class name
    // Console::AddCommand<Console::RegisterCoreCommands()::$_1>(char const*, Console::RegisterCoreCommands()::$_1, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<Console::RegisterCoreCommands()::$_1>(char
   const*, Console::RegisterCoreCommands()::$_1,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&) const */

    void Console::AddCommand<Console::RegisterCoreCommands()::$_1>(char const*, Console::RegisterCoreCommands()::$_1,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        tuple<StringView> local_190[16];
        WrapArray<ArgDecodingError> local_180[16];
        fixed_vector local_170[120];
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        new (local_f8) eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>();
        internal::DecodeArgs<StringView>(local_170, (Console*)local_f8, (ArgDecodingError*)pCVar1, (tuple*)param_1);
        std::tuple<StringView>::tuple(local_190, (tuple*)local_170);
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                local_f8) == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_180, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_180);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            local_170->~optional();
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)local_190);
        }
        local_f8->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c8ea30, 272 bytes, inline, placed by class name
    // Console::AddCommand<Console::RegisterCoreCommands()::$_3>(char const*, Console::RegisterCoreCommands()::$_3, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<Console::RegisterCoreCommands()::$_3>(char
   const*, Console::RegisterCoreCommands()::$_3,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&) const */

    void Console::AddCommand<Console::RegisterCoreCommands()::$_3>(char const*, Console::RegisterCoreCommands()::$_3,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c8eba0, 144 bytes, inline, placed by class name
    // Console::ClearMessageHistory()
    void Console::ClearMessageHistory() {
        bool bVar1;
        undefined8* puVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar3[16];
        undefined8 local_28;
        undefined8 local_20;

        (&field_48)->clear();
        local_28 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar3 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_20 = auVar3._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_20, auVar3._8_8_);
        if (bVar1) {
            do {
                puVar2 = (undefined8*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28);
                (**(code**)(*(long*)*puVar2 + 24))();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_28);
                bVar1 = eastl::operator!=((eastl*)&local_28, (hashtable_iterator_base*)&local_20, extraout_RDX);
            } while (bVar1);
        }
    }

    // 0x100c8f5b0, 272 bytes, inline, placed by class name
    // Console::AddCommand<Console::RegisterCoreCommands()::$_4>(char const*, Console::RegisterCoreCommands()::$_4, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<Console::RegisterCoreCommands()::$_4>(char
   const*, Console::RegisterCoreCommands()::$_4,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&) const */

    void Console::AddCommand<Console::RegisterCoreCommands()::$_4>(char const*, Console::RegisterCoreCommands()::$_4,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c900a0, 272 bytes, inline, placed by class name
    // Console::AddCommand<Console::RegisterCoreCommands()::$_5>(char const*, Console::RegisterCoreCommands()::$_5, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<Console::RegisterCoreCommands()::$_5>(char
   const*, Console::RegisterCoreCommands()::$_5,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&) const */

    void Console::AddCommand<Console::RegisterCoreCommands()::$_5>(char const*, Console::RegisterCoreCommands()::$_5,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c90b90, 272 bytes, inline, placed by class name
    // Console::AddCommand<Console::RegisterCoreCommands()::$_6>(char const*, Console::RegisterCoreCommands()::$_6, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<Console::RegisterCoreCommands()::$_6>(char
   const*, Console::RegisterCoreCommands()::$_6,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&) const */

    void Console::AddCommand<Console::RegisterCoreCommands()::$_6>(char const*, Console::RegisterCoreCommands()::$_6,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        char cVar3;
        tuple* extraout_RDX;
        WrapArray<ArgDecodingError> local_178[16];
        optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>> local_168[120];
        fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator> local_f0[200];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::fixed_vector(local_f0);
        cVar3 = local_f0->empty();
        if (cVar3 == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_178, (fixed_vector*)local_f0);
            ReportArgDecodingErrors(pCVar1, uVar2, local_178);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::optional(local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_168);
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::~optional(local_168);
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8, extraout_RDX);
        }
        eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c90d00, 32 bytes, inline, placed by class name
    // Console::ClearStoredVariables()
    void Console::ClearStoredVariables() {
        (&field_528)->clear();
    }

    // 0x100c91710, 368 bytes, inline, placed by class name
    // Console::AddCommand<Console::RegisterCoreCommands()::$_2>(char const*, Console::RegisterCoreCommands()::$_2, int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)#1}::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* Console::AddCommand<Console::RegisterCoreCommands()::$_2>(char
   const*, Console::RegisterCoreCommands()::$_2,
   int)::{lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const&) const */

    void Console::AddCommand<Console::RegisterCoreCommands()::$_2>(char const*, Console::RegisterCoreCommands()::$_2,
                                                                   int)::{
        lambda(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) #1
    }
    ::operator()(_lambda_eastl__fixed_vector<StringView, 4ul, true, eastl::allocator> const___1_* this,
                 fixed_vector * param_1) {
        Console* pCVar1;
        undefined8 uVar2;
        tuple<std::optional<eastl::string>> local_1a8[40];
        WrapArray<ArgDecodingError> local_180[16];
        fixed_vector local_170[120];
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>> local_f8[200];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pCVar1 = *(Console**)this;
        new (local_f8) eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>();
        internal::DecodeArgs<std::optional<eastl::string> const&>(local_170, (Console*)local_f8,
                                                                  (ArgDecodingError*)pCVar1, (tuple*)param_1);
        std::tuple<std::optional<eastl::string>>::tuple(local_1a8, (tuple*)local_170);
        local_170->~tuple();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                local_f8) == '\0') {
            uVar2 = *(undefined8*)(this + 16);
            WrapArray<ArgDecodingError>::WrapArray<eastl::fixed_vector<ArgDecodingError, 4ul, true, eastl::allocator>>(
                local_180, (fixed_vector*)local_f8);
            ReportArgDecodingErrors(pCVar1, uVar2, local_180);
            new (local_170) std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>();
            std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>::operator=(
                (optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>*)&pCVar1->field_408,
                (optional*)local_170);
            local_170->~optional();
        } else {
            internal::CallConsoleFnWrapper<void>::operator()((optional*)&pCVar1->field_408, this + 8,
                                                             (tuple*)local_1a8);
        }
        std::tuple<std::optional<eastl::string>>::~tuple(local_1a8);
        local_f8->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100c91e20, 352 bytes, inline, placed by class name
    // Console::RegisterCoreCommands()::$_2::operator()(std::optional<eastl::string > const&) const
    /* Console::RegisterCoreCommands()::$_2::TEMPNAMEPLACEHOLDERVALUE(std::optional<eastl::basic_string<char,
   eastl::allocator> > const&) const */

    void Console::RegisterCoreCommands()::$_2::operator()(optional* param_1) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_00;
        bool bVar1;
        char cVar2;
        Layout* this_01;
        basic_string* pbVar3;
        basic_string* pbVar4;
        basic_string* pbVar5;
        char* pcVar6;
        undefined8 uVar7;
        uchar* in_RCX;
        StringView SVar8;
        StringView local_278;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* local_268;
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        this_00 = *(compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                        eastl::allocator, 0>**)this;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        local_268 = this_00;
        this_01 =
            (Layout*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                                eastl::allocator, 0>::second(this_00);
        pbVar3 = (basic_string*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
        pbVar4 = (basic_string*)this_01->end();
        if (pbVar3 != pbVar4) {
            do {
                bVar1 = std::optional::operator_cast_to_bool(param_1);
                if (bVar1) {
                    pbVar5 = (basic_string*)param_1->value();
                    cVar2 = MatchString(pbVar3, pbVar5);
                    if (cVar2 != '\0')
                        goto LAB_100c91ecf;
                } else {
                LAB_100c91ecf:
                    StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(
                        &local_278, (fixed_string*)pbVar3);
                    SVar8.field_8 = in_RCX;
                    SVar8.field_0 = (ulong)&local_278;
                    cVar2 = ((pbVar3 + 32))->AppendUsage(local_260, SVar8);
                    if (cVar2 == '\0') {
                        pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                            (fixed_string<char, 16, true, eastl::allocator>*)local_260, pcVar6);
                    }
                    uVar7 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
                    AddMessage(local_268, 3, uVar7);
                    eastl::string::clear();
                }
                pbVar3 = pbVar3 + 288;
            } while (pbVar3 != pbVar4);
        }
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

} // namespace jag::console

namespace jag::oldscape {
    class ConsoleCommandHelp {
    public:
        Usage() const;
        Description() const;
        ConsoleCommandHelp(ConsoleCommandHelp&&);
        ConsoleCommandHelp(char const*, char const*);
        ~ConsoleCommandHelp();
        ConsoleCommandHelp(ConsoleCommandHelp const&);
        DisplayName* operator=(ConsoleCommandHelp&&);

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x10007d0d0, 48 bytes, inline, placed by class header (inline)
    // ConsoleCommandHelp::operator=(ConsoleCommandHelp&&)
    /* rs2lib::social::DisplayName::TEMPNAMEPLACEHOLDERVALUE(rs2lib::social::DisplayName&&)
    */

    DisplayName* rs2lib::social::DisplayName::operator=(DisplayName* param_1) {
        eastl::string::operator=((eastl::string*)this, (basic_string*)param_1);
        eastl::string::operator=((eastl::string*)&field_32, (basic_string*)&param_1->field_32);
        return this;
    }

} // namespace jag::oldscape

namespace jag::fixedfunction {
    // 0x10005e5c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::OSClientConsole::OnFocusChanged()::$_1, void>(oldscape::OSClientConsole::OnFocusChanged()::$_1&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
