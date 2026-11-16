// libs/core/debug/Assert.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.logger

namespace jag {
    class DefaultAssertPresenter {
    public:
        // virtual methods in vtable order
        virtual void PresentAssert(const char* str1, const char* str2, int arg3, const char* str3,
                                   __va_list_tag* va_list_tag);
        virtual void PresentFatalError(const char* str1, const char* str2, int arg3, int arg4, const char* str3,
                                       __va_list_tag* va_list_tag);
        virtual void ThrowAssert(const char* str1, const char* str2, int arg3, const char* str3,
                                 __va_list_tag* va_list_tag);
    };

    class IAssertPresenter {
    public:
        IAssertPresenter();
    };

    class ScopedAssertionPresenter {
    public:
        ScopedAssertionPresenter(IAssertPresenter& iAssertPresenter);
        ~ScopedAssertionPresenter();

    private:
        uint8_t* field_0;
    };

    // 0x100ca8210
    IAssertPresenter::IAssertPresenter() {
        field_0 = PTR_vtable_100ee7160 + 16;
    }

    // 0x100ca9830
    logger::DebugOutputSink* placement_new<logger::DebugOutputSink>(void* arg1) {
        *(uint64_t*)arg1 = 0;
        new (arg1) logger::DebugOutputSink();
        return arg1;
    }

    // 0x100ca9850
    ref_counter_shared<logger::DebugOutputSink>*
    placement_new<ref_counter_shared<logger::DebugOutputSink>, int, logger::DebugOutputSink*&>(
        void* arg1, int&& arg2, logger::DebugOutputSink*& arg3) {
        new (arg1) ref_counter_shared<logger::DebugOutputSink>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100ca98d0
    ref_counter_shared<logger::DebugOutputSink>::ref_counter_shared(unsigned long arg1,
                                                                    logger::DebugOutputSink* debugOutputSink)
        : ref_counter_base() {}

    // 0x100ca9910
    void ref_counter_shared<logger::DebugOutputSink>::DeleteData() {
        long lVar1;
        ref_counter_shared<logger::DebugOutputSink> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<logger::DebugOutputSink> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 8;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::logger {
    class Sink {
    public:
        // virtual methods in vtable order
        virtual ~Sink();
        Sink();
    };

    // 0x100ca9880
    DebugOutputSink::DebugOutputSink() : Sink() {}

    // 0x100ca98a0
    Sink::Sink() {}

} // namespace jag::logger

// 0x100ca9330
void __libcpp_strrchr(const char* str, int arg2) {
    _strrchr(str, arg2);
}

// 0x100caa470
decltype((
    static_cast<void (*&std::__invoke<void (*&)(eastl::fixed_string<char, 64>&), eastl::fixed_string<char, 64>&>(
        void (*&)(eastl::fixed_string<char, 64>&), eastl::fixed_string<char, 64>&))(eastl::fixed_string<char, 64>&)>(
        { parm #1 }))(static_cast<eastl::fixed_string<char, 64>&>({ parm #2 }))arg1) {
    return (**(void (**)(...))arg1)();
}
