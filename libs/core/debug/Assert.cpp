// libs/core/debug/Assert.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.core

#include "Assert.h"

namespace jag {
    // 0x100cc55b0
    ScopedAssertionPresenter::ScopedAssertionPresenter(IAssertPresenter& iAssertPresenter)
        : field_0(g_CurrentAssertPresenter) {
        g_CurrentAssertPresenter = (uint8_t*)iAssertPresenter;
    }

    // 0x100cc55e0
    ScopedAssertionPresenter::~ScopedAssertionPresenter() {
        g_CurrentAssertPresenter = field_0;
    }

    // 0x100cc5600
    void LogAssert(const char* str1, const char* str2, int arg3, const char* str3, ...) {
        char in_AL;
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
        uint8_t local_d8[32];
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t local_58;
        uint64_t local_48;
        uint64_t local_38;

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
        uint8_t* local_18 = local_d8;
        uint8_t* local_20 = &uStack0000000000000008;
        uint64_t local_28 = 206158430240;
        uint64_t local_b8 = in_R8;
        uint64_t local_b0 = in_R9;
        (*(void (*)(...)) * *(uint64_t**)g_CurrentAssertPresenter)(g_CurrentAssertPresenter, str1, str2, arg3, str3,
                                                                   &local_28);
    }

    // 0x100cc56b0
    void LogAssertAlways(const char* str1, int arg2, const char* str2, ...) {
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
        uint8_t local_d8[24];
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t local_58;
        uint64_t local_48;
        uint64_t local_38;

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
        uint8_t* local_18 = local_d8;
        uint8_t* local_20 = &uStack0000000000000008;
        uint64_t local_28 = 206158430232;
        uint64_t local_c0 = in_RCX;
        uint64_t local_b8 = in_R8;
        uint64_t local_b0 = in_R9;
        (*(void (*)(...)) * *(uint64_t**)g_CurrentAssertPresenter)(g_CurrentAssertPresenter, 0, str1, arg2, str2,
                                                                   &local_28);
    }

    // 0x100cc5770
    void LogFatalError(const char* str1, const char* str2, int arg3, int arg4, const char* str3, ...) {
        char in_AL;
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
        uint8_t local_d8[40];
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t local_58;
        uint64_t local_48;
        uint64_t local_38;

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
        uint8_t* local_18 = local_d8;
        uint8_t* local_20 = &uStack0000000000000008;
        uint64_t local_28 = 206158430248;
        uint64_t local_b0 = in_R9;
        (**(void (**)(...))(*(long*)g_CurrentAssertPresenter + 8))(g_CurrentAssertPresenter, str1, str2, arg3, arg4,
                                                                   str3, &local_28);
    }

    // 0x100cc5830
    void LogFatalError(const char* str1, int arg2, int arg3, const char* str2, ...) {
        char in_AL;
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
        uint8_t local_d8[32];
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t local_58;
        uint64_t local_48;
        uint64_t local_38;

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
        uint8_t* local_18 = local_d8;
        uint8_t* local_20 = &uStack0000000000000008;
        uint64_t local_28 = 206158430240;
        uint64_t local_b8 = in_R8;
        uint64_t local_b0 = in_R9;
        (**(void (**)(...))(*(long*)g_CurrentAssertPresenter + 8))(g_CurrentAssertPresenter, 0, str1, arg2, arg3, str2,
                                                                   &local_28);
    }

    // 0x100cc58f0
    void ThrowAssert(const char* str1, const char* str2, int arg3, const char* str3, ...) {
        char in_AL;
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
        uint8_t local_d8[32];
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t local_58;
        uint64_t local_48;
        uint64_t local_38;

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
        uint8_t* local_18 = local_d8;
        uint8_t* local_20 = &uStack0000000000000008;
        uint64_t local_28 = 206158430240;
        uint64_t local_b8 = in_R8;
        uint64_t local_b0 = in_R9;
        (**(void (**)(...))(*(long*)g_CurrentAssertPresenter + 16))(g_CurrentAssertPresenter, str1, str2, arg3, str3,
                                                                    &local_28);
    }

    // 0x100cc59a0
    void DefaultAssertPresenter::PresentAssert(const char* str1, const char* str2, int arg3, const char* str3,
                                               __va_list_tag* va_list_tag) {
        uint8_t* puVar1 = PTR____stderrp_100ee9da0;
        if (str3 != nullptr) {
            _vfprintf(*(FILE**)PTR____stderrp_100ee9da0, str3, va_list_tag);
            _fputc(10, *(FILE**)puVar1);
        }
        if (str1 == nullptr) {
            _fprintf(*(FILE**)PTR____stderrp_100ee9da0, "%s(%d)\n", str2, arg3);
        } else {
            _fprintf(*(FILE**)PTR____stderrp_100ee9da0, "%s(%d): %s\n", str2, arg3, str1);
        }
    }

    // 0x100cc5a30
    void DefaultAssertPresenter::PresentFatalError(const char* str1, const char* str2, int arg3, int arg4,
                                                   const char* str3, __va_list_tag* va_list_tag) {
        uint8_t* puVar1 = PTR____stderrp_100ee9da0;
        _fwrite("** FATAL ERROR **", 17, 1, *(FILE**)PTR____stderrp_100ee9da0);
        if (str3 != nullptr) {
            _vfprintf(*(FILE**)puVar1, str3, va_list_tag);
            _fputc(10, *(FILE**)puVar1);
        }
        if (str1 == nullptr) {
            _fprintf(*(FILE**)puVar1, "%s(%d)\n", str2, arg3);
        } else {
            _fprintf(*(FILE**)puVar1, "%s(%d): %s\n", str2, arg3, str1);
        }
    }

    // 0x100cc5ae0
    void DefaultAssertPresenter::ThrowAssert(const char* str1, const char* str2, int arg3, const char* str3,
                                             __va_list_tag* va_list_tag) {
        uint32_t in_register_0000000c;

        PresentAssert(str1, (int)str2, (char*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3),
                      (__va_list_tag*)str3);
    }

} // namespace jag
