// libs/hal/system/callstack/JagException.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.callstack

namespace jag::callstack {
    class JagException {
    public:
        // virtual methods in vtable order
        virtual ~JagException();
        virtual void what() const;
        CoordMapSquare GetCallstackRaw() const;
        void errorMessage() const;
        JagException(const Callstack& callstack, const char* str, ...);
        void BuildErrorString(const char* str1, int arg2, const char* str2, __va_list_tag* va_list_tag);
        JagException(const Callstack& callstack, const char* str1, int arg3, const char* str2, ...);
        JagException(const char* str1, int arg2, const char* str2, ...);

    private:
        uint8_t _unknown_8[64];
        CoordMapSquare m_callstackRaw;
    };

    class ResolvedAddress {
    public:
        ~ResolvedAddress();
        ResolvedAddress* operator=(const ResolvedAddress& resolvedAddress);
        char const* Format<eastl::fixed_string<char, 16384, false>>(eastl::fixed_string<char, 16384, false>& str) const;
        ResolvedAddress(ResolvedAddress&& resolvedAddress);
        ResolvedAddress();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[816];
        int field_824;
        uint8_t _unknown_828[4];
        unsigned long field_832;
    };

    // 0x1004c1940
    void JagException::errorMessage() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100ca9340
    JagException::~JagException() {
        field_40.~basic_string();
        field_8.~basic_string();
    }

    // 0x100cb1090
    ResolvedAddress::ResolvedAddress(ResolvedAddress&& resolvedAddress)
        : field_0(resolvedAddress.field_0), field_8(&resolvedAddress.field_8), field_544(resolvedAddress.field_544) {
        uint32_t uVar2 = *(uint32_t*)&resolvedAddress.field_828;
        unsigned long uVar1 = resolvedAddress.field_832;
        field_824 = resolvedAddress.field_824;
        *(uint32_t*)&field_828 = uVar2;
        field_832 = uVar1;
    }

    // 0x100cb13f0
    ResolvedAddress::ResolvedAddress() : field_0(0), field_832(0) {}

} // namespace jag::callstack

namespace jag::tweak {
    // 0x1004c1940: EditLine::GetText() const has the same machine code as callstack::JagException::errorMessage() const

} // namespace jag::tweak

namespace jag::stringtools {
    // 0x100cb1e30
    uint32_t MakeUnixFilename<2048, true>(eastl::fixed_string<char, 2048>&)::{
        lambda(char) #1
    }
    ::operator()(char arg1) const {
        uint32_t in_register_00000031;

        uint32_t uVar1 = 47;
        if (arg1 != '\\') {
            uVar1 = (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1);
        }
        return uVar1;
    }

} // namespace jag::stringtools

// 0x100cb36a0
void jag::callstack::CrashHandler::m_signalState(void) {
    (*(void (*)(...))m_signalState)();
}
