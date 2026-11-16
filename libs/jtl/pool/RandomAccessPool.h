// libs/jtl/pool/RandomAccessPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::loottracker {
    // 0x1001298e0
    char* GetSourceInsertStatement() {
        return "INSERT INTO source(sourceName, category, level, modified, uniqueIdentifier) VALUES(?, ?, ?, ?, ?)";
    }

    // 0x1001298f0
    char* GetSourceCountDistinctStatement() {
        return "SELECT COUNT(DISTINCT sourceName) FROM source";
    }

    // 0x100129900
    char* GetSourceCountStatement() {
        return "SELECT COUNT(*) FROM source WHERE sourceName=?";
    }

    // 0x100129910
    char* GetSourceIdViaNameStatement() {
        return "SELECT sourceID FROM source WHERE sourceName=? ORDER BY modified DESC";
    }

    // 0x100129920
    char* GetSourceNameViaIdStatement() {
        return "SELECT sourceName FROM source WHERE sourceID=?";
    }

    // 0x100129930
    char* GetSourceIdViaIdentifierStatement() {
        return "SELECT sourceID FROM source WHERE uniqueIdentifier=? ORDER BY modified DESC";
    }

    // 0x100129940
    char* ListSourceByNameStatement() {
        return "SELECT sourceID FROM source GROUP BY sourceName ORDER BY sourceID ASC LIMIT ?,?";
    }

    // 0x100129950
    char* ListSourceByNameModifiedStatement() {
        return "SELECT sourceID, max(modified) FROM source GROUP BY sourceName ORDER BY modified DESC LIMIT ?,?";
    }

    // 0x100129960
    char* ListSourceByIDStatement() {
        return "SELECT DISTINCT sourceID FROM source ORDER BY sourceID ASC LIMIT ?,?";
    }

    // 0x100129970
    char* ListSourceByIDModifiedStatement() {
        return "SELECT DISTINCT sourceID FROM source ORDER BY modified DESC LIMIT ?,?";
    }

    // 0x100129980
    char* GetSourceTempInsertStatement() {
        return "INSERT INTO sourceTemp(sourceID, sourceName, category, level, modified) SELECT sourceID, sourceName, "
               "category, level, modified FROM source WHERE sourceName=? ORDER BY sourceID DESC";
    }

    // 0x100129990
    char* GetSourceTempSelectByStatement() {
        return "SELECT * FROM sourceTemp WHERE ID=?";
    }

    // 0x1001299a0
    char* GetLootDeleteBySourceNameStatement() {
        return "DELETE FROM loot WHERE sourceName=?";
    }

    // 0x1001299b0
    char* GetLootDeleteBySourceIDStatement() {
        return "DELETE FROM loot WHERE sourceID=?";
    }

    // 0x1001299c0
    char* GetDeleteSourceByNameStatement() {
        return "DELETE FROM source WHERE sourceName=?";
    }

    // 0x1001299d0
    char* GetDeleteSourceByIdStatement() {
        return "DELETE FROM source WHERE sourceID=?";
    }

    // 0x1001299e0
    char* GetLootUpsertStatement() {
        return "INSERT INTO loot(objectId, count, sourceName, sourceID, modified) VALUES(?, ?, ?, ?, ?)";
    }

    // 0x1001299f0
    char* GetLootObjectBySourceNameStatement() {
        return "SELECT COUNT(DISTINCT objectId) FROM loot WHERE sourceName=?";
    }

    // 0x100129a00
    char* GetLootObjectBySourceIdStatement() {
        return "SELECT COUNT(DISTINCT objectId) FROM loot WHERE sourceID=?";
    }

    // 0x100129a10
    char* GetLootTempInsertByNameStatement() {
        return "INSERT INTO lootTemp(objectId, count, sourceName, modified) SELECT objectId, count, sourceName, "
               "modified FROM loot WHERE sourceName=? ORDER BY objectId ON CONFLICT(objectId) DO UPDATE SET count = "
               "count + EXCLUDED.count";
    }

    // 0x100129a20
    char* GetLootTempInsertByIdStatement() {
        return "INSERT INTO lootTemp(objectId, count, sourceId, modified) SELECT objectId, count, sourceId, modified "
               "FROM loot WHERE sourceId=? ORDER BY objectId ON CONFLICT(objectId) DO UPDATE SET count = count + "
               "EXCLUDED.count";
    }

    // 0x100129a30
    char* GetLootTempSelectByIndexStatement() {
        return "SELECT * FROM lootTemp WHERE ID=?";
    }

    // 0x100129a40
    char* GetIgnoreSourceInsertStatement() {
        return "INSERT INTO ignoreSource(pattern) VALUES(?) ON CONFLICT(pattern) DO NOTHING";
    }

    // 0x100129a50
    char* GetIgnoreSourceDeleteByPatternStatement() {
        return "DELETE FROM ignoreSource WHERE pattern=?";
    }

    // 0x100129a60
    char* GetIgnoreSourceDeleteByIndexStatement() {
        return "DELETE FROM ignoreSource WHERE ID=?";
    }

    // 0x100129a70
    char* GetIgnoreSourceCountStatement() {
        return "SELECT COUNT(DISTINCT pattern) FROM ignoreSource";
    }

    // 0x100129a80
    char* GetIgnoredSourceByIndexStatement() {
        return "SELECT pattern FROM ignoreSource WHERE ID=?";
    }

    // 0x100129a90
    char* GetIgnoreSourceDeleteStatement() {
        return "DELETE FROM ignoreSource";
    }

    // 0x100129aa0
    char* GetIgnoreItemInsertStatement() {
        return "INSERT INTO ignoreLoot(pattern) VALUES(?) ON CONFLICT(pattern) DO NOTHING";
    }

    // 0x100129ab0
    char* GetIgnoreItemDeleteByPatternStatement() {
        return "DELETE FROM ignoreLoot WHERE pattern=?";
    }

    // 0x100129ac0
    char* GetIgnoreItemDeleteByIndexStatement() {
        return "DELETE FROM ignoreLoot WHERE ID=?";
    }

    // 0x100129ad0
    char* GetIgnoreItemCountStatement() {
        return "SELECT COUNT(DISTINCT pattern) FROM ignoreLoot";
    }

    // 0x100129ae0
    char* GetIgnoredItemByIndexStatement() {
        return "SELECT pattern FROM ignoreLoot WHERE ID=?";
    }

    // 0x100129af0
    char* GetIgnoreItemDeleteStatement() {
        return "DELETE FROM ignoreLoot";
    }

    // 0x100129b00
    char* GetCheckVersionStatement() {
        return "SELECT versionNumber FROM version WHERE ID=1";
    }

    // 0x100129b10
    char* GetUpdateVersionStatement() {
        return "UPDATE version SET versionNumber = ? WHERE ID=1";
    }

    // 0x100129b20
    char* GetTableNamesStatement() {
        return "SELECT \'DROP TABLE IF EXISTS \' || name FROM sqlite_master WHERE type = \'table\' AND name NOT LIKE "
               "\'version\'";
    }

} // namespace jag::oldscape::loottracker

