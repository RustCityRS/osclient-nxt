// libs/jtl/pool/RandomAccessPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::loottracker {
    // 0x1001298e0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceInsertStatement()
    char* GetSourceInsertStatement() {
        return "INSERT INTO source(sourceName, category, level, modified, uniqueIdentifier) VALUES(?, ?, ?, ?, ?)";
    }

    // 0x1001298f0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceCountDistinctStatement()
    char* GetSourceCountDistinctStatement() {
        return "SELECT COUNT(DISTINCT sourceName) FROM source";
    }

    // 0x100129900, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceCountStatement()
    char* GetSourceCountStatement() {
        return "SELECT COUNT(*) FROM source WHERE sourceName=?";
    }

    // 0x100129910, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceIdViaNameStatement()
    char* GetSourceIdViaNameStatement() {
        return "SELECT sourceID FROM source WHERE sourceName=? ORDER BY modified DESC";
    }

    // 0x100129920, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceNameViaIdStatement()
    char* GetSourceNameViaIdStatement() {
        return "SELECT sourceName FROM source WHERE sourceID=?";
    }

    // 0x100129930, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceIdViaIdentifierStatement()
    char* GetSourceIdViaIdentifierStatement() {
        return "SELECT sourceID FROM source WHERE uniqueIdentifier=? ORDER BY modified DESC";
    }

    // 0x100129940, 16 bytes, inline, placed by debug map only (low confidence)
    // ListSourceByNameStatement()
    char* ListSourceByNameStatement() {
        return "SELECT sourceID FROM source GROUP BY sourceName ORDER BY sourceID ASC LIMIT ?,?";
    }

    // 0x100129950, 16 bytes, inline, placed by debug map only (low confidence)
    // ListSourceByNameModifiedStatement()
    char* ListSourceByNameModifiedStatement() {
        return "SELECT sourceID, max(modified) FROM source GROUP BY sourceName ORDER BY modified DESC LIMIT ?,?";
    }

    // 0x100129960, 16 bytes, inline, placed by debug map only (low confidence)
    // ListSourceByIDStatement()
    char* ListSourceByIDStatement() {
        return "SELECT DISTINCT sourceID FROM source ORDER BY sourceID ASC LIMIT ?,?";
    }

    // 0x100129970, 16 bytes, inline, placed by debug map only (low confidence)
    // ListSourceByIDModifiedStatement()
    char* ListSourceByIDModifiedStatement() {
        return "SELECT DISTINCT sourceID FROM source ORDER BY modified DESC LIMIT ?,?";
    }

    // 0x100129980, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceTempInsertStatement()
    char* GetSourceTempInsertStatement() {
        return "INSERT INTO sourceTemp(sourceID, sourceName, category, level, modified) SELECT sourceID, sourceName, "
               "category, level, modified FROM source WHERE sourceName=? ORDER BY sourceID DESC";
    }

    // 0x100129990, 16 bytes, inline, placed by debug map only (low confidence)
    // GetSourceTempSelectByStatement()
    char* GetSourceTempSelectByStatement() {
        return "SELECT * FROM sourceTemp WHERE ID=?";
    }

    // 0x1001299a0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootDeleteBySourceNameStatement()
    char* GetLootDeleteBySourceNameStatement() {
        return "DELETE FROM loot WHERE sourceName=?";
    }

    // 0x1001299b0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootDeleteBySourceIDStatement()
    char* GetLootDeleteBySourceIDStatement() {
        return "DELETE FROM loot WHERE sourceID=?";
    }

    // 0x1001299c0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetDeleteSourceByNameStatement()
    char* GetDeleteSourceByNameStatement() {
        return "DELETE FROM source WHERE sourceName=?";
    }

    // 0x1001299d0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetDeleteSourceByIdStatement()
    char* GetDeleteSourceByIdStatement() {
        return "DELETE FROM source WHERE sourceID=?";
    }

    // 0x1001299e0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootUpsertStatement()
    char* GetLootUpsertStatement() {
        return "INSERT INTO loot(objectId, count, sourceName, sourceID, modified) VALUES(?, ?, ?, ?, ?)";
    }

    // 0x1001299f0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootObjectBySourceNameStatement()
    char* GetLootObjectBySourceNameStatement() {
        return "SELECT COUNT(DISTINCT objectId) FROM loot WHERE sourceName=?";
    }

    // 0x100129a00, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootObjectBySourceIdStatement()
    char* GetLootObjectBySourceIdStatement() {
        return "SELECT COUNT(DISTINCT objectId) FROM loot WHERE sourceID=?";
    }

    // 0x100129a10, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootTempInsertByNameStatement()
    char* GetLootTempInsertByNameStatement() {
        return "INSERT INTO lootTemp(objectId, count, sourceName, modified) SELECT objectId, count, sourceName, "
               "modified FROM loot WHERE sourceName=? ORDER BY objectId ON CONFLICT(objectId) DO UPDATE SET count = "
               "count + EXCLUDED.count";
    }

    // 0x100129a20, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootTempInsertByIdStatement()
    char* GetLootTempInsertByIdStatement() {
        return "INSERT INTO lootTemp(objectId, count, sourceId, modified) SELECT objectId, count, sourceId, modified "
               "FROM loot WHERE sourceId=? ORDER BY objectId ON CONFLICT(objectId) DO UPDATE SET count = count + "
               "EXCLUDED.count";
    }

    // 0x100129a30, 16 bytes, inline, placed by debug map only (low confidence)
    // GetLootTempSelectByIndexStatement()
    char* GetLootTempSelectByIndexStatement() {
        return "SELECT * FROM lootTemp WHERE ID=?";
    }

    // 0x100129a40, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreSourceInsertStatement()
    char* GetIgnoreSourceInsertStatement() {
        return "INSERT INTO ignoreSource(pattern) VALUES(?) ON CONFLICT(pattern) DO NOTHING";
    }

    // 0x100129a50, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreSourceDeleteByPatternStatement()
    char* GetIgnoreSourceDeleteByPatternStatement() {
        return "DELETE FROM ignoreSource WHERE pattern=?";
    }

    // 0x100129a60, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreSourceDeleteByIndexStatement()
    char* GetIgnoreSourceDeleteByIndexStatement() {
        return "DELETE FROM ignoreSource WHERE ID=?";
    }

    // 0x100129a70, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreSourceCountStatement()
    char* GetIgnoreSourceCountStatement() {
        return "SELECT COUNT(DISTINCT pattern) FROM ignoreSource";
    }

    // 0x100129a80, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoredSourceByIndexStatement()
    char* GetIgnoredSourceByIndexStatement() {
        return "SELECT pattern FROM ignoreSource WHERE ID=?";
    }

    // 0x100129a90, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreSourceDeleteStatement()
    char* GetIgnoreSourceDeleteStatement() {
        return "DELETE FROM ignoreSource";
    }

    // 0x100129aa0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreItemInsertStatement()
    char* GetIgnoreItemInsertStatement() {
        return "INSERT INTO ignoreLoot(pattern) VALUES(?) ON CONFLICT(pattern) DO NOTHING";
    }

    // 0x100129ab0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreItemDeleteByPatternStatement()
    char* GetIgnoreItemDeleteByPatternStatement() {
        return "DELETE FROM ignoreLoot WHERE pattern=?";
    }

    // 0x100129ac0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreItemDeleteByIndexStatement()
    char* GetIgnoreItemDeleteByIndexStatement() {
        return "DELETE FROM ignoreLoot WHERE ID=?";
    }

    // 0x100129ad0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreItemCountStatement()
    char* GetIgnoreItemCountStatement() {
        return "SELECT COUNT(DISTINCT pattern) FROM ignoreLoot";
    }

    // 0x100129ae0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoredItemByIndexStatement()
    char* GetIgnoredItemByIndexStatement() {
        return "SELECT pattern FROM ignoreLoot WHERE ID=?";
    }

    // 0x100129af0, 16 bytes, inline, placed by debug map only (low confidence)
    // GetIgnoreItemDeleteStatement()
    char* GetIgnoreItemDeleteStatement() {
        return "DELETE FROM ignoreLoot";
    }

    // 0x100129b00, 16 bytes, inline, placed by debug map only (low confidence)
    // GetCheckVersionStatement()
    char* GetCheckVersionStatement() {
        return "SELECT versionNumber FROM version WHERE ID=1";
    }

    // 0x100129b10, 16 bytes, inline, placed by debug map only (low confidence)
    // GetUpdateVersionStatement()
    char* GetUpdateVersionStatement() {
        return "UPDATE version SET versionNumber = ? WHERE ID=1";
    }

    // 0x100129b20, 16 bytes, inline, placed by debug map only (low confidence)
    // GetTableNamesStatement()
    char* GetTableNamesStatement() {
        return "SELECT \'DROP TABLE IF EXISTS \' || name FROM sqlite_master WHERE type = \'table\' AND name NOT LIKE "
               "\'version\'";
    }

} // namespace jag::oldscape::loottracker

