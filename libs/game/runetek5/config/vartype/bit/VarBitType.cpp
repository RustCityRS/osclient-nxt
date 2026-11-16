// libs/game/runetek5/config/vartype/bit/VarBitType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "VarBitType.h"

namespace jag::game {
    // 0x1000b7910: VarBitType::GetBaseVar() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x1004c59e0
    VarBitType::VarBitType(BaseTemplateConfigTypeList<VarBitType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<VarBitType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<VarBitType, 2048>() {
        new (&field_56) shared_ptr();
    }

    // 0x1004c5b40
    uint8_t* VarBitType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        int arg2_00;
        uint64_t in_RAX;
        VarDomainType* varDomainType;
        ConfigProvider* this_00;
        shared_ptr<VarType>* varType;
        uint8_t** ppuVar3;

        uint32_t uVar4 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg2 == 2) {
            bVar1 = arg1.g1();
            field_72 = (unsigned int)bVar1;
            bVar1 = arg1.g1();
            field_76 = (unsigned int)bVar1;
        } else if (arg2 == 1) {
            bVar1 = arg1.g1();
            varDomainType = VarDomainType::GetByID((unsigned int)bVar1);
            if (varDomainType == nullptr) {
                LogAssert("domain != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "vartype/bit/VarBitType.cpp",
                          25, "VarBitType: Unknown var domain type: %u", (unsigned long)bVar1);
            }
            arg2_00 = arg1.gSmart2or4s();
            this_00 = (ConfigProvider*)field_24->GetDomain();
            varType = (shared_ptr<VarType>*)this_00->GetVarType(varDomainType, arg2_00);
            field_56 = *varType;
            if (field_56.end() == 0) {
                ppuVar3 = &DataStatus::NOTLOADED;
                goto LAB_1004c5c43;
            }
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/bit/VarBitType.cpp",
                      42, "Unrecognised .varbit config code: %u", (((uint64_t)uVar4 << 32) | (uint32_t)arg2));
        }
        ppuVar3 = &DataStatus::READY;
    LAB_1004c5c43:
        return *ppuVar3;
    }

    // 0x1004c5cf0
    void VarBitType::PostDecode() {}

    // 0x1004c5d00
    unsigned int VarBitType::SetVarBitValue(int arg1, int arg2, bool* arg3) const {
        uint8_t bVar1;

        unsigned int uVar2 = GetVarBitMask();
        if ((arg2 < 0) || ((int)uVar2 < arg2)) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "vartype/bit/VarBitType.cpp",
                      56, "VarBitType: Varbit setting overflow! %i, %i", (unsigned long)(unsigned int)arg2,
                      (unsigned long)uVar2);
            if (arg3 != nullptr) {
                *arg3 = false;
            }
        } else {
            if (arg3 != nullptr) {
                *arg3 = true;
            }
            bVar1 = (uint8_t)field_72;
            uVar2 = uVar2 << (bVar1 & 31);
            arg1 = arg2 << (bVar1 & 31) & uVar2 | ~uVar2 & arg1;
        }
        return arg1;
    }

} // namespace jag::game
