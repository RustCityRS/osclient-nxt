// libs/oldscape/jagex3/client/HookReq.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class HookReq {
    public:
        HookReq();
        ~HookReq();
        HookReq(HookReq&& hookReq);

    private:
        uint8_t _unknown_0[24];
        uint8_t field_24;
        uint8_t _unknown_25[23];
        uint64_t field_48;
        uint32_t field_56;
        uint8_t _unknown_60[20];
        uint64_t field_80;
        uint8_t _unknown_88[32];
        uint64_t field_120;
    };

    // 0x1001a36b0
    HookReq::HookReq() : Array<HookArg>(), field_24(0) {
        new (&field_32) shared_ptr();
        field_48 = 0;
        field_56 = 0;
        new (&field_64) shared_ptr();
        field_80 = 0;
        new (&field_88) eastl::string();
        field_120 = 326417514496;
    }

    // 0x1001a3860
    HookReq::~HookReq() {
        field_88.~basic_string();
        field_64.~shared_ptr();
        field_32.~shared_ptr();
    }

    // 0x1001b4c80
    HookReq::HookReq(HookReq&& hookReq) : Array<HookArg>(hookReq), field_24(hookReq.field_24) {
        field_32.shared_ptr<FileRSevenDebugPresetProvider, void>(hookReq.field_32);
        field_56 = hookReq.field_56;
        field_48 = hookReq.field_48;
        field_64.shared_ptr<FileRSevenDebugPresetProvider, void>(hookReq.field_64);
        field_80 = hookReq.field_80;
        new (&field_88) eastl::string(hookReq.field_88);
        field_120 = hookReq.field_120;
    }

} // namespace jag::oldscape
