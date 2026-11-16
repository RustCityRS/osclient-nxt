// libs/game/shared/framework/input/event/MouseInputEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.shared

namespace jag::console::internal {
    // 0x1006ea600
    eastl::fixed_vector<CommandArgInfo, 4ul> BuildArgInfos<>(std::tuple<>* tuple) {
        new (tuple) eastl::fixed_vector<CommandArgInfo, 4ul>();
        return tuple;
    }

    // 0x1006ec7c0
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__0 const&,
                   std::tuple<>&>((__0*)arg1, (tuple<>*)arg1);
        reset();
    }

    // 0x1006ef150
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__1 const&,
                   std::tuple<>&>((__1*)this, (tuple<>*)arg1);
        reset();
    }

    // 0x1006efd80
    void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*,
                                                                                  graphics::RT7Core*)::$_2 const&,
                                                std::tuple<std::optional<bool>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 const& arg2,
        std::tuple<std::optional<bool>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__2 const&,
                   std::tuple<std::optional<bool>>&>((__2*)arg1, (tuple<std::optional<bool> _>*)arg1);
        reset();
    }

    // 0x1006f01c0
    char const* GetTypeName<bool>() {
        return "bool";
    }

    // 0x1006f0860
    CommandArgInfo GetArgInfo<std::optional<bool>>() {
        GetTypeName<bool>();
    }

    // 0x1006f16c0
    void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*,
                                                                                  graphics::RT7Core*)::$_3 const&,
                                                std::tuple<eastl::string, std::optional<bool>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 const& arg2,
        std::tuple<eastl::string, std::optional<bool>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__3 const&,
                   std::tuple<eastl::string, std::optional<bool>>&>((__3*)arg1,
                                                                    (tuple<eastl::string, std::optional<bool> _>*)arg1);
        reset();
    }

    // 0x1006f1960
    char const* GetTypeName<eastl::string>() {
        return "string";
    }

    // 0x1006f1bf0
    CommandArgInfo GetArgInfo<eastl::string const&>() {
        GetTypeName<eastl::string>();
    }

    // 0x1006f2670
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__4 const&,
                   std::tuple<>&>((__4*)this, (tuple<>*)arg1);
        reset();
    }

    // 0x1006f5740
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__5 const&,
                   std::tuple<>&>((__5*)this, (tuple<>*)arg1);
        reset();
    }

    // 0x1006f7680
    void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*,
                                                                                  graphics::RT7Core*)::$_6 const&,
                                                std::tuple<eastl::string>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 const& arg2,
        std::tuple<eastl::string>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__6 const&,
                   std::tuple<eastl::string>&>((__6*)arg1, (tuple<eastl::string_>*)arg2);
        reset();
    }

    // 0x1006f83a0
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 const&,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 const& arg2,
        std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__7 const&,
                   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul> const>>&>(
            (__7*)arg1, (tuple<std::reference_wrapper<eastl::fixed_vector<StringView, _4ul> const> _>*)arg2);
        reset();
    }

    // 0x1006f85d0
    CommandArgInfo GetArgInfo<eastl::fixed_vector<StringView, 4ul> const&>() {
        GetTypeName<eastl::fixed_vector<StringView, 4ul>>();
    }

    // 0x1006f85e0
    char const* GetTypeName<eastl::fixed_vector<StringView, 4ul>>() {
        return "";
    }

    // 0x1006f9060
    void CallConsoleFnWrapper<void>::operator()<
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 const&, std::tuple<>&>(
        std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny>>& arg1,
        game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 const& arg2,
        std::tuple<>& tuple) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__8 const&,
                   std::tuple<>&>((__8*)this, (tuple<>*)arg1);
        reset();
    }

} // namespace jag::console::internal

namespace jag::console {
    class ArgDecodingError {
    public:
        ArgDecodingError(StringView stringView1, StringView stringView2, int arg3);

    private:
        uint8_t _unknown_0[16];
        StringView field_16;
        int field_32;
        uint8_t _unknown_36[4];
    };

    // 0x1006e71b0
    VarAny::VarAny() : eastl::fixed_string<char, 32>(""), field_103(0) {}

