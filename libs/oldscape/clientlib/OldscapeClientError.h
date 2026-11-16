// libs/oldscape/clientlib/OldscapeClientError.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class OldscapeClientError {
    public:
        void ReportError(char const*, callstack::Callstack const*);
        OldscapeClientError();
        ~OldscapeClientError();
        Get();
        void SetUserName(eastl::string const&);
        void SetClientType(int);
        void SetBaseURL(eastl::string const&);
        void ReportErrorImpl(char const*, callstack::Callstack const*);
        OldscapeClientError* ParseStackTrace(callstack::Callstack const&);
        static /* 8 bytes */ m_singletonOK;

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[64];
        undefined4 field_64; // offset 64
        char _unknown_68[4];
    };

    // 0x100189da0, 64 bytes, inline, placed by class name and debug map
    // OldscapeClientError::ReportError(char const*, callstack::Callstack const*)
    void OldscapeClientError::ReportError(char* param_1, Callstack* param_2) {
        OldscapeClientError* this;

        if (m_singletonOK != '\0') {
            this = (OldscapeClientError*)Get();
            ReportErrorImpl(this, param_1, param_2);
        }
    }

    // 0x100398820, 80 bytes, inline, placed by class name
    // OldscapeClientError::SetBaseURL(eastl::string const&)::$_0::operator()(char const*) const
    /* OldscapeClientError::SetBaseURL(eastl::string
   const&)::$_0::TEMPNAMEPLACEHOLDERVALUE(char const*) const */

    void OldscapeClientError::SetBaseURL(eastl::stringconst&)::$_0::operator()(char* param_1) {
        Callstack local_340[50];

        callstack::Callstack::Callstack(local_340);
        local_340->Capture(0);
        ReportError((char*)this, local_340);
    }

} // namespace jag::oldscape
