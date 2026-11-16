// libs/graphics/runetek5/AnimFrameset.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimFrameset {
    public:
        IsLoaded() const;
        GetLastLoadAttempt() const;
        GetFrames() const;
        AnimFrameset(unsigned int, Js5ResourceProvider&, Js5ArchiveSettings const&, Js5ArchiveSettings const&);
        ulong Load();
        ~AnimFrameset();
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullAnimFrameset;

        // data members, from how the methods use this: 129 bytes
        undefined8 field_0;  // offset 0
        undefined1 m_loaded; // offset 8
        char _unknown_9[31];
        uint field_40; // offset 40
        char _unknown_44[4];
        Js5ResourceProvider* field_48; // offset 48
        Js5ArchiveSettings* field_56;  // offset 56
        Js5ArchiveSettings* field_64;  // offset 64
        undefined4 field_72;           // offset 72
        char _unknown_76[52];
        undefined1 field_128; // offset 128
    };

    // 0x100995e90, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimFrameset::~AnimFrameset(): jumps straight to the base-object destructor

    // 0x100995ea0, 48 bytes, base-object destructor, inline, placed by class name
    // AnimFrameset::~AnimFrameset()
    void AnimFrameset::~AnimFrameset() {
        (&field_104)->~Array();
        (&field_80)->~vector();
        (&field_16)->~Array();
    }

} // namespace jag::graphics
