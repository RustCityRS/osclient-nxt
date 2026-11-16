// libs/hal/http/curl/HTTPRequest_CURL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.http

#include "libs/hal/http/HTTPRequest.h"

namespace jag::http {
    class HTTPGlobalState {
    public:
        HTTPGlobalState();
        ~HTTPGlobalState();

        uint8_t _unknown_0[1];
    };

    // 0x100ad9580
    HTTPGlobalState::HTTPGlobalState() {
        _curl_global_init(3);
    }

    // 0x100ad95a0
    HTTPGlobalState::~HTTPGlobalState() {
        _curl_global_cleanup();
    }

    // 0x100ad95c0
    HTTPRequest::HTTPRequest(unsigned long arg1)
        : std::atomic<HTTPRequestState>((HTTPRequestState)arg1), field_192(arg1), field_560(0), field_568(0),
          field_576(0), m_totalTimeoutSeconds(10), m_hasTimedOut(0), m_followRedirects(true), field_592(0),
          m_aborted(0), m_responseCode(0), m_errorCode(0) {}

    // 0x100ad97d0
    HTTPRequest::~HTTPRequest() {
        uint8_t* this_00 = &field_624;
        if (this_00->valid() != '\0') {
            this_00->wait();
        }
        if (operator_cast_to_HTTPRequestState() == 3) {
            LogAssert("m_state != HTTPRequestState::WAITING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      102, nullptr);
        }
        field_632.~basic_string();
        this_00->~future();
        field_264.~fixed_string();
    }

    // 0x100ad9970
    unsigned long CurlWriteDataCallback(unsigned char* arg1, unsigned long arg2, unsigned long arg3, void* arg4) {
        if (arg4 == nullptr) {
            LogAssert("userdata != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      107, nullptr);
        }
        arg4->CopyData(arg1, arg3 * arg2);
        return arg3 * arg2;
    }

    // 0x100ad99d0
    unsigned long CurlWriteHeaderDataCallback(unsigned char* arg1, unsigned long arg2, unsigned long arg3, void* arg4) {
        if (arg4 == nullptr) {
            LogAssert("userdata != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      114, nullptr);
        }
        arg4->CopyHeader(arg1, arg3 * arg2);
        return arg3 * arg2;
    }

    // 0x100ad9a30
    void CurlXFerInfoCallback(void* arg1, unsigned long arg2, unsigned long arg3, unsigned long arg4,
                              unsigned long arg5) {
        if (arg1 == nullptr) {
            LogAssert("requestData != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      122, nullptr);
        }
        arg1->SetProgress(arg3, arg2);
        return arg1->IsAborted();
    }

    // 0x100ad9aa0
    void CurlProgressCallback(void* arg1, double arg2, double arg3, double arg4, double arg5) {
        CurlXFerInfoCallback(arg1, (long)arg2 >> 63 & (long)(arg2 - 9.223372036854776e+18) | (long)arg2,
                             (long)(unsigned long)arg3 >> 63 & (long)(arg3 - 9.223372036854776e+18) |
                                 (unsigned long)arg3,
                             (unsigned long)arg3, (long)(arg3 - 9.223372036854776e+18));
    }

    // 0x100ad9af0
    void HTTPRequest::Get(const char* str) {
        Post(str, "");
    }

    // 0x100ad9b10
    void HTTPRequest::Post(const char* str1, const char* str2) {
        ReturnValue local_38;

        if (exchange((HTTPRequestState)str1, (memory_order)str2) != 0) {
            LogAssert("oldState == HTTPRequestState::NOTSENT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      149, nullptr);
        }
        (&field_8)->assign(str1);
        (&field_632)->assign(str2);
        bool cVar1 = field_632.empty();
        uint8_t* this_00 = &field_624;
        AutoSingleton<ThreadPoolSingleton>* this_03 = (AutoSingleton<ThreadPoolSingleton>*)this_00;
        if (this_00->valid() != '\0') {
            LogAssert("!m_future.valid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      160, nullptr);
        }
        char* str = "cURL-POST";
        if (cVar1) {
            str = "cURL-GET";
        }
        auto this_01 = this_03->Instance();
        auto this_02 = this_01->SSOBeginPtr();
        HTTPRequest* local_30 = this;
        ThreadPool::AddTask<HTTPRequest::Post(char const*, char const*)::__0>(&local_38, this_02, str, (__0*)&local_30);
        *this_00 = local_38;
    }

    // 0x100ad9c10
    void HTTPRequest::GetSync(const char* str) {
        PostSync(str, "");
    }

    // 0x100ad9c30
    void HTTPRequest::PostSync(const char* str1, const char* str2) {
        if (exchange((HTTPRequestState)str1, (memory_order)str2) != 0) {
            LogAssert("oldState == HTTPRequestState::NOTSENT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      182, nullptr);
        }
        (&field_8)->assign(str1);
        (&field_632)->assign(str2);
        if (field_624.valid() != '\0') {
            LogAssert("!m_future.valid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      187, nullptr);
        }
        CurlRequest();
    }

    // 0x100ad9ea0
    void HTTPRequest::CurlRequest() {
        uint64_t* puVar2;
        Logger* pLVar5;
        long lVar8;
        long lVar9;
        uint64_t uVar10;
        char* str;
        uint8_t* puVar12;
        HTTPRequestState httpRequestState;
        uint64_t in_stack_fffffffffffffc70;
        uint8_t local_380[8];
        uint8_t* local_370;
        char* local_368;
        uint8_t local_138[256];

        m_responseCode = 0;
        m_errorCode = 0;
        uint8_t* puVar1 = &field_8;
        bool cVar3 = puVar1->empty();
        if (cVar3) {
            pLVar5 = logger::default_logger();
            pLVar5->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                        "HTTPRequest_CURL.cpp",
                        218, "No URL provided for curl request.");
            *this = 2;
            return;
        }
        long lVar6 = _curl_easy_init();
        if (lVar6 == 0) {
            pLVar5 = logger::default_logger();
            pLVar5->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                        "HTTPRequest_CURL.cpp",
                        230, "curl_easy_init() failed to initialise.");
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                            "HTTPRequest_CURL.cpp",
                            231, nullptr);
        }
        local_138[0] = 0;
        uint64_t uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        _curl_easy_setopt(lVar6, 10002, uVar7);
        cVar3 = field_632.empty();
        if (!cVar3) {
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            _curl_easy_setopt(lVar6, 10015, uVar7);
        }
        _curl_easy_setopt(lVar6, 10010, local_138);
        _curl_easy_setopt(lVar6, 43, 0);
        _curl_easy_setopt(lVar6, 20219, CurlXFerInfoCallback);
        _curl_easy_setopt(lVar6, 10057, this);
        _curl_easy_setopt(lVar6, 20056, CurlProgressCallback);
        _curl_easy_setopt(lVar6, 10057, this);
        _curl_easy_setopt(lVar6, 99, 1);
        _curl_easy_setopt(lVar6, 20094, CurlDebugPrintFunction);
        _curl_easy_setopt(lVar6, 41, 0);
        _curl_easy_setopt(lVar6, 64, 0);
        _curl_easy_setopt(lVar6, 20011, CurlWriteDataCallback);
        _curl_easy_setopt(lVar6, 10001, this);
        _curl_easy_setopt(lVar6, 20079, CurlWriteHeaderDataCallback);
        _curl_easy_setopt(lVar6, 10029, this);
        _curl_easy_setopt(lVar6, 52, m_followRedirects);
        _curl_easy_setopt(lVar6, 13, m_totalTimeoutSeconds);
        fixed_string<char, 512> local_360;
        cVar3 = field_40.empty();
        uint8_t* local_378 = puVar1;
        if (!cVar3) {
            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_360.sprintf("%s:%s", uVar7, uVar10);
            uVar7 = local_360.begin();
            _curl_easy_setopt(lVar6, 10006, uVar7);
        } else {
            _curl_easy_setopt(lVar6, 10004, "");
        }
        puVar1 = &field_104;
        cVar3 = puVar1->empty();
        uint32_t uVar13 = (uint32_t)((unsigned long)in_stack_fffffffffffffc70 >> 32);
        if (!cVar3) {
            lVar8 = puVar1->HeapBeginPtr();
            lVar9 = puVar1->end();
            uVar13 = (uint32_t)((unsigned long)in_stack_fffffffffffffc70 >> 32);
            if (lVar8 == lVar9)
                goto LAB_100ada1f1;
            uVar7 = 0;
            do {
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar7 = _curl_slist_append(uVar7, uVar10);
                uVar13 = (uint32_t)((unsigned long)in_stack_fffffffffffffc70 >> 32);
                lVar8 = lVar8 + 32;
            } while (lVar8 != lVar9);
        } else {
        LAB_100ada1f1:
            uVar7 = 0;
        }
        _curl_easy_setopt(lVar6, 10023, uVar7);
        field_592 = _clock();
        int iVar4 = _curl_easy_perform(lVar6);
        m_errorCode = iVar4;
        if (iVar4 == 0) {
            local_370 = nullptr;
            _curl_easy_getinfo(lVar6, 1048577, &local_370);
            _curl_easy_getinfo(lVar6, 2097174, local_380);
            puVar2 = &m_responseCode;
            iVar4 = _curl_easy_getinfo(lVar6, 2097154, puVar2);
            if (iVar4 != 0) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                                "HTTPRequest_CURL.cpp",
                                353, nullptr);
            }
            if (*puVar2 - 200 < 100) {
                local_368 = nullptr;
                iVar4 = _curl_easy_getinfo(lVar6, 1048594, &local_368);
                httpRequestState = 2;
                if ((iVar4 == 0) && (httpRequestState = 1, local_368 != nullptr)) {
                    (&field_200)->assign(local_368);
                    AddFooter();
                }
                goto LAB_100ada2fe;
            }
            if (*puVar2 - 300 < 100) {
                local_368 = nullptr;
                iVar4 = _curl_easy_getinfo(lVar6, 1048607, &local_368);
                httpRequestState = 2;
                if ((iVar4 == 0) && (httpRequestState = 1, local_368 != nullptr)) {
                    (&field_232)->assign(local_368);
                }
                goto LAB_100ada2fe;
            }
            pLVar5 = logger::default_logger();
            uVar7 = *puVar2;
            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            puVar12 = &DAT_100e3aa9a;
            if (local_370 != nullptr) {
                puVar12 = local_370;
            }
            pLVar5->Log(false, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                        "HTTPRequest_CURL.cpp",
                        398, "HTTP request error, http error code: %d\nURL: %s\nEffective URL: %s", uVar7, uVar10,
                        puVar12);
            cVar3 = m_pData->empty();
            if (!cVar3) {
                pLVar5 = logger::default_logger();
                uVar7 = m_pData->data();
                pLVar5->Log(false, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                            "HTTPRequest_CURL.cpp",
                            401, "Result: %s\n", uVar7, uVar10, puVar12);
            }
        } else {
            str = (char*)_curl_easy_strerror(iVar4);
            pLVar5 = logger::default_logger();
            pLVar5->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                        "HTTPRequest_CURL.cpp",
                        331, "curl_easy_perform: %s (%i)", str, (((uint64_t)uVar13 << 32) | (uint32_t)iVar4));
            if (str != nullptr) {
                field_264 = str;
            }
            if (iVar4 == 28) {
                m_hasTimedOut = 1;
            }
        }
        httpRequestState = 2;
    LAB_100ada2fe:
        *this = httpRequestState;
        _curl_easy_cleanup(lVar6);
    }

    // 0x100ada4f0
    void CurlDebugPrintFunction(void* arg1, curl_infotype curl_infotype, char* str, unsigned long arg4, void* arg5) {
        if ((curl_infotype == 0) && (str != nullptr)) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/http/curl/"
                      "HTTPRequest_CURL.cpp",
                      198, "cURL: %s", str);
        }
        return 0;
    }

    // 0x100ade320
    void HTTPRequest::Post(char const*, char const*)::$_0::operator()() const {
        CurlRequest(field_0);
    }

} // namespace jag::http
