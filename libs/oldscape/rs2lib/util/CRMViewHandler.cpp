// libs/oldscape/rs2lib/util/CRMViewHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "CRMViewHandler.h"

namespace jag::oldscape::rs2lib {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    CRMViewHandler::GetCRMData() const;

    // 0x1001fb010, 96 bytes, placed by class name and debug map
    // CRMViewHandler::SetURL(eastl::string const&, http::CRMData::ClientDataProvider*)
    void CRMViewHandler::SetURL(basic_string* param_1, ClientDataProvider* param_2) {
        char* pcVar1;
        ulong uVar2;
        undefined8 local_38;
        undefined8 local_30;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        new (&local_38) std::basic_string_view<char, std::char_traits<char>>(pcVar1, uVar2);
        http::CRMData::Request(this, local_38, local_30, param_2);
    }

    // 0x1001fb080, 64 bytes, placed by class name and debug map
    // CRMViewHandler::Service()
    undefined8 CRMViewHandler::Service() {
        int iVar1;

        ServiceRequests();
        iVar1 = GetX();
        if (iVar1 != field_336) {
            field_336 = iVar1;
            if (1 < iVar1) {
                return 1;
            }
        }
        return 0;
    }

    // 0x1001fb0c0, 400 bytes, placed by class name and debug map
    // CRMViewHandler::GeneratePayloadData()
    ulong CRMViewHandler::GeneratePayloadData() {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        int* piVar3;
        int* piVar4;
        long lVar5;
        basic_string<char, BucketAllocatorEASTL>* this_01;
        basic_string<char, BucketAllocatorEASTL>* pbVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        ulong uVar9;
        ulong uVar10;
        bool bVar11;
        int local_34;

        this_00 = &field_456;
        piVar3 = (int*)this_00->begin();
        piVar4 = (int*)this_00->end();
        local_34 = 0;
        std::fill<int*, int>(piVar3, piVar4, &local_34);
        lVar5 = GetPixelBuffer();
        this_01 = (basic_string<char, BucketAllocatorEASTL>*)((lVar5 + 24))->HeapBeginPtr();
        pbVar6 = (basic_string<char, BucketAllocatorEASTL>*)((lVar5 + 24))->end();
        if (this_01 == pbVar6) {
            uVar10 = 0;
        } else {
            uVar10 = 0;
            bVar11 = false;
            do {
                bVar1 = std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(
                    (variant*)(this_01 + 24));
                if (bVar1) {
                    if (uVar10 < 3) {
                        piVar3 = std::get<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(
                            (variant*)(this_01 + 24));
                        iVar2 = *piVar3;
                        piVar3 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)this_00, uVar10);
                        *piVar3 = iVar2;
                    }
                    uVar10 = uVar10 + 1;
                } else {
                    iVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(this_01, "user_id");
                    if (iVar2 != 0) {
                        uVar8 = logger::default_logger();
                        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(
                            uVar8, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "util/CRMViewHandler.cpp",
                            63,
                            "Could not generate server trigger payload for CRMView - invalid payload type for \'%s\'",
                            uVar7);
                        break;
                    }
                }
                this_01 = this_01 + 56;
                bVar11 = this_01 == pbVar6;
            } while (!bVar11);
            if (!bVar11) {
                uVar9 = 0;
                goto LAB_1001fb23a;
            }
        }
        uVar9 = CONCAT71((int7)((ulong)this_01 >> 8), 1);
        if (3 < uVar10) {
            uVar8 = logger::default_logger();
            uVar9 = 0;
            logger::Logger::Log(uVar8, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "util/CRMViewHandler.cpp",
                                71,
                                "Could not generate server trigger payload for CRMView - expected up to %d payload "
                                "names but received %d",
                                3, uVar10);
        }
    LAB_1001fb23a:
        return uVar9 & 4294967295;
    }

    // 0x1001fb2c0, 48 bytes, placed by class name and debug map
    // CRMViewHandler::AssignFont(int, int)
    void CRMViewHandler::AssignFont(int param_1, int param_2) {
        int* piVar1;
        int local_14;

        piVar1 = (int*)
            eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)&field_344,
                &local_14);
        *piVar1 = param_2;
    }

    // 0x1001fb2f0, 32 bytes, placed by class name and debug map
    // CRMViewHandler::AssignServerTarget(eastl::string&&, int)
    void CRMViewHandler::AssignServerTarget(basic_string* param_1, int param_2) {
        int* piVar1;

        piVar1 = (int*)eastl::hash_map<
            eastl::string, int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator,
            false>::operator[]((hash_map<eastl::string, int, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>,
                                         eastl::allocator, false>*)&field_400,
                               param_1);
        *piVar1 = param_2;
    }

    // 0x1001fb350, 304 bytes, placed by class name and debug map
    // CRMViewHandler::GetServerTarget()
    undefined4 CRMViewHandler::GetServerTarget() {
        char cVar1;
        char* pcVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        hashtable_iterator_base* extraout_RDX;
        undefined4 uVar7;
        hashtable_iterator_base local_68[16];
        eastl::string local_58[32];
        allocator local_38[16];

        cVar1 = (&field_400)->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_crmServerTargets.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "CRMViewHandler.cpp",
                      90, "No server targets set for CRMView component - use cc_setcrm_servertargets");
        }
        GetPixelBuffer();
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, pcVar3, local_38);
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, int>>, eastl::equal_to<eastl::string>,
                         eastl::hash<eastl::string>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::find((basic_string*)local_38);
        eastl::hashtable<int, eastl::pair<int const, highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, highlight::HighlightedGroup>>, eastl::equal_to<int>,
                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=((eastl*)local_38, local_68, extraout_RDX)) {
            lVar4 = local_38->HeapBeginPtr();
            uVar7 = *(undefined4*)(lVar4 + 32);
        } else {
            uVar5 = logger::default_logger();
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar7 = 4294967295;
            logger::Logger::Log(uVar5, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "util/CRMViewHandler.cpp",
                                98, "Server target ID not found for string %s", uVar6);
        }
        eastl::string::~basic_string(local_58);
        return uVar7;
    }

    // 0x1001fb480, 640 bytes, placed by class name and debug map
    // CRMViewHandler::GetEndpointURL()
    CRMViewHandler* CRMViewHandler::GetEndpointURL() {
        variant* pvVar1;
        bool bVar2;
        long lVar3;
        char* pcVar4;
        long lVar5;
        undefined8 uVar6;
        ulong uVar7;
        uint* puVar8;
        ulong uVar9;
        undefined8 uVar10;
        NXTRenderCanvas* in_RSI;
        fixed_string<char, 32, true, eastl::allocator> local_c8[72];
        allocator local_80[72];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        lVar3 = in_RSI->GetPixelBuffer();
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_80, "EASTL basic_string");
        new (this) eastl::string(pcVar4, local_80);
        lVar5 = ((lVar3 + 24))->HeapBeginPtr();
        lVar3 = ((lVar3 + 24))->end();
        if (lVar5 == lVar3) {
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return this;
        }
        new (local_80) eastl::fixed_string<char, 32, true, eastl::allocator>();
        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_80, "%%%s%%", uVar6);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar7 = find(pcVar4, 0);
        if (uVar7 != 18446744073709551615) {
            pvVar1 = (variant*)(lVar5 + 24);
            bVar2 = std::holds_alternative<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar1);
            if (bVar2) {
                eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_c8);
                puVar8 = (uint*)std::get<int, eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar1);
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_c8, "%d", (ulong)*puVar8);
                uVar9 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                replace(uVar7, uVar9, pcVar4);
                /* WARNING: Subroutine does not return */
                local_c8->~fixed_string();
            }
            bVar2 = std::holds_alternative<eastl::basic_string<char, BucketAllocatorEASTL>,
                                           eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar1);
            if (bVar2) {
                std::get<eastl::basic_string<char, BucketAllocatorEASTL>,
                         eastl::basic_string<char, BucketAllocatorEASTL>, int>(pvVar1);
                uVar9 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                replace(uVar7, uVar9, pcVar4);
            } else {
                uVar6 = logger::default_logger();
                uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/util/CRMViewHandler.cpp",
                                    130, "Could not open action URL - invalid payload type for \'%s\'", uVar10);
                eastl::string::clear();
            }
        }
        /* WARNING: Subroutine does not return */
        local_80->~fixed_string();
    }

    // 0x1001fb870, 80 bytes, placed by class name and debug map
    // CRMViewHandler::GetPayload(int)
    undefined4 CRMViewHandler::GetPayload(int param_1) {
        undefined4* puVar1;

        if (2 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index >= 0 && index < MAX_ACTION_PAYLOADS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/util/"
                      "CRMViewHandler.cpp",
                      140, (char*)0);
        }
        puVar1 = (undefined4*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&field_456, (long)param_1);
        return *puVar1;
    }

    // 0x1001fb8c0, 48 bytes, placed by class name and debug map
    // CRMViewHandler::SetFromJSON(eastl::string const&)
    bool CRMViewHandler::SetFromJSON(basic_string* param_1) {
        int iVar1;

        http::CRMData::SetFromJSON(param_1);
        iVar1 = param_1->GetX();
        return 0 < iVar1;
    }

} // namespace jag::oldscape::rs2lib
