// projects/osclient/minimenu/MinimenuEntry.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "MinimenuEntry.h"

namespace jag::oldscape::minimenu {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    MinimenuEntry::GetVerb() const;

    // 0x10000c2f0: the linker folded this into jag::math::Rect<int>::SetX(int), which has identical code
    MinimenuEntry::SetX(int);

    // 0x10000c300: the linker folded this into jag::math::Rect<int>::SetY(int), which has identical code
    MinimenuEntry::SetZ(int);

    // 0x100024170: the linker folded this into option::IScriptOption::GetId() const, which has identical code
    MinimenuEntry::R() const;

    // 0x100073a10, 16 bytes, complete-object constructor, placed by class name
    // MinimenuEntry::MinimenuEntry(): jumps straight to the base-object constructor

    // 0x100073ca0, 96 bytes, base-object constructor, placed by class name
    // MinimenuEntry::MinimenuEntry(eastl::string const&, MinimenuSubject const&, int, int, int, int, int)
    void MinimenuEntry::MinimenuEntry(basic_string* param_1, MinimenuSubject* param_2, int param_3, int param_4,
                                      int param_5, int param_6, int param_7) {
        field_0 = param_3;
        m_z = param_4;
        field_8 = param_5;
        field_12 = param_6;
        field_16 = param_7;
        new (&field_24, param_1) eastl::string();
        new (&field_56, param_2) MinimenuSubject();
    }

    // 0x100073d10, 32 bytes, complete-object constructor, placed by class name
    // MinimenuEntry::MinimenuEntry(eastl::string const&, MinimenuSubject const&, int, int, int, int, int)
    void MinimenuEntry::MinimenuEntry(basic_string* param_1, MinimenuSubject* param_2, int param_3, int param_4,
                                      int param_5, int param_6, int param_7) {
        MinimenuEntry(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    }

    // 0x100073d30, 64 bytes, base-object constructor, placed by class name
    // MinimenuEntry::MinimenuEntry()
    void MinimenuEntry::MinimenuEntry() {
        new (&field_24) eastl::string();
        new (&field_56) MinimenuSubject();
    }

    // 0x1000b7910: the linker folded this into MinimenuEntry::GetSubjectName() const, which has identical code
    MinimenuEntry::GetSubject() const;

    // 0x1000b9960: the linker folded this into ScriptVarType::GetID() const, which has identical code
    MinimenuEntry::X() const;

    // 0x1000e5d50: the linker folded this into rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    MinimenuEntry::T() const;

} // namespace jag::oldscape::minimenu