namespace jag {
    template <
        typename...> // 1 instantiations, e.g. <Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>
    class RandomAccessPool {
    public:
        RandomAccessPool();
        ~RandomAccessPool();
        ulong IsValidObject(unsigned long);
        void Destroy(unsigned long);
        void operator[](unsigned long);
        void capacity() const;
        unsigned long Create<int>(int&&);
    };

    // 0x100129130, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::RandomAccessPool(): jumps straight to the base-object constructor

    // 0x100129150, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::RandomAccessPool()
    void jag::RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::RandomAccessPool(
        RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>* this) {
        new (this) eastl::fixed_vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>, 64ul,
                                       true, eastl::allocator>();
        *(undefined8*)(this + 2088) = 0;
        *(undefined8*)(this + 2096) = 0;
        resize(64);
        *(undefined8*)(this + 2088) = 64;
    }

    // 0x100129fa0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::~RandomAccessPool(): jumps straight to the base-object destructor

    // 0x10012a0f0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::~RandomAccessPool()
    void jag::RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::~RandomAccessPool(
        RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>* this) {
        ~fixed_vector();
    }

    // 0x1001842e0, 64 bytes, inline, placed by class name
    // RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::IsValidObject(unsigned long)
    ulong jag::RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::IsValidObject(
        RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>* this, ulong param_1) {
        ulong uVar1;
        StaticPointLight* this_00;

        uVar1 = size();
        if (param_1 < uVar1) {
            this_00 = (StaticPointLight*)
                eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                   eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           param_1);
            uVar1 = this_00->GetLightLevelsBelow();
            uVar1 = uVar1 ^ 1;
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100184330, 304 bytes, inline, placed by class name
    // RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::Destroy(unsigned long)
    void jag::RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::Destroy(
        RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>* this, ulong param_1) {
        char cVar1;
        ulong uVar2;
        StaticPointLight* this_00;
        long lVar3;
        ulong uVar4;
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this_01;

        uVar2 = size();
        if (uVar2 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "index < poolSize",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/RandomAccessPool.h", 69,
                (char*)0);
        }
        if ((uVar2 < 65) || (uVar2 - 1 != param_1)) {
            this_01 = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>*)
                eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                   eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           param_1);
            this_01->SetNull();
            *(long*)(this + 2088) = *(long*)(this + 2088) + 1;
            if (param_1 < *(ulong*)(this + 2096)) {
                *(ulong*)(this + 2096) = param_1;
            }
        } else {
            do {
                uVar4 = param_1;
                param_1 = uVar4 - 1;
                if (param_1 < 64)
                    break;
                this_00 = (StaticPointLight*)
                    eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                        param_1);
                cVar1 = this_00->GetLightLevelsBelow();
            } while (cVar1 != '\0');
            resize(uVar4);
            lVar3 = size();
            lVar3 = eastl::min_alt<unsigned long>(*(ulong*)(this + 2088), uVar2 - lVar3);
            *(long*)(this + 2088) = *(long*)(this + 2088) - lVar3;
            uVar2 = *(ulong*)(this + 2096);
            uVar4 = size();
            if (uVar4 < uVar2) {
                *(undefined8*)(this + 2096) = 0;
            }
            uVar2 = size();
            uVar4 = capacity();
            if (uVar2 < uVar4 >> 1) {
                shrink_to_fit();
            }
        }
    }

    // 0x1001844d0, 32 bytes, inline, placed by class name
    // RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::operator[](unsigned long)
    void jag::RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::operator[](
        RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>* this, ulong param_1) {
        Layout* this_00;

        this_00 = (Layout*)eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                           eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                   param_1);
        eastl::string::Layout::SSOBeginPtr(this_00, (type*)param_1);
    }

    // 0x100184620, 16 bytes, inline, placed by class name
    // RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::capacity() const
    void jag::RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::capacity(
        RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>* this) {
        capacity();
    }

    // 0x100185480, 384 bytes, inline, placed by class name
    // unsigned long RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::Create<int>(int&&)
    ulong jag::RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>::Create<int>(
        RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>, 64ul>* this, int* param_1) {
        char cVar1;
        ulong uVar2;
        StaticPointLight* pSVar3;
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>* this_00;
        long lVar4;
        ulong uVar5;
        ulong uVar6;
        Nullable local_70[32];
        Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> local_50[24];

        if (*(long*)(this + 2088) == 0) {
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                emplace_back<int>(
                    (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                            eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                    param_1);
            lVar4 = size();
            uVar6 = lVar4 - 1;
        } else {
            uVar5 = *(ulong*)(this + 2096);
            uVar2 = size();
            uVar6 = 0;
            if (uVar5 < uVar2) {
                uVar6 = uVar5;
            }
            pSVar3 = (StaticPointLight*)
                eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                   eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           uVar6);
            cVar1 = pSVar3->GetLightLevelsBelow();
            while (cVar1 == '\0') {
                uVar6 = uVar6 + 1;
                if (uVar6 == *(ulong*)(this + 2096)) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("currIndex != m_nextFreeIndex",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/"
                              "RandomAccessPool.h",
                              59, (char*)0);
                }
                uVar5 = size();
                if (uVar5 <= uVar6) {
                    uVar6 = 0;
                }
                pSVar3 = (StaticPointLight*)
                    eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                        uVar6);
                cVar1 = pSVar3->GetLightLevelsBelow();
            }
            Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>::Array(local_50, (long)*param_1);
            Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::Nullable(local_70, local_50);
            this_00 = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>*)
                eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                   eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)this,
                           uVar6);
            Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>::operator=(this_00, local_70);
            local_70->~Nullable();
            local_50->~Array();
            *(ulong*)(this + 2096) = uVar6 + 1;
            *(long*)(this + 2088) = *(long*)(this + 2088) + -1;
        }
        return uVar6;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100129c30, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ClientEntityID::ClientEntityID()
    void ClientEntityID::ClientEntityID() {
        field_0 = 0;
        field_4 = -1;
    }

} // namespace jag::oldscape
