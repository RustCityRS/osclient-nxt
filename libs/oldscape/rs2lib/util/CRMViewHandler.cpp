// libs/oldscape/rs2lib/util/CRMViewHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "CRMViewHandler.h"

namespace jag::oldscape::rs2lib {
    // 0x100009ca0: CRMViewHandler::GetCRMData() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1001fb010
    void CRMViewHandler::SetURL(const eastl::string& str, http::CRMData::ClientDataProvider* clientDataProvider) {
        basic_string_view<char, std::char_traits<char> _>* local_38;
        ClientDataProvider* local_30;

        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg2 = str.size();
        new (&local_38) std::basic_string_view<char>(str_00, arg2);
        Request(local_38, local_30);
    }

    // 0x1001fb080
    uint64_t CRMViewHandler::Service() {
        ServiceRequests();
        int iVar1 = GetX();
        if (iVar1 != field_336) {
            field_336 = iVar1;
            if (1 < iVar1) {
                return 1;
            }
        }
        return 0;
    }

    // 0x1001fb0c0
    unsigned long CRMViewHandler::GeneratePayloadData() {
        int iVar2;
        uint64_t uVar6;
        Logger* pLVar7;
        unsigned long uVar8;
        unsigned long arg1;
        bool bVar9;

        int* piVar3 = std::array<int, 3ul>::begin();
        int* arg2 = std::array<int, 3ul>::end();
        std::fill<int*, int>(piVar3, arg2, 0);
        long lVar4 = GetPixelBuffer();
        basic_string<char, BucketAllocatorEASTL>* this_00 =
            (basic_string<char, BucketAllocatorEASTL>*)((lVar4 + 24))->HeapBeginPtr();
        basic_string<char, BucketAllocatorEASTL>* pbVar5 =
            (basic_string<char, BucketAllocatorEASTL>*)((lVar4 + 24))->end();
        if (this_00 == pbVar5) {
            arg1 = 0;
        } else {
            arg1 = 0;
            bVar9 = false;
            do {
                if (std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(
                        *((this_00 + 24)))) {
                    if (arg1 < 3) {
                        piVar3 = std::get<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(*((this_00 + 24)));
                        iVar2 = *piVar3;
                        piVar3 = (int*)field_456[arg1];
                        *piVar3 = iVar2;
                    }
                    arg1 = arg1 + 1;
                } else {
                    iVar2 = this_00->compare("user_id");
                    if (iVar2 != 0) {
                        pLVar7 = logger::default_logger();
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar7->Log(
                            false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "util/CRMViewHandler.cpp",
                            63,
                            "Could not generate server trigger payload for CRMView - invalid payload type for \'%s\'",
                            uVar6);
                        break;
                    }
                }
                this_00 = this_00 + 56;
                bVar9 = this_00 == pbVar5;
            } while (!bVar9);
            if (!bVar9) {
                uVar8 = 0;
                goto LAB_1001fb23a;
            }
        }
        uVar8 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
        if (3 < arg1) {
            pLVar7 = logger::default_logger();
            uVar8 = 0;
            pLVar7->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                        "CRMViewHandler.cpp",
                        71,
                        "Could not generate server trigger payload for CRMView - expected up to %d payload names but "
                        "received %d",
                        3, arg1);
        }
    LAB_1001fb23a:
        return uVar8 & 4294967295;
    }

    // 0x1001fb2c0
    void CRMViewHandler::AssignFont(int arg1, int arg2) {
        int local_14;

        int* piVar1 = &field_344[local_14];
        *piVar1 = arg2;
    }

    // 0x1001fb2f0
    void CRMViewHandler::AssignServerTarget(eastl::string&& str, int arg2) {
        int* piVar1 = &field_400[str];
        *piVar1 = arg2;
    }

    // 0x1001fb350
    uint32_t CRMViewHandler::GetServerTarget() {
        long lVar2;
        Logger* this_01;
        uint64_t uVar3;
        uint32_t uVar4;

        uint8_t* this_00 = &field_400;
        if (this_00->empty()) {
            LogAssert("!m_crmServerTargets.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "CRMViewHandler.cpp",
                      90, "No server targets set for CRMView component - use cc_setcrm_servertargets");
        }
        GetPixelBuffer();
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_58(str);
        auto local_38 = this_00->find(local_58);
        auto local_68 = this_00->end();
        if (!(local_38 != local_68)) {
            this_01 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = 4294967295;
            this_01->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                         "CRMViewHandler.cpp",
                         98, "Server target ID not found for string %s", uVar3);
        } else {
            lVar2 = local_38.HeapBeginPtr();
            uVar4 = *(uint32_t*)(lVar2 + 32);
        }
        return uVar4;
    }

    // 0x1001fb480
    auto CRMViewHandler::GetEndpointURL() {
        variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>* arg1;
        unsigned int* puVar6;
        unsigned long uVar7;
        Logger* this_00;
        fixed_string<char, 32> local_c8;

        long lVar2 = GetPixelBuffer();
        char* pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto result(pcVar3);
        long lVar4 = ((lVar2 + 24))->HeapBeginPtr();
        lVar2 = ((lVar2 + 24))->end();
        if (lVar4 == lVar2) {
            return result;
        }
        local_80 = eastl::fixed_string<char, 32>();
        uint64_t uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_80.sprintf("%%%s%%", uVar5);
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned long arg1_00 = result.find(pcVar3, 0);
        if (arg1_00 != 18446744073709551615) {
            arg1 = (variant<eastl::basic_string<char, BucketAllocatorEASTL>, int>*)(lVar4 + 24);
            if (std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1)) {
                local_c8 = eastl::fixed_string<char, 32>();
                puVar6 = (unsigned int*)std::get<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1);
                local_c8.append_sprintf("%d", (unsigned long)*puVar6);
                uVar7 = local_80.size();
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                result.replace(arg1_00, uVar7, pcVar3);
            }
            if (std::holds_alternative<eastl::basic_string<char, BucketAllocatorEASTL>,
                                       eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1)) {
                std::get<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::basic_string<char, BucketAllocatorEASTL>, int>(*arg1);
                uVar7 = local_80.size();
                pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                result.replace(arg1_00, uVar7, pcVar3);
            } else {
                this_00 = logger::default_logger();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                this_00->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                             "util/CRMViewHandler.cpp",
                             130, "Could not open action URL - invalid payload type for \'%s\'", uVar5);
                result.clear();
            }
        }
    }

    // 0x1001fb870
    uint32_t CRMViewHandler::GetPayload(int arg1) {
        if (2 < (unsigned int)arg1) {
            LogAssert("index >= 0 && index < MAX_ACTION_PAYLOADS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "CRMViewHandler.cpp",
                      140, nullptr);
        }
        uint32_t* puVar1 = &field_456[(long)arg1];
        return *puVar1;
    }

    // 0x1001fb8c0
    bool CRMViewHandler::SetFromJSON(const eastl::string& str) {
        SetFromJSON(str);
        int iVar1 = GetX();
        return 0 < iVar1;
    }

} // namespace jag::oldscape::rs2lib
