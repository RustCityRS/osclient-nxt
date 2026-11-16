// libs/core/error_handling/LogAndAbort.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.core

namespace jag {
    // 0x100cc5c30
    void LogAndAbort(const char* str1, int arg2, const char* str2, ...) {
        char in_AL;
        Logger* logger;
        char* str;
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
        uint8_t local_f8[24];
        uint64_t local_c8;
        uint64_t local_b8;
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t local_58;

        if (in_AL != '\0') {
            local_c8 = in_XMM0_Qa;
            local_b8 = in_XMM1_Qa;
            local_a8 = in_XMM2_Qa;
            local_98 = in_XMM3_Qa;
            local_88 = in_XMM4_Qa;
            local_78 = in_XMM5_Qa;
            local_68 = in_XMM6_Qa;
            local_58 = in_XMM7_Qa;
        }
        uint8_t* local_38 = local_f8;
        uint8_t* local_40 = &uStack0000000000000008;
        uint64_t local_48 = 206158430232;
        uint64_t local_e0 = in_RCX;
        uint64_t local_d8 = in_R8;
        uint64_t local_d0 = in_R9;
        fixed_string<char, 2048> local_920;
        local_920.sprintf_va_list(str2, &local_48);
        logger = logger::default_logger();
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger->Log(false, 2, str1, arg2, "%s", uVar2);
        if (logger->operator_cast_to_bool() != '\0') {
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::function<void(char const*)>::operator()((function<void(char const*)>*)&g_logAndAbortHandler, str);
        }
        _abort();
    }

} // namespace jag
