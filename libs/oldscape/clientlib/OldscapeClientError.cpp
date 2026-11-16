// libs/oldscape/clientlib/OldscapeClientError.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "OldscapeClientError.h"

namespace jag::oldscape {
    // 0x1039926c8
    int64_t OldscapeClientError::m_singletonOK;

    // 0x100390180
    OldscapeClientError::OldscapeClientError() : eastl::string(), m_singletonOK(1) {}

    // 0x1003901c0
    OldscapeClientError::~OldscapeClientError() {
        m_singletonOK = 0;
        field_32.~basic_string();
    }

    // 0x1003901f0
    void OldscapeClientError::Get() {
        return &g_singletonClientError;
    }

    // 0x100390200
    void OldscapeClientError::SetUserName(const eastl::string& str) {
        eastl::string local_38;

        eastl::string local_58;
        stringtools::UTF8ToCP1252<eastl::string>(str, local_58);
        stringtools::URLEncodeCP1252<eastl::string>(&local_38);
        g_singletonClientError = &local_38;
    }

    // 0x100390290
    void OldscapeClientError::SetClientType(int arg1) {
        _DAT_1039926c0 = arg1;
    }

    // 0x1003902a0
    void OldscapeClientError::SetBaseURL(const eastl::string& str) {
        void result;
        long lVar2;
        char* pcVar3;
        ReturnValue result;
        ReturnValue local_38;

        if (!(str.empty())) {
            lVar2 = str.find(".ws", 0);
            if (lVar2 == -1) {
                &result = (ReturnValue*)str;
                (*((eastl::string*)&reinterpret_cast<const uint64_t*>(&g_singletonClientError)[4])) = str;
                pcVar3 = str.back();
                if (*pcVar3 != '/') {
                    str = (eastl::string*)&reinterpret_cast<const uint64_t*>(&g_singletonClientError)[4];
                    &result = (ReturnValue*)&DAT_100e35f69;
                    (*((eastl::string*)&reinterpret_cast<const uint64_t*>(&g_singletonClientError)[4])) += "/";
                }
            } else {
                lVar2 = str.rfind('/', 18446744073709551615);
                &result = &local_38;
                result = str.substr(0, lVar2 + 1);
                (*((eastl::string*)&reinterpret_cast<const uint64_t*>(&g_singletonClientError)[4])) = &result;
                str = &local_38;
                str.~basic_string();
            }
            if (!(str.operator_cast_to_bool())) {
                local_38 = result;
            }
        }
    }

    // 0x100390440
    void OldscapeClientError::ReportErrorImpl(const char* str, const callstack::Callstack* callstack) {
        uint32_t uVar1;
        Logger* this_00;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint32_t uVar6;
        eastl::string local_308;
        eastl::string local_2e8;
        HTTPRequest local_2c8;

        if (!(field_32.empty())) {
            local_2e8 = eastl::string();
            if (callstack != nullptr) {
                ParseStackTrace((ReturnValue*)&local_2c8, callstack);
                local_2e8 = &local_2c8;
            }
            if (str != nullptr) {
                if (!(local_2e8.empty())) {
                    local_2e8 += " | ";
                }
                local_2e8 += str;
            }
            this_00 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                         "OldscapeClientError.cpp",
                         99, "Error: %s", uVar3);
            uVar6 = (uint32_t)((unsigned long)uVar3 >> 32);
            stringtools::URLEncodeCP1252<eastl::string>((eastl::string*)&local_2c8);
            local_2e8 = &local_2c8;
            local_308 = eastl::string();
            local_308.reserve(2048);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar1 = field_64;
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_308.sprintf("%sclienterror.ws?cv=%d&cs=%d&u=%s&v1=Jagex&v2=1.0&ct=%d&e=%s", uVar3, 216, 1, uVar4,
                              (((uint64_t)uVar6 << 32) | (uint32_t)uVar1), uVar5);
            local_2c8 = http::HTTPRequest(0);
            local_2c8.GetSync((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin());
        }
    }

    // 0x1003906a0
    auto OldscapeClientError::ParseStackTrace(const callstack::Callstack& callstack) {
        long lVar4;
        long lVar5;
        eastl::string* pbVar6;

        CallstackResolved local_50(callstack);
        auto layout = local_50.SSOBeginPtr();
        auto result;
        result.reserve(2048);
        auto pbVar2 = layout->HeapBeginPtr();
        auto pbVar3 = layout->end();
        if (pbVar2 != pbVar3) {
            pbVar2 = pbVar2 + 544;
            do {
                lVar4 = pbVar2->rfind('/', 18446744073709551615);
                if (result.empty() == '\0') {
                    result.append(" ");
                }
                lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                result.append_sprintf("%s@%d", lVar4 + 1 + lVar5, (unsigned long)*(unsigned int*)(pbVar2 + 280));
                pbVar6 = pbVar2 + 296;
                pbVar2 = pbVar2 + 840;
            } while (pbVar6 != pbVar3);
        }
        return result;
    }

} // namespace jag::oldscape
