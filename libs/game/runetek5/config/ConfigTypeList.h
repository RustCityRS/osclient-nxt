// libs/game/runetek5/config/ConfigTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    // 0x1004daf00
    void BaseConfigTypeList::GetGroup(shared_ptr<PacketT<Array<unsigned char>>>& arg1,
                                      const Js5ArchiveSettings& js5ArchiveSettings, unsigned int arg3,
                                      const Priority* priority, bool arg5, bool arg6) {
        uint32_t in_register_0000000c;

        Js5ResourceProvider::GetGroup(*m_pResourceProvider, arg1, (unsigned int)js5ArchiveSettings,
                                      (Priority*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg3),
                                      (uint8_t)priority, arg5);
    }

} // namespace jag::game
