// libs/oldscape/rs2lib/configdecoder/NPCTypeCustomisation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::configdecoder {
    class NPCTypeCustomisation {
    public:
        void GetModelList() const;
        uint8_t* GetRetextureDest() const;
        void GetRecolourDest() const;
        unsigned int GetUniqueID() const;
        uint8_t UsePlayerModel() const;
        ~NPCTypeCustomisation();
        NPCTypeCustomisation(bool arg1, eastl::vector<int>&& arg2, Array<short>&& arg3, Array<short>&& arg4, bool arg5);
        void UpdateUniqueID();
        void GetNextBodyCustomisationCacheBuster();
        void GetNextHeadCustomisationCacheBuster();
        static int32_t m_bodyCustomisationCacheBuster; // = 1
        static int32_t m_headCustomisationCacheBuster; // = 1

    private:
        bool field_0;
        uint8_t _unknown_1[3];
        unsigned int m_uniqueID;
        uint8_t _unknown_8[80];
        bool field_88;
    };

    // 0x10011cd30
    uint8_t NPCTypeCustomisation::UsePlayerModel() const {
        return m_hasError;
    }

    // 0x100130590
    NPCTypeCustomisation::~NPCTypeCustomisation() {
        field_64.~Array();
        field_40.~Array();
        field_8.~vector();
    }

    // 0x10022d500
    void NPCTypeCustomisation::GetNextBodyCustomisationCacheBuster() {
        m_bodyCustomisationCacheBuster = m_bodyCustomisationCacheBuster + 1;
    }

    // 0x10022d520
    void NPCTypeCustomisation::GetNextHeadCustomisationCacheBuster() {
        m_headCustomisationCacheBuster = m_headCustomisationCacheBuster + 1;
    }

} // namespace jag::oldscape::configdecoder
