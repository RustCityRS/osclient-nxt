// libs/game/runetek5/Version.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game {
    class Version {
    public:
        GetClientSubVersion();
        ConnectedServerMeetsVersion(int);
        GetClientVersion();
        static /* 8 bytes */ m_connectedServerVersion; // = 930
    };

    // 0x100f3d640, 8 bytes, __data
    Version::m_connectedServerVersion = 930;

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    Version::GetClientSubVersion();

    // 0x100562870, 32 bytes, inline, placed by class name and debug map
    // Version::ConnectedServerMeetsVersion(int)
    undefined8 Version::ConnectedServerMeetsVersion(int param_1) {
        return CONCAT71((int7)((ulong)PTR_m_connectedServerVersion_100ee6650 >> 8),
                        param_1 <= *(int*)PTR_m_connectedServerVersion_100ee6650);
    }

    // 0x1009f2210, 16 bytes, inline, placed by class name
    // Version::GetClientVersion()
    undefined8 Version::GetClientVersion() {
        return 930;
    }

} // namespace jag::game

namespace jag {
    // 0x1005628b0, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete<Js5ArchiveSetSettings>(Js5ArchiveSetSettings*&)
    void safe_delete<Js5ArchiveSetSettings>(Js5ArchiveSetSettings** param_1) {
        Js5ArchiveSetSettings* this;

        this = *param_1;
        if (this != (Js5ArchiveSetSettings*)0) {
            ~Js5ArchiveSetSettings();
            operator_delete(this);
        }
        *param_1 = (Js5ArchiveSetSettings*)0;
    }

    // 0x1005628e0, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete<Array<bool, eastl::allocator> >(Array<bool, eastl::allocator>*&)
    void safe_delete<Array<bool, eastl::allocator>>(Array** param_1) {
        Array<bool, eastl::allocator>* this;

        this = (Array<bool, eastl::allocator>*)*param_1;
        if (this != (Array<bool, eastl::allocator>*)0) {
            ~Array();
            operator_delete(this);
        }
        *param_1 = (Array*)0;
    }

} // namespace jag
