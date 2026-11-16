// libs/hal/system/callstack/JagException.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.callstack

namespace jag::callstack {
    class JagException {
    public:
        // virtual methods in vtable order
        virtual ~JagException();
        virtual void what() const;
        GetCallstackRaw() const;
        errorMessage() const;
        JagException(Callstack const&, char const*, ...);
        void BuildErrorString(char const*, int, char const*, __va_list_tag*);
        JagException(Callstack const&, char const*, int, char const*, ...);
        JagException(char const*, int, char const*, ...);

        // data members, from how the methods use this: 84 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[31];
        undefined1 field_40; // offset 40
        char _unknown_41[31];
        CoordMapSquare m_callstackRaw; // offset 72
    };

    class ResolvedAddress {
    public:
        ~ResolvedAddress();
        ResolvedAddress* operator=(ResolvedAddress const&);
        char const* Format<eastl::fixed_string<char, 16384, false, eastl::allocator>>(
            eastl::fixed_string<char, 16384, false, eastl::allocator>&) const;
        ResolvedAddress(ResolvedAddress&&);
        ResolvedAddress();

        // data members, from how the methods use this: 840 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[816];
        int field_824; // offset 824
        char _unknown_828[4];
        ulong field_832; // offset 832
    };

    // 0x1004c1940, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // JagException::errorMessage() const
    /* tweak::EditLine::GetText() const */

    void tweak::EditLine::GetText() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100ca8a00, 16 bytes, complete-object destructor, inline, placed by class name
    // JagException::~JagException(): jumps straight to the base-object destructor

    // 0x100ca9340, 64 bytes, base-object destructor, inline, placed by class name
    // JagException::~JagException()
    void JagException::~JagException() {
        field_0 = &PTR__JagException_100f2a188;
        (&field_40)->~basic_string();
        (&field_8)->~basic_string();
        ~exception();
    }

    // 0x100cafa10, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // JagException::~JagException()
    void JagException::~JagException() {
        ~JagException(this);
        operator_delete(this);
    }

    // 0x100cb1070, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ResolvedAddress::ResolvedAddress(ResolvedAddress&&): jumps straight to the base-object constructor

    // 0x100cb1090, 112 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ResolvedAddress::ResolvedAddress(ResolvedAddress&&)
    void ResolvedAddress::ResolvedAddress(ResolvedAddress* param_1) {
        ulong uVar1;
        undefined4 uVar2;

        field_0 = param_1->field_0;
        new (&field_8) eastl::fixed_string<char, 512, false, eastl::allocator>();
        new (&field_544) eastl::fixed_string<char, 256, false, eastl::allocator>();
        uVar2 = *(undefined4*)&param_1->field_828;
        uVar1 = param_1->field_832;
        field_824 = param_1->field_824;
        *(undefined4*)&field_828 = uVar2;
        field_832 = uVar1;
    }

    // 0x100cb13e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ResolvedAddress::ResolvedAddress(): jumps straight to the base-object constructor

    // 0x100cb13f0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ResolvedAddress::ResolvedAddress()
    void ResolvedAddress::ResolvedAddress() {
        field_0 = 0;
        eastl::fixed_string<char, 512, false, eastl::allocator>::fixed_string();
        eastl::fixed_string<char, 256, false, eastl::allocator>::fixed_string();
        field_832 = 0;
    }

} // namespace jag::callstack

namespace jag::tweak {
    // 0x1004c1940: the linker folded this into callstack::JagException::errorMessage() const, which has identical code
    EditLine::GetText() const;

} // namespace jag::tweak

namespace jag::stringtools {
    // 0x100cb1e30, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeUnixFilename<2048, true, eastl::allocator>(eastl::fixed_string<char, 2048, true, eastl::allocator>&)::{lambda(char)#1}::operator()(char) const
    /* MakeUnixFilename<1024, false, eastl::allocator>(eastl::fixed_string<char, 1024,
   false, eastl::allocator>&)::{lambda(char)#1}::TEMPNAMEPLACEHOLDERVALUE(char) const */

    undefined4 stringtools::MakeUnixFilename<1024, false, eastl::allocator>(
        eastl::fixed_string<char, 1024, false, eastl::allocator>&)::{
        lambda(char) #1
    }
    ::operator()(char param_1) {
        undefined4 uVar1;
        undefined3 in_register_00000031;

        uVar1 = 47;
        if (param_1 != '\\') {
            uVar1 = CONCAT31(in_register_00000031, param_1);
        }
        return uVar1;
    }

} // namespace jag::stringtools

// 0x100cb36a0, 15 bytes, placed by debug map only (low confidence)
// TLS wrapper function for jag::callstack::CrashHandler::m_signalState
void jag::callstack::CrashHandler::m_signalState() {
    (*(code*)m_signalState)();
}
