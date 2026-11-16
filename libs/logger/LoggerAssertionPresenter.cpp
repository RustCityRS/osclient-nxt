// libs/logger/LoggerAssertionPresenter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.logger

namespace jag::logger {
    class LoggerAssertionPresenter {
    public:
        // virtual methods in vtable order
        virtual void PresentAssert(char const*, char const*, int, char const*, __va_list_tag*);
        virtual void PresentFatalError(char const*, char const*, int, int, char const*, __va_list_tag*);
        virtual void ThrowAssert(char const*, char const*, int, char const*, __va_list_tag*);
        LoggerAssertionPresenter(Logger&);

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        Logger* field_8;     // offset 8
    };

    // 0x100ca81e0, 48 bytes, base-object constructor, placed by class name and debug map
    // LoggerAssertionPresenter::LoggerAssertionPresenter(Logger&)
    void LoggerAssertionPresenter::LoggerAssertionPresenter(Logger* param_1) {
        new (this) IAssertPresenter();
        field_0 = &PTR_PresentAssert_100f2a028;
        field_8 = param_1;
    }

    // 0x100ca8230, 16 bytes, complete-object constructor, placed by class name
    // LoggerAssertionPresenter::LoggerAssertionPresenter(Logger&): jumps straight to the base-object constructor

    // 0x100ca8240, 544 bytes, placed by class name
    // LoggerAssertionPresenter::PresentAssert(char const*, char const*, int, char const*, __va_list_tag*)
    void LoggerAssertionPresenter::PresentAssert(char* param_1, char* param_2, int param_3, char* param_4,
                                                 __va_list_tag* param_5) {
        Logger* pLVar1;
        char* pcVar2;
        char* pcVar3;
        undefined8 uVar4;
        Callstack local_85e0[50];
        CallstackResolved local_82b8[2];
        int local_8294;
        CallstackResolved local_8290[1025];
        basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>
            local_4278[16408];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_8294 = param_3;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
        if (param_1 != (char*)0) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_260, "%s - ", param_1);
        }
        if (param_4 == (char*)0) {
            local_260->append("Assertion failed!");
        } else {
            local_260->append_sprintf_va_list(param_4, param_5);
        }
        eastl::fixed_string<char, 16384, false, eastl::allocator>::fixed_string();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::assign(local_4278,
                                                                                                          pcVar2,
                                                                                                          pcVar3);
        eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::append(local_4278,
                                                                                                          "\n");
        callstack::Callstack::Callstack(local_85e0);
        local_85e0->Capture(1);
        callstack::CallstackResolved::CallstackResolved(local_82b8, local_85e0);
        local_8290->Get(local_82b8);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::append(local_4278,
                                                                                                          pcVar2,
                                                                                                          pcVar3);
        pLVar1 = field_8;
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Logger::Log(pLVar1, 0, 2, param_2, local_8294, uVar4);
        local_8290->~fixed_string();
        local_82b8->~CallstackResolved();
        local_4278->~fixed_string();
        /* WARNING: Subroutine does not return */
        local_260->~fixed_string();
    }

    // 0x100ca8880, 368 bytes, placed by class name
    // LoggerAssertionPresenter::PresentFatalError(char const*, char const*, int, int, char const*, __va_list_tag*)
    void LoggerAssertionPresenter::PresentFatalError(char* param_1, char* param_2, int param_3, int param_4,
                                                     char* param_5, __va_list_tag* param_6) {
        char* pcVar2;
        undefined8* puVar3;
        Callstack local_8f8[50];
        JagException local_5d0[10];
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (callstack::CrashHandler::Get() != 0) {
            eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
            if (param_1 != (char*)0) {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_260, "%s - ", param_1);
            }
            if (param_5 == (char*)0) {
                local_260->append("Fatal error occured!");
            } else {
                local_260->append_sprintf_va_list(param_5, param_6);
            }
            callstack::Callstack::Callstack(local_8f8);
            local_8f8->Capture(param_4 + 2);
            pcVar2 = (char*)eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            callstack::JagException::JagException(local_5d0, local_8f8, param_2, param_3, pcVar2);
            puVar3 = (undefined8*)callstack::CrashHandler::Get();
            (**(code**)*puVar3)(puVar3, local_5d0);
            callstack::CrashHandler::RemoveTopLevelExceptionHandler();
            local_5d0->~JagException();
            /* WARNING: Subroutine does not return */
            local_260->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ca8a10, 16 bytes, placed by class name
    // LoggerAssertionPresenter::ThrowAssert(char const*, char const*, int, char const*, __va_list_tag*)
    void LoggerAssertionPresenter::ThrowAssert(char* param_1, char* param_2, int param_3, char* param_4,
                                               __va_list_tag* param_5) {
        code* pcVar1;

        pcVar1 = (code*)swi(3);
        (*pcVar1)();
    }

} // namespace jag::logger
