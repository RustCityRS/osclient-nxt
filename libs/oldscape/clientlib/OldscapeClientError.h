// libs/oldscape/clientlib/OldscapeClientError.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class OldscapeClientError {
    public:
        void ReportError(const char* str, const callstack::Callstack* callstack);
        OldscapeClientError();
        ~OldscapeClientError();
        void Get();
        void SetUserName(const eastl::string& str);
        void SetClientType(int arg1);
        void SetBaseURL(const eastl::string& str);
        void ReportErrorImpl(const char* str, const callstack::Callstack* callstack);
        auto ParseStackTrace(const callstack::Callstack& callstack);
        static int64_t m_singletonOK;

    private:
        uint8_t _unknown_0[64];
        uint32_t field_64;
        uint8_t _unknown_68[4];
    };

    // 0x100189da0
    void OldscapeClientError::ReportError(const char* str, const callstack::Callstack* callstack) {
        if (m_singletonOK != '\0') {
            ReportErrorImpl((OldscapeClientError*)Get(), str, callstack);
        }
    }

    // 0x100398820
    void OldscapeClientError::SetBaseURL(eastl::string const&)::$_0::operator()(const char* str) const {

        Callstack local_340;
        local_340.Capture(0);
        ReportError((char*)this, &local_340);
    }

} // namespace jag::oldscape
