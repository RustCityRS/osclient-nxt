// libs/oldscape/rs2lib/configdecoder/NPCTypeCustomisation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "NPCTypeCustomisation.h"

namespace jag::oldscape::configdecoder {
    // 0x100f376c0, 4 bytes, __data
    NPCTypeCustomisation::m_bodyCustomisationCacheBuster = 1;

    // 0x100f376c4, 4 bytes, __data
    NPCTypeCustomisation::m_headCustomisationCacheBuster = 1;

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    NPCTypeCustomisation::GetModelList() const;

    // 0x100049810: the linker folded this into option::Option<WindowSavedPosition>::GetDefaultValue() const, which has identical code
    NPCTypeCustomisation::GetRetextureDest() const;

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    NPCTypeCustomisation::GetRecolourDest() const;

    // 0x100073980: the linker folded this into jag::math::Rect<int>::MinY() const, which has identical code
    uint NPCTypeCustomisation::GetUniqueID() const;

    // 0x10022d400, 192 bytes, base-object constructor, placed by class name and debug map
    // NPCTypeCustomisation::NPCTypeCustomisation(bool, eastl::vector<int, eastl::allocator>&&, Array<short, eastl::allocator>&&, Array<short, eastl::allocator>&&, bool)
    void NPCTypeCustomisation::NPCTypeCustomisation(bool param_1, vector* param_2, Array* param_3, Array* param_4,
                                                    bool param_5) {
        new (&field_8) eastl::vector<int, eastl::allocator>();
        new (&field_40) Array<short, eastl::allocator>();
        new (&field_64) Array<short, eastl::allocator>();
        field_0 = param_1;
        UpdateUniqueID(this);
        (&field_8, param_2)->swap();
        (&field_40, param_3)->swap();
        (&field_64, param_4)->swap();
        field_88 = param_5;
    }

    // 0x10022d4c0, 48 bytes, placed by class name and debug map
    // NPCTypeCustomisation::UpdateUniqueID()
    void NPCTypeCustomisation::UpdateUniqueID() {
        uint uVar1;

        if (field_0 == false) {
            uVar1 = GetNextHeadCustomisationCacheBuster();
        } else {
            uVar1 = GetNextBodyCustomisationCacheBuster();
        }
        m_uniqueID = uVar1;
    }

    // 0x10022d4f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // NPCTypeCustomisation::NPCTypeCustomisation(bool, eastl::vector<int, eastl::allocator>&&, Array<short, eastl::allocator>&&, Array<short, eastl::allocator>&&, bool): jumps straight to the base-object constructor

} // namespace jag::oldscape::configdecoder
