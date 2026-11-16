// libs/graphics/graphicutils/createprimitive/CreateCube.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphicutils {
    // 0x1007aebb0
    void CreateCubeSharedTriListIndices<unsigned short>(unsigned short* arg1, unsigned short arg2, bool arg3) {
        uint32_t local_68;
        uint32_t uStack_64;
        uint32_t uStack_60;
        uint32_t uStack_5c;
        uint64_t local_58;
        uint64_t uStack_50;
        uint64_t local_48;
        uint64_t uStack_40;
        uint64_t local_38;
        uint64_t uStack_30;
        uint64_t local_28;

        if (arg1 == nullptr) {
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCube.h",
                      41, nullptr);
        }
        if (arg3) {
            local_28 = 1970350606974979;
            local_38 = 1125917086777344;
            uStack_30 = 1688858450526209;
            local_48 = 1688867040591875;
            uStack_40 = 562975723225088;
            local_58 = 1970346312204294;
            uStack_50 = 1407396358586369;
            local_68 = 131072;
            uStack_64 = 65537;
            uStack_60 = 196610;
            uStack_5c = 327684;
        } else {
            local_28 = 1970337722269699;
            local_38 = 281492156579841;
            uStack_30 = 562975723552772;
            local_48 = 1125925677105157;
            uStack_40 = 562949953814528;
            local_58 = 1970350607106054;
            uStack_50 = 844446405033987;
            local_68 = 2;
            uStack_64 = 131073;
            uStack_60 = 196609;
            uStack_5c = 262149;
        }
        auto puVar8 = local_68.data();
        uint64_t uVar1 = puVar8[1];
        uint64_t uVar2 = puVar8[2];
        uint64_t uVar3 = puVar8[3];
        uint64_t uVar4 = puVar8[4];
        uint64_t uVar5 = puVar8[5];
        uint64_t uVar6 = puVar8[6];
        uint64_t uVar7 = puVar8[7];
        *(uint64_t*)arg1 = *puVar8;
        *(uint64_t*)(arg1 + 4) = uVar1;
        *(uint64_t*)(arg1 + 8) = uVar2;
        *(uint64_t*)(arg1 + 12) = uVar3;
        *(uint64_t*)(arg1 + 16) = uVar4;
        *(uint64_t*)(arg1 + 20) = uVar5;
        *(uint64_t*)(arg1 + 24) = uVar6;
        *(uint64_t*)(arg1 + 28) = uVar7;
        *(uint64_t*)(arg1 + 32) = puVar8[8];
        long lVar9 = 0;
        do {
            arg1[lVar9] = arg1[lVar9] + arg2;
            lVar9 = lVar9 + 1;
        } while (lVar9 != 36);
    }

} // namespace jag::graphicutils
