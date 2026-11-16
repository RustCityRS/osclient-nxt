// libs/js5/Js5ArchiveSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "Js5ArchiveSettings.h"

namespace jag {
    // 0x100016cf0: the linker folded this into eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int> >, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const, which has identical code
    Js5ArchiveSettings::GetEncodeType() const;

    // 0x100064280: the linker folded this into eastl::optional<eastl::vector<char, eastl::allocator> >::operator bool() const, which has identical code
    Js5ArchiveSettings::IsHTTPServed() const;

    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    int Js5ArchiveSettings::GetOpenPriority() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint Js5ArchiveSettings::GetArchiveID() const;

    // 0x1000b9a40: the linker folded this into oldscape::configdecoder::DBRowType::GetDbTableId() const, which has identical code
    Js5ArchiveSettings::GetGroupIDLimit() const;

    // 0x10019bbb0: the linker folded this into SystemSettings::GetModeGame() const, which has identical code
    char* Js5ArchiveSettings::GetLocalFileName() const;

    // 0x1001be5d0: the linker folded this into graphics::SunlightOptions::GetShadowQuality() const, which has identical code
    uint Js5ArchiveSettings::GetTotalSize() const;

    // 0x100429880: the linker folded this into Headbar::GetDuration() const, which has identical code
    int Js5ArchiveSettings::GetDiskCacheSize() const;

    // 0x1006acd00: the linker folded this into ui::TextData::SetTextColour(unsigned int), which has identical code
    Js5ArchiveSettings::SetGroupIDLimit(unsigned int);

    // 0x1009debd0, 32 bytes, placed by class name and debug map
    // Js5ArchiveSettings::GetPreloadSize() const
    uint Js5ArchiveSettings::GetPreloadSize() {
        uint uVar1;

        if (m_totalSize == 0) {
            return 0;
        }
        uVar1 = m_totalSize;
        if (m_diskCacheSize != 0) {
            uVar1 = m_diskCacheSize;
        }
        return uVar1;
    }

} // namespace jag
