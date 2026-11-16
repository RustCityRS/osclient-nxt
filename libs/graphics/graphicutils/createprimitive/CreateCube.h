// libs/graphics/graphicutils/createprimitive/CreateCube.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphicutils {
    // 0x1007aebb0, 256 bytes, inline, placed by debug map only (low confidence)
    // void CreateCubeSharedTriListIndices<unsigned short>(unsigned short*, unsigned short, bool)
    void CreateCubeSharedTriListIndices<unsigned short>(ushort* param_1, ushort param_2, bool param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8* puVar8;
        long lVar9;
        undefined4 local_68;
        undefined4 uStack_64;
        undefined4 uStack_60;
        undefined4 uStack_5c;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined8 local_38;
        undefined8 uStack_30;
        undefined8 local_28;

        if (param_1 == (ushort*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCube.h",
                      41, (char*)0);
        }
        if (param_3) {
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
        puVar8 = (undefined8*)local_68.data();
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        uVar4 = puVar8[4];
        uVar5 = puVar8[5];
        uVar6 = puVar8[6];
        uVar7 = puVar8[7];
        *(undefined8*)param_1 = *puVar8;
        *(undefined8*)(param_1 + 4) = uVar1;
        *(undefined8*)(param_1 + 8) = uVar2;
        *(undefined8*)(param_1 + 12) = uVar3;
        *(undefined8*)(param_1 + 16) = uVar4;
        *(undefined8*)(param_1 + 20) = uVar5;
        *(undefined8*)(param_1 + 24) = uVar6;
        *(undefined8*)(param_1 + 28) = uVar7;
        *(undefined8*)(param_1 + 32) = puVar8[8];
        lVar9 = 0;
        do {
            param_1[lVar9] = param_1[lVar9] + param_2;
            lVar9 = lVar9 + 1;
        } while (lVar9 != 36);
    }

} // namespace jag::graphicutils
