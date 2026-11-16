// libs/game/runetek5/config/db/dbtabletype/DBTableType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "DBTableType.h"

namespace jag::game {
    // 0x10055ab20, 288 bytes, placed by class name and debug map
    // DBTableType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* DBTableType::DecodeType(PacketT* param_1, uint param_2) {
        undefined1* this_00;
        byte bVar1;
        byte bVar2;
        char cVar3;
        Array* pAVar4;
        Array* pAVar5;
        undefined8 uVar6;
        ulong uVar7;
        undefined1* this_01;

        if (param_2 == 1) {
            bVar1 = param_1->g1();
            this_00 = &field_56;
            this_00->set_max_size((ulong)bVar1, 0);
            bVar2 = param_1->g1();
            if (bVar2 != 255) {
                this_01 = &field_80;
                do {
                    uVar7 = (ulong)(bVar2 & 127);
                    pAVar5 = (Array*)Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
                        (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this_00, uVar7);
                    DBUtils::UnpackColumnVarTypes(param_1, pAVar5);
                    if ((char)bVar2 < '\0') {
                        cVar3 = this_01->empty();
                        if (cVar3 != '\0') {
                            this_01->set_max_size((ulong)bVar1, 0);
                        }
                        pAVar5 =
                            (Array*)Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this_00,
                                uVar7);
                        pAVar4 = (Array*)Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)this_01, uVar7);
                        DBUtils::UnpackColumnDataValues(param_1, pAVar5, pAVar4);
                    }
                    bVar2 = param_1->g1();
                } while (bVar2 != 255);
            }
        } else {
            uVar6 = logger::default_logger();
            logger::Logger::Log(uVar6, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/db/dbtabletype/DBTableType.cpp",
                                42, "Unrecognised .dbtable config code: %u", param_2);
        }
        return DataStatus::READY;
    }

    // 0x10055ac40, 16 bytes, placed by class name and debug map
    // DBTableType::PostDecode()
    void DBTableType::PostDecode() {}

    // 0x10055ac50, 176 bytes, placed by class name and debug map
    // DBTableType::GetColumnDefaultValue(unsigned int, unsigned int, unsigned int) const
    void DBTableType::GetColumnDefaultValue(uint param_1, uint param_2, uint param_3) {
        ulong uVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Array<VarValue, eastl::allocator>* this_01;
        undefined1* this_02;

        this_02 = &field_80;
        uVar1 = this_02->end();
        if (uVar1 <= (ulong)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnDefaultValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      53, "Column index out of range");
        }
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)this_02, (ulong)param_1);
        uVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (uVar1 <= param_3 * param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("listIndex * tupleIndex < m_columnDefaultValues[columnIndex].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      54, "Default value index out of range");
        }
        this_01 =
            (Array<VarValue, eastl::allocator>*)Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)this_02, (ulong)param_1);
        Array<VarValue, eastl::allocator>::operator[](this_01, (ulong)(param_3 * param_2));
    }

    // 0x10055ad00, 64 bytes, placed by class name and debug map
    // DBTableType::HasColumnDefaultValues(unsigned int) const
    undefined8 DBTableType::HasColumnDefaultValues(uint param_1) {
        ulong uVar2;
        Array<VarValue, eastl::allocator>* this_00;

        uVar2 = (&field_80)->end();
        if (param_1 < uVar2) {
            this_00 = (Array<VarValue, eastl::allocator>*)
                Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)&field_80, (ulong)param_1);
            if (this_00->empty() == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10055ad40, 96 bytes, placed by class name and debug map
    // DBTableType::GetColumnDefaultValues(unsigned int) const
    void DBTableType::GetColumnDefaultValues(uint param_1) {
        ulong uVar1;

        uVar1 = (&field_80)->end();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnDefaultValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      69, "Column index out of range");
        }
        Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)&field_80, (ulong)param_1);
    }

    // 0x10055ada0, 96 bytes, placed by class name and debug map
    // DBTableType::GetColumnVarType(unsigned int) const
    void DBTableType::GetColumnVarType(uint param_1) {
        ulong uVar1;

        uVar1 = (&field_56)->end();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnTypes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbtabletype/DBTableType.cpp",
                      75, "Column index out of range");
        }
        Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)&field_56, (ulong)param_1);
    }

} // namespace jag::game
