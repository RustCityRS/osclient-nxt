// libs/game/runetek5/config/vartype/bit/VarBitType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "VarBitType.h"

namespace jag::game {
    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    VarBitType::GetBaseVar() const;

    // 0x1004c59e0, 80 bytes, base-object constructor, placed by class name and debug map
    // VarBitType::VarBitType(BaseTemplateConfigTypeList<VarBitType>*, int)
    void VarBitType::VarBitType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<VarBitType>(param_1, param_2);
        new (this) MakeSharedPool<VarBitType, 2048>();
        field_0 = &PTR__VarBitType_100f01c40;
        new (&field_56, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1004c5b30, 16 bytes, complete-object constructor, placed by class name and debug map
    // VarBitType::VarBitType(BaseTemplateConfigTypeList<VarBitType>*, int): jumps straight to the base-object constructor

    // 0x1004c5b40, 288 bytes, placed by class name and debug map
    // VarBitType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* VarBitType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        int iVar2;
        undefined8 in_RAX;
        undefined4 uVar8;
        VarDomainType* pVVar3;
        ConfigProvider* this_00;
        shared_ptr* psVar4;
        long lVar5;
        undefined** ppuVar6;
        undefined8 uVar7;

        uVar8 = (undefined4)((ulong)in_RAX >> 32);
        if (param_2 == 2) {
            bVar1 = param_1->g1();
            field_72 = (uint)bVar1;
            bVar1 = param_1->g1();
            field_76 = (uint)bVar1;
        } else if (param_2 == 1) {
            bVar1 = param_1->g1();
            pVVar3 = (VarDomainType*)VarDomainType::GetByID((uint)bVar1);
            if (pVVar3 == (VarDomainType*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("domain != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "vartype/bit/VarBitType.cpp",
                          25, "VarBitType: Unknown var domain type: %u", (ulong)bVar1);
            }
            iVar2 = param_1->gSmart2or4s();
            this_00 = (ConfigProvider*)field_24->GetDomain();
            psVar4 = (shared_ptr*)this_00->GetVarType(pVVar3, iVar2);
            shared_ptr<VarType>::operator=((shared_ptr<VarType>*)&field_56, psVar4);
            lVar5 = (&field_56)->end();
            if (lVar5 == 0) {
                ppuVar6 = &DataStatus::NOTLOADED;
                goto LAB_1004c5c43;
            }
        } else {
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/vartype/bit/VarBitType.cpp",
                                42, "Unrecognised .varbit config code: %u", CONCAT44(uVar8, param_2));
        }
        ppuVar6 = &DataStatus::READY;
    LAB_1004c5c43:
        return *ppuVar6;
    }

    // 0x1004c5cf0, 16 bytes, placed by class name
    // VarBitType::PostDecode()
    void VarBitType::PostDecode() {}

    // 0x1004c5d00, 160 bytes, placed by class name
    // VarBitType::SetVarBitValue(int, int, bool*) const
    uint VarBitType::SetVarBitValue(int param_1, int param_2, bool* param_3) {
        byte bVar1;
        int iVar2;
        undefined8 uVar3;
        uint uVar4;

        iVar2 = GetVarBitMask(this);
        if ((param_2 < 0) || (iVar2 < param_2)) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/vartype/bit/VarBitType.cpp",
                                56, "VarBitType: Varbit setting overflow! %i, %i", param_2, iVar2);
            if (param_3 != (bool*)0) {
                *param_3 = false;
            }
        } else {
            if (param_3 != (bool*)0) {
                *param_3 = true;
            }
            bVar1 = (byte)field_72;
            uVar4 = iVar2 << (bVar1 & 31);
            param_1 = param_2 << (bVar1 & 31) & uVar4 | ~uVar4 & param_1;
        }
        return param_1;
    }

} // namespace jag::game
