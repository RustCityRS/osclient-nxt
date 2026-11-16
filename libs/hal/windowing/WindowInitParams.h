// libs/hal/windowing/WindowInitParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class WindowInitParams {
    public:
        WindowInitParams* operator=(const WindowInitParams& windowInitParams);
        WindowInitParams(const WindowInitParams& windowInitParams);
        ~WindowInitParams();
        WindowInitParams();

    private:
        uint64_t field_0;
        uint16_t field_8;
        uint8_t _unknown_10[38];
        uint32_t field_48;
        uint32_t field_52;
        uint32_t field_56;
        uint32_t field_60;
        uint64_t field_64;
        uint8_t _unknown_72[8];
    };

    // 0x10012d440
    WindowInitParams* WindowInitParams::operator=(const WindowInitParams& windowInitParams) {
        field_8 = windowInitParams.field_8;
        field_0 = windowInitParams.field_0;
        field_16 = &windowInitParams.field_16;
        uint32_t uVar1 = windowInitParams.field_52;
        uint32_t uVar2 = windowInitParams.field_56;
        uint32_t uVar3 = windowInitParams.field_60;
        field_48 = windowInitParams.field_48;
        field_52 = uVar1;
        field_56 = uVar2;
        field_60 = uVar3;
        field_64 = windowInitParams.field_64;
        field_72 = windowInitParams.field_72;
        return this;
    }

    // 0x1003a6d30
    WindowInitParams::WindowInitParams(const WindowInitParams& windowInitParams)
        : field_8(windowInitParams.field_8), field_0(windowInitParams.field_0), field_16(windowInitParams.field_16),
          field_64(windowInitParams.field_64) {
        uint32_t uVar1 = windowInitParams.field_52;
        uint32_t uVar2 = windowInitParams.field_56;
        uint32_t uVar3 = windowInitParams.field_60;
        field_48 = windowInitParams.field_48;
        field_52 = uVar1;
        field_56 = uVar2;
        field_60 = uVar3;
        new (&field_72) PacketT(&windowInitParams.field_72);
    }

    // 0x1003a72f0
    WindowInitParams::~WindowInitParams() {
        field_72.~VBOMapper();
        field_16.~basic_string();
    }

    // 0x100b06450
    WindowInitParams::WindowInitParams()
        : field_8(0), field_0(0), field_48(4294967295), field_52(4294967295), field_56(4294967295),
          field_60(4294967295), field_64(429496729760) {}

} // namespace jag
