// libs/hal/network/ClientSocket.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.network

#include "ClientSocket.h"

namespace jag {
    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    ClientSocket::GetRawAddress() const;

    // 0x100b0d8e0, 80 bytes, base-object constructor, placed by class name and debug map
    // ClientSocket::ClientSocket(unsigned int)
    void ClientSocket::ClientSocket(uint param_1) {
        field_0 = -1;
        field_4 = -1;
        field_8 = -1;
        new (&field_16) sock::AddressBase();
        new (&field_96) eastl::string();
        field_128 = '\0';
        field_129 = 1;
    }

} // namespace jag
