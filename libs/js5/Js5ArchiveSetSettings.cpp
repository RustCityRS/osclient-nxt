// libs/js5/Js5ArchiveSetSettings.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

#include "Js5ArchiveSetSettings.h"

namespace jag {
    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    Js5ArchiveSetSettings::GetMaxArchiveID() const;

    // 0x1009de970, 96 bytes, base-object destructor, placed by class name and debug map
    // Js5ArchiveSetSettings::~Js5ArchiveSetSettings()
    void Js5ArchiveSetSettings::~Js5ArchiveSetSettings() {
        Js5ArchiveSettings** ppJVar1;
        Js5ArchiveSettings** ppJVar2;
        undefined1* this_00;

        this_00 = &field_8;
        ppJVar1 = (Js5ArchiveSettings**)this_00->HeapBeginPtr();
        ppJVar2 = (Js5ArchiveSettings**)this_00->end();
        for (; ppJVar1 != ppJVar2; ppJVar1 = ppJVar1 + 1) {
            safe_delete<Js5ArchiveSettings>(ppJVar1);
        }
        this_00->~vector();
    }

    // 0x1009de9e0, 16 bytes, complete-object destructor, placed by class name and debug map
    // Js5ArchiveSetSettings::~Js5ArchiveSetSettings(): jumps straight to the base-object destructor

    // 0x1009de9f0, 16 bytes, placed by class name and debug map
    // Js5ArchiveSetSettings::AddUpdateHandler()
    void Js5ArchiveSetSettings::AddUpdateHandler() {}

    // 0x1009dea00, 16 bytes, placed by class name and debug map
    // Js5ArchiveSetSettings::ArchivesUpdated()
    void Js5ArchiveSetSettings::ArchivesUpdated() {}

    // 0x1009dea10, 16 bytes, placed by class name and debug map
    // Js5ArchiveSetSettings::SetDiskCacheSize(EnumDiskCacheSize)
    void Js5ArchiveSetSettings::SetDiskCacheSize() {}

    // 0x1009dea20, 160 bytes, placed by class name and debug map
    // Js5ArchiveSetSettings::Add(Js5ArchiveSettings&)
    void Js5ArchiveSetSettings::Add(Js5ArchiveSettings* param_1) {
        undefined1* this_00;
        uint uVar1;
        ulong uVar2;
        long* plVar3;
        undefined8* puVar4;
        ulong uVar5;

        uVar1 = param_1->GetX();
        uVar5 = (ulong)uVar1;
        this_00 = &field_8;
        uVar2 = this_00->size();
        if (uVar2 <= uVar5) {
            eastl::vector<Js5ArchiveSettings*, eastl::allocator>::resize((ulong)this_00);
        }
        plVar3 = (long*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
            (vector<Js5ArchiveSettings*, eastl::allocator>*)this_00, uVar5);
        if (*plVar3 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_archiveIDArray[archiveID] == nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/js5/Js5ArchiveSetSettings.cpp",
                50, "Js5ArchiveSetSettings: Tried to add an archive with an ID already added: %d", (ulong)uVar1);
        }
        if (field_0 < uVar1) {
            field_0 = uVar1;
        }
        puVar4 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
            (vector<Js5ArchiveSettings*, eastl::allocator>*)this_00, uVar5);
        *puVar4 = param_1;
    }

    // 0x1009deb50, 32 bytes, placed by class name and debug map
    // Js5ArchiveSetSettings::GetStart(int&)
    void Js5ArchiveSetSettings::GetStart(int* param_1) {
        *param_1 = -1;
        GetNext(this, param_1);
    }

    // 0x1009deb70, 96 bytes, placed by class name and debug map
    // Js5ArchiveSetSettings::GetNext(int&)
    undefined8 Js5ArchiveSetSettings::GetNext(int* param_1) {
        ulong uVar1;
        long* plVar2;
        undefined8* puVar3;
        uint uVar4;
        ulong uVar5;
        undefined1* this_00;

        uVar5 = (ulong)(uint)*param_1;
        this_00 = &field_8;
        do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar4;
            uVar1 = this_00->size();
            if (uVar1 <= uVar5) {
                return 0;
            }
            plVar2 = (long*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
                (vector<Js5ArchiveSettings*, eastl::allocator>*)this_00, uVar5);
        } while (*plVar2 == 0);
        *param_1 = uVar4;
        puVar3 = (undefined8*)eastl::vector<Js5ArchiveSettings*, eastl::allocator>::operator[](
            (vector<Js5ArchiveSettings*, eastl::allocator>*)this_00, uVar5);
        return *puVar3;
    }

} // namespace jag
