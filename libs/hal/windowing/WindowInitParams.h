// libs/hal/windowing/WindowInitParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class WindowInitParams {
    public:
        WindowInitParams* operator=(WindowInitParams const&);
        WindowInitParams(WindowInitParams const&);
        ~WindowInitParams();
        WindowInitParams();

        // data members, from how the methods use this: 80 bytes
        undefined8 field_0; // offset 0
        undefined2 field_8; // offset 8
        char _unknown_10[38];
        undefined4 field_48; // offset 48
        undefined4 field_52; // offset 52
        undefined4 field_56; // offset 56
        undefined4 field_60; // offset 60
        undefined8 field_64; // offset 64
        char _unknown_72[8];
    };

    // 0x10012d440, 96 bytes, inline, placed by class name and debug map
    // WindowInitParams::operator=(WindowInitParams const&)
    /* WindowInitParams::TEMPNAMEPLACEHOLDERVALUE(WindowInitParams const&) */

    WindowInitParams* WindowInitParams::operator=(WindowInitParams* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;

        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        eastl::string::operator=((eastl::string*)&field_16, (basic_string*)&param_1->field_16);
        uVar1 = param_1->field_52;
        uVar2 = param_1->field_56;
        uVar3 = param_1->field_60;
        field_48 = param_1->field_48;
        field_52 = uVar1;
        field_56 = uVar2;
        field_60 = uVar3;
        field_64 = param_1->field_64;
        PacketT<Array<unsigned char, eastl::allocator>>::operator=(
            (PacketT<Array<unsigned char, eastl::allocator>>*)&field_72, (PacketT*)&param_1->field_72);
        return this;
    }

    // 0x1003a4f60, 16 bytes, complete-object constructor, inline, placed by class name
    // WindowInitParams::WindowInitParams(WindowInitParams const&): jumps straight to the base-object constructor

    // 0x1003a5940, 16 bytes, complete-object destructor, inline, placed by class name
    // WindowInitParams::~WindowInitParams(): jumps straight to the base-object destructor

    // 0x1003a6d30, 112 bytes, base-object constructor, inline, placed by class name
    // WindowInitParams::WindowInitParams(WindowInitParams const&)
    void WindowInitParams::WindowInitParams(WindowInitParams* param_1) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;

        field_8 = param_1->field_8;
        field_0 = param_1->field_0;
        new (&field_16, (basic_string*)&param_1->field_16) eastl::string();
        field_64 = param_1->field_64;
        uVar1 = param_1->field_52;
        uVar2 = param_1->field_56;
        uVar3 = param_1->field_60;
        field_48 = param_1->field_48;
        field_52 = uVar1;
        field_56 = uVar2;
        field_60 = uVar3;
        new (&field_72, (PacketT*)&param_1->field_72) PacketT<Array<unsigned char, eastl::allocator>>();
    }

    // 0x1003a72f0, 48 bytes, base-object destructor, inline, placed by class name
    // WindowInitParams::~WindowInitParams()
    void WindowInitParams::~WindowInitParams() {
        (&field_72)->~VBOMapper();
        (&field_16)->~basic_string();
    }

    // 0x100b03920, 16 bytes, complete-object constructor, inline, placed by class name
    // WindowInitParams::WindowInitParams(): jumps straight to the base-object constructor

    // 0x100b06450, 96 bytes, base-object constructor, inline, placed by class name
    // WindowInitParams::WindowInitParams()
    void WindowInitParams::WindowInitParams() {
        field_8 = 0;
        field_0 = 0;
        new (&field_16) eastl::string();
        field_48 = 4294967295;
        field_52 = 4294967295;
        field_56 = 4294967295;
        field_60 = 4294967295;
        field_64 = 429496729760;
        new (&field_72) PacketT<Array<unsigned char, eastl::allocator>>();
    }

} // namespace jag
