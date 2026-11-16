// projects/osclient/minimenu/MinimenuEntry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::minimenu {
    class MinimenuEntry {
    public:
        void GetVerb() const;
        void SetX(int arg1);
        void SetZ(int arg1);
        EnumOptionToggle R() const;
        void SetSubjectTypecode(long long arg1);
        bool IsGlobalEntry() const;
        void SetValues(const eastl::string& str, const MinimenuSubject& minimenuSubject, int arg3, int arg4, int arg5,
                       int arg6, int arg7);
        bool IsShiftClickable() const;
        uint8_t IgnoreSingleClickMode() const;
        void CopyValues(const MinimenuEntry& minimenuEntry);
        void SetSubjectName(const eastl::string& str);
        unsigned int Z() const;
        MinimenuEntry();
        ~MinimenuEntry();
        MinimenuEntry(const eastl::string& str, const MinimenuSubject& minimenuSubject, int arg3, int arg4, int arg5,
                      int arg6, int arg7);
        MinimenuEntry(const MinimenuEntry& minimenuEntry);
        int GetSubjectType() const;
        uint8_t* GetSubjectName() const;
        uint8_t* GetSubject() const;
        long long GetSubjectTypecode() const;
        uint32_t GetObjType() const;
        int GetObjCount() const;
        auto GetComponent() const;
        unsigned int X() const;
        int T() const;

    private:
        int field_0;
        int m_z;
        int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[68];
        int m_subjectType;
        uint8_t _unknown_92[4];
        long long m_subjectTypecode;
        int m_objCount;
        uint8_t _unknown_108[8];
    };

    // 0x10006e000
    void MinimenuEntry::SetSubjectTypecode(long long arg1) {
        m_subjectTypecode = arg1;
    }

    // 0x10006e670
    bool MinimenuEntry::IsGlobalEntry() const {
        return ((uint8_t)field_16 & 4) >> 2;
    }

    // 0x100073360
    bool MinimenuEntry::IsShiftClickable() const {
        return (uint8_t)field_16 & 1;
    }

    // 0x1000733a0
    uint8_t MinimenuEntry::IgnoreSingleClickMode() const {
        return ((uint8_t)field_16 & 2) >> 1;
    }

    // 0x100073820
    void MinimenuEntry::SetSubjectName(const eastl::string& str) {
        field_56 = str;
    }

    // 0x1000792f0
    MinimenuEntry::~MinimenuEntry() {
        field_56.~MinimenuSubject();
        field_24.~basic_string();
    }

    // 0x1000b27d0
    MinimenuEntry::MinimenuEntry(const MinimenuEntry& minimenuEntry) : field_16(minimenuEntry.field_16) {
        int iVar1 = minimenuEntry.m_z;
        int iVar2 = minimenuEntry.field_8;
        int iVar3 = minimenuEntry.field_12;
        field_0 = minimenuEntry.field_0;
        m_z = iVar1;
        field_8 = iVar2;
        field_12 = iVar3;
        new (&field_24) eastl::string(minimenuEntry.field_24);
        new (&field_56) MinimenuSubject(minimenuEntry.field_56);
    }

    // 0x1000b7900
    int MinimenuEntry::GetSubjectType() const {
        return m_streamCountLastMix;
    }

    // 0x1000b7910
    uint8_t* MinimenuEntry::GetSubjectName() const {
        return &field_56;
    }

    // 0x1000b7920
    long long MinimenuEntry::GetSubjectTypecode() const {
        return m_dataType;
    }

    // 0x1000b7a70
    uint32_t MinimenuEntry::GetObjType() const {
        return *(uint32_t*)((long)&field_104 + 4);
    }

    // 0x1000b7a80
    int MinimenuEntry::GetObjCount() const {
        return m_maxMapZ;
    }

    // 0x1000b7b20
    auto MinimenuEntry::GetComponent() const {
        auto result;
        result = field_112.lock(m_z, field_0);
        return result;
    }

} // namespace jag::oldscape::minimenu

namespace jag::game {
    // 0x1000b7900: BaseConfigTypeList::GetEntryCount() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectType() const

    // 0x1000b7910: LocTypeCustomisation::GetRematerialDest() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

} // namespace jag::game

namespace jag {
    // 0x1000292d0
    bool operator==
        <oldscape::rs2lib::worldmap::MapElement>(const shared_ptr<oldscape::rs2lib::worldmap::MapElement>& objType,
                                                 decltype(nullptr) arg2) {
        uint8_t bVar1 = objType.operator_cast_to_bool();
        return (bool)(bVar1 ^ 1);
    }

} // namespace jag

namespace jag::oldscape::rseven {
    // 0x1000b7920: OSRenderCore_TextureDataProvider::GetTexturesUncompressedMippedArchive() const has the same machine code as minimenu::MinimenuEntry::GetSubjectTypecode() const

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    // 0x1000b7a70: OSRenderCore_RenderThread_Common::GetNumVerts() const has the same machine code as minimenu::MinimenuEntry::GetObjType() const

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x1000b7a80: LayeredAnimationStateMachineLayerDescriptor::GetBlendType() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjCount() const

} // namespace jag::graphics