namespace jag {
    template <typename...> // 1 instantiations, e.g. <Array<shared_ptr<oldscape::rs2lib::IfType>>, 64ul>
    class RandomAccessPool {
    public:
        RandomAccessPool();
        ~RandomAccessPool();
        unsigned long IsValidObject(unsigned long arg1);
        void Destroy(unsigned long arg1);
        void operator[](unsigned long arg1);
        void capacity() const;
        unsigned long Create<int>(int&& arg1);
    };

    // 0x100129150
    RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>>, 64ul>::RandomAccessPool()
        : eastl::fixed_vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>, 64ul>() {
        *(uint64_t*)(this + 2088) = 0;
        *(uint64_t*)(this + 2096) = 0;
        resize(64);
        *(uint64_t*)(this + 2088) = 64;
    }

    // 0x10012a0f0
    RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>>, 64ul>::~RandomAccessPool() {}

    // 0x1001842e0
    unsigned long
    RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>>, 64ul>::IsValidObject(unsigned long arg1) {
        unsigned long uVar1 = size();
        if (arg1 < uVar1) {
            uVar1 = ((StaticPointLight*)(*this)[arg1])->GetLightLevelsBelow();
            uVar1 = uVar1 ^ 1;
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x100184330
    void RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>>, 64ul>::Destroy(unsigned long arg1) {
        bool cVar1;
        long lVar3;
        unsigned long uVar4;

        unsigned long uVar2 = size();
        if (uVar2 <= arg1) {
            LogAssert(
                "index < poolSize",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/RandomAccessPool.h", 69,
                nullptr);
        }
        if ((uVar2 < 65) || (uVar2 - 1 != arg1)) {
            ((Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>*)(*this)[arg1])->SetNull();
            *(long*)(this + 2088) = *(long*)(this + 2088) + 1;
            if (arg1 < *(unsigned long*)(this + 2096)) {
                *(unsigned long*)(this + 2096) = arg1;
            }
        } else {
            do {
                uVar4 = arg1;
                arg1 = uVar4 - 1;
                if (arg1 < 64)
                    break;
                cVar1 = ((StaticPointLight*)(*this)[arg1])->GetLightLevelsBelow();
            } while (cVar1);
            resize(uVar4);
            lVar3 = size();
            lVar3 = eastl::min_alt<unsigned long>(*(unsigned long*)(this + 2088), uVar2 - lVar3);
            *(long*)(this + 2088) = *(long*)(this + 2088) - lVar3;
            uVar2 = *(unsigned long*)(this + 2096);
            uVar4 = size();
            if (uVar4 < uVar2) {
                *(uint64_t*)(this + 2096) = 0;
            }
            uVar2 = size();
            uVar4 = capacity();
            if (uVar2 < uVar4 >> 1) {
                shrink_to_fit();
            }
        }
    }

    // 0x1001844d0
    void RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>>, 64ul>::operator[](unsigned long arg1) {
        ((Layout*)(*this)[arg1])->SSOBeginPtr();
    }

    // 0x100184620
    void RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>>, 64ul>::capacity() const {
        capacity();
    }

    // 0x100185480
    unsigned long RandomAccessPool<Array<shared_ptr<oldscape::rs2lib::IfType>>, 64ul>::Create<int>(int&& arg1) {
        bool cVar1;
        unsigned long uVar2;
        StaticPointLight* pSVar3;
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>* this_00;
        unsigned long uVar5;
        unsigned long arg1_00;
        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>> local_70;
        Array<shared_ptr<oldscape::rs2lib::IfType>> local_50;

        if (*(long*)(this + 2088) == 0) {
            emplace_back<int>(arg1);
            arg1_00 = size() - 1;
        } else {
            uVar5 = *(unsigned long*)(this + 2096);
            uVar2 = size();
            arg1_00 = 0;
            if (uVar5 < uVar2) {
                arg1_00 = uVar5;
            }
            pSVar3 = (StaticPointLight*)(*this)[arg1_00];
            cVar1 = pSVar3->GetLightLevelsBelow();
            while (!cVar1) {
                arg1_00 = arg1_00 + 1;
                if (arg1_00 == *(unsigned long*)(this + 2096)) {
                    LogAssert("currIndex != m_nextFreeIndex",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/"
                              "RandomAccessPool.h",
                              59, nullptr);
                }
                uVar5 = size();
                if (uVar5 <= arg1_00) {
                    arg1_00 = 0;
                }
                pSVar3 = (StaticPointLight*)(*this)[arg1_00];
                cVar1 = pSVar3->GetLightLevelsBelow();
            }
            local_50 = Array<shared_ptr<oldscape::rs2lib::IfType>>((long)*arg1);
            local_70 = Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>(&local_50);
            this_00 = (Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>*)(*this)[arg1_00];
            *this_00 = local_70;
            *(unsigned long*)(this + 2096) = arg1_00 + 1;
            *(long*)(this + 2088) = *(long*)(this + 2088) - 1;
        }
        return arg1_00;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100129c30
    ClientEntityID::ClientEntityID() : field_0(0), m_slotID(-1) {}

} // namespace jag::oldscape