    // 0x1006e8630
    VarAny* VarAny::operator=(const VarAny& varAny) {
        *this = varAny;
        uint64_t uVar1 = varAny.field_80;
        uint64_t uVar2 = varAny.field_88;
        uint64_t uVar3 = varAny.field_96;
        uint8_t bVar4 = varAny.field_103;
        field_72 = varAny.field_72;
        field_80 = uVar1;
        field_88 = uVar2;
        field_96 = uVar3;
        field_103 = bVar4;
        return this;
    }

    // 0x1006e8e40
    void VarAny::Encode<eastl::string>(eastl::string& str) const {
        if (Valid() == '\0') {
            LogAssert("Valid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/ConsoleArgs.h", 89,
                      nullptr);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_40(256);
        local_40.pStringNoConversion<eastl::fixed_string<char, 32>>(*this, false);
        local_40.p1<oldscape::shared::LoginProt::ID>((unsigned int)field_103);
        auto puVar2 = field_72.data();
        local_40.pArrayBuffer(puVar2, 0, (unsigned long)field_103);
        auto this_00 = Base64::Instance();
        puVar2 = (unsigned char*)local_40.GetDataPtr();
        unsigned long arg3 = local_40.size();
        this_00->Encode(str, puVar2, arg3);
    }

    // 0x1006eaeb0
    CommandData* CommandData::operator=(CommandData&& commandData) {
        *this = commandData;
        field_48 = commandData.field_48;
        field_56 = commandData.field_56;
        field_160 = commandData.field_160;
        field_232 = commandData.field_232;
        field_240 = commandData.field_240;
        return this;
    }

    // 0x1006eb320
    CommandData::CommandData(CommandData&& commandData)
        : std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>(commandData), field_48(commandData.field_48),
          field_56(commandData.field_56), field_160(commandData.field_160), field_240(commandData.field_240),
          field_232(commandData.field_232) {}

    // 0x1006eba80
    CommandData::CommandData()
        : std::function<void(eastl::fixed_vector<StringView, 4ul> const&)>(), field_48(4294967295), field_232(0),
          field_240(0) {}

    // 0x1006ebcc0
    CommandData::~CommandData() {
        field_160.~fixed_vector();
        field_56.~fixed_vector();
    }

    // 0x1006edfe0
    VarAny* VarAny::operator=(VarAny&& varAny) {
        *this = varAny;
        uint64_t uVar1 = varAny.field_80;
        uint64_t uVar2 = varAny.field_88;
        uint64_t uVar3 = varAny.field_96;
        uint8_t bVar4 = varAny.field_103;
        field_72 = varAny.field_72;
        field_80 = uVar1;
        field_88 = uVar2;
        field_96 = uVar3;
        field_103 = bVar4;
        return this;
    }

    // 0x1006ee0b0
    VarAny::VarAny(VarAny&& varAny) : eastl::fixed_string<char, 32>(varAny) {
        uint64_t uVar1 = varAny.field_72;
        uint64_t uVar2 = varAny.field_80;
        uint64_t uVar3 = varAny.field_96;
        uint8_t bVar4 = varAny.field_103;
        field_88 = varAny.field_88;
        field_96 = uVar3;
        field_103 = bVar4;
        field_72 = uVar1;
        field_80 = uVar2;
    }

    // 0x1006f03f0
    ArgDecodingError::ArgDecodingError(StringView stringView1, StringView stringView2, int arg3)
        : StringView(*stringView1), field_16(*stringView2), field_32(arg3) {}

} // namespace jag::console

namespace jag::game {
    class GWCLocation {
    public:
        ~GWCLocation();
        GWCLocation(int arg1, const eastl::string& str);
        GWCLocation* operator=(GWCLocation&& gwcLocation);
        GWCLocation(const GWCLocation& gwcLocation);
        GWCLocation(GWCLocation&& gwcLocation);
        GWCLocation();

    private:
        int field_0;
        uint8_t _unknown_4[12];
    };

