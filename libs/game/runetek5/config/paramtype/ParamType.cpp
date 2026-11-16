// libs/game/runetek5/config/paramtype/ParamType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ParamType.h"

namespace jag::game {
    // 0x100429b10: the linker folded this into StaticPointLight::GetRGB() const, which has identical code
    uint ParamType::GetDefaultNumber() const;

    // 0x1004f3780, 224 bytes, placed by class name and debug map
    // ParamType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* ParamType::DecodeType(PacketT* param_1, uint param_2) {
        uchar uVar1;
        ushort uVar2;
        uint uVar3;
        undefined8 uVar4;

        switch (param_2) {
        case 1:
            uVar1 = param_1->g1();
            uVar4 = ScriptVarType::GetByChar(uVar1);
            field_56 = uVar4;
            break;
        case 2:
            uVar3 = param_1->g4s();
            m_defaultNumber = uVar3;
            break;
        case 4:
            m_autoDisable = 0;
            break;
        case 5:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (basic_string*)&field_72,
                false);
            break;
        default:
            if (param_2 == 101) {
                uVar2 = param_1->gSmart1or2();
                uVar4 = ScriptVarType::GetByID((uint)uVar2);
                field_56 = uVar4;
                return DataStatus::READY;
            }
        case 3:
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/paramtype/ParamType.cpp",
                                35, "Unrecognised .param config code: %u", param_2);
        }
        return DataStatus::READY;
    }

    // 0x1004f38d0, 16 bytes, placed by class name and debug map
    // ParamType::PostDecode()
    void ParamType::PostDecode() {}

} // namespace jag::game
