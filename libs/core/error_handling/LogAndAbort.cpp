// libs/core/error_handling/LogAndAbort.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.core

namespace jag {
    // 0x100cc5c30, 288 bytes, placed by debug map only (low confidence)
    // LogAndAbort(char const*, int, char const*, ...)
    void LogAndAbort(char* param_1, int param_2, char* param_3, ...) {
        char in_AL;
        function* this;
        undefined8 uVar2;
        char* pcVar3;
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
        fixed_string<char, 2048, true, eastl::allocator> local_920[2088];
        undefined1 local_f8[24];
        undefined8 local_e0;
        undefined8 local_d8;
        undefined8 local_d0;
        undefined8 local_c8;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined8 local_48;
        undefined1* local_40;
        undefined1* local_38;

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
        local_38 = local_f8;
        local_40 = &uStack0000000000000008;
        local_48 = 206158430232;
        local_e0 = in_RCX;
        local_d8 = in_R8;
        local_d0 = in_R9;
        eastl::fixed_string<char, 2048, true, eastl::allocator>::fixed_string(local_920);
        local_920->sprintf_va_list(param_3, (__va_list_tag*)&local_48);
        this = (function*)logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(this, 0, 2, param_1, param_2, &DAT_100e377c0, uVar2);
        if (std::function::operator_cast_to_bool(this)) {
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            std::function<void(char const*)>::operator()((function<void(char const*)>*)&g_logAndAbortHandler, pcVar3);
        }
        /* WARNING: Subroutine does not return */
        _abort();
    }

} // namespace jag
