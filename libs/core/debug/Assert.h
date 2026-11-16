// libs/core/debug/Assert.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.logger

namespace jag {
    class DefaultAssertPresenter {
    public:
        // virtual methods in vtable order
        virtual void PresentAssert(char const*, char const*, int, char const*, __va_list_tag*);
        virtual void PresentFatalError(char const*, char const*, int, int, char const*, __va_list_tag*);
        virtual void ThrowAssert(char const*, char const*, int, char const*, __va_list_tag*);

        // data members, from how the methods use this: 8 bytes
        undefined8* field_0; // offset 0, vtable pointer
    };

    class IAssertPresenter {
    public:
        IAssertPresenter();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class ScopedAssertionPresenter {
    public:
        ScopedAssertionPresenter(IAssertPresenter&);
        ~ScopedAssertionPresenter();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0
    };

    // 0x100ca8210, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // IAssertPresenter::IAssertPresenter()
    void IAssertPresenter::IAssertPresenter() {
        field_0 = PTR_vtable_100ee7160 + 16;
    }

    // 0x100ca9830, 32 bytes, inline, placed by debug map only (low confidence)
    // logger::DebugOutputSink* placement_new<logger::DebugOutputSink>(void*)
    DebugOutputSink* placement_new<logger::DebugOutputSink>(void* param_1) {
        *(undefined8*)param_1 = 0;
        logger::DebugOutputSink::DebugOutputSink(param_1);
        return param_1;
    }

    // 0x100ca9850, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<logger::DebugOutputSink>* placement_new<ref_counter_shared<logger::DebugOutputSink>, int, logger::DebugOutputSink*&>(void*, int&&, logger::DebugOutputSink*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<logger::DebugOutputSink>, int, logger::DebugOutputSink*&>(
        void* param_1, int* param_2, DebugOutputSink** param_3) {
        ref_counter_shared<logger::DebugOutputSink>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100ca98c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<logger::DebugOutputSink>::ref_counter_shared(unsigned long, logger::DebugOutputSink*): jumps straight to the base-object constructor

    // 0x100ca98d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<logger::DebugOutputSink>::ref_counter_shared(unsigned long, logger::DebugOutputSink*)
    void ref_counter_shared<logger::DebugOutputSink>::ref_counter_shared(ulong param_1, DebugOutputSink* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74a0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DebugOutputSink**)(this + 24) = param_2;
    }

    // 0x100ca9910, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<logger::DebugOutputSink>::DeleteData()
    void ref_counter_shared<logger::DebugOutputSink>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 8;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::logger {
    class Sink {
    public:
        // virtual methods in vtable order
        virtual ~Sink();
        Sink();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x100ca9870, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DebugOutputSink::DebugOutputSink(): jumps straight to the base-object constructor

    // 0x100ca9880, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DebugOutputSink::DebugOutputSink()
    void DebugOutputSink::DebugOutputSink() {
        new (this) Sink();
        field_0 = &PTR__ScriptOption_100f2a050;
    }

    // 0x100ca98a0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Sink::Sink()
    void Sink::Sink() {
        field_0 = PTR_vtable_100ee8648 + 16;
    }

} // namespace jag::logger

// 0x100ca9330, 16 bytes, placed by debug map only (low confidence)
// __libcpp_strrchr(char const*, int)
void __libcpp_strrchr(char* param_1, int param_2) {
    _strrchr(param_1, param_2);
}

// 0x100caa470, 16 bytes, placed by debug map only (low confidence)
// decltype ((static_cast<void (*&std::__invoke<void (*&)(eastl::fixed_string<char, 64, true, eastl::allocator>&), eastl::fixed_string<char, 64, true, eastl::allocator>&>(void (*&)(eastl::fixed_string<char, 64, true, eastl::allocator>&), eastl::fixed_string<char, 64, true, eastl::allocator>&))(eastl::fixed_string<char, 64, true, eastl::allocator>&)>({parm#1}))(static_cast<eastl::fixed_string<char, 64, true, eastl::allocator>&>({parm#2})))
void __ZNSt3__1L8__invokeIRPFvRN5eastl12fixed_stringIcLi64ELb1ENS1_9allocatorEEEEJS5_EEEDTclscT_fp_spscT0_fp0_EEOS9_DpOSA_(
    undefined8* param_1, undefined8 param_2) {
    (*(code*)*param_1)(param_2);
}
