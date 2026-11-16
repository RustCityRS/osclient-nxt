// projects/osclient/StockPriceCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "StockPriceCache.h"

namespace jag::oldscape {
    // 0x1000bd220, 96 bytes, placed by class name and debug map
    // StockPriceCache::Init(eastl::string const&)
    undefined8 StockPriceCache::Init(basic_string* param_1) {
        DBImpl* this;
        undefined8 uVar2;
        basic_string local_28[8];

        if (SQLInit::Initialise() == '\0') {
            uVar2 = 0;
        } else {
            std::make_unique<StockPriceCache::DBImpl, eastl::stringconst&>(local_28);
            std::unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>::operator=(
                (unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>*)param_1,
                (unique_ptr*)local_28);
            local_28->~unique_ptr();
            this =
                (DBImpl*)
                    std::unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>::operator->(
                        (unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>*)param_1);
            uVar2 = Init();
        }
        return uVar2;
    }

    // 0x1000bd330, 528 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::Init()
    ulong StockPriceCache::DBImpl::Init() {
        char cVar1;
        char cVar2;
        int iVar3;
        char* pcVar4;
        long lVar5;
        time_t tVar6;
        undefined8 unaff_RBX;
        ulong uVar7;
        GameShell3Cache local_288[12];
        Filename local_158[19];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (cVar1 != '\0')
            goto LAB_1000bd4d0;
        local_288->GetRootStorage();
        Filename::operator/(local_158, (char*)local_288);
        local_288->~pair();
        pcVar4 = Filename::operator_cast_to_char_(local_158);
        iVar3 = _jag_sqlite3_open(pcVar4, &field_64);
        if (iVar3 == 0) {
            cVar1 = ExecuteSql(this, "CREATE TABLE IF NOT EXISTS meta(KEY INTEGER PRIMARY KEY, DATA INTEGER)");
            if (cVar1 == '\0')
                goto LAB_1000bd4ba;
            cVar1 = PrepareStatement(this, 1);
            if (cVar1 == '\0')
                goto LAB_1000bd4ba;
            lVar5 = Query(this, 1, 0);
            if (lVar5 == 1) {
                cVar1 = '\0';
            } else {
                cVar1 = ExecuteSql(this, "DROP TABLE IF EXISTS curPrice");
            }
            cVar2 = ExecuteSql(this, "CREATE TABLE IF NOT EXISTS curPrice(KEY INTEGER PRIMARY KEY, PRICE INTEGER)");
            if (cVar2 == '\0')
                goto LAB_1000bd4ba;
            uVar7 = 0;
            do {
                iVar3 = (int)uVar7;
                cVar2 = PrepareStatement(this, uVar7);
                if (cVar2 == '\0')
                    break;
                uVar7 = (ulong)(iVar3 + 1);
            } while (iVar3 != 5);
            if (cVar1 != '\0') {
                cVar1 = ExecuteStatement(this, 0, 0, 1);
                if (cVar1 == '\0')
                    goto LAB_1000bd4ba;
            }
            lVar5 = Query(this, 1, 1);
            tVar6 = _time((time_t*)0);
            if (((lVar5 == -1) || (tVar6 < lVar5)) || (lVar5 + 14400 < tVar6)) {
                field_40 = 0;
                field_48 = 0;
                field_56 = 0;
            } else {
                field_40 = lVar5;
                field_56 = lVar5 + 13200;
                field_48 = lVar5 + 14400;
            }
            uVar7 = CONCAT71((int7)(uVar7 >> 8), 1);
        } else {
            LogSqlError(this, iVar3, 4294967295, 0);
        LAB_1000bd4ba:
            Destroy(this);
            uVar7 = 0;
        }
        local_158->~pair();
    LAB_1000bd4d0:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar7 & 4294967295;
    }

