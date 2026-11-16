// libs/game/runetek5/config/db/dbrowtype/DBRowType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "DBRowType.h"

namespace jag::game {
    // 0x10055a480, 272 bytes, placed by class name and debug map
    // DBRowType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* DBRowType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        undefined4 uVar2;
        undefined8 in_RAX;
        Array* pAVar3;
        Array* pAVar4;
        undefined8 uVar5;
        ulong uVar6;
        undefined1* this_00;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        if (param_2 == 4) {
            uVar2 = param_1->gVarInt();
            field_104 = uVar2;
        } else if (param_2 == 3) {
            bVar1 = param_1->g1();
            (&field_56, (ulong)bVar1, 0)->set_max_size();
            this_00 = &field_80;
            this_00->set_max_size((ulong)bVar1, 0);
            while (true) {
                bVar1 = param_1->g1();
                if (bVar1 == 255)
                    break;
                uVar6 = (ulong)bVar1;
                pAVar3 = (Array*)Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this_00, uVar6);
                DBUtils::UnpackColumnVarTypes(param_1, pAVar3);
                pAVar3 = (Array*)Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)this_00, uVar6);
                pAVar4 = (Array*)Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)&field_56, uVar6);
                DBUtils::UnpackColumnDataValues(param_1, pAVar3, pAVar4);
            }
        } else {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/db/dbrowtype/DBRowType.cpp",
                                32, "Unrecognised .dbrow config code: %u", CONCAT44(uVar2, param_2));
        }
        return DataStatus::READY;
    }

    // 0x10055a8e0, 16 bytes, placed by class name and debug map
    // DBRowType::PostDecode()
    void DBRowType::PostDecode() {}

    // 0x10055a8f0, 176 bytes, placed by class name and debug map
    // DBRowType::GetColumnVarValue(unsigned int, unsigned int, unsigned int) const
    void DBRowType::GetColumnVarValue(uint param_1, uint param_2, uint param_3) {
        ulong uVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Array<VarValue, eastl::allocator>* this_01;
        undefined1* this_02;

        this_02 = &field_56;
        uVar1 = this_02->end();
        if (uVar1 <= (ulong)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      43, "DBRow Column index out of range");
        }
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
            Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)this_02, (ulong)param_1);
        uVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (uVar1 <= param_3 * param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("valueIndex < m_columnValues[columnIndex].size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      45, "DBRow value index out of range");
        }
        this_01 =
            (Array<VarValue, eastl::allocator>*)Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
                (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)this_02, (ulong)param_1);
        Array<VarValue, eastl::allocator>::operator[](this_01, (ulong)(param_3 * param_2));
    }

    // 0x10055a9a0, 64 bytes, placed by class name and debug map
    // DBRowType::HasColumnVarValues(unsigned int) const
    undefined8 DBRowType::HasColumnVarValues(uint param_1) {
        ulong uVar2;
        Array<VarValue, eastl::allocator>* this_00;

        uVar2 = (&field_56)->end();
        if (param_1 < uVar2) {
            this_00 = (Array<VarValue, eastl::allocator>*)
                Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
                    (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)&field_56, (ulong)param_1);
            if (this_00->empty() == '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10055a9e0, 96 bytes, placed by class name and debug map
    // DBRowType::GetColumnVarValues(unsigned int) const
    void DBRowType::GetColumnVarValues(uint param_1) {
        ulong uVar1;

        uVar1 = (&field_56)->end();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnValues.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      60, "DBRow Column index out of range");
        }
        Array<Array<VarValue, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<VarValue, eastl::allocator>, eastl::allocator>*)&field_56, (ulong)param_1);
    }

    // 0x10055aa40, 96 bytes, placed by class name and debug map
    // DBRowType::GetColumnVarType(unsigned int) const
    void DBRowType::GetColumnVarType(uint param_1) {
        ulong uVar1;

        uVar1 = (&field_80)->end();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("columnIndex < m_columnTypes.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/db/"
                      "dbrowtype/DBRowType.cpp",
                      66, "DBRow Column index out of range");
        }
        Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>::operator[](
            (Array<Array<ScriptVarType_const*, eastl::allocator>, eastl::allocator>*)&field_80, (ulong)param_1);
    }

} // namespace jag::game
