// projects/osclient/objtags/ObjTagManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::objtags {
    class ObjTagManager {
    public:
        ObjTagManager();
        ~ObjTagManager();
        void SaveTags();
        void ResetAll();
        void ClearGroup(int arg1);
        bool IsGroupValid(int arg1);
        void AddTag(unsigned int arg1, const eastl::string& str, int arg3);
        unsigned long HasTag(unsigned int arg1, const eastl::string& str, int arg3);
        unsigned long DeleteTag(const eastl::string& str, int arg2);
        uint64_t RemoveTagFromObj(unsigned int arg1, const eastl::string& str, int arg3);
        uint32_t FindTagsById(unsigned int arg1, int arg2);
        uint32_t FindTagsByGroup(int arg1);
        uint32_t FindIdsByTag(const eastl::string& str, int arg2);
        uint64_t FindIdsByGroup(int arg1);
        char* GetNextTag();
        void RestartFindTags();
        uint32_t GetNextId();
        void RestartFindIds();
        unsigned long AreTagsEmpty();
        void LoadTags();
        void DeserializeTags(Json::Value& value);
        ObjTagManager* SerializeTags();

    private:
        uint8_t _unknown_0[1792];
        unsigned long field_1792;
        unsigned long field_1800;
        uint8_t _unknown_1808[40];
    };

    // 0x10001f140
    bool ObjTagManager::IsGroupValid(int arg1) {
        return (unsigned int)arg1 < 16;
    }

} // namespace jag::oldscape::objtags
