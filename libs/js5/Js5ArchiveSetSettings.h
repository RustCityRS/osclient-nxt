// libs/js5/Js5ArchiveSetSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class Js5ArchiveSetSettings {
    public:
        unsigned int GetMaxArchiveID() const;
        Js5ArchiveSetSettings();
        ~Js5ArchiveSetSettings();
        void AddUpdateHandler();
        void ArchivesUpdated();
        void SetDiskCacheSize(EnumDiskCacheSize enumDiskCacheSize);
        void Add(Js5ArchiveSettings& js5ArchiveSettings);
        void GetStart(int& arg1);
        uint64_t GetNext(int& arg1);
        Js5ArchiveSettings* GetByArchiveID(unsigned int arg1) const;

    private:
        unsigned int m_maxArchiveID;
        uint8_t _unknown_4[36];
        uint32_t field_40;
        uint8_t _unknown_44[4];
    };

    // 0x10019b740
    Js5ArchiveSetSettings::Js5ArchiveSetSettings() : m_maxArchiveID(0), field_40(0) {}

    // 0x1009e4190
    Js5ArchiveSettings* Js5ArchiveSetSettings::GetByArchiveID(unsigned int arg1) const {
        if (field_8.size() <= arg1) {
            LogAssert(
                "archiveID < m_archiveIDArray.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ArchiveSetSettings.h", 51,
                nullptr);
        }
        uint64_t* puVar2 = &field_8[(unsigned long)arg1];
        return (Js5ArchiveSettings*)*puVar2;
    }

} // namespace jag
