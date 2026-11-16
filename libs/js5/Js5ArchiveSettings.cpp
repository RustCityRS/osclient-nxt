// libs/js5/Js5ArchiveSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "Js5ArchiveSettings.h"

namespace jag {
    // 0x100016cf0: Js5ArchiveSettings::GetEncodeType() const has the same machine code as eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const

    // 0x100064280: Js5ArchiveSettings::IsHTTPServed() const has the same machine code as eastl::optional<eastl::vector<char>>::operator bool() const

    // 0x100066b70: Js5ArchiveSettings::GetOpenPriority() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1000b9960: Js5ArchiveSettings::GetArchiveID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000b9a40: Js5ArchiveSettings::GetGroupIDLimit() const has the same machine code as oldscape::configdecoder::DBRowType::GetDbTableId() const

    // 0x10019bbb0: Js5ArchiveSettings::GetLocalFileName() const has the same machine code as SystemSettings::GetModeGame() const

    // 0x1001be5d0: Js5ArchiveSettings::GetTotalSize() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x100429880: Js5ArchiveSettings::GetDiskCacheSize() const has the same machine code as Headbar::GetDuration() const

    // 0x1006acd00: Js5ArchiveSettings::SetGroupIDLimit(unsigned int) has the same machine code as ui::TextData::SetTextColour(unsigned int)

    // 0x1009debd0
    unsigned int Js5ArchiveSettings::GetPreloadSize() const {
        if (m_totalSize == 0) {
            return 0;
        }
        unsigned int uVar1 = m_totalSize;
        if (m_diskCacheSize != 0) {
            uVar1 = m_diskCacheSize;
        }
        return uVar1;
    }

} // namespace jag
