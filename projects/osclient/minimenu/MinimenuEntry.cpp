// projects/osclient/minimenu/MinimenuEntry.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "MinimenuEntry.h"

namespace jag::oldscape::minimenu {
    // 0x100009d00: MinimenuEntry::GetVerb() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x10000c2f0: MinimenuEntry::SetX(int) has the same machine code as jag::math::Rect<int>::SetX(int)

    // 0x10000c300: MinimenuEntry::SetZ(int) has the same machine code as jag::math::Rect<int>::SetY(int)

    // 0x100024170: MinimenuEntry::R() const has the same machine code as option::IScriptOption::GetId() const

    // 0x100073ca0
    MinimenuEntry::MinimenuEntry(const eastl::string& str, const MinimenuSubject& minimenuSubject, int arg3, int arg4,
                                 int arg5, int arg6, int arg7)
        : field_0(arg3), m_z(arg4), field_8(arg5), field_12(arg6), field_16(arg7), field_24(str),
          field_56(minimenuSubject) {}

    // 0x100073d30
    MinimenuEntry::MinimenuEntry() {
        new (&field_24) eastl::string();
        new (&field_56) MinimenuSubject();
    }

    // 0x1000b7910: MinimenuEntry::GetSubject() const has the same machine code as MinimenuEntry::GetSubjectName() const

    // 0x1000b9960: MinimenuEntry::X() const has the same machine code as ScriptVarType::GetID() const

    // 0x1000e5d50: MinimenuEntry::T() const has the same machine code as rs2lib::CoordZoneSource::GetRotation() const

} // namespace jag::oldscape::minimenu
