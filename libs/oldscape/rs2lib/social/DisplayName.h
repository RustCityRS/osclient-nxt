// libs/oldscape/rs2lib/social/DisplayName.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib::social {
    class DisplayName {
    public:
        DisplayName(DisplayName&&);
        ~DisplayName();
        DisplayName* operator=(DisplayName&&);
        DisplayName();
        DisplayName(DisplayName const&);
        void Equals(shared_ptr<DisplayName> const&) const;
        byte IsValid() const;
        void Equals(DisplayName const&) const;
        DisplayName(eastl::string const&, NameSpace);
        DisplayName(eastl::string const&);
        DisplayName(eastl::string&&, NameSpace);
        DisplayName* GetDisplayName() const;
        GetBaseDisplayName() const;
        HashCode() const;
        void ToString() const;
        uint CompareTo(DisplayName const&) const;
        void operator==(DisplayName const&) const;
        static /* 1 bytes */ m_hasher;

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x100056a30, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // DisplayName::DisplayName(DisplayName&&): jumps straight to the base-object constructor

    // 0x100056a40, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DisplayName::DisplayName(DisplayName&&)
    /* ConsoleCommandHelp::ConsoleCommandHelp(ConsoleCommandHelp&&) */

    void ConsoleCommandHelp::ConsoleCommandHelp(ConsoleCommandHelp* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
    }

    // 0x1000e16b0, 16 bytes, complete-object constructor, inline, placed by class name
    // DisplayName::DisplayName(): jumps straight to the base-object constructor

    // 0x10012d170, 128 bytes, base-object constructor, inline, placed by class name
    // DisplayName::DisplayName()
    void DisplayName::DisplayName() {
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string("", local_28);
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (&field_32, "", local_28) eastl::string();
    }

    // 0x10012ee90, 16 bytes, complete-object constructor, inline, placed by class name
    // DisplayName::DisplayName(DisplayName const&): jumps straight to the base-object constructor

    // 0x10012eea0, 64 bytes, base-object constructor, inline, placed by class name
    // DisplayName::DisplayName(DisplayName const&)
    void DisplayName::DisplayName(DisplayName* param_1) {
        new (this) eastl::string(param_1);
        new (&field_32, (basic_string*)&param_1->field_32) eastl::string();
    }

    // 0x100185b30, 80 bytes, inline, placed by class name
    // DisplayName::Equals(shared_ptr<DisplayName> const&) const
    void DisplayName::Equals(shared_ptr* param_1) {
        DisplayName* pDVar1;

        if (operator==(param_1, (_func_decltype_nullptr*)0)) {
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        } else {
            pDVar1 = (DisplayName*)shared_ptr<DisplayName>::operator*((shared_ptr<DisplayName>*)param_1);
            operator==(this, pDVar1);
        }
    }

    // 0x100185cf0, 16 bytes, inline, placed by class name
    // DisplayName::IsValid() const
    byte DisplayName::IsValid() {
        return eastl::basic_string<
                   char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ^
               1;
    }

    // 0x100185db0, 16 bytes, inline, placed by class name
    // DisplayName::Equals(DisplayName const&) const
    void DisplayName::Equals(DisplayName* param_1) {
        operator==(this, param_1);
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag::oldscape {
    // 0x100056a30: the linker folded this into rs2lib::social::DisplayName::DisplayName(rs2lib::social::DisplayName&&), which has identical code
    ConsoleCommandHelp::ConsoleCommandHelp(ConsoleCommandHelp&&);

    // 0x100056a40: the linker folded this into rs2lib::social::DisplayName::DisplayName(rs2lib::social::DisplayName&&), which has identical code
    ConsoleCommandHelp::ConsoleCommandHelp(ConsoleCommandHelp&&);

} // namespace jag::oldscape
