// libs/js5/Js5ArchiveSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Js5ArchiveSettings {
    public:
        void GetEncodeType() const;
        void IsHTTPServed() const;
        int GetOpenPriority() const;
        unsigned int GetArchiveID() const;
        uint32_t GetGroupIDLimit() const;
        Js5ArchiveSettings(unsigned int arg1, const Priority* priority, int arg3, bool arg4,
                           const EncodeType* encodeType, bool arg6, Js5DiskCacheFormat js5DiskCacheFormat,
                           const char* str);
        char* GetLocalFileName() const;
        Js5ArchiveSettings();
        unsigned int GetTotalSize() const;
        int GetDiskCacheSize() const;
        void SetGroupIDLimit(unsigned int arg1);
        unsigned int GetPreloadSize() const;
        Priority* GetPrefetchPriority() const;
        uint8_t GetPreloadEnabled() const;
        void SetHTTPValidated(bool arg1);
        void SetTotalSize(unsigned int arg1);
        int GetDiskEncodeType() const;
        bool IsHTTPValidated() const;
        bool IsLangSpecific() const;
        uint8_t GetCanSaveToDisk() const;

    private:
        unsigned int m_archiveID;
        uint8_t _unknown_4[4];
        Priority* field_8;
        int m_openPriority;
        uint8_t m_preloadEnabled;
        bool m_langSpecific;
        uint8_t _unknown_22[2];
        EncodeType* field_24;
        bool field_32;
        bool m_hTTPValidated;
        char m_diskEncodeType;
        uint8_t m_canSaveToDisk;
        uint8_t _unknown_36[4];
        char* m_pLocalFileName;
        unsigned int m_groupIDLimit;
        int m_diskCacheSize;
        unsigned int m_totalSize;
        uint8_t _unknown_60[4];
    };

    // 0x10013f3f0
    Js5ArchiveSettings::Js5ArchiveSettings(unsigned int arg1, const Priority* priority, int arg3, bool arg4,
                                           const EncodeType* encodeType, bool arg6,
                                           Js5DiskCacheFormat js5DiskCacheFormat, const char* str)
        : m_archiveID(arg1), field_8(priority), m_openPriority(arg3), m_preloadEnabled(1), m_langSpecific(arg4),
          field_24(encodeType), field_32(arg6) {
        m_diskEncodeType = (uint8_t)js5DiskCacheFormat;
        m_canSaveToDisk = 1;
        m_pLocalFileName = str;
        m_groupIDLimit = 0;
        m_diskCacheSize = 0;
        m_totalSize = 0;
    }

    // 0x1001d7dc0
    Js5ArchiveSettings::Js5ArchiveSettings()
        : m_archiveID(0), field_8(nullptr), m_openPriority(0), m_preloadEnabled(1), m_langSpecific(false) {
        field_24 = (EncodeType*)EncodeType::NONE;
        field_32 = false;
        m_diskEncodeType = '\x01';
        m_canSaveToDisk = 1;
        m_pLocalFileName = "";
        m_groupIDLimit = 0;
        m_diskCacheSize = 0;
        m_totalSize = 0;
    }

    // 0x1009e0dc0
    Priority* Js5ArchiveSettings::GetPrefetchPriority() const {
        uint8_t** ppuVar2;

        if (GetCanSaveToDisk() == '\0') {
            ppuVar2 = &Priority::NONE;
        } else {
            ppuVar2 = &field_8;
        }
        return (Priority*)*ppuVar2;
    }

    // 0x1009e12f0
    uint8_t Js5ArchiveSettings::GetPreloadEnabled() const {
        return m_preloadEnabled;
    }

    // 0x1009e3f20
    void Js5ArchiveSettings::SetHTTPValidated(bool arg1) {
        m_hTTPValidated = arg1;
    }

    // 0x1009e3f30
    void Js5ArchiveSettings::SetTotalSize(unsigned int arg1) {
        m_totalSize = arg1;
    }

    // 0x1009e5d20
    int Js5ArchiveSettings::GetDiskEncodeType() const {
        return (int)m_diskEncodeType;
    }

    // 0x1009e69c0
    bool Js5ArchiveSettings::IsHTTPValidated() const {
        return m_hTTPValidated;
    }

    // 0x1009eb0e0
    bool Js5ArchiveSettings::IsLangSpecific() const {
        return m_langSpecific;
    }

    // 0x1009f6c90
    uint8_t Js5ArchiveSettings::GetCanSaveToDisk() const {
        return m_canSaveToDisk;
    }

} // namespace jag
