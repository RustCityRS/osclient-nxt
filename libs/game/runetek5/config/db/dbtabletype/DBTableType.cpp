// libs/game/runetek5/config/db/dbtabletype/DBTableType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "DBTableType.h"

namespace jag::game {
    // 0x10055ab20
    uint8_t* DBTableType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t* this_00;
        uint8_t bVar1;
        uint8_t bVar2;
        Array<VarValue>* varValues;
        Array<ScriptVarType const*>* pAVar4;
        unsigned long arg1_00;
        uint8_t* this_02;

        if (arg2 == 1) {
            bVar1 = arg1.g1();
            this_00 = &field_56;
            this_00->set_max_size((unsigned long)bVar1, 0);
            bVar2 = arg1.g1();
            if (bVar2 != 255) {
                this_02 = &field_80;
                do {
                    arg1_00 = (unsigned long)(bVar2 & 127);
                    pAVar4 = (Array<ScriptVarType const*>*)(*this_00)[arg1_00];
                    DBUtils::UnpackColumnVarTypes(arg1, *pAVar4);
                    if ((char)bVar2 < '\0') {
                        if (this_02->empty() != '\0') {
                            this_02->set_max_size((unsigned long)bVar1, 0);
                        }
                        pAVar4 = (Array<ScriptVarType const*>*)(*this_00)[arg1_00];
                        varValues = (Array<VarValue>*)(*this_02)[arg1_00];
                        DBUtils::UnpackColumnDataValues(arg1, *pAVar4, *varValues);
                    }
                    bVar2 = arg1.g1();
                } while (bVar2 != 255);
            }
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      42, "Unrecognised .dbtable config code: %u", arg2);
        }
        return DataStatus::READY;
    }

    // 0x10055ac40
    void DBTableType::PostDecode() {}

    // 0x10055ac50
    void DBTableType::GetColumnDefaultValue(unsigned int arg1, unsigned int arg2, unsigned int arg3) const {
        uint8_t* this_02 = &field_80;
        unsigned long uVar1 = this_02->end();
        if (uVar1 <= (unsigned long)arg1) {
            LogAssert("columnIndex < m_columnDefaultValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      53, "Column index out of range");
        }
        uVar1 =
            ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02)[(unsigned long)arg1])->end();
        if (uVar1 <= arg3 * arg2) {
            LogAssert("listIndex * tupleIndex < m_columnDefaultValues[columnIndex].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      54, "Default value index out of range");
        }
        Array<VarValue>* this_01 = (Array<VarValue>*)(*this_02)[(unsigned long)arg1];
        (*this_01)[(unsigned long)(arg3 * arg2)];
    }

    // 0x10055ad00
    bool DBTableType::HasColumnDefaultValues(unsigned int arg1) const {
        unsigned long uVar2 = field_80.end();
        if (arg1 < uVar2) {
            if (((Array<VarValue>*)field_80[(unsigned long)arg1])->empty() == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10055ad40
    void DBTableType::GetColumnDefaultValues(unsigned int arg1) const {
        if (field_80.end() <= arg1) {
            LogAssert("columnIndex < m_columnDefaultValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      69, "Column index out of range");
        }
        field_80[(unsigned long)arg1];
    }

    // 0x10055ada0
    Array<VarValue>* DBTableType::GetColumnVarType(unsigned int arg1) const {
        if (field_56.end() <= arg1) {
            LogAssert("columnIndex < m_columnTypes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      75, "Column index out of range");
        }
        return (Array<VarValue>*)field_56[(unsigned long)arg1];
    }

} // namespace jag::game
