// libs/game/runetek5/config/vartype/VarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "VarType.h"

namespace jag::game {
    // 0x1004ce310, 32 bytes, placed by class name and debug map
    // VarType::GetDefaultValue() const
    void VarType::GetDefaultValue() {
        (**(code**)(*field_56 + 16))(field_56, this);
    }

    // 0x1004d17d0, 128 bytes, base-object constructor, placed by class name
    // VarType::VarType(BaseTemplateConfigTypeList<VarType>*, int)
    void VarType::VarType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new (this) ConfigType<VarType>(param_1, param_2);
        new (this) MakeSharedPool<VarType, 5504>();
        field_0 = &PTR__VarType_100f01f28;
        field_56 = (long*)0;
        field_64 = 0;
        field_72 = VarLifetime::TEMPORARY;
        field_80 = VarTransmitLevel::NEVER;
        field_88 = 0;
        field_92 = 1;
        field_56 = (long*)field_24->GetDomain();
    }

    // 0x1004d1910, 16 bytes, complete-object constructor, placed by class name
    // VarType::VarType(BaseTemplateConfigTypeList<VarType>*, int): jumps straight to the base-object constructor

    // 0x1004d1920, 272 bytes, placed by class name
    // VarType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* VarType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        ushort uVar2;
        long lVar3;
        undefined8 uVar4;
        undefined* puVar5;

        switch (param_2) {
        case 3:
            bVar1 = param_1->g1();
            lVar3 = ScriptVarType::GetByID((uint)bVar1);
            field_64 = lVar3;
            if (lVar3 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_dataType != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "vartype/VarType.cpp",
                          25, "VarType: Decoder received unknown ScriptVarType: %u", (ulong)(uint)bVar1);
            }
            break;
        case 4:
            bVar1 = param_1->g1();
            puVar5 = (undefined*)VarLifetime::GetByID((uint)bVar1);
            field_72 = puVar5;
            break;
        case 5:
            bVar1 = param_1->g1();
            puVar5 = (undefined*)VarTransmitLevel::GetByID((uint)bVar1);
            field_80 = puVar5;
            break;
        case 7:
            field_92 = 0;
            break;
        default:
            if (param_2 == 110) {
                uVar2 = param_1->g2();
                field_88 = (uint)uVar2;
                return DataStatus::READY;
            }
        case 6:
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/vartype/VarType.cpp",
                                45, "Unrecognised .var config code: %u", param_2);
        }
        return DataStatus::READY;
    }

    // 0x1004d1aa0, 16 bytes, placed by class name
    // VarType::PostDecode()
    void VarType::PostDecode() {}

} // namespace jag::game
