// libs/core/error_handling/ErrorCapture.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    class ErrorCapture {
    public:
        GetErrorMessage() const;
        ~ErrorCapture();
        GetCallstack() const;
        void Raise();
        bool IsRaised() const;
        void Reset();
        void Raise(ExceptionType);
        void Raise(ExceptionType, char const*, ...);
        ErrorCapture(bool);
        void Raise(char const*, ...);

        // data members, from how the methods use this: 48 bytes
        bool field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        char _unknown_8[40];
    };

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    ErrorCapture::GetErrorMessage() const;

    // 0x100059090: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    ErrorCapture::~ErrorCapture();

    // 0x1000590a0: the linker folded this into oldscape::FolderSelection::FolderSelectionRequest::~FolderSelectionRequest(), which has identical code
    ErrorCapture::~ErrorCapture();

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    ErrorCapture::GetCallstack() const;

    // 0x10015e5f0, 16 bytes, inline, placed by class name and debug map
    // ErrorCapture::Raise()
    void ErrorCapture::Raise() {
        Raise(this, 1);
    }

    // 0x100190b00, 16 bytes, inline, placed by class name
    // ErrorCapture::IsRaised() const
    bool ErrorCapture::IsRaised() {
        return field_4 != 0;
    }

    // 0x100190bb0, 48 bytes, inline, placed by class name
    // ErrorCapture::Reset()
    void ErrorCapture::Reset() {
        field_4 = 0;
        eastl::string::clear();
        (&field_40)->Reset();
    }

    // 0x100190be0, 48 bytes, inline, placed by class name
    // ErrorCapture::Raise(ExceptionType)
    void ErrorCapture::Raise(undefined4 param_2) {
        if (field_0 != false) {
            (&field_40, 0)->Capture();
        }
        field_4 = param_2;
    }

    // 0x100191110, 208 bytes, inline, placed by class name
    // ErrorCapture::Raise(ExceptionType, char const*, ...)
    void ErrorCapture::Raise(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                             undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
                             char* param_9, undefined4 param_10, char* param_11, undefined8 param_12,
                             undefined8 param_13, undefined8 param_14, undefined1 param_15, ...) {
        char in_AL;
        undefined1 local_e8[24];
        undefined8 local_d0;
        undefined8 local_c8;
        undefined8 local_c0;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined8 local_48;
        undefined8 local_38;
        undefined1* local_30;
        undefined1* local_28;
        long local_20;

        if (in_AL != '\0') {
            local_b8 = param_1;
            local_a8 = param_2;
            local_98 = param_3;
            local_88 = param_4;
            local_78 = param_5;
            local_68 = param_6;
            local_58 = param_7;
            local_48 = param_8;
        }
        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_d0 = param_12;
        local_c8 = param_13;
        local_c0 = param_14;
        if (*param_9 != '\0') {
            local_28 = local_e8;
            local_30 = &param_15;
            local_38 = 206158430232;
            ((param_9 + 8))->append_sprintf_va_list(param_11, (__va_list_tag*)&local_38);
            ((param_9 + 40))->Capture(0);
        }
        *(undefined4*)(param_9 + 4) = param_10;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001a2bc0, 16 bytes, complete-object constructor, inline, placed by class name
    // ErrorCapture::ErrorCapture(bool): jumps straight to the base-object constructor

    // 0x1001a3000, 48 bytes, base-object constructor, inline, placed by class name
    // ErrorCapture::ErrorCapture(bool)
    void ErrorCapture::ErrorCapture(bool param_1) {
        field_0 = param_1;
        field_4 = 0;
        new (&field_8) eastl::string();
        new (&field_40) callstack::Callstack();
    }

    // 0x100206910, 208 bytes, inline, placed by class name
    // ErrorCapture::Raise(char const*, ...)
    void ErrorCapture::Raise(char* param_1, ...) {
        char in_AL;
        undefined8 in_RCX;
        undefined8 in_RDX;
        undefined8 in_R8;
        undefined8 in_R9;
        undefined8 in_XMM0_Qa;
        undefined8 in_XMM1_Qa;
        undefined8 in_XMM2_Qa;
        undefined8 in_XMM3_Qa;
        undefined8 in_XMM4_Qa;
        undefined8 in_XMM5_Qa;
        undefined8 in_XMM6_Qa;
        undefined8 in_XMM7_Qa;
        undefined1 uStack0000000000000008;
        undefined1 local_e8[16];
        undefined8 local_d8;
        undefined8 local_d0;
        undefined8 local_c8;
        undefined8 local_c0;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined8 local_48;
        undefined8 local_38;
        undefined1* local_30;
        undefined1* local_28;
        long local_18;

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
        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_d8 = in_RDX;
        local_d0 = in_RCX;
        local_c8 = in_R8;
        local_c0 = in_R9;
        if (field_0 != false) {
            local_28 = local_e8;
            local_30 = &uStack0000000000000008;
            local_38 = 206158430224;
            (&field_8, param_1, (__va_list_tag*)&local_38)->append_sprintf_va_list();
            (&field_40, 0)->Capture();
        }
        field_4 = 1;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag
