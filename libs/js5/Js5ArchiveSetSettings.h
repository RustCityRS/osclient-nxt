// libs/js5/Js5ArchiveSetSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class Js5ArchiveSetSettings {
    public:
        uint GetMaxArchiveID() const;
        Js5ArchiveSetSettings();
        ~Js5ArchiveSetSettings();
        void AddUpdateHandler();
        void ArchivesUpdated();
        void SetDiskCacheSize(EnumDiskCacheSize);
        void Add(Js5ArchiveSettings&);
        void GetStart(int&);
        GetNext(int&);
        GetByArchiveID(unsigned int) const;

        // data members, from how the methods use this: 48 bytes
        uint m_maxArchiveID; // offset 0
        char _unknown_4[4];
        undefined1 field_8; // offset 8
        char _unknown_9[31];
        undefined4 field_40; // offset 40
        char _unknown_44[4];
    };

    // 0x10018a070, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Js5ArchiveSetSettings::Js5ArchiveSetSettings(): jumps straight to the base-object constructor

    // 0x10019b740, 48 bytes, base-object constructor, inline, placed by class name
    // Js5ArchiveSetSettings::Js5ArchiveSetSettings()
    void Js5ArchiveSetSettings::Js5ArchiveSetSettings() {
        m_maxArchiveID = 0;
        new (&field_8) eastl::vector<Js5ArchiveSettings*, eastl::allocator>();
        field_40 = 0;
    }

    // 0x1009e4190, 80 bytes, inline, placed by class name
    // Js5ArchiveSetSettings::GetByArchiveID(unsigned int) const
    undefined8 Js5ArchiveSetSettings::GetByArchiveID(uint param_1) {
        ulong uVar1;
        undefined8* puVar2;

        uVar1 = (&field_8)->size();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "archiveID < m_archiveIDArray.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ArchiveSetSettings.h", 51,
                (char*)0);
        }
        puVar2 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
            (vector<Js5ArchiveSettings*, eastl::allocator>*)&field_8, (ulong)param_1);
        return *puVar2;
    }

} // namespace jag