    class MouseInputEvent {
    public:
        // virtual methods in vtable order
        virtual ~MouseInputEvent();
        virtual uint64_t EventOccurred(const MouseEvent* mouseEvent, const eastl::vector<KeyEvent>& keyEvents,
                                       unsigned int arg3, Keyboard& keyboard) const;
        virtual void Pack(PacketT<Array<unsigned char>>& arg1) const;
        virtual int GetPackLength() const;
        virtual uint64_t GetEventType() const;
        MouseInputEvent(PacketT<Array<unsigned char>>& arg1);

    private:
        int field_8;
        unsigned int field_12;
        uint8_t _unknown_16[24];
    };

    // 0x1006e68d0
    int MouseInputEvent::GetPackLength() const {
        return field_16.end() + 3;
    }

    // 0x1006e9130
    GWCLocation::GWCLocation(const GWCLocation& gwcLocation) {
        *(int*)this = gwcLocation.field_0;
        new ((this + 8)) eastl::string(gwcLocation.field_8);
    }

    // 0x1006e98b0
    KeyEvent::KeyEvent() : field_16(0), field_24(0), field_0(0) {
        *(uint64_t*)((long)&field_0 + 5) = 0;
    }

    // 0x1006e9920
    MouseEvent::MouseEvent() : field_32(1) {}

    // 0x1006e9b10
    MouseInputEvent::~MouseInputEvent() {
        field_16.~Array();
    }

    // 0x1006f07c0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_2::operator()(std::optional<bool> arg1) const {
        bool local_9 = false;
        bool bVar1 = ((uint16_t)this).value_or<bool>(local_9);
        ((BucketManager*)(unsigned long)bVar1)->PrintBucketAllocations((uint8_t)&local_9);
    }

    // 0x1006f1b80
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_3::operator()(const eastl::string& str,
                                                                          std::optional<bool> arg2) const {
        uint8_t in_AL;
        uint64_t in_register_00000001;
        bool arg2_00;
        uint64_t uStack_18;

        uStack_18._6_2_ = (uint16_t)((uint64_t)in_register_00000001 >> 40);
        uStack_18._0_6_ = (((uint64_t)((short)str) << 32) |
                           (uint32_t)((int)(((uint64_t)in_register_00000001 << 8) | (uint8_t)in_AL)));
        BucketManager* this_00 = (BucketManager*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uStack_18 = uStack_18 & 72057594037927935;
        bool bVar1 = ((optional<bool>*)((long)&uStack_18 + 4))->value_or<bool>(*((bool*)((long)&uStack_18 + 7)));
        this_00->PrintBucketUsage((char*)(unsigned long)bVar1, arg2_00);
    }

    // 0x1006f7780
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_6::operator()(const eastl::string& str) const {
        char* str_00;
        LineType lineType;

        Console* pCVar1 = *(Console**)this;
        Filename local_160(str);
        bool cVar2 = pCVar1->SetMessageHistoryOutputFile(local_160);
        pCVar1 = *(Console**)this;
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (!cVar2) {
            str_00 = "Failed to create and open output file \"%s\"";
            lineType = 5;
        } else {
            str_00 = "Output file opened at \"%s\"";
            lineType = 2;
        }
        pCVar1->AddMessage(lineType, str_00, uVar3);
    }

    // 0x1006f84d0
    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_7::operator()(
        const eastl::fixed_vector<StringView, 4ul>& stringViews) const {
        char* str;
        LineType lineType;

        if ((*(Console**)this)->CloseMessageHistoryOutputFile() == '\0') {
            str = "Failed to close output file";
            lineType = 5;
        } else {
            str = "Output file closed";
            lineType = 2;
        }
        (*(Console**)this)->AddMessage(lineType, str);
    }

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x1006f2a10
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
        game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()
                  const ::{ lambda(render::RenderContext&) #1 } &&
              arg1) {
        *(void (**)(...))(this + 144) =
            function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                         graphics::RT7Core*)::$_4::operator()() const ::{
            lambda(void*, void*) #1
        }
        (render::RenderContext&)#1
    },void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()const::{
        lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(void (**)(...))this = function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                     graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(void (**)(...))(this +
                  152) = function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x1006f2a40
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {}

// 0x1006f2a50
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                 graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE() const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()((_lambda_void__jag__render__RenderContext___1_*)this, arg1, renderContext);
}

// 0x1006f2a60
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()((_lambda_jag__render__RenderContext___1_*)this, arg1);
}

