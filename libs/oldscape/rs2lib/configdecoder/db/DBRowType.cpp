// libs/oldscape/rs2lib/configdecoder/db/DBRowType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "DBRowType.h"

namespace jag::oldscape::configdecoder {
    // 0x101684f10
    int64_t DBRowType::m_pConfigClient;

    // 0x101684f18
    LRUHashCache<DBRowType, 64ul, 65ul, false, unsigned long long> DBRowType::m_recentUse;

    // 0x100239fc0
    void DBRowType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x100239fd0
    auto DBRowType::List(int arg1) {
        DBRowType* dBRowType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 38, arg1, nullptr);
            make_shared<DBRowType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                dBRowType = (DBRowType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(dBRowType, packetJ);
            }
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x10023a260
    void DBRowType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x10023a390
    void DBRowType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x10023a3b0
    void DBRowType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t* this_00;
        uint8_t bVar1;
        uint64_t in_RAX;
        Array<ScriptVarType const*>* pAVar3;
        Array<game::VarValue>* varValues;
        unsigned long arg1;

        uint32_t uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg2 == 4) {
            uVar2 = packetJ.gVarInt();
            m_dbTableId = uVar2;
        } else if (arg2 == 3) {
            bVar1 = packetJ.g1();
            set_max_size((unsigned long)bVar1, 0);
            this_00 = &field_24;
            this_00->set_max_size((unsigned long)bVar1, 0);
            while (true) {
                bVar1 = packetJ.g1();
                if (bVar1 == 255)
                    break;
                arg1 = (unsigned long)bVar1;
                pAVar3 = (Array<ScriptVarType const*>*)(*this_00)[arg1];
                DBUtils::UnpackColumnVarTypes(packetJ, *pAVar3);
                pAVar3 = (Array<ScriptVarType const*>*)(*this_00)[arg1];
                varValues = (Array<game::VarValue>*)(*this)[arg1];
                DBUtils::UnpackColumnDataValues(packetJ, *pAVar3, *varValues);
            }
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      86, "Unrecognised .dbrow config code: %d", (((uint64_t)uVar2 << 32) | (uint32_t)arg2));
        }
    }

    // 0x10023aa20
    void DBRowType::GetColumnVarValue(unsigned int arg1, unsigned int arg2, unsigned int arg3) const {
        unsigned long uVar1 = end();
        if (uVar1 <= (unsigned long)arg1) {
            LogAssert("columnIndex < m_columnValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      93, "DBRow Column index out of range");
        }
        uVar1 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this)[(unsigned long)arg1])->end();
        if (uVar1 <= arg3 * arg2) {
            LogAssert("valueIndex < m_columnValues[columnIndex].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      95, "DBRow value index out of range");
        }
        Array<game::VarValue>* this_01 = (Array<game::VarValue>*)(*this)[(unsigned long)arg1];
        (*this_01)[(unsigned long)(arg3 * arg2)];
    }

    // 0x10023ab50
    bool DBRowType::HasColumnVarValues(unsigned int arg1) const {
        unsigned long uVar2 = end();
        if (arg1 < uVar2) {
            if (((Array<game::VarValue>*)(*this)[(unsigned long)arg1])->empty() == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10023ab90
    void DBRowType::GetColumnVarValues(unsigned int arg1) const {
        if (end() <= arg1) {
            LogAssert("columnIndex < m_columnValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      110, "DBRow Column index out of range");
        }
        (*this)[(unsigned long)arg1];
    }

    // 0x10023abe0
    void DBRowType::GetColumnVarType(unsigned int arg1) const {
        if (field_24.end() <= arg1) {
            LogAssert("columnIndex < m_columnTypes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBRowType.cpp",
                      116, "DBRow Column index out of range");
        }
        field_24[(unsigned long)arg1];
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10023a190
    shared_ptr_if_not_array<oldscape::configdecoder::DBRowType>::type
    make_shared<oldscape::configdecoder::DBRowType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        DBRowType* local_28[2];

        auto arg1 = aligned_alloc(88, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::DBRowType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::DBRowType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::DBRowType>, int,
                              oldscape::configdecoder::DBRowType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
