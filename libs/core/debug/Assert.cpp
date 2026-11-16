// libs/core/debug/Assert.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.core

#include "Assert.h"

namespace jag {
    // 0x100cc55b0, 32 bytes, base-object constructor, placed by debug map only (low confidence)
    // ScopedAssertionPresenter::ScopedAssertionPresenter(IAssertPresenter&)
    void ScopedAssertionPresenter::ScopedAssertionPresenter(IAssertPresenter* param_1) {
        field_0 = g_CurrentAssertPresenter;
        g_CurrentAssertPresenter = (undefined*)param_1;
    }

    // 0x100cc55d0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // ScopedAssertionPresenter::ScopedAssertionPresenter(IAssertPresenter&): jumps straight to the base-object constructor

    // 0x100cc55e0, 16 bytes, base-object destructor, placed by debug map only (low confidence)
    // ScopedAssertionPresenter::~ScopedAssertionPresenter()
    void ScopedAssertionPresenter::~ScopedAssertionPresenter() {
        g_CurrentAssertPresenter = field_0;
    }

    // 0x100cc55f0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // ScopedAssertionPresenter::~ScopedAssertionPresenter(): jumps straight to the base-object destructor

    // 0x100cc5600, 176 bytes, placed by debug map only (low confidence)
    // LogAssert(char const*, char const*, int, char const*, ...)
    void LogAssert(char* param_1, char* param_2, int param_3, char* param_4, ...) {
        char in_AL;
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
        undefined1 local_d8[32];
        undefined8 local_b8;
        undefined8 local_b0;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined8 local_48;
        undefined8 local_38;
        undefined8 local_28;
        undefined1* local_20;
        undefined1* local_18;
        long local_10;

        if (in_AL != '\0') {
            local_a8 = in_XMM0_Qa;
            local_98 = in_XMM1_Qa;
            local_88 = in_XMM2_Qa;
            local_78 = in_XMM3_Qa;
            local_68 = in_XMM4_Qa;
            local_58 = in_XMM5_Qa;
            local_48 = in_XMM6_Qa;
            local_38 = in_XMM7_Qa;
        }
        local_10 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_18 = local_d8;
        local_20 = &uStack0000000000000008;
        local_28 = 206158430240;
        local_b8 = in_R8;
        local_b0 = in_R9;
        (*(code*)**(undefined8**)g_CurrentAssertPresenter)(g_CurrentAssertPresenter, param_1, param_2, param_3, param_4,
                                                           &local_28);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_10) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cc56b0, 192 bytes, placed by debug map only (low confidence)
    // LogAssertAlways(char const*, int, char const*, ...)
    void LogAssertAlways(char* param_1, int param_2, char* param_3, ...) {
        char in_AL;
        undefined8 in_RCX;
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
        undefined1 local_d8[24];
        undefined8 local_c0;
        undefined8 local_b8;
        undefined8 local_b0;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined8 local_48;
        undefined8 local_38;
        undefined8 local_28;
        undefined1* local_20;
        undefined1* local_18;
        long local_10;

        if (in_AL != '\0') {
            local_a8 = in_XMM0_Qa;
            local_98 = in_XMM1_Qa;
            local_88 = in_XMM2_Qa;
            local_78 = in_XMM3_Qa;
            local_68 = in_XMM4_Qa;
            local_58 = in_XMM5_Qa;
            local_48 = in_XMM6_Qa;
            local_38 = in_XMM7_Qa;
        }
        local_10 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_18 = local_d8;
        local_20 = &uStack0000000000000008;
        local_28 = 206158430232;
        local_c0 = in_RCX;
        local_b8 = in_R8;
        local_b0 = in_R9;
        (*(code*)**(undefined8**)g_CurrentAssertPresenter)(g_CurrentAssertPresenter, 0, param_1, param_2, param_3,
                                                           &local_28);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_10) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cc5770, 192 bytes, placed by debug map only (low confidence)
    // LogFatalError(char const*, char const*, int, int, char const*, ...)
    void LogFatalError(char* param_1, char* param_2, int param_3, int param_4, char* param_5, ...) {
        char in_AL;
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
        undefined1 local_d8[40];
        undefined8 local_b0;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined8 local_48;
        undefined8 local_38;
        undefined8 local_28;
        undefined1* local_20;
        undefined1* local_18;
        long local_10;

        if (in_AL != '\0') {
            local_a8 = in_XMM0_Qa;
            local_98 = in_XMM1_Qa;
            local_88 = in_XMM2_Qa;
            local_78 = in_XMM3_Qa;
            local_68 = in_XMM4_Qa;
            local_58 = in_XMM5_Qa;
            local_48 = in_XMM6_Qa;
            local_38 = in_XMM7_Qa;
        }
        local_10 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_18 = local_d8;
        local_20 = &uStack0000000000000008;
        local_28 = 206158430248;
        local_b0 = in_R9;
        (**(code**)(*(long*)g_CurrentAssertPresenter + 8))(g_CurrentAssertPresenter, param_1, param_2, param_3, param_4,
                                                           param_5, &local_28);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_10) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cc5830, 192 bytes, placed by debug map only (low confidence)
    // LogFatalError(char const*, int, int, char const*, ...)
    void LogFatalError(char* param_1, int param_2, int param_3, char* param_4, ...) {
        char in_AL;
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
        undefined1 local_d8[32];
        undefined8 local_b8;
        undefined8 local_b0;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined8 local_48;
        undefined8 local_38;
        undefined8 local_28;
        undefined1* local_20;
        undefined1* local_18;
        long local_10;

        if (in_AL != '\0') {
            local_a8 = in_XMM0_Qa;
            local_98 = in_XMM1_Qa;
            local_88 = in_XMM2_Qa;
            local_78 = in_XMM3_Qa;
            local_68 = in_XMM4_Qa;
            local_58 = in_XMM5_Qa;
            local_48 = in_XMM6_Qa;
            local_38 = in_XMM7_Qa;
        }
        local_10 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_18 = local_d8;
        local_20 = &uStack0000000000000008;
        local_28 = 206158430240;
        local_b8 = in_R8;
        local_b0 = in_R9;
        (**(code**)(*(long*)g_CurrentAssertPresenter + 8))(g_CurrentAssertPresenter, 0, param_1, param_2, param_3,
                                                           param_4, &local_28);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_10) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cc58f0, 176 bytes, placed by debug map only (low confidence)
    // ThrowAssert(char const*, char const*, int, char const*, ...)
    void ThrowAssert(char* param_1, char* param_2, int param_3, char* param_4, ...) {
        char in_AL;
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
        undefined1 local_d8[32];
        undefined8 local_b8;
        undefined8 local_b0;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined8 local_48;
        undefined8 local_38;
        undefined8 local_28;
        undefined1* local_20;
        undefined1* local_18;
        long local_10;

        if (in_AL != '\0') {
            local_a8 = in_XMM0_Qa;
            local_98 = in_XMM1_Qa;
            local_88 = in_XMM2_Qa;
            local_78 = in_XMM3_Qa;
            local_68 = in_XMM4_Qa;
            local_58 = in_XMM5_Qa;
            local_48 = in_XMM6_Qa;
            local_38 = in_XMM7_Qa;
        }
        local_10 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_18 = local_d8;
        local_20 = &uStack0000000000000008;
        local_28 = 206158430240;
        local_b8 = in_R8;
        local_b0 = in_R9;
        (**(code**)(*(long*)g_CurrentAssertPresenter + 16))(g_CurrentAssertPresenter, param_1, param_2, param_3,
                                                            param_4, &local_28);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_10) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cc59a0, 144 bytes, placed by debug map only (low confidence)
    // DefaultAssertPresenter::PresentAssert(char const*, char const*, int, char const*, __va_list_tag*)
    void DefaultAssertPresenter::PresentAssert(char* param_1, char* param_2, int param_3, char* param_4,
                                               __va_list_tag* param_5) {
        undefined* puVar1;

        puVar1 = PTR____stderrp_100ee9da0;
        if (param_4 != (char*)0) {
            _vfprintf(*(FILE**)PTR____stderrp_100ee9da0, param_4, param_5);
            _fputc(10, *(FILE**)puVar1);
        }
        if (param_1 == (char*)0) {
            _fprintf(*(FILE**)PTR____stderrp_100ee9da0, "%s(%d)\n", param_2, param_3);
        } else {
            _fprintf(*(FILE**)PTR____stderrp_100ee9da0, "%s(%d): %s\n", param_2, param_3, param_1);
        }
    }

