// libs/game/runetek5/Version.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game {
    class Version {
    public:
        uint64_t GetClientSubVersion();
        void ConnectedServerMeetsVersion(int arg1);
        void GetClientVersion();
        static int64_t m_connectedServerVersion; // = 930

        uint8_t _unknown_0[1];
    };

    // 0x100f3d640
    int64_t Version::m_connectedServerVersion = 930;

    // 0x100269960: Version::GetClientSubVersion() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x100562870
    void Version::ConnectedServerMeetsVersion(int arg1) {
        return arg1 <= *(int*)PTR_m_connectedServerVersion_100ee6650;
    }

    // 0x1009f2210
    void Version::GetClientVersion() {
        return 930;
    }

} // namespace jag::game

namespace jag {
    // 0x1005628b0
    void safe_delete<Js5ArchiveSetSettings>(Js5ArchiveSetSettings*& arg1) {
        Js5ArchiveSetSettings* js5ArchiveSetSettings = arg1;
        if (js5ArchiveSetSettings != nullptr) {
            js5ArchiveSetSettings->~Js5ArchiveSetSettings();
            operator delete(js5ArchiveSetSettings);
        }
        arg1 = nullptr;
    }

    // 0x1005628e0
    void safe_delete<Array<bool>>(Array<bool>*& arg1) {
        Array<bool>* array = (Array<bool>*)*arg1;
        if (array != nullptr) {
            array->~Array();
            operator delete(array);
        }
        arg1 = nullptr;
    }

} // namespace jag
