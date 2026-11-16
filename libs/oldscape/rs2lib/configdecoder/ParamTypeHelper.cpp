// libs/oldscape/rs2lib/configdecoder/ParamTypeHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ParamTypeHelper.h"

namespace jag::oldscape::configdecoder {
    // 0x100229fa0
    void ParamTypeHelper::UnpackClientParams(PacketJ<Array<unsigned char>>& packetJ,
                                             eastl::hash_map<long long, ParamTypeHelper::ParamVariant>& arg2) {
        char cVar2;
        uint32_t uVar3;
        int iVar4;
        uint32_t* puVar5;
        unsigned int uVar6;
        long local_58[4];

        uint8_t bVar1 = packetJ.g1();
        if (bVar1 != 0) {
            uVar6 = (unsigned int)bVar1;
            do {
                while (true) {
                    cVar2 = packetJ.g1();
                    iVar4 = packetJ.g3();
                    local_58[0] = (long)iVar4;
                    puVar5 = &arg2[*local_58];
                    *(bool*)(puVar5 + 10) = cVar2 == '\x01';
                    if (cVar2 != '\x01')
                        break;
                    local_58->gStringCP1252ToUTF8<eastl::string>((uint8_t)packetJ);
                    (*((puVar5 + 2))) = local_58;
                    uVar6 = uVar6 - 1;
                    if (uVar6 == 0) {
                        return 1;
                    }
                }
                uVar3 = packetJ.g4();
                *puVar5 = uVar3;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
        return 1;
    }

    // 0x10022bd20
    int ParamTypeHelper::GetParam(const eastl::hash_map<long long, ParamTypeHelper::ParamVariant>& arg1, int arg2,
                                  int arg3) {
        long lVar2;
        eastl local_38;
        uint8_t local_28[16];

        local_28._0_8_ = (int64_t)arg2;
        &local_38 = (eastl[16])arg1.find(*local_28);
        local_28 = arg1.end();
        if (local_38 == *local_28 == '\0') {
            lVar2 = local_38.HeapBeginPtr();
            if (*(char*)(lVar2 + 48) != '\0') {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/ParamTypeHelper.cpp",
                                47, "Wrong param type. Expected a nubmer but got a string");
            }
            lVar2 = local_38.HeapBeginPtr();
            arg3 = *(int*)(lVar2 + 8);
        }
        return arg3;
    }

    // 0x10022bde0
    eastl::string* ParamTypeHelper::GetParam(const eastl::hash_map<long long, ParamTypeHelper::ParamVariant>& arg1,
                                             int arg2, const eastl::string& str) {
        long lVar2;
        eastl local_38;
        uint8_t local_28[16];

        local_28._0_8_ = (int64_t)arg2;
        &local_38 = (eastl[16])arg1.find(*local_28);
        local_28 = arg1.end();
        if (local_38 == *local_28 == '\0') {
            lVar2 = local_38.HeapBeginPtr();
            if (*(char*)(lVar2 + 48) == '\0') {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "configdecoder/ParamTypeHelper.cpp",
                                64, "Wrong param type. Expected a string but got a number");
            }
            lVar2 = local_38.HeapBeginPtr();
            str = (eastl::string*)(lVar2 + 16);
        }
        return str;
    }

} // namespace jag::oldscape::configdecoder
