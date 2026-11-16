// libs/game/shared/framework/input/event/MouseInputEvent.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.shared

namespace jag::console {
    class ArgDecodingError {
    public:
        ArgDecodingError(StringView, StringView, int);

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[16];
        StringView field_16; // offset 16
        int field_32;        // offset 32
        char _unknown_36[4];
    };

    // 0x1006e6f80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VarAny::VarAny(): jumps straight to the base-object constructor

    // 0x1006e71b0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VarAny::VarAny()
    void VarAny::VarAny() {
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>("");
        field_103 = 0;
    }

    // 0x1006e8630, 48 bytes, inline, placed by debug map only (low confidence)
    // VarAny::operator=(VarAny const&)
    /* VarAny::TEMPNAMEPLACEHOLDERVALUE(VarAny const&) */

    VarAny* VarAny::operator=(VarAny* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined7 uVar3;
        byte bVar4;

        eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
            (fixed_string<char, 32, true, eastl::allocator>*)this, (fixed_string*)param_1);
        uVar1 = param_1->field_80;
        uVar2 = param_1->field_88;
        uVar3 = param_1->field_96;
        bVar4 = param_1->field_103;
        field_72 = param_1->field_72;
        field_80 = uVar1;
        field_88 = uVar2;
        field_96 = uVar3;
        field_103 = bVar4;
        return this;
    }

    // 0x1006e8e40, 224 bytes, inline, placed by debug map only (low confidence)
    // void VarAny::Encode<eastl::string >(eastl::string&) const
    void VarAny::Encode<eastl::string>(basic_string* param_1) {
        uchar* puVar2;
        Base64* this_00;
        ulong uVar3;
        PacketT<Array<unsigned char, BucketAllocatorEASTL>> local_40[32];

        if (Valid(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("Valid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/console/ConsoleArgs.h", 89,
                      (char*)0);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(local_40, 256);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringNoConversion<
            eastl::fixed_string<char, 32, true, eastl::allocator>>(local_40, (fixed_string*)this, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(local_40, field_103);
        puVar2 = (uchar*)(&field_72)->data();
        local_40->pArrayBuffer(puVar2, 0, (ulong)field_103);
        this_00 = (Base64*)Base64::Instance();
        puVar2 = (uchar*)local_40->GetDataPtr();
        uVar3 = local_40->size();
        this_00->Encode(param_1, puVar2, uVar3);
        local_40->~PacketT();
    }

    // 0x1006ea760, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // CommandData::CommandData(): jumps straight to the base-object constructor

    // 0x1006ea790, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // CommandData::~CommandData(): jumps straight to the base-object destructor

    // 0x1006eaeb0, 96 bytes, inline, placed by debug map only (low confidence)
    // CommandData::operator=(CommandData&&)
    /* CommandData::TEMPNAMEPLACEHOLDERVALUE(CommandData&&) */

    CommandData* CommandData::operator=(CommandData* param_1) {
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::operator=(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (function*)param_1);
        field_48 = param_1->field_48;
        eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>*)&field_56, (fixed_vector*)&param_1->field_56);
        eastl::fixed_vector<char const*, 4ul, true, eastl::allocator>::operator=(
            (fixed_vector<char const*, 4ul, true, eastl::allocator>*)&field_160, (fixed_vector*)&param_1->field_160);
        field_232 = param_1->field_232;
        field_240 = param_1->field_240;
        return this;
    }

    // 0x1006eb310, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // CommandData::CommandData(CommandData&&): jumps straight to the base-object constructor

    // 0x1006eb320, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // CommandData::CommandData(CommandData&&)
    void CommandData::CommandData(CommandData* param_1) {
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this,
            (function*)param_1);
        field_48 = param_1->field_48;
        new (&field_56, (fixed_vector*)&param_1->field_56)
            eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>();
        new (&field_160, (fixed_vector*)&param_1->field_160)
            eastl::fixed_vector<char const*, 4ul, true, eastl::allocator>();
        field_240 = param_1->field_240;
        field_232 = param_1->field_232;
    }

    // 0x1006eba80, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // CommandData::CommandData()
    void CommandData::CommandData() {
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this);
        field_48 = 4294967295;
        new (&field_56) eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>();
        new (&field_160) eastl::fixed_vector<char const*, 4ul, true, eastl::allocator>();
        field_232 = 0;
        field_240 = 0;
    }

    // 0x1006ebcc0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // CommandData::~CommandData()
    void CommandData::~CommandData() {
        (&field_160)->~fixed_vector();
        (&field_56)->~fixed_vector();
        std::function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>::~function(
            (function<void(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&)>*)this);
    }

    // 0x1006edfe0, 48 bytes, inline, placed by debug map only (low confidence)
    // VarAny::operator=(VarAny&&)
    /* VarAny::TEMPNAMEPLACEHOLDERVALUE(VarAny&&) */

    VarAny* VarAny::operator=(VarAny* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined7 uVar3;
        byte bVar4;

        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)this, (fixed_string*)param_1);
        uVar1 = param_1->field_80;
        uVar2 = param_1->field_88;
        uVar3 = param_1->field_96;
        bVar4 = param_1->field_103;
        field_72 = param_1->field_72;
        field_80 = uVar1;
        field_88 = uVar2;
        field_96 = uVar3;
        field_103 = bVar4;
        return this;
    }

    // 0x1006ee0a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // VarAny::VarAny(VarAny&&): jumps straight to the base-object constructor

    // 0x1006ee0b0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VarAny::VarAny(VarAny&&)
    void VarAny::VarAny(VarAny* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined7 uVar3;
        byte bVar4;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        uVar1 = param_1->field_72;
        uVar2 = param_1->field_80;
        uVar3 = param_1->field_96;
        bVar4 = param_1->field_103;
        field_88 = param_1->field_88;
        field_96 = uVar3;
        field_103 = bVar4;
        field_72 = uVar1;
        field_80 = uVar2;
    }

    // 0x1006f0280, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ArgDecodingError::ArgDecodingError(StringView, StringView, int): jumps straight to the base-object constructor

    // 0x1006f03f0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ArgDecodingError::ArgDecodingError(StringView, StringView, int)
    void ArgDecodingError::ArgDecodingError(StringView param_1, StringView param_2, int param_3) {
        new (this) StringView(param_1.field_0);
        new (field_16, (StringView*)param_1.field_8) StringView();
        field_32 = (int)param_2.field_0;
    }

} // namespace jag::console

