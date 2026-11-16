// libs/oldscape/rs2lib/configdecoder/NPCTypeCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::configdecoder {
    class NPCTypeCustomisation {
    public:
        GetModelList() const;
        GetRetextureDest() const;
        GetRecolourDest() const;
        GetUniqueID() const;
        UsePlayerModel() const;
        ~NPCTypeCustomisation();
        NPCTypeCustomisation(bool, eastl::vector<int, eastl::allocator>&&, Array<short, eastl::allocator>&&,
                             Array<short, eastl::allocator>&&, bool);
        void UpdateUniqueID();
        void GetNextBodyCustomisationCacheBuster();
        void GetNextHeadCustomisationCacheBuster();
        static /* 4 bytes */ m_bodyCustomisationCacheBuster; // = 1
        static /* 4 bytes */ m_headCustomisationCacheBuster; // = 1

        // data members, from how the methods use this: 89 bytes
        bool field_0; // offset 0
        char _unknown_1[3];
        undefined4 field_4; // offset 4
        char _unknown_8[80];
        bool field_88; // offset 88
    };

    // 0x10011cd30, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // NPCTypeCustomisation::UsePlayerModel() const
    /* midi2::MidiTask::HasError() */

    undefined1 midi2::MidiTask::HasError() {
        return m_hasError;
    }

    // 0x100130580, 16 bytes, complete-object destructor, inline, placed by class name
    // NPCTypeCustomisation::~NPCTypeCustomisation(): jumps straight to the base-object destructor

    // 0x100130590, 48 bytes, base-object destructor, inline, placed by class name
    // NPCTypeCustomisation::~NPCTypeCustomisation()
    void NPCTypeCustomisation::~NPCTypeCustomisation() {
        (&field_64)->~Array();
        (&field_40)->~Array();
        (&field_8)->~vector();
    }

    // 0x10022d500, 32 bytes, inline, placed by class name
    // NPCTypeCustomisation::GetNextBodyCustomisationCacheBuster()
    void NPCTypeCustomisation::GetNextBodyCustomisationCacheBuster() {
        m_bodyCustomisationCacheBuster = m_bodyCustomisationCacheBuster + 1;
    }

    // 0x10022d520, 32 bytes, inline, placed by class name
    // NPCTypeCustomisation::GetNextHeadCustomisationCacheBuster()
    void NPCTypeCustomisation::GetNextHeadCustomisationCacheBuster() {
        m_headCustomisationCacheBuster = m_headCustomisationCacheBuster + 1;
    }

} // namespace jag::oldscape::configdecoder
