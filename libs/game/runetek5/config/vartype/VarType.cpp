// libs/game/runetek5/config/vartype/VarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "VarType.h"

namespace jag::game {
    // 0x1004ce310
    void VarType::GetDefaultValue() const {
        (**(void (**)(...))(*field_56 + 16))(field_56, this);
    }

    // 0x1004d17d0
    VarType::VarType(BaseTemplateConfigTypeList<VarType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<VarType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<VarType, 5504>(), field_56(nullptr),
          m_dataType(0) {
        field_72 = VarLifetime::TEMPORARY;
        field_80 = VarTransmitLevel::NEVER;
        field_88 = 0;
        field_92 = 1;
        field_56 = (long*)field_24->GetDomain();
    }

    // 0x1004d1920
    uint8_t* VarType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        long lVar3;
        uint8_t* puVar4;

        switch (arg2) {
        case 3:
            bVar1 = arg1.g1();
            lVar3 = ScriptVarType::GetByID((unsigned int)bVar1);
            m_dataType = lVar3;
            if (lVar3 == 0) {
                LogAssert("m_dataType != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "vartype/VarType.cpp",
                          25, "VarType: Decoder received unknown ScriptVarType: %u",
                          (unsigned long)(unsigned int)bVar1);
            }
            break;
        case 4:
            bVar1 = arg1.g1();
            puVar4 = (uint8_t*)((VarLifetime*)(unsigned long)bVar1)->GetByID((unsigned int)arg1);
            field_72 = puVar4;
            break;
        case 5:
            bVar1 = arg1.g1();
            puVar4 = (uint8_t*)((VarTransmitLevel*)(unsigned long)bVar1)->GetByID((unsigned int)arg1);
            field_80 = puVar4;
            break;
        case 7:
            field_92 = 0;
            break;
        default:
            if (arg2 == 110) {
                uVar2 = arg1.g2();
                field_88 = (unsigned int)uVar2;
                return DataStatus::READY;
            }
        case 6:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/VarType.cpp",
                      45, "Unrecognised .var config code: %u", arg2);
        }
        return DataStatus::READY;
    }

    // 0x1004d1aa0
    void VarType::PostDecode() {}

} // namespace jag::game
