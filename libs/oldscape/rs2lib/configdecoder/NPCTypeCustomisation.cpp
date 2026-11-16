// libs/oldscape/rs2lib/configdecoder/NPCTypeCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "NPCTypeCustomisation.h"

namespace jag::oldscape::configdecoder {
    // 0x100f376c0
    int32_t NPCTypeCustomisation::m_bodyCustomisationCacheBuster = 1;

    // 0x100f376c4
    int32_t NPCTypeCustomisation::m_headCustomisationCacheBuster = 1;

    // 0x100009d50: NPCTypeCustomisation::GetModelList() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100049810: NPCTypeCustomisation::GetRetextureDest() const has the same machine code as option::Option<WindowSavedPosition>::GetDefaultValue() const

    // 0x100067280: NPCTypeCustomisation::GetRecolourDest() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x100073980: NPCTypeCustomisation::GetUniqueID() const has the same machine code as jag::math::Rect<int>::MinY() const

    // 0x10022d400
    NPCTypeCustomisation::NPCTypeCustomisation(bool arg1, eastl::vector<int>&& arg2, Array<short>&& arg3,
                                               Array<short>&& arg4, bool arg5)
        : field_0(arg1) {
        UpdateUniqueID();
        field_8.swap(arg2);
        field_40.swap(arg3);
        field_64.swap(arg4);
        field_88 = arg5;
    }

    // 0x10022d4c0
    void NPCTypeCustomisation::UpdateUniqueID() {
        unsigned int uVar1;

        if (field_0 == false) {
            uVar1 = GetNextHeadCustomisationCacheBuster();
        } else {
            uVar1 = GetNextBodyCustomisationCacheBuster();
        }
        m_uniqueID = uVar1;
    }

} // namespace jag::oldscape::configdecoder
