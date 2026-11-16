// libs/oldscape/rs2lib/social/DisplayName.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "DisplayName.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1016af930, 1 bytes, __common; zero-initialised
    DisplayName::m_hasher;

    // 0x10005c9a0: the linker folded this into ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    DisplayName::~DisplayName();

    // 0x1000753f0: the linker folded this into ConsoleCommandHelp::~ConsoleCommandHelp(), which has identical code
    DisplayName::~DisplayName();

    // 0x10007d0d0: the linker folded this into ConsoleCommandHelp::operator=(ConsoleCommandHelp&&), which has identical code
    DisplayName::operator=(DisplayName&&);

    // 0x100258e90, 80 bytes, base-object constructor, placed by class name and debug map
    // DisplayName::DisplayName(eastl::string const&, NameSpace)
    void DisplayName::DisplayName(basic_string* param_1, undefined4 param_3) {
        new (this) eastl::string(param_1);
        (&field_32, param_1, param_3)->ToBaseDisplayName();
    }

    // 0x1002590f0, 16 bytes, complete-object constructor, placed by class name
    // DisplayName::DisplayName(eastl::string const&, NameSpace): jumps straight to the base-object constructor

    // 0x100259100, 64 bytes, base-object constructor, placed by class name
    // DisplayName::DisplayName(eastl::string const&)
    void DisplayName::DisplayName(basic_string* param_1) {
        new (this) eastl::string(param_1);
        (&field_32, param_1, 0)->ToBaseDisplayName();
    }

    // 0x100259140, 16 bytes, complete-object constructor, placed by class name
    // DisplayName::DisplayName(eastl::string const&): jumps straight to the base-object constructor

    // 0x100259150, 144 bytes, base-object constructor, placed by class name
    // DisplayName::DisplayName(eastl::string&&, NameSpace)
    void DisplayName::DisplayName(basic_string* param_1, undefined4 param_3) {
        DisplayNameTools local_40[32];

        new (this) eastl::string(param_1);
        new (&field_32) eastl::string();
        local_40->ToBaseDisplayName(this, param_3);
        eastl::string::operator=((eastl::string*)&field_32, (basic_string*)local_40);
        local_40->~basic_string();
    }

    // 0x1002591e0, 16 bytes, complete-object constructor, placed by class name
    // DisplayName::DisplayName(eastl::string&&, NameSpace): jumps straight to the base-object constructor

    // 0x1002591f0, 16 bytes, placed by class name
    // DisplayName::GetDisplayName() const
    DisplayName* DisplayName::GetDisplayName() {
        return this;
    }

    // 0x100259200, 16 bytes, placed by class name
    // DisplayName::GetBaseDisplayName() const
    undefined1* DisplayName::GetBaseDisplayName() {
        return &field_32;
    }

    // 0x100259210, 64 bytes, placed by class name
    // DisplayName::HashCode() const
    undefined8 DisplayName::HashCode() {
        char cVar1;
        undefined8 uVar2;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        uVar2 = 0;
        if (cVar1 == '\0') {
            uVar2 = eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>::operator()(
                (hash<eastl::basic_string<char, BucketAllocatorEASTL>>*)&m_hasher, (basic_string*)&field_32);
        }
        return uVar2;
    }

    // 0x100259250, 16 bytes, placed by class name
    // DisplayName::ToString() const
    void DisplayName::ToString() {
        GetDisplayName(this);
    }

    // 0x100259260, 112 bytes, placed by class name
    // DisplayName::CompareTo(DisplayName const&) const
    uint DisplayName::CompareTo(DisplayName* param_1) {
        char cVar1;
        byte bVar2;
        uint uVar3;
        char* pcVar4;
        char* pcVar5;

        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        bVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            uVar3 = 4294967295;
            if (bVar2 == 0) {
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar3 = _strcmp(pcVar4, pcVar5);
            }
        } else {
            uVar3 = (uint)(bVar2 ^ 1);
        }
        return uVar3;
    }

    // 0x1002592d0, 32 bytes, placed by class name
    // DisplayName::operator==(DisplayName const&) const
    /* DisplayName::TEMPNAMEPLACEHOLDERVALUE(DisplayName
   const&) const */

    void DisplayName::operator==(DisplayName* param_1) {
        eastl::operator==((basic_string*)&field_32, (basic_string*)&param_1->field_32);
    }

} // namespace jag::oldscape::rs2lib::social
