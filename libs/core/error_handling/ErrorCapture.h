// libs/core/error_handling/ErrorCapture.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    class ErrorCapture {
    public:
        void GetErrorMessage() const;
        ~ErrorCapture();
        void GetCallstack() const;
        void Raise();
        bool IsRaised() const;
        void Reset();
        void Raise(ExceptionType exceptionType);
        void Raise(ExceptionType exceptionType, const char* str, ...);
        ErrorCapture(bool arg1);
        void Raise(const char* str, ...);

    private:
        bool field_0;
        uint8_t _unknown_1[3];
        ExceptionType field_4;
        uint8_t _unknown_8[40];
    };

    // 0x100009d50: ErrorCapture::GetErrorMessage() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x1000590a0: ErrorCapture::~ErrorCapture() has the same machine code as oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

    // 0x100067280: ErrorCapture::GetCallstack() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x10015e5f0
    void ErrorCapture::Raise() {
        Raise(1);
    }

    // 0x100190b00
    bool ErrorCapture::IsRaised() const {
        return field_4 != 0;
    }

    // 0x100190bb0
    void ErrorCapture::Reset() {
        field_4 = 0;
        field_8.clear();
        field_40.Reset();
    }

    // 0x100190be0
    void ErrorCapture::Raise(ExceptionType exceptionType) {
        if (field_0 != false) {
            field_40.Capture(0);
        }
        field_4 = exceptionType;
    }

    // 0x100191110
    void ErrorCapture::Raise(ExceptionType exceptionType, const char* str, ...) {
        char in_AL;
        uint64_t in_RCX;
        uint64_t in_R8;
        uint64_t in_R9;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_e8[24];
        uint64_t local_b8;
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t local_58;
        uint64_t local_48;
        uint64_t local_38;
        uint8_t* local_30;
        uint8_t* local_28;

        if (in_AL != '\0') {
            local_b8 = in_XMM0_Qa;
            local_a8 = in_XMM1_Qa;
            local_98 = in_XMM2_Qa;
            local_88 = in_XMM3_Qa;
            local_78 = in_XMM4_Qa;
            local_68 = in_XMM5_Qa;
            local_58 = in_XMM6_Qa;
            local_48 = in_XMM7_Qa;
        }
        uint64_t local_d0 = in_RCX;
        uint64_t local_c8 = in_R8;
        uint64_t local_c0 = in_R9;
        if (field_0 != false) {
            local_28 = local_e8;
            local_30 = &uStack0000000000000008;
            local_38 = 206158430232;
            field_8 = eastl::string::append_sprintf_va_list(str, &local_38);
            field_40.Capture(0);
        }
        field_4 = exceptionType;
    }

    // 0x1001a3000
    ErrorCapture::ErrorCapture(bool arg1) : field_0(arg1), field_4(0) {}

    // 0x100206910
    void ErrorCapture::Raise(const char* str, ...) {
        char in_AL;
        uint64_t in_RCX;
        uint64_t in_RDX;
        uint64_t in_R8;
        uint64_t in_R9;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_e8[16];
        uint64_t local_b8;
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t local_58;
        uint64_t local_48;
        uint64_t local_38;
        uint8_t* local_30;
        uint8_t* local_28;

        if (in_AL != '\0') {
            local_b8 = in_XMM0_Qa;
            local_a8 = in_XMM1_Qa;
            local_98 = in_XMM2_Qa;
            local_88 = in_XMM3_Qa;
            local_78 = in_XMM4_Qa;
            local_68 = in_XMM5_Qa;
            local_58 = in_XMM6_Qa;
            local_48 = in_XMM7_Qa;
        }
        uint64_t local_d8 = in_RDX;
        uint64_t local_d0 = in_RCX;
        uint64_t local_c8 = in_R8;
        uint64_t local_c0 = in_R9;
        if (field_0 != false) {
            local_28 = local_e8;
            local_30 = &uStack0000000000000008;
            local_38 = 206158430224;
            field_8 = eastl::string::append_sprintf_va_list(str, &local_38);
            field_40.Capture(0);
        }
        field_4 = 1;
    }

} // namespace jag
