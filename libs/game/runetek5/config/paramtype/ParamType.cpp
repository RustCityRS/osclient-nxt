// libs/game/runetek5/config/paramtype/ParamType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ParamType.h"

namespace jag::game {
    // 0x100429b10: ParamType::GetDefaultNumber() const has the same machine code as StaticPointLight::GetRGB() const

    // 0x1004f3780
    uint8_t* ParamType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        unsigned short uVar1;
        uint64_t uVar3;

        switch (arg2) {
        case 1:
            uVar3 = ScriptVarType::GetByChar(arg1.g1());
            field_56 = uVar3;
            break;
        case 2:
            m_defaultNumber = arg1.g4s();
            break;
        case 4:
            m_autoDisable = 0;
            break;
        case 5:
            arg1.gStringCP1252ToUTF8<eastl::string>(&field_72, false);
            break;
        default:
            if (arg2 == 101) {
                uVar1 = arg1.gSmart1or2();
                uVar3 = ScriptVarType::GetByID((unsigned int)uVar1);
                field_56 = uVar3;
                return DataStatus::READY;
            }
        case 3:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "paramtype/ParamType.cpp",
                      35, "Unrecognised .param config code: %u", arg2);
        }
        return DataStatus::READY;
    }

    // 0x1004f38d0
    void ParamType::PostDecode() {}

} // namespace jag::game