namespace jag::console::internal {
    // 0x1006ea600, 32 bytes, placed by debug map only (low confidence)
    // eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator> BuildArgInfos<>(std::tuple<>*)
    /* eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>
   BuildArgInfos<>(std::tuple<>*) */

    tuple* BuildArgInfos<>(tuple* param_1) {
        new (param_1) eastl::fixed_vector<CommandArgInfo, 4ul, true, eastl::allocator>();
        return param_1;
    }

    // 0x1006ec7c0, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_0 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_0 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __0* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__0_const&,
                   std::tuple<>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x1006ef150, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_1 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_1 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __1* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__1_const&,
                   std::tuple<>&>(param_1, (tuple*)param_2);
        param_1->reset();
    }

    // 0x1006efd80, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 const&, std::tuple<std::optional<bool> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_2 const&, std::tuple<std::optional<bool> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_2 const&, std::tuple<std::optional<bool> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __2* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__2_const&,
                   std::tuple<std::optional<bool>>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x1006f01c0, 16 bytes, inline, placed by debug map only (low confidence)
    // char const* GetTypeName<bool>()
    char* GetTypeName<bool>() {
        return "bool";
    }

    // 0x1006f0860, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<std::optional<bool> >()
    /* CommandArgInfo GetArgInfo<std::optional<bool> >() */

    void GetArgInfo<std::optional<bool>>() {
        GetTypeName<bool>();
    }

    // 0x1006f16c0, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 const&, std::tuple<eastl::string, std::optional<bool> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_3 const&, std::tuple<eastl::string, std::optional<bool> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_3 const&, std::tuple<eastl::string,
   std::optional<bool> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __3* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__3_const&,
                   std::tuple<eastl::string, std::optional<bool>>&>(param_2, (tuple*)param_2);
        param_1->reset();
    }

    // 0x1006f1960, 16 bytes, inline, placed by debug map only (low confidence)
    // char const* GetTypeName<eastl::string >()
    char* GetTypeName<eastl::string>() {
        return "string";
    }

    // 0x1006f1bf0, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<eastl::string const&>()
    void GetArgInfo<eastl::stringconst&>() {
        GetTypeName<eastl::string>();
    }

    // 0x1006f2670, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_4 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_4 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __4* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__4_const&,
                   std::tuple<>&>(param_1, (tuple*)param_2);
        param_1->reset();
    }

    // 0x1006f5740, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_5 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_5 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __5* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__5_const&,
                   std::tuple<>&>(param_1, (tuple*)param_2);
        param_1->reset();
    }

    // 0x1006f7680, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 const&, std::tuple<eastl::string >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_6 const&, std::tuple<eastl::string >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_6 const&, std::tuple<eastl::string >&)
    */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __6* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__6_const&,
                   std::tuple<eastl::string>&>(param_2, param_3);
        param_1->reset();
    }

    // 0x1006f83a0, 48 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_7 const&, std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const> >&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_7 const&,
   std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true,
   eastl::allocator> const> >&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __7* param_2, tuple* param_3) {
        std::apply<
            game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__7_const&,
            std::tuple<std::reference_wrapper<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const>>&>(
            param_2, param_3);
        param_1->reset();
    }

    // 0x1006f85d0, 16 bytes, inline, placed by debug map only (low confidence)
    // CommandArgInfo GetArgInfo<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>()
    void internal::GetArgInfo<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&>() {
        GetTypeName<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>>();
    }

    // 0x1006f85e0, 16 bytes, inline, placed by debug map only (low confidence)
    // char const* GetTypeName<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> >()
    char* internal::GetTypeName<eastl::fixed_vector<StringView, 4ul, true, eastl::allocator>>() {
        return "";
    }

    // 0x1006f9060, 32 bytes, inline, placed by debug map only (low confidence)
    // void CallConsoleFnWrapper<void>::operator()<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 const&, std::tuple<>&>(std::optional<std::variant<int, unsigned int, bool, float, eastl::string, VarAny> >&, game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::$_8 const&, std::tuple<>&)
    /* void 
   CallConsoleFnWrapper<void>::TEMPNAMEPLACEHOLDERVALUE(std::optional<std::variant<int,
   unsigned int, bool, float, eastl::string, VarAny> >&,
   game::RegisterCommonCommandsDebug(Console*, BaseApp*,
   graphics::RT7Core*)::$_8 const&, std::tuple<>&) */

    void CallConsoleFnWrapper<void>::operator()(optional* param_1, __8* param_2, tuple* param_3) {
        std::apply<game::RegisterCommonCommandsDebug(Console*, BaseApp*, graphics::RT7Core*)::__8_const&,
                   std::tuple<>&>(param_1, (tuple*)param_2);
        param_1->reset();
    }

} // namespace jag::console::internal

