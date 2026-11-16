// libs/hal/http/HTTPRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::http {
    class HTTPRequest {
    public:
        void AddHTTPHeader(const char* str1, const char* str2);
        void SetTotalTimeoutSeconds(int arg1);
        void GetSync(const eastl::string& str);
        void GetState() const;
        int GetErrorCode() const;
        int GetResponseCode() const;
        unsigned int* GetData() const;
        uint8_t* GetRedirectLocation();
        void Post(const eastl::string& str, eastl::vector<std::pair<char const*, char const*>> pairs);
        bool HasTimedOut() const;
        void SetFollowRedirects(bool arg1);
        void Abort();
        uint8_t* GetContentType() const;
        void GetURL() const;
        void SetProxyUserName(const char* str);
        void SetProxyPassword(const char* str);
        void Get(const eastl::string& str);
        bool IsRequestComplete() const;
        unsigned long CopyData(unsigned char* arg1, unsigned long arg2);
        unsigned long CopyHeader(unsigned char* arg1, unsigned long arg2);
        void AddFooter();
        void SetProgress(unsigned long arg1, unsigned long arg2);
        HTTPRequest(unsigned long arg1);
        ~HTTPRequest();
        bool IsAborted() const;
        void Get(const char* str);
        void Post(const char* str1, const char* str2);
        void GetSync(const char* str);
        void PostSync(const char* str1, const char* str2);
        void CurlRequest();
        void Post(const eastl::string& str1, const eastl::string& str2);
        void GetErrorInformation() const;

    private:
        uint8_t _unknown_0[136];
        uint8_t m_pData[4];
        uint8_t _unknown_140[52];
        unsigned long field_192;
        uint8_t _unknown_200[360];
        unsigned long field_560;
        unsigned long field_568;
        int field_576;
        int m_totalTimeoutSeconds;
        uint8_t m_hasTimedOut;
        bool m_followRedirects;
        uint8_t _unknown_586[6];
        clock_t field_592;
        uint8_t m_aborted;
        uint8_t _unknown_601[7];
        uint64_t m_responseCode;
        int m_errorCode;
        uint8_t _unknown_620[44];
    };

    // 0x10017a390
    void HTTPRequest::AddHTTPHeader(const char* str1, const char* str2) {
        fixed_string<char, 128> local_d8;
        local_d8.sprintf("%s: %s", str1, str2);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_100(str);
        field_104.push_back(local_100);
    }

    // 0x10017a4a0
    void HTTPRequest::SetTotalTimeoutSeconds(int arg1) {
        m_totalTimeoutSeconds = arg1;
    }

    // 0x10017a4b0
    void HTTPRequest::GetSync(const eastl::string& str) {
        GetSync((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
    }

    // 0x10017a570
    void HTTPRequest::GetState() const {
        operator_cast_to_HTTPRequestState();
    }

    // 0x10017a580
    int HTTPRequest::GetErrorCode() const {
        return m_currentValue;
    }

    // 0x10017a590
    int HTTPRequest::GetResponseCode() const {
        return m_gridSize;
    }

    // 0x10017a5a0
    unsigned int* HTTPRequest::GetData() const {
        return &m_mSAASampleCount;
    }

    // 0x1003af9a0
    void HTTPRequest::Post(const eastl::string& str, eastl::vector<std::pair<char const*, char const*>> pairs) {
        basic_string<char, BucketAllocatorEASTL> local_50;
        auto puVar1 = pairs->HeapBeginPtr();
        auto puVar2 = pairs->end();
        if (puVar1 != puVar2) {
            do {
                local_50.append_sprintf("&%s=%s", *puVar1, puVar1[1]);
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        char* str1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* str2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Post(str1, str2);
    }

    // 0x1003afa90
    bool HTTPRequest::HasTimedOut() const {
        return m_hasTimedOut;
    }

    // 0x1003b2ae0
    void HTTPRequest::SetFollowRedirects(bool arg1) {
        m_followRedirects = arg1;
    }

    // 0x1003b31f0
    void HTTPRequest::Abort() {
        m_aborted = 1;
    }

    // 0x1009f22b0
    void HTTPRequest::SetProxyUserName(const char* str) {
        (&field_40)->assign(str);
    }

    // 0x1009f22c0
    void HTTPRequest::SetProxyPassword(const char* str) {
        (&field_72)->assign(str);
    }

    // 0x100ad7720
    void HTTPRequest::Get(const eastl::string& str) {
        Get((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
    }

    // 0x100ad7fb0
    bool HTTPRequest::IsRequestComplete() const {
        memory_order in_ESI;

        return load(in_ESI) - 1U < 2;
    }

    // 0x100ad9a90
    bool HTTPRequest::IsAborted() const {
        return m_aborted;
    }

    // 0x100ba8b10
    void HTTPRequest::Post(const eastl::string& str1, const eastl::string& str2) {
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* str2_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Post(str1_00, str2_00);
    }

    // 0x100ba8b50
    void HTTPRequest::GetErrorInformation() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::http

namespace jag::oldscape {
    // 0x10017a5c0
    void
    PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(Array<unsigned char, BucketAllocatorEASTL>&& arg1) {
        new (this) PacketT(arg1);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10017a5e0
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g8() {
        gT<unsigned long long>(this);
    }

} // namespace jag
