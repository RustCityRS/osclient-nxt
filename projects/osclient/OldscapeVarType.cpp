// projects/osclient/OldscapeVarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OldscapeVarType.h"

namespace jag::oldscape::configdecoder {
    // 0x100f8d6f0, 16 bytes, __common; set at startup by ___cxx_global_var_init.192
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> OldscapeVarType::NullConfigType;

    // 0x100f8d700, 16 bytes, __common; set at startup by ___cxx_global_var_init.193
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> OldscapeVarType::WeakNullConfigType;

    // 0x1000b7920: the linker folded this into minimenu::MinimenuEntry::GetSubjectTypecode() const, which has identical code
    OldscapeVarType::GetDataType() const;

    // 0x10018baa0, 176 bytes, placed by class name and debug map
    // OldscapeVarType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* OldscapeVarType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        undefined** ppuVar4;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_38[32];

        if (param_2 == 10) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                local_38, SUB81(param_1, 0));
            eastl::string::operator=((eastl::string*)&field_104, (basic_string*)local_38);
            local_38->~basic_string();
        } else if (param_2 == 2) {
            bVar1 = param_1->g1();
            field_72 = (undefined*)game::VarLifetime::GetByID((uint)bVar1);
        } else {
            if (param_2 != 1) {
                ppuVar4 = &DataStatus::MISSING;
                goto LAB_10018bb22;
            }
            bVar1 = param_1->g1();
            m_dataType = ScriptVarType::GetByID((uint)bVar1);
        }
        ppuVar4 = &DataStatus::READY;
    LAB_10018bb22:
        return *ppuVar4;
    }

    // 0x1001b6ec0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.192
    void ___cxx_global_var_init_192(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&OldscapeVarType::NullConfigType) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5430, &OldscapeVarType::NullConfigType, 4294967296);
    }

    // 0x1001b6f00, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.193
    void ___cxx_global_var_init_193(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&OldscapeVarType::WeakNullConfigType) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__weak_ptr_100ee6bc8, &OldscapeVarType::WeakNullConfigType, 4294967296);
    }

} // namespace jag::oldscape::configdecoder
