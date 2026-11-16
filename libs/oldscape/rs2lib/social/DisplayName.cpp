// libs/oldscape/rs2lib/social/DisplayName.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "DisplayName.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1016af930
    hash<eastl::basic_string<char, BucketAllocatorEASTL>> DisplayName::m_hasher;

    // 0x1000753f0: DisplayName::~DisplayName() has the same machine code as ConsoleCommandHelp::~ConsoleCommandHelp()

    // 0x10007d0d0: DisplayName::operator=(DisplayName&&) has the same machine code as ConsoleCommandHelp::operator=(ConsoleCommandHelp&&)

    // 0x100258e90
    DisplayName::DisplayName(const eastl::string& str, NameSpace nameSpace) : eastl::string(str) {
        field_32 = DisplayNameTools::ToBaseDisplayName(str, nameSpace);
    }

    // 0x100259100
    DisplayName::DisplayName(const eastl::string& str) : eastl::string(str) {
        field_32 = DisplayNameTools::ToBaseDisplayName(str, 0);
    }

    // 0x100259150
    DisplayName::DisplayName(eastl::string&& str, NameSpace nameSpace) : eastl::string(str) {

        auto local_40 = DisplayNameTools::ToBaseDisplayName(*this, nameSpace);
        field_32 = &local_40;
    }

    // 0x1002591f0
    eastl::string* DisplayName::GetDisplayName() const {
        return (eastl::string*)this;
    }

    // 0x100259200
    uint8_t* DisplayName::GetBaseDisplayName() const {
        return &field_32;
    }

    // 0x100259210
    uint64_t DisplayName::HashCode() const {
        bool cVar1 = field_32.empty();
        uint64_t uVar2 = 0;
        if (!cVar1) {
            uVar2 = eastl::hash<eastl::basic_string<char, BucketAllocatorEASTL>>::operator()(
                (hash<eastl::basic_string<char, BucketAllocatorEASTL>>*)&m_hasher, (eastl::string*)&field_32);
        }
        return uVar2;
    }

    // 0x100259250
    void DisplayName::ToString() const {
        GetDisplayName();
    }

    // 0x100259260
    unsigned int DisplayName::CompareTo(const DisplayName& displayName) const {
        unsigned int uVar3;
        char* pcVar4;
        char* pcVar5;

        bool cVar1 = field_32.empty();
        uint8_t bVar2 = displayName.field_32.empty();
        if (!cVar1) {
            uVar3 = 4294967295;
            if (bVar2 == 0) {
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar3 = _strcmp(pcVar4, pcVar5);
            }
        } else {
            uVar3 = (unsigned int)(bVar2 ^ 1);
        }
        return uVar3;
    }

    // 0x1002592d0
    void DisplayName::operator==(const DisplayName& displayName) const {
        field_32 == displayName.field_32;
    }

} // namespace jag::oldscape::rs2lib::social
