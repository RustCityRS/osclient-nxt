// projects/osclient/StockPriceCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "StockPriceCache.h"

namespace jag::oldscape {
    // 0x1000bd220
    uint64_t StockPriceCache::Init(const eastl::string& str) {
        uint64_t uVar2;
        ReturnValue local_28;

        if (SQLInit::Initialise() == '\0') {
            uVar2 = 0;
        } else {
            local_28 = std::make_unique<StockPriceCache::DBImpl, eastl::stringconst&>(str);
            *this = local_28;
            uVar2 = ((DBImpl*)(*this).operator->())->Init();
        }
        return uVar2;
    }

    // 0x1000bd330
    unsigned long StockPriceCache::DBImpl::Init() {
        bool cVar2;
        long lVar4;
        time_t tVar5;
        StatementIndex statementIndex;
        uint64_t unaff_RBX;

        char cVar1 = field_8.empty();
        unsigned long uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (cVar1)
            goto LAB_1000bd4d0;
        auto local_288 = GameShell3Cache::GetRootStorage();
        Filename local_158 = local_288 / "gedigest.sql";
        int arg1 = _jag_sqlite3_open(Filename::operator_cast_to_char_(&local_158), &field_64);
        if (arg1 == 0) {
            cVar1 = ExecuteSql("CREATE TABLE IF NOT EXISTS meta(KEY INTEGER PRIMARY KEY, DATA INTEGER)");
            if (!cVar1)
                goto LAB_1000bd4ba;
            cVar1 = PrepareStatement(1);
            if (!cVar1)
                goto LAB_1000bd4ba;
            lVar4 = Query(1, 0);
            if (lVar4 == 1) {
                cVar1 = '\0';
            } else {
                cVar1 = ExecuteSql("DROP TABLE IF EXISTS curPrice");
            }
            cVar2 = ExecuteSql("CREATE TABLE IF NOT EXISTS curPrice(KEY INTEGER PRIMARY KEY, PRICE INTEGER)");
            if (!cVar2)
                goto LAB_1000bd4ba;
            uVar6 = 0;
            do {
                statementIndex = (StatementIndex)uVar6;
                cVar2 = PrepareStatement(statementIndex);
                if (!cVar2)
                    break;
                uVar6 = (unsigned long)(statementIndex + 1);
            } while (statementIndex != 5);
            if (cVar1) {
                cVar1 = ExecuteStatement(0, 0, 1);
                if (!cVar1)
                    goto LAB_1000bd4ba;
            }
            lVar4 = Query(1, 1);
            tVar5 = _time(nullptr);
            if (((lVar4 == -1) || (tVar5 < lVar4)) || (lVar4 + 14400 < tVar5)) {
                field_40 = 0;
                field_48 = 0;
                field_56 = 0;
            } else {
                field_40 = lVar4;
                field_56 = lVar4 + 13200;
                field_48 = lVar4 + 14400;
            }
            uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)1);
        } else {
            LogSqlError(arg1, 4294967295, nullptr);
        LAB_1000bd4ba:
            Destroy();
            uVar6 = 0;
        }
    LAB_1000bd4d0:
        return uVar6 & 4294967295;
    }

    // 0x1000bd540
    uint64_t StockPriceCache::Load(const eastl::string& str) {
        uint64_t uVar2;

        if (Init(str) == '\0') {
            uVar2 = 0;
        } else {
            StartDownloadIfNeeded();
            uVar2 = ((DBImpl*)(*this).operator->())->Load(str);
        }
        return uVar2;
    }

    // 0x1000bd580
    uint8_t* StockPriceCache::StartDownloadIfNeeded() {
        DBImpl* this_00;
        uint8_t* puVar2;
        void* in_RSI;

        if (this == in_RSI) {
            puVar2 = DataStatus::MISSING;
        } else {
            this_00 = (DBImpl*)(*this).operator->();
            puVar2 = (uint8_t*)this_00->StartDownloadIfNeeded();
        }
        return puVar2;
    }

    // 0x1000bd5c0
    uint32_t StockPriceCache::DBImpl::Load(const eastl::string& str) {
        uint32_t uVar2;
        char* str1;
        long lVar3;

        new (&local_2a0[0].field_8) Filename(str);
        File local_168(&local_2a0[0].field_8, 2, nullptr);
        local_2a0[0].field_8.~pair();
        Callstack local_2a0;
        unsigned long arg1 = local_168.length(&local_2a0);
        if (!(local_2a0.IsValid())) {
            new (&local_2a0[0].field_8) Array<char>(arg1);
            local_168.read((unsigned char*)local_2a0[0].field_8.data(), (unsigned int)arg1, 0, &local_2a0);
            if (!(local_2a0.IsValid())) {
                str1 = (char*)local_2a0[0].field_8.data();
                lVar3 = local_2a0[0].field_8.data();
                uVar2 = Parse(str1, (lVar3 + arg1 - 1));
            } else {
                uVar2 = 0;
            }
            local_2a0[0].field_8.~Array();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1000bd750
    void StockPriceCache::Destroy() {
        void* in_RSI;

        if (this != in_RSI) {
            ((DBImpl*)(*this).operator->())->Destroy();
            reset(nullptr);
        }
    }

    // 0x1000bd7a0
    void StockPriceCache::DBImpl::Destroy() {
        long lVar1 = 0;
        do {
            _jag_sqlite3_finalize(*(uint64_t*)(&this[1].field_0 + lVar1));
            *(uint64_t*)(&this[1].field_0 + lVar1) = 0;
            lVar1 = lVar1 + 32;
        } while (lVar1 != 128);
        _jag_sqlite3_close(field_64);
        field_64 = 0;
    }

    // 0x1000bd830
    uint8_t* StockPriceCache::DBImpl::StartDownloadIfNeeded() {
        HTTPRequest* pHVar3;
        time_t tVar4;
        void* in_RSI;
        ReturnValue local_38;

        uint8_t** ppuVar5 = &DataStatus::MISSING;
        if (field_64 != 0) {
            if (!(field_8.empty())) {
                if (this != in_RSI) {
                    pHVar3 = (HTTPRequest*)(*this).operator->();
                    if (pHVar3->IsRequestComplete()) {
                        ProcessCompletedRequest();
                    }
                }
                tVar4 = _time(nullptr);
                if (field_56 < tVar4) {
                    if (this == in_RSI) {
                        local_38 = std::make_unique<http::HTTPRequest>();
                        *this = &local_38;
                        pHVar3 = (HTTPRequest*)(*this).operator->();
                        pHVar3->Get(&field_8);
                    }
                }
                if ((field_40 < 1) || (field_48 <= tVar4)) {
                    ppuVar5 = &DataStatus::NOTLOADED;
                } else {
                    ppuVar5 = &DataStatus::READY;
                }
            }
        }
        return *ppuVar5;
    }

    // 0x1000bd910
    uint8_t* StockPriceCache::GetMarketPriceForObj(int& arg1, int arg2) {
        DBImpl* this_00;
        uint8_t* puVar2;

        if (this == arg1) {
            puVar2 = DataStatus::MISSING;
        } else {
            this_00 = (DBImpl*)(*this).operator->();
            puVar2 = (uint8_t*)this_00->GetMarketPriceForObj(arg1, arg2);
        }
        return puVar2;
    }

    // 0x1000bd960
    uint8_t* StockPriceCache::DBImpl::GetMarketPriceForObj(int& arg1, int arg2) {
        long lVar2;

        auto puVar1 = StartDownloadIfNeeded();
        uint8_t** ppuVar3 = &DataStatus::READY;
        if (puVar1 == DataStatus::READY) {
            lVar2 = Query(3, arg2);
            if (lVar2 == -1) {
                ppuVar3 = &DataStatus::MISSING;
            } else {
                arg1 = (int)lVar2;
            }
            puVar1 = *ppuVar3;
        }
        return puVar1;
    }

    // 0x1000bd9c0
    void StockPriceCache::DBImpl::LogSqlError(int arg1, StockPriceCache::DBImpl::StatementIndex statementIndex,
                                              const char* str) {
        uint64_t uVar1;

        eastl::string local_40((CtorSprintf*)"Sqlite error (%d)", arg1);
        if (statementIndex != 4294967295) {
            local_40.append_sprintf(" in statement %d", (unsigned long)statementIndex);
        }
        if (str == nullptr) {
            if (field_64 != 0) {
                uVar1 = _jag_sqlite3_errmsg();
                local_40.append_sprintf(": %s", uVar1);
            }
        } else {
            local_40.append_sprintf(": %s", str);
        }
        auto this_00 = logger::default_logger();
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_00->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/StockPriceCache.cpp",
            264, "%s", uVar1);
    }

    // 0x1000bdab0
    bool StockPriceCache::DBImpl::ExecuteSql(const char* str) {
        char* local_20;

        int arg1 = _jag_sqlite3_exec(field_64, str, 0, 0, &local_20);
        if (arg1 != 0) {
            LogSqlError(arg1, 4294967295, local_20);
        }
        return arg1 == 0;
    }

    // 0x1000bdb00
    bool StockPriceCache::DBImpl::PrepareStatement(StockPriceCache::DBImpl::StatementIndex statementIndex) {
        int arg1 = _jag_sqlite3_prepare_v2(field_64, *(uint64_t*)(&field_80 + (long)(int)statementIndex * 32),
                                           4294967295, &field_88 + (long)(int)statementIndex * 32, 0);
        if (arg1 != 0) {
            LogSqlError(arg1, statementIndex, nullptr);
        }
        return arg1 == 0;
    }

    // 0x1000bdb60
    uint64_t StockPriceCache::DBImpl::Query(StockPriceCache::DBImpl::StatementIndex statementIndex, int arg2) {
        ExecuteStatement(statementIndex, arg2, -1);
        return *(uint64_t*)(&field_96 + (long)(int)statementIndex * 32);
    }

    // 0x1000bdb90
    bool StockPriceCache::DBImpl::ExecuteStatement(StockPriceCache::DBImpl::StatementIndex statementIndex, int arg2,
                                                   long long arg3) {
        int iVar1;
        uint64_t uVar2;
        uint32_t in_register_00000014;

        long lVar3 = (long)(int)statementIndex * 32;
        *(uint64_t*)(&field_96 + lVar3) = 18446744073709551615;
        int iVar4 = 0;
        if (0 < *(int*)(&field_72 + lVar3)) {
            iVar1 = _jag_sqlite3_bind_int(*(uint64_t*)(&field_88 + lVar3), 1,
                                          (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2));
            if ((iVar1 == 0) && (iVar1 = 0, 1 < *(int*)(&field_72 + lVar3))) {
                iVar1 = _jag_sqlite3_bind_int64(*(uint64_t*)(&field_88 + lVar3), 2, arg3);
            }
            if (iVar1 != 0) {
                LogSqlError(iVar1, statementIndex, nullptr);
                iVar4 = iVar1;
            }
        }
        if (iVar4 == 0) {
            iVar1 = _jag_sqlite3_step(*(uint64_t*)(&field_88 + lVar3));
            if (iVar1 == 100) {
                uVar2 = _jag_sqlite3_column_int64(*(uint64_t*)(&field_88 + lVar3), 0);
                *(uint64_t*)(&field_96 + lVar3) = uVar2;
                iVar1 = _jag_sqlite3_step(*(uint64_t*)(&field_88 + lVar3));
            }
            iVar4 = 0;
            if ((iVar1 != 0) && (iVar1 != 101)) {
                LogSqlError(iVar1, statementIndex, nullptr);
                iVar4 = 1;
            }
        }
        _jag_sqlite3_reset(*(uint64_t*)(&field_88 + lVar3));
        return iVar4 == 0;
    }

    // 0x1000bdca0
    uint32_t StockPriceCache::DBImpl::Parse(const char* str1, const char* str2) {
        char* str2_00;
        Logger* pLVar2;
        uint32_t uVar3;
        char* str1_00;
        unsigned long uVar4;
        long long local_50;
        int local_3c;
        int local_38;
        uint32_t local_34;

        time_t local_48 = _time(nullptr);
        field_56 = local_48 + 120;
        if (*str2 == '\n') {
            str2_00 = (char*)__ZL6strchrUa9enable_ifIXLb1EEEPKci(str1);
            local_34 = ExecuteStatement(4, -1, -1);
            if ((char)local_34 != '\0') {
                local_38 = 0;
                if ((str2_00 != nullptr) && (str2_00 < str2)) {
                    local_38 = 0;
                    do {
                        str1_00 = str2_00 + 1;
                        str2_00 = (char*)__ZL6strchrUa9enable_ifIXLb1EEEPKci(str1_00);
                        if (str2_00 == nullptr) {
                            str2_00 = str2;
                        }
                        uVar4 = (long)str2_00 - (long)str1_00;
                        if (2 < (long)uVar4) {
                            if (ParseInts(&local_3c, &local_50, str1_00, str2_00) == '\0') {
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/StockPriceCache.cpp",
                                                383, "Encountered unparseable line in digest csv: %.*s",
                                                uVar4 & 4294967295, str1_00);
                            }
                            if ((local_3c - 1U < 65534) && (0 < local_50)) {
                                local_38 = local_38 + 1;
                                ExecuteStatement(2, local_3c, local_50);
                            } else {
                                pLVar2 = logger::default_logger();
                                pLVar2->Log(false, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                            "osclient/StockPriceCache.cpp",
                                            378, "Ignoring stock digest line: %.*s", uVar4, str1_00);
                            }
                        }
                    } while ((str2_00 != nullptr) && (str2_00 < str2));
                }
                ExecuteStatement(5, -1, -1);
                if (0 < local_38) {
                    field_40 = local_48;
                    field_48 = local_48 + 14400;
                    field_56 = local_48 + 13200;
                    ExecuteStatement(0, 1, local_48);
                }
            }
            uVar3 = local_34;
        } else {
            pLVar2 = logger::default_logger();
            uVar3 = 0;
            pLVar2->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                        "StockPriceCache.cpp",
                        344, "error downloading stock price digest: Did not end in a line feed.");
        }
        return uVar3;
    }

    // 0x1000bded0
    void StockPriceCache::DBImpl::ProcessCompletedRequest() {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        unsigned long uVar6;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar9;
        char* str1;
        long lVar11;
        void* in_RSI;

        bool bVar1 = this != in_RSI;
        if (!bVar1) {
        LAB_1000bdefe:
            LogAssert("m_request != nullptr && m_request->IsRequestComplete()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "StockPriceCache.cpp",
                      301, nullptr);
        }
        if (((HTTPRequest*)(*this).operator->())->IsRequestComplete() == '\0')
            goto LAB_1000bdefe;
        RT7Core* this_01 = (RT7Core*)**this;
        auto pbVar4 = this_01->GetContentType();
        bVar1 = *pbVar4 == (*((value_type*)"text/csv"));
        if (bVar1) {
            bVar1 = false;
        } else {
            pbVar4 = (basic_string<char, BucketAllocatorEASTL>*)this_01->GetContentType();
            bVar1 = *pbVar4 == (*((value_type*)"text/comma-separated-values"));
            bVar1 = !bVar1;
        }
        if ((this_01->GetState() == 1) && (!bVar1)) {
            pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->GetMSAASampleCount();
            uVar6 = pvVar5->end();
            if (1 < uVar6) {
                pAVar9 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_01->GetMSAASampleCount();
                str1 = (char*)pAVar9->data();
                pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->GetMSAASampleCount();
                lVar11 = pvVar5->end();
                Parse(str1, str1 + lVar11 - 1);
                goto LAB_1000be02e;
            }
        }
        auto this_02 = logger::default_logger();
        uint64_t uVar7 = this_01->GetGridSize();
        pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->GetMSAASampleCount();
        uint64_t uVar8 = pvVar5->end();
        pAVar9 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_01->GetMSAASampleCount();
        uint64_t uVar10 = pAVar9->data();
        this_02->Log(
            false, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/StockPriceCache.cpp",
            306, "error downloading stock price digest %d: %.*s", uVar7, uVar8, uVar10);
    LAB_1000be02e:
        reset(nullptr);
    }

} // namespace jag::oldscape
