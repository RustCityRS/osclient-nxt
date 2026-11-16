// libs/hal/http/HTTPRequest.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::http {
    class HTTPRequest {
    public:
        void AddHTTPHeader(char const*, char const*);
        void SetTotalTimeoutSeconds(int);
        void GetSync(eastl::string const&);
        void GetState() const;
        GetErrorCode() const;
        GetResponseCode() const;
        GetData() const;
        GetRedirectLocation();
        void Post(eastl::string const&, eastl::vector<std::pair<char const*, char const*>, eastl::allocator>);
        HasTimedOut() const;
        void SetFollowRedirects(bool);
        void Abort();
        GetContentType() const;
        GetURL() const;
        void SetProxyUserName(char const*);
        void SetProxyPassword(char const*);
        void Get(eastl::string const&);
        IsRequestComplete() const;
        ulong CopyData(unsigned char*, unsigned long);
        ulong CopyHeader(unsigned char*, unsigned long);
        void AddFooter();
        void SetProgress(unsigned long, unsigned long);
        HTTPRequest(unsigned long);
        ~HTTPRequest();
        IsAborted() const;
        void Get(char const*);
        void Post(char const*, char const*);
        void GetSync(char const*);
        void PostSync(char const*, char const*);
        void CurlRequest();
        void Post(eastl::string const&, eastl::string const&);
        void GetErrorInformation() const;

        // data members, from how the methods use this: 664 bytes
        char _unknown_0[160];
        undefined1 field_160; // offset 160
        char _unknown_161[31];
        ulong field_192; // offset 192
        char _unknown_200[360];
        ulong field_560;           // offset 560
        ulong field_568;           // offset 568
        int field_576;             // offset 576
        int m_totalTimeoutSeconds; // offset 580
        undefined1 m_hasTimedOut;  // offset 584
        bool m_followRedirects;    // offset 585
        char _unknown_586[6];
        clock_t field_592;    // offset 592
        undefined1 m_aborted; // offset 600
        char _unknown_601[7];
        undefined8 field_608; // offset 608
        int field_616;        // offset 616
        char _unknown_620[44];
    };

    // 0x10017a390, 272 bytes, inline, placed by class name and debug map
    // HTTPRequest::AddHTTPHeader(char const*, char const*)
    void HTTPRequest::AddHTTPHeader(char* param_1, char* param_2) {
        char* pcVar1;
        eastl::string local_100[32];
        allocator local_e0[8];
        fixed_string<char, 128, true, eastl::allocator> local_d8[168];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 128, true, eastl::allocator>::fixed_string(local_d8);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_d8, "%s: %s", param_1, param_2);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_e0, "EASTL basic_string");
        eastl::string::basic_string(local_100, pcVar1, local_e0);
        (&field_104, (basic_string*)local_100)->push_back();
        eastl::string::~basic_string(local_100);
        /* WARNING: Subroutine does not return */
        local_d8->~fixed_string();
    }

    // 0x10017a4a0, 16 bytes, inline, placed by class name and debug map
    // HTTPRequest::SetTotalTimeoutSeconds(int)
    void HTTPRequest::SetTotalTimeoutSeconds(int param_1) {
        m_totalTimeoutSeconds = param_1;
    }

    // 0x10017a4b0, 48 bytes, inline, placed by class name and debug map
    // HTTPRequest::GetSync(eastl::string const&)
    void HTTPRequest::GetSync(basic_string* param_1) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        GetSync((HTTPRequest*)param_1, pcVar1);
    }

    // 0x10017a570, 16 bytes, inline, placed by class name and debug map
    // HTTPRequest::GetState() const
    void HTTPRequest::GetState() {
        operator_cast_to_HTTPRequestState();
    }

    // 0x10017a580, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // HTTPRequest::GetErrorCode() const
    /* ui::Slider::GetCurrentValue() const */

    int ui::Slider::GetCurrentValue() {
        return m_currentValue;
    }

    // 0x10017a590, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // HTTPRequest::GetResponseCode() const
    /* graphics::TerrainPatch::GetGridSize() const */

    int graphics::TerrainPatch::GetGridSize() {
        return m_gridSize;
    }

    // 0x10017a5a0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // HTTPRequest::GetData() const
    /* graphics::RT7Core::GetMSAASampleCount() */

    uint* graphics::RT7Core::GetMSAASampleCount() {
        return &m_mSAASampleCount;
    }

    // 0x1003af9a0, 192 bytes, inline, placed by class name
    // HTTPRequest::Post(eastl::string const&, eastl::vector<std::pair<char const*, char const*>, eastl::allocator>)
    /* HTTPRequest::Post(eastl::string const&,
   eastl::vector<std::pair<char const*, char const*>, eastl::allocator>) */

    void HTTPRequest::Post(undefined8 param_2, Layout* param_3) {
        undefined8* puVar1;
        undefined8* puVar2;
        char* pcVar3;
        char* pcVar4;
        basic_string<char, BucketAllocatorEASTL> local_50[24];

        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        puVar1 = (undefined8*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(param_3);
        puVar2 = (undefined8*)param_3->end();
        if (puVar1 != puVar2) {
            do {
                eastl::basic_string<char, BucketAllocatorEASTL>::append_sprintf((char*)local_50, "&%s=%s", *puVar1,
                                                                                puVar1[1]);
                puVar1 = puVar1 + 2;
            } while (puVar1 != puVar2);
        }
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Post((HTTPRequest*)this, pcVar3, pcVar4);
        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_50);
    }

    // 0x1003afa90, 16 bytes, inline, placed by class name
    // HTTPRequest::HasTimedOut() const
    undefined1 HTTPRequest::HasTimedOut() {
        return m_hasTimedOut;
    }

    // 0x1003b2ae0, 16 bytes, inline, placed by class name
    // HTTPRequest::SetFollowRedirects(bool)
    void HTTPRequest::SetFollowRedirects(bool param_1) {
        m_followRedirects = param_1;
    }

    // 0x1003b31f0, 16 bytes, inline, placed by class name
    // HTTPRequest::Abort()
    void HTTPRequest::Abort() {
        m_aborted = 1;
    }

    // 0x1009f22b0, 16 bytes, inline, placed by class name
    // HTTPRequest::SetProxyUserName(char const*)
    void HTTPRequest::SetProxyUserName(char* param_1) {
        (&field_40, param_1)->assign();
    }

    // 0x1009f22c0, 16 bytes, inline, placed by class name
    // HTTPRequest::SetProxyPassword(char const*)
    void HTTPRequest::SetProxyPassword(char* param_1) {
        (&field_72, param_1)->assign();
    }

    // 0x100ad7720, 48 bytes, inline, placed by class name
    // HTTPRequest::Get(eastl::string const&)
    void HTTPRequest::Get(basic_string* param_1) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Get((HTTPRequest*)param_1, pcVar1);
    }

    // 0x100ad7fb0, 32 bytes, inline, placed by class name
    // HTTPRequest::IsRequestComplete() const
    undefined4 HTTPRequest::IsRequestComplete() {
        int iVar1;

        iVar1 = std::__atomic_base<HTTPRequestState, false>::load();
        return CONCAT31((int3)(iVar1 - 1U >> 8), iVar1 - 1U < 2);
    }

    // 0x100ad9a90, 16 bytes, inline, placed by class name
    // HTTPRequest::IsAborted() const
    undefined1 HTTPRequest::IsAborted() {
        return m_aborted;
    }

    // 0x100ba8b10, 64 bytes, inline, placed by class name
    // HTTPRequest::Post(eastl::string const&, eastl::string const&)
    void HTTPRequest::Post(basic_string* param_1, basic_string* param_2) {
        char* pcVar1;
        char* pcVar2;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        Post((HTTPRequest*)param_1, pcVar1, pcVar2);
    }

    // 0x100ba8b50, 32 bytes, inline, placed by class name
    // HTTPRequest::GetErrorInformation() const
    void HTTPRequest::GetErrorInformation() {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag::http

namespace jag::oldscape {
    // 0x10017a5c0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::PacketT(Array<unsigned char, BucketAllocatorEASTL>&&)
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::PacketT(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>* this, Array* param_1) {
        new (this) PacketT<Array<unsigned char, BucketAllocatorEASTL>>(param_1);
    }

    // 0x10017a5f0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::~PacketJ(): jumps straight to the base-object destructor

} // namespace jag::oldscape

namespace jag {
    // 0x10017a5e0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g8()
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g8(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        gT<unsigned long long>(this);
    }

} // namespace jag
