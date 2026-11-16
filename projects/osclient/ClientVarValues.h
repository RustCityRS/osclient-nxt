// projects/osclient/ClientVarValues.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class ClientVarValues {
    public:
        ~ClientVarValues();
        ClientVarValues();
        void InitVarcs();
        void InitVarcStrings();
        void InitVeccs();
        void LoadPermVars();
        void SetVarValueInt(int arg1, int arg2);
        uint32_t GetVarValueInt(int arg1) const;
        void SetVarValueString(int arg1, const eastl::string& str);
        void SetVarValueString(int arg1, eastl::string&& str);
        uint8_t* getVarValueString(int arg1) const;
        void ResetForNewLogin();
        void ResetTempVars();
        void SavePermVars() const;
        auto GetPrefsFileForWrite();
        auto GetPrefsFileForRead();
        void Service();
        bool ArePermVarsModified() const;
        StringVector* GetVeccValue(int arg1);
        void GetLegacyVarString(int arg1);
        void SetLegacyVarString(int arg1, const eastl::string& str);

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        bool* field_16;
        int field_24;
        uint8_t _unknown_28[60];
        uint8_t field_88;
        uint8_t _unknown_89[7];
        unsigned long field_96;
        uint8_t _unknown_104[24];
        int field_128;
        uint8_t _unknown_132[4];
    };

    // 0x10013bd60
    ClientVarValues::~ClientVarValues() {
        field_104.~Array();
        field_64.~Array();
    }

    // 0x100191260
    void ClientVarValues::GetLegacyVarString(int arg1) {
        field_64[(long)arg1];
    }

    // 0x100191280
    void ClientVarValues::SetLegacyVarString(int arg1, const eastl::string& str) {
        eastl::string* this_00 = &field_64[(long)arg1];
        *this_00 = str;
    }

    // 0x1001ac790
    auto ClientVarValues::ArePermVarsModified() const ::$_0::operator()<eastl::pair<int, rs2lib::StringVector>>(
        const eastl::pair<int, rs2lib::StringVector>& arg1) const {
        return ((this + 8))->GetFastUpdateLoopEnabled();
    }

} // namespace jag::oldscape
