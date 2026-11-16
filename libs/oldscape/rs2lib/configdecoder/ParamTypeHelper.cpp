// libs/oldscape/rs2lib/configdecoder/ParamTypeHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ParamTypeHelper.h"

namespace jag::oldscape::configdecoder {
    // 0x100229fa0, 208 bytes, placed by class name and debug map
    // ParamTypeHelper::UnpackClientParams(PacketJ<Array<unsigned char, eastl::allocator> >&, eastl::hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false>&)
    undefined8 ParamTypeHelper::UnpackClientParams(PacketJ* param_1, hash_map* param_2) {
        byte bVar1;
        char cVar2;
        undefined4 uVar3;
        int iVar4;
        undefined4* puVar5;
        uint uVar6;
        long local_58[4];

        bVar1 = param_1->g1();
        if (bVar1 != 0) {
            uVar6 = (uint)bVar1;
            do {
                while (true) {
                    cVar2 = param_1->g1();
                    iVar4 = param_1->g3();
                    local_58[0] = (long)iVar4;
                    puVar5 =
                        (undefined4*)eastl::hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>,
                                                     eastl::equal_to<long long>, eastl::allocator, false>::
                        operator[]((hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>,
                                             eastl::equal_to<long long>, eastl::allocator, false>*)param_2,
                                   (longlong*)local_58);
                    *(bool*)(puVar5 + 10) = cVar2 == '\x01';
                    if (cVar2 != '\x01')
                        break;
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)local_58,
                                       SUB81(param_1, 0));
                    eastl::string::operator=((eastl::string*)(puVar5 + 2), (basic_string*)local_58);
                    local_58->~basic_string();
                    uVar6 = uVar6 - 1;
                    if (uVar6 == 0) {
                        return 1;
                    }
                }
                uVar3 = param_1->g4();
                *puVar5 = uVar3;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
        return 1;
    }

    // 0x10022bd20, 144 bytes, placed by class name
    // ParamTypeHelper::GetParam(eastl::hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false> const&, int, int)
    int ParamTypeHelper::GetParam(hash_map* param_1, int param_2, int param_3) {
        long lVar2;
        eastl local_38[16];
        undefined1 local_28[16];

        local_28._0_8_ = SEXT48(param_2);
        local_38 = (eastl[16])param_1->find(local_28);
        local_28 = param_1->end();
        if (!eastl::operator==(local_38, (hashtable_iterator_base*)local_28, local_28._8_8_)) {
            lVar2 = local_38->HeapBeginPtr();
            if (*(char*)(lVar2 + 48) != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/ParamTypeHelper.cpp",
                                47, "Wrong param type. Expected a nubmer but got a string");
            }
            lVar2 = local_38->HeapBeginPtr();
            param_3 = *(int*)(lVar2 + 8);
        }
        return param_3;
    }

    // 0x10022bde0, 160 bytes, placed by class name
    // ParamTypeHelper::GetParam(eastl::hash_map<long long, ParamTypeHelper::ParamVariant, eastl::hash<long long>, eastl::equal_to<long long>, eastl::allocator, false> const&, int, eastl::string const&)
    basic_string* ParamTypeHelper::GetParam(hash_map* param_1, int param_2, basic_string* param_3) {
        long lVar2;
        eastl local_38[16];
        undefined1 local_28[16];

        local_28._0_8_ = SEXT48(param_2);
        local_38 = (eastl[16])param_1->find(local_28);
        local_28 = param_1->end();
        if (!eastl::operator==(local_38, (hashtable_iterator_base*)local_28, local_28._8_8_)) {
            lVar2 = local_38->HeapBeginPtr();
            if (*(char*)(lVar2 + 48) == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/ParamTypeHelper.cpp",
                                64, "Wrong param type. Expected a string but got a number");
            }
            lVar2 = local_38->HeapBeginPtr();
            param_3 = (basic_string*)(lVar2 + 16);
        }
        return param_3;
    }

} // namespace jag::oldscape::configdecoder
