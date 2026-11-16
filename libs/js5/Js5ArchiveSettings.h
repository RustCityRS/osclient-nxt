// libs/js5/Js5ArchiveSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5ArchiveSettings {
    public:
        GetEncodeType() const;
        IsHTTPServed() const;
        int GetOpenPriority() const;
        uint GetArchiveID() const;
        GetGroupIDLimit() const;
        Js5ArchiveSettings(unsigned int, Priority const*, int, bool, EncodeType const*, bool, Js5DiskCacheFormat,
                           char const*);
        char* GetLocalFileName() const;
        Js5ArchiveSettings();
        uint GetTotalSize() const;
        int GetDiskCacheSize() const;
        void SetGroupIDLimit(unsigned int);
        uint GetPreloadSize() const;
        GetPrefetchPriority() const;
        GetPreloadEnabled() const;
        void SetHTTPValidated(bool);
        void SetTotalSize(unsigned int);
        int GetDiskEncodeType() const;
        bool IsHTTPValidated() const;
        IsLangSpecific() const;
        GetCanSaveToDisk() const;

        // data members, from how the methods use this: 64 bytes
        uint m_archiveID; // offset 0
        char _unknown_4[4];
        undefined* field_8;          // offset 8
        int m_openPriority;          // offset 16
        undefined1 m_preloadEnabled; // offset 20
        undefined1 m_langSpecific;   // offset 21
        char _unknown_22[2];
        undefined* field_24;        // offset 24
        undefined1 field_32;        // offset 32
        bool m_hTTPValidated;       // offset 33
        char m_diskEncodeType;      // offset 34
        undefined1 m_canSaveToDisk; // offset 35
        char _unknown_36[4];
        char* m_pLocalFileName; // offset 40
        uint m_groupIDLimit;    // offset 48
        int m_diskCacheSize;    // offset 52
        uint m_totalSize;       // offset 56
        char _unknown_60[4];
    };

    // 0x10013f130, 48 bytes, complete-object constructor, inline, placed by class name and debug map
    // Js5ArchiveSettings::Js5ArchiveSettings(unsigned int, Priority const*, int, bool, EncodeType const*, bool, Js5DiskCacheFormat, char const*)
    void Js5ArchiveSettings::Js5ArchiveSettings() {
        Js5ArchiveSettings();
    }

    // 0x10013f3f0, 80 bytes, base-object constructor, inline, placed by class name
    // Js5ArchiveSettings::Js5ArchiveSettings(unsigned int, Priority const*, int, bool, EncodeType const*, bool, Js5DiskCacheFormat, char const*)
    void Js5ArchiveSettings::Js5ArchiveSettings(uint param_1, undefined* param_2, int param_3, undefined1 param_4,
                                                undefined* param_5, undefined1 param_6, char param_8, char* param_9) {
        m_archiveID = param_1;
        field_8 = param_2;
        m_openPriority = param_3;
        m_preloadEnabled = 1;
        m_langSpecific = param_4;
        field_24 = param_5;
        field_32 = param_6;
        m_diskEncodeType = param_8;
        m_canSaveToDisk = 1;
        m_pLocalFileName = param_9;
        m_groupIDLimit = 0;
        m_diskCacheSize = 0;
        m_totalSize = 0;
    }

    // 0x1001bb8c0, 16 bytes, complete-object constructor, inline, placed by class name
    // Js5ArchiveSettings::Js5ArchiveSettings(): jumps straight to the base-object constructor

    // 0x1001d7dc0, 96 bytes, base-object constructor, inline, placed by class name
    // Js5ArchiveSettings::Js5ArchiveSettings()
    void Js5ArchiveSettings::Js5ArchiveSettings() {
        m_archiveID = 0;
        field_8 = (undefined*)0;
        m_openPriority = 0;
        m_preloadEnabled = 1;
        m_langSpecific = 0;
        field_24 = EncodeType::NONE;
        field_32 = 0;
        m_diskEncodeType = '\x01';
        m_canSaveToDisk = 1;
        m_pLocalFileName = "";
        m_groupIDLimit = 0;
        m_diskCacheSize = 0;
        m_totalSize = 0;
    }

    // 0x1009e0dc0, 48 bytes, inline, placed by class name
    // Js5ArchiveSettings::GetPrefetchPriority() const
    undefined* Js5ArchiveSettings::GetPrefetchPriority() {
        undefined** ppuVar2;

        if (GetCanSaveToDisk(this) == '\0') {
            ppuVar2 = &Priority::NONE;
        } else {
            ppuVar2 = &field_8;
        }
        return *ppuVar2;
    }

    // 0x1009e12f0, 16 bytes, inline, placed by class name
    // Js5ArchiveSettings::GetPreloadEnabled() const
    undefined1 Js5ArchiveSettings::GetPreloadEnabled() {
        return m_preloadEnabled;
    }

    // 0x1009e3f20, 16 bytes, inline, placed by class name
    // Js5ArchiveSettings::SetHTTPValidated(bool)
    void Js5ArchiveSettings::SetHTTPValidated(bool param_1) {
        m_hTTPValidated = param_1;
    }

    // 0x1009e3f30, 16 bytes, inline, placed by class name
    // Js5ArchiveSettings::SetTotalSize(unsigned int)
    void Js5ArchiveSettings::SetTotalSize(uint param_1) {
        m_totalSize = param_1;
    }

    // 0x1009e5d20, 16 bytes, inline, placed by class name
    // Js5ArchiveSettings::GetDiskEncodeType() const
    int Js5ArchiveSettings::GetDiskEncodeType() {
        return (int)m_diskEncodeType;
    }

    // 0x1009e69c0, 16 bytes, inline, placed by class name
    // Js5ArchiveSettings::IsHTTPValidated() const
    undefined1 Js5ArchiveSettings::IsHTTPValidated() {
        return m_hTTPValidated;
    }

    // 0x1009eb0e0, 16 bytes, inline, placed by class name
    // Js5ArchiveSettings::IsLangSpecific() const
    undefined1 Js5ArchiveSettings::IsLangSpecific() {
        return m_langSpecific;
    }

    // 0x1009f6c90, 16 bytes, inline, placed by class name
    // Js5ArchiveSettings::GetCanSaveToDisk() const
    undefined1 Js5ArchiveSettings::GetCanSaveToDisk() {
        return m_canSaveToDisk;
    }

} // namespace jag
