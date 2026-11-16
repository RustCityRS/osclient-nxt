// libs/oldscape/jagex3/js5/Js5Key.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jagex3 {
    class Js5Key {
    public:
        uint ReadInt();
        Js5Key(eastl::basic_string<char, BucketAllocatorEASTL> const&);
        GetKey(int);

        // data members, from how the methods use this: 368 bytes
        long field_0;    // offset 0
        NpcUID* field_8; // offset 8
        char _unknown_16[16];
        Error field_32; // offset 32
        char _unknown_36[4];
        long field_40; // offset 40
        File field_48; // offset 48
        char _unknown_72[296];
    };

} // namespace jag::oldscape::jagex3
