// libs/jtl/JTL_String.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::Instrumentation {
    class String {
    public:
        String(char const*, char const*);
        ~String();
        static /* 368 bytes */ MAX_WRITEABLE; // initialised in its definition

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

} // namespace jag::Instrumentation
