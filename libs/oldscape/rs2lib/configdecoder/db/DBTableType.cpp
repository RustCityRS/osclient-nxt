// libs/oldscape/rs2lib/configdecoder/db/DBTableType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "DBTableType.h"

namespace jag::oldscape::configdecoder {
    // 0x101686418
    int64_t DBTableType::m_pConfigClient;

    // 0x101686420
    LRUHashCache<DBTableType, 64ul, 65ul, false, unsigned long long> DBTableType::m_recentUse;

    // 0x10023b1e0
    void DBTableType::Init(jagex3::Js5* js5) {
        m_pConfigClient = js5;
    }

    // 0x10023b1f0
    auto DBTableType::List(int arg1) {
        DBTableType* dBTableType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 39, arg1, nullptr);
            make_shared<DBTableType>(&local_40);
            result = local_40;
            if (local_30 != nullptr) {
                dBTableType = (DBTableType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_30;
                Decode(dBTableType, packetJ);
            }
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x10023b480
    void DBTableType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x10023b5b0
    void DBTableType::ResetCache() {
        m_recentUse.Reset();
    }

    // 0x10023b5d0
    void DBTableType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t* this_00;
        uint8_t bVar1;
        uint8_t bVar2;
        Array<game::VarValue>* varValues;
        Array<ScriptVarType const*>* pAVar4;
        unsigned long arg1;

        if (arg2 == 1) {
            bVar1 = packetJ.g1();
            set_max_size((unsigned long)bVar1, 0);
            bVar2 = packetJ.g1();
            if (bVar2 != 255) {
                this_00 = &field_24;
                do {
                    arg1 = (unsigned long)(bVar2 & 127);
                    pAVar4 = (Array<ScriptVarType const*>*)(*this)[arg1];
                    DBUtils::UnpackColumnVarTypes(packetJ, *pAVar4);
                    if ((char)bVar2 < '\0') {
                        if (this_00->empty() != '\0') {
                            this_00->set_max_size((unsigned long)bVar1, 0);
                        }
                        pAVar4 = (Array<ScriptVarType const*>*)(*this)[arg1];
                        varValues = (Array<game::VarValue>*)(*this_00)[arg1];
                        DBUtils::UnpackColumnDataValues(packetJ, *pAVar4, *varValues);
                    }
                    bVar2 = packetJ.g1();
                } while (bVar2 != 255);
            }
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      98, "Unrecognised .dbtable config code: %d", arg2);
        }
    }

    // 0x10023b6f0
    void DBTableType::GetColumnDefaultValue(unsigned int arg1, unsigned int arg2, unsigned int arg3) const {
        uint8_t* this_02 = &field_24;
        unsigned long uVar1 = this_02->end();
        if (uVar1 <= (unsigned long)arg1) {
            LogAssert("columnIndex < m_columnDefaultValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      104, "Column index out of range");
        }
        uVar1 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02)[(unsigned long)arg1])->end();
        if (uVar1 <= arg3 * arg2) {
            LogAssert("listIndex * tupleIndex < m_columnDefaultValues[columnIndex].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      105, "Default value index out of range");
        }
        Array<game::VarValue>* this_01 = (Array<game::VarValue>*)(*this_02)[(unsigned long)arg1];
        (*this_01)[(unsigned long)(arg3 * arg2)];
    }

    // 0x10023b7a0
    bool DBTableType::HasColumnDefaultValues(unsigned int arg1) const {
        unsigned long uVar2 = field_24.end();
        if (arg1 < uVar2) {
            if (((Array<game::VarValue>*)field_24[(unsigned long)arg1])->empty() == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10023b7e0
    void DBTableType::GetColumnDefaultValues(unsigned int arg1) const {
        if (field_24.end() <= arg1) {
            LogAssert("columnIndex < m_columnDefaultValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      120, "Column index out of range");
        }
        field_24[(unsigned long)arg1];
    }

    // 0x10023b840
    Array<game::VarValue>* DBTableType::GetColumnVarType(unsigned int arg1) const {
        if (end() <= arg1) {
            LogAssert("columnIndex < m_columnTypes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/db/DBTableType.cpp",
                      126, "Column index out of range");
        }
        return (Array<game::VarValue>*)(*this)[(unsigned long)arg1];
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10023b3b0
    shared_ptr_if_not_array<oldscape::configdecoder::DBTableType>::type
    make_shared<oldscape::configdecoder::DBTableType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        DBTableType* local_28[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::DBTableType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::DBTableType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::DBTableType>, int,
                              oldscape::configdecoder::DBTableType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