    // 0x1000bd540, 64 bytes, placed by class name and debug map
    // StockPriceCache::Load(eastl::string const&)
    undefined8 StockPriceCache::Load(basic_string* param_1) {
        DBImpl* this_00;
        undefined8 uVar2;

        if (Init((basic_string*)this) == '\0') {
            uVar2 = 0;
        } else {
            StartDownloadIfNeeded(this);
            this_00 =
                (DBImpl*)
                    std::unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>::operator->(
                        (unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>*)this);
            uVar2 = this_00->Load(param_1);
        }
        return uVar2;
    }

    // 0x1000bd580, 64 bytes, placed by class name and debug map
    // StockPriceCache::StartDownloadIfNeeded()
    undefined* StockPriceCache::StartDownloadIfNeeded() {
        DBImpl* this_00;
        undefined* puVar2;
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            puVar2 = DataStatus::MISSING;
        } else {
            this_00 =
                (DBImpl*)
                    std::unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>::operator->(
                        (unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>*)this);
            puVar2 = (undefined*)this_00->StartDownloadIfNeeded();
        }
        return puVar2;
    }

    // 0x1000bd5c0, 400 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::Load(eastl::string const&)
    undefined4 StockPriceCache::DBImpl::Load(basic_string* param_1) {
        char cVar1;
        undefined4 uVar2;
        ulong uVar3;
        uchar* puVar4;
        char* pcVar5;
        long lVar6;
        undefined1 local_2a0[312];
        File local_168[13];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new ((local_2a0 + 8)) Filename(param_1);
        File::File(local_168, (Filename*)(local_2a0 + 8), 2, (Error*)0);
        ((local_2a0 + 8))->~pair();
        new (local_2a0) callstack::Callstack();
        uVar3 = local_168->length(local_2a0);
        cVar1 = local_2a0->IsValid();
        if (cVar1 == '\0') {
            new ((local_2a0 + 8)) Array<char, eastl::allocator>(uVar3);
            puVar4 = (uchar*)((local_2a0 + 8))->data();
            local_168->read(puVar4, (uint)uVar3, 0, local_2a0);
            cVar1 = local_2a0->IsValid();
            if (cVar1 == '\0') {
                pcVar5 = (char*)((local_2a0 + 8))->data();
                lVar6 = ((local_2a0 + 8))->data();
                uVar2 = Parse(this, pcVar5, (char*)(lVar6 + uVar3 + -1));
            } else {
                uVar2 = 0;
            }
            ((local_2a0 + 8))->~Array();
        } else {
            uVar2 = 0;
        }
        local_168->~File();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2;
    }

    // 0x1000bd750, 64 bytes, placed by class name and debug map
    // StockPriceCache::Destroy()
    void StockPriceCache::Destroy() {
        DBImpl* this_00;
        _func_decltype_nullptr* in_RSI;

        if (std::operator!=((unique_ptr*)this, in_RSI)) {
            this_00 =
                (DBImpl*)
                    std::unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>::operator->(
                        (unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>*)this);
            this_00->Destroy();
            reset(0);
        }
    }

    // 0x1000bd7a0, 80 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::Destroy()
    void StockPriceCache::DBImpl::Destroy() {
        long lVar1;

        lVar1 = 0;
        do {
            _jag_sqlite3_finalize(*(undefined8*)(&this[1].field_0 + lVar1));
            *(undefined8*)(&this[1].field_0 + lVar1) = 0;
            lVar1 = lVar1 + 32;
        } while (lVar1 != 128);
        _jag_sqlite3_close(field_64);
        field_64 = 0;
    }

    // 0x1000bd830, 224 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::StartDownloadIfNeeded()
    undefined* StockPriceCache::DBImpl::StartDownloadIfNeeded() {
        char cVar1;
        bool bVar2;
        HTTPRequest* this_00;
        time_t tVar3;
        basic_string* pbVar4;
        undefined** ppuVar5;
        _func_decltype_nullptr* in_RSI;
        unique_ptr local_38[8];

        ppuVar5 = &DataStatus::MISSING;
        if (field_64 != 0) {
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                bVar2 = std::operator!=((unique_ptr*)this, in_RSI);
                if (bVar2) {
                    this_00 =
                        (HTTPRequest*)
                            std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this);
                    cVar1 = this_00->IsRequestComplete();
                    if (cVar1 != '\0') {
                        ProcessCompletedRequest(this);
                    }
                }
                tVar3 = _time((time_t*)0);
                if (field_56 < tVar3) {
                    bVar2 = std::operator==((unique_ptr*)this, in_RSI);
                    if (bVar2) {
                        std::make_unique<http::HTTPRequest>();
                        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator=(
                            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this, local_38);
                        local_38->~unique_ptr();
                        pbVar4 =
                            (basic_string*)
                                std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
                                    (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this);
                        pbVar4->Get();
                    }
                }
                if ((field_40 < 1) || (field_48 <= tVar3)) {
                    ppuVar5 = &DataStatus::NOTLOADED;
                } else {
                    ppuVar5 = &DataStatus::READY;
                }
            }
        }
        return *ppuVar5;
    }

    // 0x1000bd910, 80 bytes, placed by class name and debug map
    // StockPriceCache::GetMarketPriceForObj(int&, int)
    undefined* StockPriceCache::GetMarketPriceForObj(int* param_1, int param_2) {
        DBImpl* this_00;
        undefined* puVar2;

        if (std::operator==((unique_ptr*)this, (_func_decltype_nullptr*)param_1)) {
            puVar2 = DataStatus::MISSING;
        } else {
            this_00 =
                (DBImpl*)
                    std::unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>::operator->(
                        (unique_ptr<StockPriceCache::DBImpl, std::default_delete<StockPriceCache::DBImpl>>*)this);
            puVar2 = (undefined*)this_00->GetMarketPriceForObj(param_1, param_2);
        }
        return puVar2;
    }

    // 0x1000bd960, 96 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::GetMarketPriceForObj(int&, int)
    undefined* StockPriceCache::DBImpl::GetMarketPriceForObj(int* param_1, int param_2) {
        undefined* puVar1;
        long lVar2;
        undefined** ppuVar3;

        puVar1 = (undefined*)StartDownloadIfNeeded(this);
        ppuVar3 = &DataStatus::READY;
        if (puVar1 == DataStatus::READY) {
            lVar2 = Query(this, 3, param_2);
            if (lVar2 == -1) {
                ppuVar3 = &DataStatus::MISSING;
            } else {
                *param_1 = (int)lVar2;
            }
            puVar1 = *ppuVar3;
        }
        return puVar1;
    }

    // 0x1000bd9c0, 240 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::LogSqlError(int, StockPriceCache::DBImpl::StatementIndex, char const*)
    void StockPriceCache::DBImpl::LogSqlError(undefined4 param_1, uint param_3, long param_4) {
        undefined8 uVar1;
        undefined8 uVar2;
        eastl::string local_40[32];

        eastl::string::basic_string(local_40, "Sqlite error (%d)", param_1);
        if (param_3 != 4294967295) {
            eastl::string::append_sprintf((char*)local_40, " in statement %d", (ulong)param_3);
        }
        if (param_4 == 0) {
            if (field_64 != 0) {
                uVar1 = _jag_sqlite3_errmsg();
                eastl::string::append_sprintf((char*)local_40, &DAT_100e624f3, uVar1);
            }
        } else {
            eastl::string::append_sprintf((char*)local_40, &DAT_100e624f3, param_4);
        }
        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar1, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/StockPriceCache.cpp",
            264, &DAT_100e377c0, uVar2);
        eastl::string::~basic_string(local_40);
    }

    // 0x1000bdab0, 80 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::ExecuteSql(char const*)
    bool StockPriceCache::DBImpl::ExecuteSql(char* param_1) {
        int iVar1;
        undefined8 local_20;

        iVar1 = _jag_sqlite3_exec(field_64, param_1, 0, 0, &local_20);
        if (iVar1 != 0) {
            LogSqlError(this, iVar1, 4294967295, local_20);
        }
        return iVar1 == 0;
    }

    // 0x1000bdb00, 96 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::PrepareStatement(StockPriceCache::DBImpl::StatementIndex)
    bool StockPriceCache::DBImpl::PrepareStatement(int param_2) {
        int iVar1;

        iVar1 = _jag_sqlite3_prepare_v2(field_64, *(undefined8*)(&field_80 + (long)param_2 * 32), 4294967295,
                                        &field_88 + (long)param_2 * 32, 0);
        if (iVar1 != 0) {
            LogSqlError(this, iVar1, param_2, 0);
        }
        return iVar1 == 0;
    }

    // 0x1000bdb60, 48 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::Query(StockPriceCache::DBImpl::StatementIndex, int)
    undefined8 StockPriceCache::DBImpl::Query(long param_1, int param_2) {
        ExecuteStatement();
        return *(undefined8*)(param_1 + 96 + (long)param_2 * 32);
    }

    // 0x1000bdb90, 256 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::ExecuteStatement(StockPriceCache::DBImpl::StatementIndex, int, long long)
    bool StockPriceCache::DBImpl::ExecuteStatement(int param_2, undefined8 param_3, undefined8 param_4) {
        int iVar1;
        undefined8 uVar2;
        long lVar3;
        int iVar4;

        lVar3 = (long)param_2 * 32;
        *(undefined8*)(&field_96 + lVar3) = 18446744073709551615;
        iVar4 = 0;
        if (0 < *(int*)(&field_72 + lVar3)) {
            iVar1 = _jag_sqlite3_bind_int(*(undefined8*)(&field_88 + lVar3), 1);
            if ((iVar1 == 0) && (iVar1 = 0, 1 < *(int*)(&field_72 + lVar3))) {
                iVar1 = _jag_sqlite3_bind_int64(*(undefined8*)(&field_88 + lVar3), 2, param_4);
            }
            if (iVar1 != 0) {
                LogSqlError(this, iVar1, param_2, 0);
                iVar4 = iVar1;
            }
        }
        if (iVar4 == 0) {
            iVar1 = _jag_sqlite3_step(*(undefined8*)(&field_88 + lVar3));
            if (iVar1 == 100) {
                uVar2 = _jag_sqlite3_column_int64(*(undefined8*)(&field_88 + lVar3), 0);
                *(undefined8*)(&field_96 + lVar3) = uVar2;
                iVar1 = _jag_sqlite3_step(*(undefined8*)(&field_88 + lVar3));
            }
            iVar4 = 0;
            if ((iVar1 != 0) && (iVar1 != 101)) {
                LogSqlError(this, iVar1, param_2, 0);
                iVar4 = 1;
            }
        }
        _jag_sqlite3_reset(*(undefined8*)(&field_88 + lVar3));
        return iVar4 == 0;
    }

    // 0x1000bdca0, 512 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::Parse(char const*, char const*)
    undefined4 StockPriceCache::DBImpl::Parse(char* param_1, char* param_2) {
        char* pcVar2;
        undefined8 uVar3;
        undefined4 uVar4;
        char* pcVar5;
        ulong uVar6;
        long local_50;
        time_t local_48;
        int local_3c;
        int local_38;
        undefined4 local_34;

        local_48 = _time((time_t*)0);
        field_56 = local_48 + 120;
        if (*param_2 == '\n') {
            pcVar2 = (char*)__ZL6strchrUa9enable_ifIXLb1EEEPKci(param_1);
            local_34 = ExecuteStatement(this, 4, 4294967295, 18446744073709551615);
            if ((char)local_34 != '\0') {
                local_38 = 0;
                if ((pcVar2 != (char*)0) && (pcVar2 < param_2)) {
                    local_38 = 0;
                    do {
                        pcVar5 = pcVar2 + 1;
                        pcVar2 = (char*)__ZL6strchrUa9enable_ifIXLb1EEEPKci(pcVar5);
                        if (pcVar2 == (char*)0) {
                            pcVar2 = param_2;
                        }
                        uVar6 = (long)pcVar2 - (long)pcVar5;
                        if (2 < (long)uVar6) {
                            if (ParseInts(&local_3c, &local_50, pcVar5, pcVar2) == '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/StockPriceCache.cpp",
                                                383, "Encountered unparseable line in digest csv: %.*s",
                                                uVar6 & 4294967295, pcVar5);
                            }
                            if ((local_3c - 1U < 65534) && (0 < local_50)) {
                                local_38 = local_38 + 1;
                                ExecuteStatement(this, 2);
                            } else {
                                uVar3 = logger::default_logger();
                                logger::Logger::Log(uVar3, 0, 3,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "projects/osclient/StockPriceCache.cpp",
                                                    378, "Ignoring stock digest line: %.*s", uVar6, pcVar5);
                            }
                        }
                    } while ((pcVar2 != (char*)0) && (pcVar2 < param_2));
                }
                ExecuteStatement(this, 5, 4294967295, 18446744073709551615);
                if (0 < local_38) {
                    field_40 = local_48;
                    field_48 = local_48 + 14400;
                    field_56 = local_48 + 13200;
                    ExecuteStatement(this, 0, 1);
                }
            }
            uVar4 = local_34;
        } else {
            uVar3 = logger::default_logger();
            uVar4 = 0;
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "StockPriceCache.cpp",
                                344, "error downloading stock price digest: Did not end in a line feed.");
        }
        return uVar4;
    }

    // 0x1000bded0, 384 bytes, placed by class name and debug map
    // StockPriceCache::DBImpl::ProcessCompletedRequest()
    void StockPriceCache::DBImpl::ProcessCompletedRequest() {
        bool bVar1;
        char cVar2;
        int iVar3;
        HTTPRequest* this_00;
        RT7Core* this_01;
        basic_string* pbVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        ulong uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar10;
        undefined8 uVar11;
        char* pcVar12;
        long lVar13;
        _func_decltype_nullptr* in_RSI;

        bVar1 = std::operator!=((unique_ptr*)this, in_RSI);
        if (!bVar1) {
        LAB_1000bdefe:
            /* WARNING: Subroutine does not return */
            LogAssert("m_request != nullptr && m_request->IsRequestComplete()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                      "StockPriceCache.cpp",
                      301, (char*)0);
        }
        this_00 = (HTTPRequest*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator->(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this);
        cVar2 = this_00->IsRequestComplete();
        if (cVar2 == '\0')
            goto LAB_1000bdefe;
        this_01 = (RT7Core*)std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::operator*(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)this);
        pbVar4 = (basic_string*)this_01->GetContentType();
        bVar1 = eastl::operator==(pbVar4, (value_type*)"text/csv");
        if (bVar1) {
            bVar1 = false;
        } else {
            pbVar4 = (basic_string*)this_01->GetContentType();
            bVar1 = eastl::operator==(pbVar4, (value_type*)"text/comma-separated-values");
            bVar1 = !bVar1;
        }
        iVar3 = this_01->GetState();
        if ((iVar3 == 1) && (!bVar1)) {
            pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->GetMSAASampleCount();
            uVar6 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
            if (1 < uVar6) {
                pAVar10 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_01->GetMSAASampleCount();
                pcVar12 = (char*)pAVar10->data();
                pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->GetMSAASampleCount();
                lVar13 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
                Parse(this, pcVar12, pcVar12 + lVar13 + -1);
                goto LAB_1000be02e;
            }
        }
        uVar7 = logger::default_logger();
        uVar8 = this_01->GetGridSize();
        pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->GetMSAASampleCount();
        uVar9 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar5);
        pAVar10 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)this_01->GetMSAASampleCount();
        uVar11 = pAVar10->data();
        logger::Logger::Log(
            uVar7, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/StockPriceCache.cpp",
            306, "error downloading stock price digest %d: %.*s", uVar8, uVar9, uVar11);
    LAB_1000be02e:
        reset(0);
    }

} // namespace jag::oldscape
