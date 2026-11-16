// libs/oldscape/jagex3/midi2/midirequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class MidiRequest {
    public:
        MidiRequest(jagex3::Js5*, int, int, int, bool);
        void Init(jagex3::Js5*, int, int, int, bool);
        ~MidiRequest();
        MidiRequest(jagex3::Js5*, char const*, char const*, int, bool);

        // data members, from how the methods use this: 72 bytes
        Js5* field_0; // offset 0
        int field_8;  // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        char _unknown_20[4];
        bool field_24; // offset 24
        char _unknown_25[47];
    };

    // 0x100147480, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // MidiRequest::MidiRequest(jagex3::Js5*, int, int, int, bool): jumps straight to the base-object constructor

    // 0x100147490, 192 bytes, base-object constructor, inline, placed by class name and debug map
    // MidiRequest::MidiRequest(jagex3::Js5*, int, int, int, bool)
    void MidiRequest::MidiRequest(Js5* param_1, int param_2, int param_3, int param_4, bool param_5) {
        field_0 = (Js5*)0;
        field_8 = -1;
        field_12 = -1;
        *(undefined8*)&field_16 = 0;
        *(undefined8*)&field_21 = 0;
        new (&field_32, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_64, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        Init(this, param_1, param_2, param_3, param_4, param_5);
    }

    // 0x100147550, 32 bytes, inline, placed by class name and debug map
    // MidiRequest::Init(jagex3::Js5*, int, int, int, bool)
    void MidiRequest::Init(Js5* param_1, int param_2, int param_3, int param_4, bool param_5) {
        field_0 = param_1;
        field_8 = param_2;
        field_12 = param_3;
        field_16 = param_4;
        field_24 = param_5;
    }

    // 0x100147610, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MidiRequest::~MidiRequest(): jumps straight to the base-object destructor

    // 0x100147620, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // MidiRequest::~MidiRequest()
    void MidiRequest::~MidiRequest() {
        (&field_64)->~shared_ptr();
        (&field_48)->~shared_ptr();
        (&field_32)->~shared_ptr();
    }

    // 0x100156620, 16 bytes, complete-object constructor, inline, placed by class name
    // MidiRequest::MidiRequest(jagex3::Js5*, char const*, char const*, int, bool): jumps straight to the base-object constructor

    // 0x100156630, 240 bytes, base-object constructor, inline, placed by class name
    // MidiRequest::MidiRequest(jagex3::Js5*, char const*, char const*, int, bool)
    void MidiRequest::MidiRequest(Js5* param_1, char* param_2, char* param_3, int param_4, bool param_5) {
        int iVar1;
        int iVar2;

        field_0 = (Js5*)0;
        field_8 = -1;
        field_12 = -1;
        *(undefined8*)&field_16 = 0;
        *(undefined8*)&field_21 = 0;
        new (&field_32, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_64, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        iVar1 = param_1->GetGroupId(param_2);
        iVar2 = param_1->GetFileId(iVar1, param_3);
        Init(this, param_1, iVar1, iVar2, param_4, param_5);
    }

} // namespace jag::oldscape::midi2

namespace jag::fixedfunction {
    // 0x100147c60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::__7,
                                                                void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __7* param_1) {
        *(undefined8*)this = 0;
        *(undefined4*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(
            (hal::Haptics::Preset)->Vibrate()::$_7&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(
            (hal::Haptics::Preset)->Vibrate()::$_7&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(code**)(this + 152) = function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(
            (hal::Haptics::Preset)->Vibrate()::$_7&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100147ca0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100147cb0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
   void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined4*)param_2 = *(undefined4*)param_1;
    }

    // 0x100147cc0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(void* param_1, BaseApp* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100147cd0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
   void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* param_1, BaseApp * param_2) {
        (hal::Haptics::Preset)->Vibrate()::$_7::operator()(param_1, param_2);
    }

    // 0x100147d90, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x100147570, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiRequest>::ref_counter_shared(unsigned long, oldscape::midi2::MidiRequest*): jumps straight to the base-object constructor

    // 0x100147580, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiRequest>::ref_counter_shared(unsigned long, oldscape::midi2::MidiRequest*)
    void ref_counter_shared<oldscape::midi2::MidiRequest>::ref_counter_shared(ulong param_1, MidiRequest* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7688 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MidiRequest**)(this + 24) = param_2;
    }

    // 0x1001475c0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::midi2::MidiRequest>::DeleteData()
    void ref_counter_shared<oldscape::midi2::MidiRequest>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~MidiRequest();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 80;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