namespace jag::game {
    class GWCLocation {
    public:
        ~GWCLocation();
        GWCLocation(int, eastl::string const&);
        GWCLocation* operator=(GWCLocation&&);
        GWCLocation(GWCLocation const&);
        GWCLocation(GWCLocation&&);
        GWCLocation();

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        char _unknown_4[12];
    };

    class MouseInputEvent {
    public:
        // virtual methods in vtable order
        virtual ~MouseInputEvent();
        virtual EventOccurred(MouseEvent const*, eastl::vector<KeyEvent, eastl::allocator> const&, unsigned int,
                              Keyboard&) const;
        virtual void Pack(PacketT<Array<unsigned char, eastl::allocator>>&) const;
        virtual int GetPackLength() const;
        virtual GetEventType() const;
        MouseInputEvent(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        char _unknown_16[24];
    };

    // 0x1006e68a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MouseInputEvent::~MouseInputEvent(): jumps straight to the base-object destructor

    // 0x1006e68b0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // MouseInputEvent::~MouseInputEvent()
    void MouseInputEvent::~MouseInputEvent() {
        ~MouseInputEvent(this);
        operator_delete(this);
    }

    // 0x1006e68d0, 32 bytes, inline, placed by class name and debug map
    // MouseInputEvent::GetPackLength() const
    int MouseInputEvent::GetPackLength() {
        int iVar1;

        iVar1 = (&field_16)->end();
        return iVar1 + 3;
    }

    // 0x1006e9120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GWCLocation::GWCLocation(GWCLocation const&): jumps straight to the base-object constructor

    // 0x1006e9130, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GWCLocation::GWCLocation(GWCLocation const&)
    /* eastl::pair<unsigned int const, eastl::string
   >::pair(eastl::pair<unsigned int const, eastl::string > const&) */

    void eastl::pair<unsigned int const, eastl::string>::pair(pair<unsigned int const, eastl::string>* this,
                                                              pair* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        new ((this + 8)) eastl::string((basic_string*)(param_1 + 8));
    }

    // 0x1006e98b0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // KeyEvent::KeyEvent()
    void KeyEvent::KeyEvent() {
        field_16 = 0;
        field_24 = 0;
        field_0 = 0;
        *(undefined8*)((long)&field_0 + 5) = 0;
    }

    // 0x1006e9910, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MouseEvent::MouseEvent(): jumps straight to the base-object constructor

