// libs/oldscape/clientlib/OldscapeClientError.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "OldscapeClientError.h"

namespace jag::oldscape {
    // 0x1039926c8, 8 bytes, __common; zero-initialised
    OldscapeClientError::m_singletonOK;

    // 0x100390160, 16 bytes, complete-object constructor, placed by class name and debug map
    // OldscapeClientError::OldscapeClientError(): jumps straight to the base-object constructor

    // 0x100390170, 16 bytes, complete-object destructor, placed by class name and debug map
    // OldscapeClientError::~OldscapeClientError(): jumps straight to the base-object destructor

    // 0x100390180, 64 bytes, base-object constructor, placed by class name and debug map
    // OldscapeClientError::OldscapeClientError()
    void OldscapeClientError::OldscapeClientError() {
        new (this) eastl::string();
        new (&field_32) eastl::string();
        m_singletonOK = 1;
    }

    // 0x1003901c0, 48 bytes, base-object destructor, placed by class name and debug map
    // OldscapeClientError::~OldscapeClientError()
    void OldscapeClientError::~OldscapeClientError() {
        m_singletonOK = 0;
        (&field_32)->~basic_string();
        ~basic_string();
    }

    // 0x1003901f0, 16 bytes, placed by class name and debug map
    // OldscapeClientError::Get()
    undefined1* OldscapeClientError::Get() {
        return &g_singletonClientError;
    }

    // 0x100390200, 144 bytes, placed by class name and debug map
    // OldscapeClientError::SetUserName(eastl::string const&)
    void OldscapeClientError::SetUserName(basic_string* param_1) {
        eastl::string local_58[32];
        basic_string local_38[32];

        eastl::string::basic_string(local_58);
        stringtools::UTF8ToCP1252<eastl::string>(param_1, (basic_string*)local_58);
        stringtools::URLEncodeCP1252<eastl::string>(local_38);
        eastl::string::operator=((eastl::string*)&g_singletonClientError, local_38);
        local_38->~basic_string();
        eastl::string::~basic_string(local_58);
    }

    // 0x100390290, 16 bytes, placed by class name and debug map
    // OldscapeClientError::SetClientType(int)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* OldscapeClientError::SetClientType(int) */

    void OldscapeClientError::SetClientType(int param_1) {
        _DAT_1039926c0 = param_1;
    }

    // 0x1003902a0, 224 bytes, placed by class name and debug map
    // OldscapeClientError::SetBaseURL(eastl::string const&)
    void OldscapeClientError::SetBaseURL(basic_string* param_1) {
        long lVar3;
        char* pcVar4;
        basic_string* pbVar5;
        basic_string local_38[32];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
            '\0') {
            lVar3 = param_1->find(".ws", 0);
            if (lVar3 == -1) {
                pbVar5 = param_1;
                eastl::string::operator=((eastl::string*)&DAT_1039926a0, param_1);
                pcVar4 = (char*)eastl::string::back();
                if (*pcVar4 != '/') {
                    param_1 = (basic_string*)&DAT_1039926a0;
                    pbVar5 = (basic_string*)&DAT_100e35f69;
                    eastl::string::operator+=((eastl::string*)&DAT_1039926a0, "/");
                }
            } else {
                param_1->rfind('/', 18446744073709551615);
                pbVar5 = local_38;
                eastl::string::substr((ulong)pbVar5, (ulong)param_1);
                eastl::string::operator=((eastl::string*)&DAT_1039926a0, pbVar5);
                param_1 = local_38;
                param_1->~basic_string();
            }
            if (!param_1->operator_cast_to_bool()) {
                std::function<void(char const*)>::operator=((function<void(char const*)>*)local_38, (__0*)pbVar5);
            }
        }
    }

    // 0x100390440, 608 bytes, placed by class name and debug map
    // OldscapeClientError::ReportErrorImpl(char const*, callstack::Callstack const*)
    void OldscapeClientError::ReportErrorImpl(char* param_1, Callstack* param_2) {
        undefined4 uVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        char* pcVar6;
        undefined4 uVar7;
        eastl::string local_308[32];
        eastl::string local_2e8[32];
        HTTPRequest local_2c8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar2 == '\0') {
            eastl::string::basic_string(local_2e8);
            if (param_2 != (Callstack*)0) {
                ParseStackTrace((OldscapeClientError*)&local_2c8, param_2);
                eastl::string::operator=(local_2e8, (basic_string*)&local_2c8);
                local_2c8.~basic_string();
            }
            if (param_1 != (char*)0) {
                cVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar2 == '\0') {
                    eastl::string::operator+=(local_2e8, " | ");
                }
                eastl::string::operator+=(local_2e8, param_1);
            }
            uVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar3, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                "clientlib/OldscapeClientError.cpp",
                                99, "Error: %s", uVar4);
            uVar7 = (undefined4)((ulong)uVar4 >> 32);
            stringtools::URLEncodeCP1252<eastl::string>((basic_string*)&local_2c8);
            eastl::string::operator=(local_2e8, (basic_string*)&local_2c8);
            local_2c8.~basic_string();
            eastl::string::basic_string(local_308);
            eastl::string::reserve(local_308, 2048);
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar1 = field_64;
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::sprintf((char*)local_308, "%sclienterror.ws?cv=%d&cs=%d&u=%s&v1=Jagex&v2=1.0&ct=%d&e=%s",
                                   uVar3, 216, 1, uVar4, CONCAT44(uVar7, uVar1), uVar5);
            new (&local_2c8) http::HTTPRequest(0);
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_2c8.GetSync(pcVar6);
            local_2c8.~HTTPRequest();
            eastl::string::~basic_string(local_308);
            eastl::string::~basic_string(local_2e8);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003906a0, 288 bytes, placed by class name and debug map
    // OldscapeClientError::ParseStackTrace(callstack::Callstack const&)
    OldscapeClientError* OldscapeClientError::ParseStackTrace(Callstack* param_1) {
        vector* this_00;
        eastl::string* pbVar2;
        eastl::string* pbVar3;
        long lVar4;
        long lVar5;
        eastl::string* pbVar6;
        CallstackResolved local_50[2];

        callstack::CallstackResolved::CallstackResolved(local_50, param_1);
        this_00 = local_50->SSOBeginPtr(param_1);
        new (this) eastl::string();
        reserve(2048);
        pbVar2 = (eastl::string*)this_00->HeapBeginPtr();
        pbVar3 = (eastl::string*)this_00->end();
        if (pbVar2 != pbVar3) {
            pbVar2 = pbVar2 + 544;
            do {
                lVar4 = eastl::string::rfind(pbVar2, '/', 18446744073709551615);
                if (eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                    '\0') {
                    append(" ");
                }
                lVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::append_sprintf((char*)this, "%s@%d", lVar4 + 1 + lVar5, (ulong) * (uint*)(pbVar2 + 280));
                pbVar6 = pbVar2 + 296;
                pbVar2 = pbVar2 + 840;
            } while (pbVar6 != pbVar3);
        }
        local_50->~CallstackResolved();
        return this;
    }

} // namespace jag::oldscape
