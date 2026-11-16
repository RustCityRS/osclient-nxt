// libs/game/runetek5/config/db/dbrowtype/DBRowType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "DBRowType.h"

namespace jag::game {
    // 0x10055a480
    uint8_t* DBRowType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        uint64_t in_RAX;
        Array<ScriptVarType const*>* pAVar3;
        Array<VarValue>* varValues;
        unsigned long arg1_00;
        uint8_t* this_01;

        uint32_t uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg2 == 4) {
            uVar2 = arg1.gVarInt();
            field_104 = uVar2;
        } else if (arg2 == 3) {
            bVar1 = arg1.g1();
            field_56.set_max_size((unsigned long)bVar1, 0);
            this_01 = &field_80;
            this_01->set_max_size((unsigned long)bVar1, 0);
            while (true) {
                bVar1 = arg1.g1();
                if (bVar1 == 255)
                    break;
                arg1_00 = (unsigned long)bVar1;
                pAVar3 = (Array<ScriptVarType const*>*)(*this_01)[arg1_00];
                DBUtils::UnpackColumnVarTypes(arg1, *pAVar3);
                pAVar3 = (Array<ScriptVarType const*>*)(*this_01)[arg1_00];
                varValues = &field_56[arg1_00];
                DBUtils::UnpackColumnDataValues(arg1, *pAVar3, *varValues);
            }
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      32, "Unrecognised .dbrow config code: %u", (((uint64_t)uVar2 << 32) | (uint32_t)arg2));
        }
        return DataStatus::READY;
    }

    // 0x10055a8e0
    void DBRowType::PostDecode() {}

    // 0x10055a8f0
    void DBRowType::GetColumnVarValue(unsigned int arg1, unsigned int arg2, unsigned int arg3) const {
        uint8_t* this_02 = &field_56;
        unsigned long uVar1 = this_02->end();
        if (uVar1 <= (unsigned long)arg1) {
            LogAssert("columnIndex < m_columnValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      43, "DBRow Column index out of range");
        }
        uVar1 =
            ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02)[(unsigned long)arg1])->end();
        if (uVar1 <= arg3 * arg2) {
            LogAssert("valueIndex < m_columnValues[columnIndex].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      45, "DBRow value index out of range");
        }
        Array<VarValue>* this_01 = (Array<VarValue>*)(*this_02)[(unsigned long)arg1];
        (*this_01)[(unsigned long)(arg3 * arg2)];
    }

    // 0x10055a9a0
    bool DBRowType::HasColumnVarValues(unsigned int arg1) const {
        unsigned long uVar2 = field_56.end();
        if (arg1 < uVar2) {
            if (((Array<VarValue>*)field_56[(unsigned long)arg1])->empty() == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10055a9e0
    void DBRowType::GetColumnVarValues(unsigned int arg1) const {
        if (field_56.end() <= arg1) {
            LogAssert("columnIndex < m_columnValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      60, "DBRow Column index out of range");
        }
        field_56[(unsigned long)arg1];
    }

    // 0x10055aa40
    void DBRowType::GetColumnVarType(unsigned int arg1) const {
        if (field_80.end() <= arg1) {
            LogAssert("columnIndex < m_columnTypes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      66, "DBRow Column index out of range");
        }
        field_80[(unsigned long)arg1];
    }

} // namespace jag::game