    // 0x1006e9920, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MouseEvent::MouseEvent()
    void MouseEvent::MouseEvent() {
        new (&field_4) math::Vector2T<int>();
        new (&field_12) math::Vector2T<int>();
        field_32 = 1;
    }

    // 0x1006e9b10, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // MouseInputEvent::~MouseInputEvent()
    void MouseInputEvent::~MouseInputEvent() {
        field_0 = &PTR__MouseInputEvent_100f116e0;
        (&field_16)->~Array();
        ~AutoSingleton();
    }

    // 0x1006f07c0, 48 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_2::operator()(std::optional<bool>) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_2::TEMPNAMEPLACEHOLDERVALUE(std::optional<bool>) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_2::operator()(undefined2 param_1) {
        bool bVar1;
        undefined2 local_c;
        bool local_9;

        local_9 = false;
        local_c = param_1;
        bVar1 = std::optional<bool>::value_or<bool>((optional<bool>*)&local_c, &local_9);
        BucketManager::PrintBucketAllocations(bVar1);
    }

    // 0x1006f1b80, 64 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_3::operator()(eastl::string const&, std::optional<bool>) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_3::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&, std::optional<bool>) const */

    void game::RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                           graphics::RT7Core*)::$_3 ::operator()(undefined8 param_1,
                                                                                 undefined2 param_2) {
        char* pcVar1;
        undefined1 in_AL;
        bool bVar2;
        undefined7 in_register_00000001;
        undefined8 uStack_18;

        uStack_18._6_2_ = (undefined2)((uint7)in_register_00000001 >> 40);
        uStack_18._0_6_ = CONCAT24(param_2, (int)CONCAT71(in_register_00000001, in_AL));
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uStack_18 = uStack_18 & 72057594037927935;
        bVar2 =
            std::optional<bool>::value_or<bool>((optional<bool>*)((long)&uStack_18 + 4), (bool*)((long)&uStack_18 + 7));
        BucketManager::PrintBucketUsage(pcVar1, bVar2);
    }

    // 0x1006f7780, 208 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_6::operator()(eastl::string const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_6::TEMPNAMEPLACEHOLDERVALUE(eastl::basic_string<char,
   eastl::allocator> const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_6::operator()(basic_string* param_1) {
        Console* this_00;
        undefined8 uVar1;
        char cVar2;
        undefined8 uVar3;
        char* pcVar4;
        undefined8 uVar5;
        Filename local_160[19];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = *(Console**)this;
        Filename::Filename(local_160, param_1);
        cVar2 = this_00->SetMessageHistoryOutputFile(local_160);
        local_160->~pair();
        uVar1 = *(undefined8*)this;
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (cVar2 == '\0') {
            pcVar4 = "Failed to create and open output file \"%s\"";
            uVar5 = 5;
        } else {
            pcVar4 = "Output file opened at \"%s\"";
            uVar5 = 2;
        }
        jag::console::Console::AddMessage(uVar1, uVar5, pcVar4, uVar3);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006f84d0, 64 bytes, inline, placed by debug map only (low confidence)
    // RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*, graphics::RT7Core*)::$_7::operator()(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&) const
    /* RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
   graphics::RT7Core*)::$_7::TEMPNAMEPLACEHOLDERVALUE(eastl::fixed_vector<StringView, 4ul,
   true, eastl::allocator> const&) const */

    void RegisterCommonCommandsDebug(jag::console::Console*, BaseApp*,
                                     graphics::RT7Core*)::$_7::operator()(fixed_vector* param_1) {
        char* pcVar2;
        undefined8 uVar3;

        if ((*(Console**)this)->CloseMessageHistoryOutputFile() == '\0') {
            pcVar2 = "Failed to close output file";
            uVar3 = 5;
        } else {
            pcVar2 = "Output file closed";
            uVar3 = 2;
        }
        jag::console::Console::AddMessage(*(undefined8*)this, uVar3, pcVar2);
    }

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x1006f2770, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}&&): jumps straight to the base-object constructor

    // 0x1006f2a10, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}&&)
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1},
   void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
   graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1}&&) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::operator()(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
        _lambda_jag__render__RenderContext___1_* param_1) {
        *(code**)(this + 144) =
            function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                         graphics::RT7Core*)::$_4::operator()() const ::{
            lambda(void*, void*) #1
        }
        (render::RenderContext&)#1
    },void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
        lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(code**)this = function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                             graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(code**)(this + 152) = function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                     graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x1006f2a40, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(void*, void*) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {}

