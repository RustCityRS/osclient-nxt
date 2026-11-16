// projects/osclient/OldscapeVarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OldscapeVarType.h"

namespace jag::oldscape::configdecoder {
    // 0x100f8d6f0, set at startup by ___cxx_global_var_init.192
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> OldscapeVarType::NullConfigType =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x100f8d700, set at startup by ___cxx_global_var_init.193
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> OldscapeVarType::WeakNullConfigType =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1000b7920: OldscapeVarType::GetDataType() const has the same machine code as minimenu::MinimenuEntry::GetSubjectTypecode() const

    // 0x10018baa0
    uint8_t* OldscapeVarType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        uint8_t** ppuVar4;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_38;

        if (arg2 == 10) {
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_38,
                                                                                                 (uint8_t)arg1);
            field_104 = &local_38;
        } else if (arg2 == 2) {
            bVar1 = arg1.g1();
            field_72 = (uint8_t*)((VarLifetime*)(unsigned long)bVar1)->GetByID((unsigned int)arg1);
        } else {
            if (arg2 != 1) {
                ppuVar4 = &DataStatus::MISSING;
                goto LAB_10018bb22;
            }
            bVar1 = arg1.g1();
            m_dataType = ScriptVarType::GetByID((unsigned int)bVar1);
        }
        ppuVar4 = &DataStatus::READY;
    LAB_10018bb22:
        return *ppuVar4;
    }

} // namespace jag::oldscape::configdecoder
