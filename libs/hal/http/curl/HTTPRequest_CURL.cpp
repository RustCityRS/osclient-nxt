// libs/hal/http/curl/HTTPRequest_CURL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.http

#include "libs/hal/http/HTTPRequest.h"

namespace jag::http {
    class HTTPGlobalState {
    public:
        HTTPGlobalState();
        ~HTTPGlobalState();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100ad9580, 16 bytes, base-object constructor, placed by debug map only (low confidence)
    // HTTPGlobalState::HTTPGlobalState()
    void HTTPGlobalState::HTTPGlobalState() {
        _curl_global_init(3);
    }

    // 0x100ad9590, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // HTTPGlobalState::HTTPGlobalState(): jumps straight to the base-object constructor

    // 0x100ad95a0, 16 bytes, base-object destructor, placed by debug map only (low confidence)
    // HTTPGlobalState::~HTTPGlobalState()
    void HTTPGlobalState::~HTTPGlobalState() {
        _curl_global_cleanup();
    }

    // 0x100ad95b0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // HTTPGlobalState::~HTTPGlobalState(): jumps straight to the base-object destructor

    // 0x100ad95c0, 464 bytes, base-object constructor, placed by class name and debug map
    // HTTPRequest::HTTPRequest(unsigned long)
    void HTTPRequest::HTTPRequest(ulong param_1) {
        std::atomic<HTTPRequestState>::atomic();
        new (&field_8) eastl::string();
        new (&field_40) eastl::string();
        new (&field_72) eastl::string();
        new (&field_104) eastl::vector<eastl::string, eastl::allocator>();
        new (m_pData) Array<unsigned char, eastl::allocator>();
        new (&field_160) eastl::vector<unsigned char, eastl::allocator>();
        field_192 = param_1;
        new (&field_200) eastl::string();
        new (&field_232) eastl::string();
        new (&field_264) eastl::fixed_string<char, 256, true, eastl::allocator>();
        field_560 = 0;
        field_568 = 0;
        field_576 = 0;
        m_totalTimeoutSeconds = 10;
        m_hasTimedOut = 0;
        m_followRedirects = true;
        field_592 = 0;
        m_aborted = 0;
        m_responseCode = 0;
        m_errorCode = 0;
        new (&field_624) std::future<void>();
        new (&field_632) eastl::string();
    }

    // 0x100ad97c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HTTPRequest::HTTPRequest(unsigned long): jumps straight to the base-object constructor

    // 0x100ad97d0, 352 bytes, base-object destructor, placed by class name and debug map
    // HTTPRequest::~HTTPRequest()
    void HTTPRequest::~HTTPRequest() {
        if ((&field_624)->valid() != '\0') {
            std::future<void>::wait();
        }
        if (operator_cast_to_HTTPRequestState() == 3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_state != HTTPRequestState::WAITING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      102, (char*)0);
        }
        (&field_632)->~basic_string();
        (&field_624)->~future();
        /* WARNING: Subroutine does not return */
        (&field_264)->~fixed_string();
    }

    // 0x100ad9960, 16 bytes, complete-object destructor, placed by class name and debug map
    // HTTPRequest::~HTTPRequest(): jumps straight to the base-object destructor

