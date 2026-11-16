// projects/osclient/objtags/ObjTagManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::objtags {
    class ObjTagManager {
    public:
        ObjTagManager();
        ~ObjTagManager();
        void SaveTags();
        void ResetAll();
        void ClearGroup(int);
        bool IsGroupValid(int);
        void AddTag(unsigned int, eastl::string const&, int);
        ulong HasTag(unsigned int, eastl::string const&, int);
        ulong DeleteTag(eastl::string const&, int);
        RemoveTagFromObj(unsigned int, eastl::string const&, int);
        ulong FindTagsById(unsigned int, int);
        FindTagsByGroup(int);
        ulong FindIdsByTag(eastl::string const&, int);
        FindIdsByGroup(int);
        char* GetNextTag();
        void RestartFindTags();
        GetNextId();
        void RestartFindIds();
        ulong AreTagsEmpty();
        void LoadTags();
        void DeserializeTags(Json::Value&);
        SerializeTags();

        // data members, from how the methods use this: 1848 bytes
        char _unknown_0[1792];
        ulong field_1792; // offset 1792
        ulong field_1800; // offset 1800
        char _unknown_1808[40];
    };

    // 0x10001f140, 16 bytes, inline, placed by class name and debug map
    // ObjTagManager::IsGroupValid(int)
    bool ObjTagManager::IsGroupValid(int param_1) {
        return (uint)param_1 < 16;
    }

} // namespace jag::oldscape::objtags
