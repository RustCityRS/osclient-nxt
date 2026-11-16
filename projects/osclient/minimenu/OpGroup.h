// projects/osclient/minimenu/OpGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class OpGroup {
    public:
        bool operator==(const OpGroup& opGroup) const;
        OpGroup(const OpGroup& opGroup);
        unsigned long IsBlank() const;
        uint64_t MatchPattern(const OpGroup& opGroup, bool arg2);
        auto MakeCommon(minimenu::MinimenuSubjType minimenuSubjType, const eastl::string& str,
                        const eastl::fixed_vector<eastl::string, 5ul>& strs);
        OpGroup();
        auto Create(const configdecoder::LocType& locType);
        auto Create(const configdecoder::NpcType& npcType);
        auto Create(const configdecoder::ObjType& objType);
        auto Create(const shared_ptr<rs2lib::IfType>& ifType);
        auto Create(const ClientNpc& clientNpc);
        auto Create(const ClientObj& clientObj);
        auto Create(const eastl::string& str, bool arg2);
        OpGroup(OpGroup&& opGroup);
        auto ToString() const;
        ~OpGroup();
        static eastl::vector<char> m_reservedChars;

    private:
        unsigned int field_0;
        uint8_t _unknown_4[332];
    };

    // 0x100034bc0
    bool OpGroup::operator==(const OpGroup& opGroup) const {
        bool bVar1;

        if ((field_0 == opGroup.field_0) && (bVar1 = field_8 == opGroup.field_8, bVar1)) {
            bVar1 = &field_40 == &opGroup.field_40;
            return bVar1;
        }
        return false;
    }

    // 0x100034de0
    OpGroup::OpGroup(const OpGroup& opGroup)
        : field_0(opGroup.field_0), field_8(opGroup.field_8), field_40(opGroup.field_40) {}

    // 0x1000794e0
    OpGroup::OpGroup() : field_0(0) {

        new (&field_8) eastl::string("");
        new (&field_40) eastl::string("");
        new (&field_72) eastl::string("");
        new (&field_104) eastl::string("");
        new (&field_136) eastl::string("");
        new (&field_168) eastl::string("");
        new (&field_200) eastl::string("");
        new (&field_232) eastl::string("");
        new (&field_264) eastl::string("");
        new (&field_296) eastl::string("");
        new (&field_328) eastl::string("");
    }

    // 0x100079740
    OpGroup::OpGroup(OpGroup&& opGroup)
        : field_0(opGroup.field_0), field_8(opGroup.field_8), field_40(opGroup.field_40) {}

    // 0x100124f70
    OpGroup::~OpGroup() {
        field_40.~array();
        field_8.~basic_string();
    }

} // namespace jag::oldscape
