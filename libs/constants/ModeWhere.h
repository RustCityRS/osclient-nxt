// libs/constants/ModeWhere.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class ModeWhere {
    public:
        ModeWhere(unsigned int, char const*);
        ModeWhere();
        void GetByID(unsigned int);
        static ModeWhere const* /* 8 bytes */ LIVE;     // = &enumArray
        static ModeWhere const* /* 8 bytes */ WTWIP;    // = &enumArray[3] /* ModeWhere(3, "WTWIP") */
        static ModeWhere const* /* 8 bytes */ WTRC;     // = &enumArray[1] /* ModeWhere(1, "WTRC") */
        static ModeWhere const* /* 8 bytes */ WTQA;     // = &enumArray[2] /* ModeWhere(2, "WTQA") */
        static ModeWhere const* /* 8 bytes */ LOCAL;    // = &enumArray[4] /* ModeWhere(4, "LOCAL") */
        static ModeWhere const* /* 8 bytes */ WTI;      // = &enumArray[5] /* ModeWhere(5, "WTI") */
        static ModeWhere const* /* 8 bytes */ INTBETA;  // = &enumArray[6] /* ModeWhere(6, "INTBETA") */
        static ModeWhere const* /* 8 bytes */ DEMO;     // = &enumArray[10] /* ModeWhere(10, "DEMO") */
        static ModeWhere /* 176 bytes */ enumArray[11]; // initialised in its definition

        // data members, from how the methods use this: 16 bytes
        EntityHighlight** field_0; // offset 0
        undefined4 field_8;        // offset 8
        char _unknown_12[4];
    };

    // 0x100b894f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ModeWhere::ModeWhere(): jumps straight to the base-object constructor

    // 0x100b89670, 48 bytes, base-object constructor, inline, placed by class name
    // ModeWhere::ModeWhere()
    void ModeWhere::ModeWhere() {
        BucketAllocatorEASTL* in_RDX;

        new (this) eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(
            (EntityHighlight**)"", in_RDX);
        field_8 = 4294967295;
    }

} // namespace jag