    // 0x100cc5a30, 176 bytes, placed by debug map only (low confidence)
    // DefaultAssertPresenter::PresentFatalError(char const*, char const*, int, int, char const*, __va_list_tag*)
    void DefaultAssertPresenter::PresentFatalError(char* param_1, char* param_2, int param_3, int param_4,
                                                   char* param_5, __va_list_tag* param_6) {
        undefined* puVar1;

        puVar1 = PTR____stderrp_100ee9da0;
        _fwrite("** FATAL ERROR **", 17, 1, *(FILE**)PTR____stderrp_100ee9da0);
        if (param_5 != (char*)0) {
            _vfprintf(*(FILE**)puVar1, param_5, param_6);
            _fputc(10, *(FILE**)puVar1);
        }
        if (param_1 == (char*)0) {
            _fprintf(*(FILE**)puVar1, "%s(%d)\n", param_2, param_3);
        } else {
            _fprintf(*(FILE**)puVar1, "%s(%d): %s\n", param_2, param_3, param_1);
        }
    }

    // 0x100cc5ae0, 16 bytes, placed by debug map only (low confidence)
    // DefaultAssertPresenter::ThrowAssert(char const*, char const*, int, char const*, __va_list_tag*)
    void DefaultAssertPresenter::ThrowAssert(char* param_1, char* param_2, int param_3, char* param_4,
                                             __va_list_tag* param_5) {
        (*(code*)*field_0)();
    }

} // namespace jag
