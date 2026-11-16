// libs/oldscape/rs2lib/script/trigger/ClientTriggerTypeID.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    // 0x100190f00
    void ClientGosubFrame::SwapLocals(eastl::vector<int>&& arg1, eastl::vector<eastl::string>&& strs) {

        vector<int> local_68(arg1);
        arg1 = field_24;
        field_24 = local_68;
        vector<eastl::string> local_48(strs);
        strs = field_56;
        field_56 = local_48;
    }

} // namespace jag::oldscape
