// libs/js5/Js5ArchiveSetSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

#include "Js5ArchiveSetSettings.h"

namespace jag {
    // 0x1000b9960: Js5ArchiveSetSettings::GetMaxArchiveID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1009de970
    Js5ArchiveSetSettings::~Js5ArchiveSetSettings() {
        uint8_t* this_00 = &field_8;
        auto arg1 = this_00->HeapBeginPtr();
        auto ppMVar1 = this_00->end();
        for (; arg1 != ppMVar1; arg1 = arg1 + 1) {
            safe_delete<Js5ArchiveSettings>(arg1);
        }
        this_00->~vector();
    }

    // 0x1009de9f0
    void Js5ArchiveSetSettings::AddUpdateHandler() {}

    // 0x1009dea00
    void Js5ArchiveSetSettings::ArchivesUpdated() {}

    // 0x1009dea10
    void Js5ArchiveSetSettings::SetDiskCacheSize(EnumDiskCacheSize enumDiskCacheSize) {}

    // 0x1009dea20
    void Js5ArchiveSetSettings::Add(Js5ArchiveSettings& js5ArchiveSettings) {
        unsigned int uVar1 = js5ArchiveSettings.GetX();
        unsigned long arg1 = (unsigned long)uVar1;
        uint8_t* this_00 = &field_8;
        if (this_00->size() <= arg1) {
            this_00->resize((unsigned long)(uVar1 + 1));
        }
        long* plVar3 = (long*)(*this_00)[arg1];
        if (*plVar3 != 0) {
            LogAssert(
                "m_archiveIDArray[archiveID] == nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ArchiveSetSettings.cpp",
                50, "Js5ArchiveSetSettings: Tried to add an archive with an ID already added: %d",
                (unsigned long)uVar1);
        }
        if (m_maxArchiveID < uVar1) {
            m_maxArchiveID = uVar1;
        }
        uint64_t* puVar4 = (uint64_t*)(*this_00)[arg1];
        *puVar4 = js5ArchiveSettings;
    }

    // 0x1009deb50
    void Js5ArchiveSetSettings::GetStart(int& arg1) {
        arg1 = -1;
        GetNext(arg1);
    }

    // 0x1009deb70
    uint64_t Js5ArchiveSetSettings::GetNext(int& arg1) {
        long* plVar2;
        unsigned int uVar4;

        unsigned long arg1_00 = (unsigned long)(unsigned int)*arg1;
        uint8_t* this_00 = &field_8;
        do {
            uVar4 = (int)arg1_00 + 1;
            arg1_00 = (unsigned long)uVar4;
            if (this_00->size() <= arg1_00) {
                return 0;
            }
            plVar2 = (long*)(*this_00)[arg1_00];
        } while (*plVar2 == 0);
        arg1 = uVar4;
        uint64_t* puVar3 = (uint64_t*)(*this_00)[arg1_00];
        return *puVar3;
    }

} // namespace jag