// 0x1006f2a80
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x1006f5ab0
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()
              const ::{ lambda(render::RenderContext&) #1 } &&
          arg1) {
    *(void (**)(...))(this + 144) =
        function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()
                       const ::{
        lambda(void*, void*) #1
    }
    (render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(void (**)(...))this = function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                     graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(void (**)(...))(this +
                  152) = function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                      graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x1006f5ae0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {}

// 0x1006f5af0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                 graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE() const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()((_lambda_void__jag__render__RenderContext___1_*)this, arg1, renderContext);
}

// 0x1006f5b00
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()((_lambda_jag__render__RenderContext___1_*)this, arg1);
}

// 0x1006f5b20
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x1006e7020
    unsigned long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringNoConversion<32, true>(
        eastl::fixed_string<char, 32>& str, bool arg2) {
        uint8_t bVar1;
        uint8_t* pbVar3;
        unsigned long uVar4;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            uVar4 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar4 + 1;
            pbVar3 = (uint8_t*)(*this)[uVar4];
            bVar1 = *pbVar3;
            if (bVar1 != 0) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          460, "Bad version number in gStringNoConversion: %d", (unsigned int)bVar1);
                str.clear();
                return 0;
            }
        }
        char* str_00 = (char*)(*this)[*(unsigned long*)(this + 24)];
        size_t arg2_00 = _strlen(str_00);
        long lVar2 = *(long*)(this + 24);
        uVar4 = end();
        if (uVar4 < lVar2 + arg2_00 + 1) {
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                468, nullptr);
        }
        str.assign(str_00, arg2_00);
        *(size_t*)(this + 24) = *(long*)(this + 24) + arg2_00 + 1;
        return arg2_00;
    }

    // 0x1006e7110
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gArrayBuffer(unsigned char* arg1,
                                                                                              unsigned long arg2,
                                                                                              unsigned long arg3) {
        long lVar1;
        void* pvVar3;

        if (arg3 != 0) {
            lVar1 = *(long*)(this + 24);
            if (end() < lVar1 + arg3) {
                LogAssert("self->m_pos + length <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          507, nullptr);
            }
            pvVar3 = (void*)(*this)[*(unsigned long*)(this + 24)];
            _memcpy(arg1 + arg2, pvVar3, arg3);
            *(unsigned long*)(this + 24) = *(long*)(this + 24) + arg3;
        }
    }

    // 0x1006f00b0
    bool FromString<StringView, bool>(const StringView& stringView, bool& arg2, int arg3) {

        StringView local_30(stringView);
        return (bool)FromText(&local_30, arg2, arg3);
    }

    // 0x1006f1910
    bool FromString<StringView, eastl::string>(const StringView& stringView, eastl::string& str, int arg3) {

        auto local_38 = stringView.to_owned_string<eastl::string>();
        str = &local_38;
        return true;
    }

    // 0x1006f3320
    void SafeBucketAllocatorSTL < std::__packaged_task_func < ThreadPool::RunOnceOnAllThreads <
        game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
        lambda() #1
    }
    >(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >>
            ::deallocate(
                std::__packaged_task_func<
                    ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(
                        console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{ lambda() #1 }>(
                        char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                       graphics::RT7Core*)::$_4::operator()()
                                         const ::{ lambda() #1 }&&)::{ lambda() #1 },
                    SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                unsigned long arg2) {
        DeAllocate(16, arg2);
    }

    // 0x1006f5fa0
    void SafeBucketAllocatorSTL < std::__packaged_task_func < ThreadPool::RunOnceOnAllThreads <
        game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
        lambda() #1
    }
    >(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >>
            ::deallocate(
                std::__packaged_task_func<
                    ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(
                        console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{ lambda() #1 }>(
                        char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                       graphics::RT7Core*)::$_5::operator()()
                                         const ::{ lambda() #1 }&&)::{ lambda() #1 },
                    SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                unsigned long arg2) {
        DeAllocate(16, arg2);
    }

} // namespace jag
