// libs/oldscape/jagex3/client/HookReq.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class HookReq {
    public:
        HookReq();
        ~HookReq();
        HookReq(HookReq&&);

        // data members, from how the methods use this: 128 bytes
        char _unknown_0[24];
        undefined1 field_24; // offset 24
        char _unknown_25[23];
        undefined8 field_48; // offset 48
        undefined4 field_56; // offset 56
        char _unknown_60[20];
        undefined8 field_80; // offset 80
        char _unknown_88[32];
        undefined8 field_120; // offset 120
    };

    // 0x100194ee0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HookReq::HookReq(): jumps straight to the base-object constructor

    // 0x100194fe0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HookReq::~HookReq(): jumps straight to the base-object destructor

    // 0x1001a36b0, 160 bytes, base-object constructor, inline, placed by class name
    // HookReq::HookReq()
    void HookReq::HookReq() {
        _func_decltype_nullptr* in_RSI;

        new (this) Array<HookArg, eastl::allocator>();
        field_24 = 0;
        new (&field_32, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_48 = 0;
        field_56 = 0;
        new (&field_64, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_80 = 0;
        new (&field_88) eastl::string();
        field_120 = 326417514496;
    }

    // 0x1001a3860, 64 bytes, base-object destructor, inline, placed by class name
    // HookReq::~HookReq()
    void HookReq::~HookReq() {
        (&field_88)->~basic_string();
        (&field_64)->~shared_ptr();
        (&field_32)->~shared_ptr();
        ~Array();
    }

    // 0x1001b4c70, 16 bytes, complete-object constructor, inline, placed by class name
    // HookReq::HookReq(HookReq&&): jumps straight to the base-object constructor

    // 0x1001b4c80, 144 bytes, base-object constructor, inline, placed by class name
    // HookReq::HookReq(HookReq&&)
    void HookReq::HookReq(HookReq* param_1) {
        new (this) Array<HookArg, eastl::allocator>(param_1);
        field_24 = param_1->field_24;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_32, (shared_ptr*)&param_1->field_32);
        field_56 = param_1->field_56;
        field_48 = param_1->field_48;
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&field_64, (shared_ptr*)&param_1->field_64);
        field_80 = param_1->field_80;
        new (&field_88, (basic_string*)&param_1->field_88) eastl::string();
        field_120 = param_1->field_120;
    }

} // namespace jag::oldscape
