// libs/oldscape/rs2lib/script/trigger/ClientTriggerTypeID.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    // 0x100190f00, 176 bytes, inline, placed by debug map only (low confidence)
    // ClientGosubFrame::SwapLocals(eastl::vector<int, eastl::allocator>&&, eastl::vector<eastl::string, eastl::allocator>&&)
    void ClientGosubFrame::SwapLocals(vector* param_1, vector* param_2) {
        vector<int, eastl::allocator> local_68[32];
        vector<eastl::string, eastl::allocator> local_48[32];

        eastl::vector<int, eastl::allocator>::vector(local_68, param_1);
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)param_1, (vector*)&field_24);
        eastl::vector<int, eastl::allocator>::operator=((vector<int, eastl::allocator>*)&field_24, (vector*)local_68);
        eastl::vector<eastl::string, eastl::allocator>::vector(local_48, param_2);
        eastl::vector<eastl::string, eastl::allocator>::operator=((vector<eastl::string, eastl::allocator>*)param_2,
                                                                  (vector*)&field_56);
        eastl::vector<eastl::string, eastl::allocator>::operator=((vector<eastl::string, eastl::allocator>*)&field_56,
                                                                  (vector*)local_48);
        eastl::vector<eastl::string, eastl::allocator>::~vector(local_48);
        eastl::vector<int, eastl::allocator>::~vector(local_68);
    }

} // namespace jag::oldscape