// 0x1006f2a50, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                 graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE() const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x1006f2a60, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1},
   void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
   graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                      graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                            graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x1006f2a80, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x1006f5840, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}&&): jumps straight to the base-object constructor

// 0x1006f5ab0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}&&)
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1},
   void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
   graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1}&&) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::operator()(
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
    _lambda_jag__render__RenderContext___1_* param_1) {
    *(code**)(this + 144) = function < game::RegisterCommonCommandsDebug(
                                           console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
        lambda(void*, void*) #1
    }
    (render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(code**)this = function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                             graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(code**)(this + 152) = function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                     graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x1006f5ae0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(void*, void*) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {}

// 0x1006f5af0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    function < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                 graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE() const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
                  const ::{ lambda(render::RenderContext&) #1 }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x1006f5b00, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1},
   void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
   graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                      graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE() const ::{
    lambda(render::RenderContext&) #1
}
, void > (game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                            graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x1006f5b20, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}, void>(game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x1006e7020, 240 bytes, inline, placed by debug map only (low confidence)
    // unsigned long PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gStringNoConversion<32, true>(eastl::fixed_string<char, 32, true, eastl::allocator>&, bool)
    ulong PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringNoConversion<32, true>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, fixed_string* param_1,
        bool param_2) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        undefined8 uVar4;
        size_t sVar5;
        ulong uVar6;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            uVar6 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar6 + 1;
            pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar6);
            cVar1 = *pcVar3;
            if (cVar1 != '\0') {
                uVar4 = logger::default_logger();
                logger::Logger::Log(uVar4, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                                    "PacketMixins.inl",
                                    460, "Bad version number in gStringNoConversion: %d", cVar1);
                eastl::string::clear();
                return 0;
            }
        }
        pcVar3 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
        sVar5 = _strlen(pcVar3);
        lVar2 = *(long*)(this + 24);
        uVar6 = end();
        if (uVar6 < lVar2 + sVar5 + 1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + len + 1 <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                468, (char*)0);
        }
        param_1->assign(pcVar3, sVar5);
        *(size_t*)(this + 24) = *(long*)(this + 24) + sVar5 + 1;
        return sVar5;
    }

    // 0x1006e7110, 128 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gArrayBuffer(unsigned char*, unsigned long, unsigned long)
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gArrayBuffer(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, uchar* param_1, ulong param_2,
        ulong param_3) {
        long lVar1;
        ulong uVar2;
        void* pvVar3;

        if (param_3 != 0) {
            lVar1 = *(long*)(this + 24);
            uVar2 = end();
            if (uVar2 < lVar1 + param_3) {
                /* WARNING: Subroutine does not return */
                LogAssert("self->m_pos + length <= self->m_data.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/"
                          "PacketMixins.inl",
                          507, (char*)0);
            }
            pvVar3 = (void*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                (Array<unsigned char, BucketAllocatorEASTL>*)this, *(ulong*)(this + 24));
            _memcpy(param_1 + param_2, pvVar3, param_3);
            *(ulong*)(this + 24) = *(long*)(this + 24) + param_3;
        }
    }

    // 0x1006f00b0, 64 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<StringView, bool>(StringView const&, bool&, int)
    bool FromString<StringView, bool>(StringView* param_1, bool* param_2, int param_3) {
        int in_ECX;
        StringView SVar2;
        StringView local_30;

        new (&local_30) StringView(param_1);
        SVar2.field_8 = param_2;
        SVar2.field_0 = (ulong)&local_30;
        return (bool)FromText(SVar2, (bool*)(ulong)(uint)param_3, in_ECX);
    }

    // 0x1006f1910, 80 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<StringView, eastl::string >(StringView const&, eastl::string&, int)
    bool FromString<StringView, eastl::string>(StringView* param_1, basic_string* param_2, int param_3) {
        StringView local_38[2];

        StringView::to_owned_string<eastl::string>(local_38);
        eastl::string::operator=((eastl::string*)param_2, (basic_string*)local_38);
        local_38->~basic_string();
        return true;
    }

    // 0x1006f3320, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>
   >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < ThreadPool::RunOnceOnAllThreads <
        game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                          graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE() const ::{
        lambda() #1
    }
    >(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#1}&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::operator()(__packaged_task_func * param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, 16);
    }

    // 0x1006f5fa0, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>
   >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < ThreadPool::RunOnceOnAllThreads <
        game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                          graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE() const ::{
        lambda() #1
    }
    >(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#1}&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::operator()(__packaged_task_func * param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, 16);
    }

} // namespace jag