    // 0x100ad9970, 96 bytes, placed by debug map only (low confidence)
    // CurlWriteDataCallback(unsigned char*, unsigned long, unsigned long, void*)
    ulong CurlWriteDataCallback(uchar* param_1, ulong param_2, ulong param_3, void* param_4) {
        if (param_4 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("userdata != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      107, (char*)0);
        }
        param_4->CopyData(param_1, param_3 * param_2);
        return param_3 * param_2;
    }

    // 0x100ad99d0, 96 bytes, placed by debug map only (low confidence)
    // CurlWriteHeaderDataCallback(unsigned char*, unsigned long, unsigned long, void*)
    ulong CurlWriteHeaderDataCallback(uchar* param_1, ulong param_2, ulong param_3, void* param_4) {
        if (param_4 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("userdata != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      114, (char*)0);
        }
        param_4->CopyHeader(param_1, param_3 * param_2);
        return param_3 * param_2;
    }

    // 0x100ad9a30, 96 bytes, placed by debug map only (low confidence)
    // CurlXFerInfoCallback(void*, unsigned long, unsigned long, unsigned long, unsigned long)
    undefined1 CurlXFerInfoCallback(void* param_1, ulong param_2, ulong param_3, ulong param_4, ulong param_5) {
        if (param_1 == (void*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("requestData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      122, (char*)0);
        }
        param_1->SetProgress(param_3, param_2);
        return param_1->IsAborted();
    }

    // 0x100ad9aa0, 80 bytes, placed by neighbouring functions
    // CurlProgressCallback(void*, double, double, double, double)
    void CurlProgressCallback(void* param_1, double param_2, double param_3, double param_4, double param_5) {
        CurlXFerInfoCallback(param_1, (long)param_2 >> 63 & (long)(param_2 - 9.223372036854776e+18) | (long)param_2,
                             (long)(ulong)param_3 >> 63 & (long)(param_3 - 9.223372036854776e+18) | (ulong)param_3,
                             (ulong)param_3, (long)(param_3 - 9.223372036854776e+18));
    }

    // 0x100ad9af0, 32 bytes, placed by class name and debug map
    // HTTPRequest::Get(char const*)
    void HTTPRequest::Get(char* param_1) {
        Post(this, param_1, "");
    }

    // 0x100ad9b10, 256 bytes, placed by class name and debug map
    // HTTPRequest::Post(char const*, char const*)
    void HTTPRequest::Post(char* param_1, char* param_2) {
        undefined1* this_00;
        char cVar1;
        Layout* this_01;
        vector* pvVar4;
        char* pcVar5;
        AutoSingleton<ThreadPoolSingleton>* this_02;
        undefined1 local_38[8];
        HTTPRequest* local_30;

        if (std::__atomic_base<HTTPRequestState, false>::exchange() != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("oldState == HTTPRequestState::NOTSENT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      149, (char*)0);
        }
        (&field_8, param_1)->assign();
        (&field_632, param_2)->assign();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        this_00 = &field_624;
        this_02 = (AutoSingleton<ThreadPoolSingleton>*)this_00;
        if (this_00->valid() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_future.valid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      160, (char*)0);
        }
        pcVar5 = "cURL-POST";
        if (cVar1 != '\0') {
            pcVar5 = "cURL-GET";
        }
        this_01 = (Layout*)this_02->Instance();
        pvVar4 = eastl::string::Layout::SSOBeginPtr(this_01, (type*)param_2);
        local_30 = this;
        ThreadPool::AddTask<HTTPRequest::Post(char const*, char const*)::__0>((ThreadPool*)local_38, (char*)pvVar4,
                                                                              (__0*)pcVar5);
        std::future<void>::operator=((future<void>*)this_00, (future*)local_38);
        local_38->~future();
    }

    // 0x100ad9c10, 32 bytes, placed by class name and debug map
    // HTTPRequest::GetSync(char const*)
    void HTTPRequest::GetSync(char* param_1) {
        PostSync(this, param_1, "");
    }

    // 0x100ad9c30, 160 bytes, placed by class name and debug map
    // HTTPRequest::PostSync(char const*, char const*)
    void HTTPRequest::PostSync(char* param_1, char* param_2) {
        if (std::__atomic_base<HTTPRequestState, false>::exchange() != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("oldState == HTTPRequestState::NOTSENT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      182, (char*)0);
        }
        (&field_8, param_1)->assign();
        (&field_632, param_2)->assign();
        if ((&field_624)->valid() != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_future.valid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      187, (char*)0);
        }
        CurlRequest(this);
    }

    // 0x100ad9ea0, 1600 bytes, placed by class name and debug map
    // HTTPRequest::CurlRequest()
    void HTTPRequest::CurlRequest() {
        undefined1* this_00;
        undefined8* puVar1;
        char cVar2;
        int iVar3;
        undefined8 uVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        undefined8 uVar8;
        char* pcVar10;
        undefined8 uVar11;
        undefined* puVar12;
        undefined4 uVar13;
        undefined8 in_stack_fffffffffffffc70;
        undefined1 local_380[8];
        undefined1* local_378;
        undefined* local_370;
        char* local_368;
        fixed_string<char, 512, true, eastl::allocator> local_360[552];
        undefined1 local_138[256];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        m_responseCode = 0;
        m_errorCode = 0;
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar2 != '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                                "HTTPRequest_CURL.cpp",
                                218, "No URL provided for curl request.");
            std::atomic<HTTPRequestState>::operator=((atomic<HTTPRequestState>*)this, 2);
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        lVar5 = _curl_easy_init();
        if (lVar5 == 0) {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                                "HTTPRequest_CURL.cpp",
                                230, "curl_easy_init() failed to initialise.");
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                            "HTTPRequest_CURL.cpp",
                            231, (char*)0);
        }
        local_138[0] = 0;
        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        _curl_easy_setopt(lVar5, 10002, uVar4);
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar2 == '\0') {
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            _curl_easy_setopt(lVar5, 10015, uVar4);
        }
        _curl_easy_setopt(lVar5, 10010, local_138);
        _curl_easy_setopt(lVar5, 43, 0);
        _curl_easy_setopt(lVar5, 20219, CurlXFerInfoCallback);
        _curl_easy_setopt(lVar5, 10057, this);
        _curl_easy_setopt(lVar5, 20056, CurlProgressCallback);
        _curl_easy_setopt(lVar5, 10057, this);
        _curl_easy_setopt(lVar5, 99, 1);
        _curl_easy_setopt(lVar5, 20094, CurlDebugPrintFunction);
        _curl_easy_setopt(lVar5, 41, 0);
        _curl_easy_setopt(lVar5, 64, 0);
        _curl_easy_setopt(lVar5, 20011, CurlWriteDataCallback);
        _curl_easy_setopt(lVar5, 10001, this);
        _curl_easy_setopt(lVar5, 20079, CurlWriteHeaderDataCallback);
        _curl_easy_setopt(lVar5, 10029, this);
        _curl_easy_setopt(lVar5, 52, m_followRedirects);
        _curl_easy_setopt(lVar5, 13, m_totalTimeoutSeconds);
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_360);
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        local_378 = &field_8;
        if (cVar2 == '\0') {
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_360, "%s:%s", uVar4, uVar8);
            uVar4 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
            _curl_easy_setopt(lVar5, 10006, uVar4);
        } else {
            _curl_easy_setopt(lVar5, 10004, "");
        }
        this_00 = &field_104;
        cVar2 = this_00->empty();
        uVar13 = (undefined4)((ulong)in_stack_fffffffffffffc70 >> 32);
        if (cVar2 == '\0') {
            lVar6 = this_00->HeapBeginPtr();
            lVar7 = this_00->end();
            uVar13 = (undefined4)((ulong)in_stack_fffffffffffffc70 >> 32);
            if (lVar6 == lVar7)
                goto LAB_100ada1f1;
            uVar4 = 0;
            do {
                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar4 = _curl_slist_append(uVar4, uVar8);
                uVar13 = (undefined4)((ulong)in_stack_fffffffffffffc70 >> 32);
                lVar6 = lVar6 + 32;
            } while (lVar6 != lVar7);
        } else {
        LAB_100ada1f1:
            uVar4 = 0;
        }
        _curl_easy_setopt(lVar5, 10023, uVar4);
        field_592 = _clock();
        iVar3 = _curl_easy_perform(lVar5);
        m_errorCode = iVar3;
        if (iVar3 == 0) {
            local_370 = (undefined*)0;
            _curl_easy_getinfo(lVar5, 1048577, &local_370);
            _curl_easy_getinfo(lVar5, 2097174, local_380);
            puVar1 = &m_responseCode;
            iVar3 = _curl_easy_getinfo(lVar5, 2097154, puVar1);
            if (iVar3 != 0) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                                "HTTPRequest_CURL.cpp",
                                353, (char*)0);
            }
            if (*puVar1 - 200 < 100) {
                local_368 = (char*)0;
                iVar3 = _curl_easy_getinfo(lVar5, 1048594, &local_368);
                uVar13 = 2;
                if ((iVar3 == 0) && (uVar13 = 1, local_368 != (char*)0)) {
                    (&field_200, local_368)->assign();
                    AddFooter(this);
                }
                goto LAB_100ada2fe;
            }
            if (*puVar1 - 300 < 100) {
                local_368 = (char*)0;
                iVar3 = _curl_easy_getinfo(lVar5, 1048607, &local_368);
                uVar13 = 2;
                if ((iVar3 == 0) && (uVar13 = 1, local_368 != (char*)0)) {
                    (&field_232, local_368)->assign();
                }
                goto LAB_100ada2fe;
            }
            uVar8 = logger::default_logger();
            uVar4 = *puVar1;
            uVar11 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            puVar12 = &DAT_100e3aa9a;
            if (local_370 != (undefined*)0) {
                puVar12 = local_370;
            }
            logger::Logger::Log(uVar8, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                                "HTTPRequest_CURL.cpp",
                                398, "HTTP request error, http error code: %d\nURL: %s\nEffective URL: %s", uVar4,
                                uVar11, puVar12);
            cVar2 = m_pData->empty();
            if (cVar2 == '\0') {
                uVar4 = logger::default_logger();
                uVar8 = m_pData->data();
                logger::Logger::Log(uVar4, 0, 7,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/"
                                    "curl/HTTPRequest_CURL.cpp",
                                    401, "Result: %s\n", uVar8, uVar11, puVar12);
            }
        } else {
            pcVar10 = (char*)_curl_easy_strerror(iVar3);
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                                "HTTPRequest_CURL.cpp",
                                331, "curl_easy_perform: %s (%i)", pcVar10, CONCAT44(uVar13, iVar3));
            if (pcVar10 != (char*)0) {
                eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                    (fixed_string<char, 16, true, eastl::allocator>*)&field_264, pcVar10);
            }
            if (iVar3 == 28) {
                m_hasTimedOut = 1;
            }
        }
        uVar13 = 2;
    LAB_100ada2fe:
        std::atomic<HTTPRequestState>::operator=((atomic<HTTPRequestState>*)this, uVar13);
        _curl_easy_cleanup(lVar5);
        /* WARNING: Subroutine does not return */
        local_360->~fixed_string();
    }

    // 0x100ada4f0, 80 bytes, placed by debug map only (low confidence)
    // CurlDebugPrintFunction(void*, curl_infotype, char*, unsigned long, void*)
    undefined8 CurlDebugPrintFunction(undefined8 param_1, int param_2, long param_3) {
        undefined8 uVar1;

        if ((param_2 == 0) && (param_3 != 0)) {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                                "HTTPRequest_CURL.cpp",
                                198, "cURL: %s", param_3);
        }
        return 0;
    }

    // 0x100ade320, 16 bytes, placed by class name and debug map
    // HTTPRequest::Post(char const*, char const*)::$_0::operator()() const
    /* HTTPRequest::Post(char const*, char const*)::$_0::TEMPNAMEPLACEHOLDERVALUE() const */

    void HTTPRequest::Post(char const*, char const*)::$_0::operator()() {
        CurlRequest(field_0);
    }

} // namespace jag::http
