// libs/oldscape/jagex3/midi2/midirequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::fixedfunction {
    // 0x100147c60
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&& arg1) {
        *(uint64_t*)this = 0;
        *(Preset*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(
            (hal::Haptics::Preset)->Vibrate()::$_7&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(
            (hal::Haptics::Preset)->Vibrate()::$_7&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(void (**)(...))(this + 152) = function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7, void>(
            (hal::Haptics::Preset)->Vibrate()::$_7&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100147ca0
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100147cb0
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint32_t*)arg1 = *(uint32_t*)this;
    }

    // 0x100147cc0
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* baseApp) {
        operator()(this, arg1, baseApp);
    }

    // 0x100147cd0
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * baseApp) const {
        (hal::Haptics::Preset)->Vibrate()::$_7::operator()((__7*)this, arg1);
    }

    // 0x100147d90
    void
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7,
                                                                void>(
        oldscape::Client::Vibrate(hal::Haptics::Preset)::$_7&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::oldscape::midi2 {
    class MidiRequest {
    public:
        MidiRequest(jagex3::Js5* js5, int arg2, int arg3, int arg4, bool arg5);
        void Init(jagex3::Js5* js5, int arg2, int arg3, int arg4, bool arg5);
        ~MidiRequest();
        MidiRequest(jagex3::Js5* js5, const char* str1, const char* str2, int arg4, bool arg5);

    private:
        Js5* field_0;
        int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[4];
        bool field_24;
        uint8_t _unknown_25[47];
    };

    // 0x100147490
    MidiRequest::MidiRequest(jagex3::Js5* js5, int arg2, int arg3, int arg4, bool arg5)
        : field_0(nullptr), field_8(-1), field_12(-1) {
        *(uint64_t*)&field_16 = 0;
        *(uint64_t*)&field_21 = 0;
        new (&field_32) shared_ptr();
        new (&field_48) shared_ptr();
        new (&field_64) shared_ptr();
        Init(js5, arg2, arg3, arg4, arg5);
    }

    // 0x100147550
    void MidiRequest::Init(jagex3::Js5* js5, int arg2, int arg3, int arg4, bool arg5) {
        field_0 = js5;
        field_8 = arg2;
        field_12 = arg3;
        field_16 = arg4;
        field_24 = arg5;
    }

    // 0x100147620
    MidiRequest::~MidiRequest() {
        field_64.~shared_ptr();
        field_48.~shared_ptr();
        field_32.~shared_ptr();
    }

    // 0x100156630
    MidiRequest::MidiRequest(jagex3::Js5* js5, const char* str1, const char* str2, int arg4, bool arg5)
        : field_0(nullptr), field_8(-1), field_12(-1) {
        *(uint64_t*)&field_16 = 0;
        *(uint64_t*)&field_21 = 0;
        new (&field_32) shared_ptr();
        new (&field_48) shared_ptr();
        new (&field_64) shared_ptr();
        int arg1 = js5->GetGroupId(str1);
        int arg3 = js5->GetFileId(arg1, str2);
        Init(js5, arg1, arg3, arg4, arg5);
    }

} // namespace jag::oldscape::midi2

namespace jag {
    // 0x100147580
    ref_counter_shared<oldscape::midi2::MidiRequest>::ref_counter_shared(unsigned long arg1,
                                                                         oldscape::midi2::MidiRequest* midiRequest)
        : ref_counter_base() {}

    // 0x1001475c0
    void ref_counter_shared<oldscape::midi2::MidiRequest>::DeleteData() {
        ref_counter_shared<oldscape::midi2::MidiRequest> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((MidiRequest*)((long)&(this[3]._vptr)->_dtor + lVar2))->~MidiRequest();
                    prVar1 = (ref_counter_shared<oldscape::midi2::MidiRequest> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 80;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
