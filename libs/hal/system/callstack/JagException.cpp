// libs/hal/system/callstack/JagException.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.callstack

#include "JagException.h"

namespace jag::callstack {
    // 0x10011cec0: JagException::GetCallstackRaw() const has the same machine code as oldscape::configdecoder::NPCHeadIconCustomisation::GetIndices() const

    // 0x100cae3d0
    JagException::JagException(const Callstack& callstack, const char* str, ...) {
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
        uint8_t local_108[24];
        uint64_t local_d8;
        uint64_t local_c8;
        uint64_t local_b8;
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;
        uint64_t local_68;

        if (in_AL != '\0') {
            local_d8 = in_XMM0_Qa;
            local_c8 = in_XMM1_Qa;
            local_b8 = in_XMM2_Qa;
            local_a8 = in_XMM3_Qa;
            local_98 = in_XMM4_Qa;
            local_88 = in_XMM5_Qa;
            local_78 = in_XMM6_Qa;
            local_68 = in_XMM7_Qa;
        }
        char* local_f0 = str;
        uint64_t local_e8 = in_R8;
        uint64_t local_e0 = in_R9;
        new (this) std::exception();
        new (&field_8) eastl::string();
        new (&field_40) eastl::string();
        uint8_t* local_48 = local_108;
        uint8_t* local_50 = &uStack0000000000000008;
        uint64_t local_58 = 206158430232;
        BuildErrorString(nullptr, -1, callstack, &local_58);
    }

    // 0x100cae530
    void JagException::BuildErrorString(const char* str1, int arg2, const char* str2, __va_list_tag* va_list_tag) {
        uint64_t uVar1;
        fixed_string<char, 2048> local_860;

        if (str1 != nullptr) {
            local_860 = eastl::fixed_string<char, 2048>(str1);
            stringtools::SanitiseFileName<2048, true>(local_860);
            uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            field_8.sprintf("%s(%d): ", uVar1, (unsigned long)(unsigned int)arg2);
            field_8 = eastl::string::append_sprintf_va_list(str2, va_list_tag);
        }
        field_8.sprintf_va_list(str2, va_list_tag);
    }

    // 0x100cae750
    JagException::JagException(const Callstack& callstack, const char* str1, int arg3, const char* str2, ...) {
        char in_AL;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_118[40];
        uint64_t local_e8;
        uint64_t local_d8;
        uint64_t local_c8;
        uint64_t local_b8;
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;

        if (in_AL != '\0') {
            local_e8 = in_XMM0_Qa;
            local_d8 = in_XMM1_Qa;
            local_c8 = in_XMM2_Qa;
            local_b8 = in_XMM3_Qa;
            local_a8 = in_XMM4_Qa;
            local_98 = in_XMM5_Qa;
            local_88 = in_XMM6_Qa;
            local_78 = in_XMM7_Qa;
        }
        char* local_f0 = str2;
        char* local_68 = _arg3;
        new (this) std::exception();
        uint8_t* local_60 = &field_8;
        new (local_60) eastl::string();
        new (&field_40) eastl::string();
        uint8_t* local_48 = local_118;
        uint8_t* local_50 = &uStack0000000000000008;
        uint64_t local_58 = 206158430248;
        BuildErrorString(callstack, (int)str1, local_68, &local_58);
    }

    // 0x100cae9d0
    JagException::JagException(const char* str1, int arg2, const char* str2, ...) {
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
        uint8_t local_118[32];
        uint64_t local_e8;
        uint64_t local_d8;
        uint64_t local_c8;
        uint64_t local_b8;
        uint64_t local_a8;
        uint64_t local_98;
        uint64_t local_88;
        uint64_t local_78;

        if (in_AL != '\0') {
            local_e8 = in_XMM0_Qa;
            local_d8 = in_XMM1_Qa;
            local_c8 = in_XMM2_Qa;
            local_b8 = in_XMM3_Qa;
            local_a8 = in_XMM4_Qa;
            local_98 = in_XMM5_Qa;
            local_88 = in_XMM6_Qa;
            local_78 = in_XMM7_Qa;
        }
        char* local_f8 = str2;
        uint64_t local_f0 = in_R9;
        new (this) std::exception();
        new (&field_8) eastl::string();
        uint8_t* local_60 = &field_8;
        new (&field_40) eastl::string();
        new (m_callstackRaw) Callstack();
        m_callstackRaw->Capture(2);
        uint8_t* local_48 = local_118;
        uint8_t* local_50 = &uStack0000000000000008;
        uint64_t local_58 = 206158430240;
    }

    // 0x100caec70
    void JagException::what() const {
        uint64_t uVar3;
        uint64_t uVar4;
        CallstackResolved local_4068;
        ReturnValue local_4048;

        int iVar2 = m_callstackRaw->GetX();
        if (0 < iVar2) {
            if (field_40.empty() != '\0') {
                local_4068 = CallstackResolved(*m_callstackRaw);
                local_4048 = local_4068.Get(nullptr);
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                field_40.sprintf("%s\n%s", uVar3, uVar4);
            }
        }
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::callstack

namespace jag::callstack {
    namespace {
        // 0x100caf120
        void unwindCallback(_Unwind_Context* unwind_Context, void* arg2) {
            uintptr_t* puVar1;
            uintptr_t uVar2;
            uint64_t uVar3;

            if (*(unsigned long*)arg2 < *(unsigned long*)((long)arg2 + 8)) {
                *(unsigned long*)arg2 = *(unsigned long*)arg2 + 1;
                uVar3 = 0;
            } else {
                uVar2 = __Unwind_GetIP((_Unwind_Context*)unwind_Context);
                uVar3 = 0;
                if (uVar2 != 0) {
                    puVar1 = *(uintptr_t**)((long)arg2 + 16);
                    if (puVar1 == *(uintptr_t**)((long)arg2 + 24)) {
                        uVar3 = 5;
                    } else {
                        *(uintptr_t**)((long)arg2 + 16) = puVar1 + 1;
                        *puVar1 = uVar2;
                    }
                }
            }
            return uVar3;
        }

    } // namespace

} // namespace jag::callstack
