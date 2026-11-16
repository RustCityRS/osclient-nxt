// projects/osclient/ClientVarValues.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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
        void SetVarValueInt(int, int);
        GetVarValueInt(int) const;
        void SetVarValueString(int, eastl::string const&);
        void SetVarValueString(int, eastl::string&&);
        getVarValueString(int) const;
        void ResetForNewLogin();
        void ResetTempVars();
        void SavePermVars() const;
        ClientVarValues* GetPrefsFileForWrite();
        ClientVarValues* GetPrefsFileForRead();
        void Service();
        ArePermVarsModified() const;
        long GetVeccValue(int);
        void GetLegacyVarString(int);
        void SetLegacyVarString(int, eastl::string const&);

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[8];
        ulong field_8;    // offset 8
        signed* field_16; // offset 16
        char _unknown_24[64];
        undefined1 field_88; // offset 88
        char _unknown_89[7];
        ulong field_96; // offset 96
        char _unknown_104[32];
    };

    // 0x10013bd50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClientVarValues::~ClientVarValues(): jumps straight to the base-object destructor

    // 0x10013bd60, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // ClientVarValues::~ClientVarValues()
    void ClientVarValues::~ClientVarValues() {
        (&field_128)->~vector_map();
        (&field_104)->~Array();
        (&field_64)->~Array();
        (&field_24)->~vector_map();
        ~Array();
    }

    // 0x100191260, 32 bytes, inline, placed by class name
    // ClientVarValues::GetLegacyVarString(int)
    void ClientVarValues::GetLegacyVarString(int param_1) {
        Array<eastl::string, eastl::allocator>::operator[]((Array<eastl::string, eastl::allocator>*)&field_64,
                                                           (long)param_1);
    }

    // 0x100191280, 48 bytes, inline, placed by class name
    // ClientVarValues::SetLegacyVarString(int, eastl::string const&)
    void ClientVarValues::SetLegacyVarString(int param_1, basic_string* param_2) {
        eastl::string* this_00;

        this_00 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
            (Array<eastl::string, eastl::allocator>*)&field_64, (long)param_1);
        eastl::string::operator=(this_00, param_2);
    }

    // 0x1001ac790, 16 bytes, inline, placed by class name
    // auto ClientVarValues::ArePermVarsModified() const::$_0::operator()<eastl::pair<int, rs2lib::StringVector> >(eastl::pair<int, rs2lib::StringVector> const&) const
    /* auto ClientVarValues::ArePermVarsModified()
   const::$_0::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<int, rs2lib::StringVector>
   const&) const */

    _func_ArePermVarsModified* const ::$_0::operator()(pair * param_1) {
        bool bVar1;
        undefined7 extraout_var;

        bVar1 = ((this + 8))->GetFastUpdateLoopEnabled();
        return (_func_ArePermVarsModified*)CONCAT71(extraout_var, bVar1);
    }

} // namespace jag::oldscape
