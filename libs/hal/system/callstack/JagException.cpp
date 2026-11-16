// libs/hal/system/callstack/JagException.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.callstack

#include "JagException.h"

namespace jag::callstack {
    // 0x10011cec0: the linker folded this into oldscape::configdecoder::NPCHeadIconCustomisation::GetIndices() const, which has identical code
    CoordMapSquare JagException::GetCallstackRaw() const;

    // 0x100cae3d0, 320 bytes, base-object constructor, placed by class name and debug map
    // JagException::JagException(Callstack const&, char const*, ...)
    void JagException::JagException(Callstack* param_1, char* param_2, ...) {
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
        undefined1 local_108[24];
        undefined8 local_f0;
        undefined8 local_e8;
        undefined8 local_e0;
        undefined8 local_d8;
        undefined8 local_c8;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

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
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_f0 = in_RCX;
        local_e8 = in_R8;
        local_e0 = in_R9;
        new (this) std::exception();
        field_0 = &PTR__JagException_100f2a188;
        new (&field_8) eastl::string();
        new (&field_40) eastl::string();
        _memcpy(m_callstackRaw, param_1, 808);
        local_48 = local_108;
        local_50 = &uStack0000000000000008;
        local_58 = 206158430232;
        BuildErrorString(this, (char*)0, -1, param_2, (__va_list_tag*)&local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cae530, 224 bytes, placed by class name and debug map
    // JagException::BuildErrorString(char const*, int, char const*, __va_list_tag*)
    void JagException::BuildErrorString(char* param_1, int param_2, char* param_3, __va_list_tag* param_4) {
        undefined8 uVar1;
        fixed_string<char, 2048, true, eastl::allocator> local_860[2088];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 != (char*)0) {
            eastl::fixed_string<char, 2048, true, eastl::allocator>::fixed_string(local_860, param_1);
            stringtools::SanitiseFileName<2048, true, eastl::allocator>((fixed_string*)local_860);
            uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::sprintf(&field_8, "%s(%d): ", uVar1, (ulong)(uint)param_2);
            (&field_8, param_3, param_4)->append_sprintf_va_list();
            /* WARNING: Subroutine does not return */
            local_860->~fixed_string();
        }
        (&field_8, param_3, param_4)->sprintf_va_list();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cae610, 320 bytes, complete-object constructor, placed by class name and debug map
    // JagException::JagException(Callstack const&, char const*, ...)
    void JagException::JagException(Callstack* param_1, char* param_2, ...) {
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
        undefined1 local_108[24];
        undefined8 local_f0;
        undefined8 local_e8;
        undefined8 local_e0;
        undefined8 local_d8;
        undefined8 local_c8;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined8 local_68;
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

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
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_f0 = in_RCX;
        local_e8 = in_R8;
        local_e0 = in_R9;
        new (this) std::exception();
        field_0 = &PTR__JagException_100f2a188;
        new (&field_8) eastl::string();
        new (&field_40) eastl::string();
        _memcpy(m_callstackRaw, param_1, 808);
        local_48 = local_108;
        local_50 = &uStack0000000000000008;
        local_58 = 206158430232;
        BuildErrorString(this, (char*)0, -1, param_2, (__va_list_tag*)&local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cae750, 320 bytes, base-object constructor, placed by class name and debug map
    // JagException::JagException(Callstack const&, char const*, int, char const*, ...)
    void JagException::JagException(Callstack* param_1, char* param_2, int param_3, char* param_4, ...) {
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
        undefined1 local_118[40];
        undefined8 local_f0;
        undefined8 local_e8;
        undefined8 local_d8;
        undefined8 local_c8;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined1* local_60;
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

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
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_f0 = in_R9;
        new (this) std::exception();
        field_0 = &PTR__JagException_100f2a188;
        local_60 = &field_8;
        new (local_60) eastl::string();
        new (&field_40) eastl::string();
        _memcpy(m_callstackRaw, param_1, 808);
        local_48 = local_118;
        local_50 = &uStack0000000000000008;
        local_58 = 206158430248;
        BuildErrorString(this, param_2, param_3, param_4, (__va_list_tag*)&local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cae890, 320 bytes, complete-object constructor, placed by class name and debug map
    // JagException::JagException(Callstack const&, char const*, int, char const*, ...)
    void JagException::JagException(Callstack* param_1, char* param_2, int param_3, char* param_4, ...) {
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
        undefined1 local_118[40];
        undefined8 local_f0;
        undefined8 local_e8;
        undefined8 local_d8;
        undefined8 local_c8;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined1* local_60;
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

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
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_f0 = in_R9;
        new (this) std::exception();
        field_0 = &PTR__JagException_100f2a188;
        local_60 = &field_8;
        new (local_60) eastl::string();
        new (&field_40) eastl::string();
        _memcpy(m_callstackRaw, param_1, 808);
        local_48 = local_118;
        local_50 = &uStack0000000000000008;
        local_58 = 206158430248;
        BuildErrorString(this, param_2, param_3, param_4, (__va_list_tag*)&local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cae9d0, 336 bytes, base-object constructor, placed by class name and debug map
    // JagException::JagException(char const*, int, char const*, ...)
    void JagException::JagException(char* param_1, int param_2, char* param_3, ...) {
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
        undefined1 local_118[32];
        undefined8 local_f8;
        undefined8 local_f0;
        undefined8 local_e8;
        undefined8 local_d8;
        undefined8 local_c8;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined1* local_60;
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

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
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_f8 = in_R8;
        local_f0 = in_R9;
        new (this) std::exception();
        field_0 = &PTR__JagException_100f2a188;
        new (&field_8) eastl::string();
        local_60 = &field_8;
        new (&field_40) eastl::string();
        new (m_callstackRaw) Callstack();
        (m_callstackRaw, 2)->Capture();
        local_48 = local_118;
        local_50 = &uStack0000000000000008;
        local_58 = 206158430240;
        BuildErrorString(this, param_1, param_2, param_3, (__va_list_tag*)&local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100caeb20, 336 bytes, complete-object constructor, placed by class name and debug map
    // JagException::JagException(char const*, int, char const*, ...)
    void JagException::JagException(char* param_1, int param_2, char* param_3, ...) {
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
        undefined1 local_118[32];
        undefined8 local_f8;
        undefined8 local_f0;
        undefined8 local_e8;
        undefined8 local_d8;
        undefined8 local_c8;
        undefined8 local_b8;
        undefined8 local_a8;
        undefined8 local_98;
        undefined8 local_88;
        undefined8 local_78;
        undefined1* local_60;
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

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
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_f8 = in_R8;
        local_f0 = in_R9;
        new (this) std::exception();
        field_0 = &PTR__JagException_100f2a188;
        new (&field_8) eastl::string();
        local_60 = &field_8;
        new (&field_40) eastl::string();
        new (m_callstackRaw) Callstack();
        (m_callstackRaw, 2)->Capture();
        local_48 = local_118;
        local_50 = &uStack0000000000000008;
        local_58 = 206158430240;
        BuildErrorString(this, param_1, param_2, param_3, (__va_list_tag*)&local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100caec70, 272 bytes, placed by class name and debug map
    // JagException::what() const
    void JagException::what() {
        int iVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        CallstackResolved local_4068[2];
        CallstackResolved local_4048[1025];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar2 = m_callstackRaw->GetX();
        if (0 < iVar2) {
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
                '\0') {
                CallstackResolved::CallstackResolved(local_4068, (Callstack*)m_callstackRaw);
                local_4048->Get(local_4068);
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::sprintf(&field_40, "%s\n%s", uVar3, uVar4);
                local_4048->~fixed_string();
                local_4068->~CallstackResolved();
            }
        }
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::callstack

namespace jag::callstack {
    namespace {
        // 0x100caf120, 80 bytes, placed by debug map only (low confidence)
        // unwindCallback(_Unwind_Context*, void*)
        undefined8 unwindCallback(_Unwind_Context* param_1, void* param_2) {
            uintptr_t* puVar1;
            uintptr_t uVar2;
            undefined8 uVar3;

            if (*(ulong*)param_2 < *(ulong*)((long)param_2 + 8)) {
                *(ulong*)param_2 = *(ulong*)param_2 + 1;
                uVar3 = 0;
            } else {
                uVar2 = __Unwind_GetIP(param_1);
                uVar3 = 0;
                if (uVar2 != 0) {
                    puVar1 = *(uintptr_t**)((long)param_2 + 16);
                    if (puVar1 == *(uintptr_t**)((long)param_2 + 24)) {
                        uVar3 = 5;
                    } else {
                        *(uintptr_t**)((long)param_2 + 16) = puVar1 + 1;
                        *puVar1 = uVar2;
                    }
                }
            }
            return uVar3;
        }

    } // namespace

} // namespace jag::callstack
