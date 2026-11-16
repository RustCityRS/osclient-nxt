// libs/game/runetek5/config/ConfigTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    // 0x1004daf00, 32 bytes, inline, placed by debug map only (low confidence)
    // BaseConfigTypeList::GetGroup(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, Js5ArchiveSettings const&, unsigned int, Priority const*, bool, bool)
    void BaseConfigTypeList::GetGroup(shared_ptr* param_1, Js5ArchiveSettings* param_2, uint param_3, Priority* param_4,
                                      bool param_5, bool param_6) {
        (m_pResourceProvider, param_1, param_2, param_3, param_4, param_5, param_6)->GetGroup();
    }

} // namespace jag::game
