// libs/logger/LoggerAssertionPresenter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.logger

namespace jag::logger {
    class LoggerAssertionPresenter {
    public:
        // virtual methods in vtable order
        virtual void PresentAssert(const char* str1, const char* str2, int arg3, const char* str3,
                                   __va_list_tag* va_list_tag);
        virtual void PresentFatalError(const char* str1, const char* str2, int arg3, int arg4, const char* str3,
                                       __va_list_tag* va_list_tag);
        virtual void ThrowAssert(const char* str1, const char* str2, int arg3, const char* str3,
                                 __va_list_tag* va_list_tag);
        LoggerAssertionPresenter(Logger& logger);

    private:
        Logger* field_8;
    };

    // 0x100ca81e0
    LoggerAssertionPresenter::LoggerAssertionPresenter(Logger& logger) : IAssertPresenter(), field_8(logger) {}

    // 0x100ca8240
    void LoggerAssertionPresenter::PresentAssert(const char* str1, const char* str2, int arg3, const char* str3,
                                                 __va_list_tag* va_list_tag) {
        eastl::fixed_string<char, 512> local_260;
        if (str1 != nullptr) {
            local_260.append_sprintf("%s - ", str1);
        }
        if (str3 == nullptr) {
            local_260.append("Assertion failed!");
        } else {
            local_260 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>::append_sprintf_va_list(str3,
                                                                                                         va_list_tag);
        }
        eastl::fixed_string<char, 16384, false> local_4278;
        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_4278 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false>>::assign(
            pcVar1, pcVar2);
        local_4278.append("\n");
        Callstack local_85e0;
        local_85e0.Capture(1);
        CallstackResolved local_82b8(local_85e0);
        auto local_8290 = local_82b8.Get(nullptr);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_4278 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false>>::append(
            pcVar1, pcVar2);
        Logger* this_00 = field_8;
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->Log(false, 2, str2, arg3, pcVar1);
    }

    // 0x100ca8880
    void LoggerAssertionPresenter::PresentFatalError(const char* str1, const char* str2, int arg3, int arg4,
                                                     const char* str3, __va_list_tag* va_list_tag) {
        char* str2_00;
        uint64_t* puVar2;
        Callstack local_8f8;
        JagException local_5d0;
        ReturnValue local_260;

        if (callstack::CrashHandler::Get() != 0) {
            local_260 = eastl::fixed_string<char, 512>();
            if (str1 != nullptr) {
                local_260.append_sprintf("%s - ", str1);
            }
            if (str3 == nullptr) {
                local_260.append("Fatal error occured!");
            } else {
                local_260 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true>>::
                    append_sprintf_va_list(str3, va_list_tag);
            }
            local_8f8 = callstack::Callstack();
            local_8f8.Capture(arg4 + 2);
            str2_00 = (char*)local_260.begin();
            local_5d0 = callstack::JagException(&local_8f8, str2, arg3, str2_00);
            puVar2 = (uint64_t*)callstack::CrashHandler::Get();
            (**(void (**)(...))*puVar2)(puVar2, &local_5d0);
            callstack::CrashHandler::RemoveTopLevelExceptionHandler();
        }
    }

    // 0x100ca8a10
    void LoggerAssertionPresenter::ThrowAssert(const char* str1, const char* str2, int arg3, const char* str3,
                                               __va_list_tag* va_list_tag) {
        void* pcVar1 = (void (*)(...))swi(3);
        (*pcVar1)();
    }

} // namespace jag::logger
