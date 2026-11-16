// libs/math/geometry/GeometryUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

namespace jag::math {
    // 0x100c63f70, 208 bytes, placed by debug map only (low confidence)
    // GetBoxEdges(std::array<Vector3T<float>, 8ul> const&)
    /* GetBoxEdges(std::array<Vector3T<float>, 8ul> const&) */

    math* GetBoxEdges(array* param_1) {
        int* piVar1;
        Vector3T* pVVar2;
        Vector3T* pVVar3;
        pair<Vector3T<float>, Vector3T<float>>* this_00;
        ulong uVar4;
        ulong uVar5;
        math local_b0;
        pair<Vector3T<float>, Vector3T<float>> local_50[24];

        BOX_EDGE_LINE_INDICES<int>(&local_b0);
        new (this) std::array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>();
        uVar5 = 1;
        uVar4 = 0;
        do {
            piVar1 = (int*)std::array<int, 24ul>::operator[]((array<int, 24ul>*)&local_b0, uVar5 - 1);
            pVVar2 = (Vector3T*)std::array<Vector3T<float>, 8ul>::operator[]((array<Vector3T<float>, 8ul>*)param_1,
                                                                             (long)*piVar1);
            piVar1 = (int*)std::array<int, 24ul>::operator[]((array<int, 24ul>*)&local_b0, uVar5);
            pVVar3 = (Vector3T*)std::array<Vector3T<float>, 8ul>::operator[]((array<Vector3T<float>, 8ul>*)param_1,
                                                                             (long)*piVar1);
            std::pair<Vector3T<float>, Vector3T<float>>::pair<true, false>(local_50, pVVar2, pVVar3);
            this_00 = (pair<Vector3T<float>, Vector3T<float>>*)
                std::array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>::operator[](
                    (array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>*)(math*)this, uVar4);
            std::pair<Vector3T<float>, Vector3T<float>>::operator=(this_00, (pair*)local_50);
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 2;
        } while (uVar4 != 12);
        return (math*)this;
    }

    // 0x100c64240, 464 bytes, placed by __FILE__ string
    // GetRandomPointBox(Random&, float, float, float, bool)
    undefined8 GetRandomPointBox(Random* param_1, float param_2, float param_3, float param_4, bool param_5) {
        undefined4 uVar1;
        undefined7 in_register_00000031;
        float fVar2;
        uint in_XMM0_Db;
        undefined8 uVar3;
        uint in_XMM0_Dc;
        uint in_XMM0_Dd;
        uint in_XMM1_Db;
        uint in_XMM1_Dc;
        uint in_XMM1_Dd;
        ColourHSL local_48;
        float local_38;
        uint uStack_34;
        uint uStack_30;
        uint uStack_2c;
        float local_28;
        uint uStack_24;
        uint uStack_20;
        uint uStack_1c;

        local_38 = param_3;
        uStack_34 = in_XMM1_Db;
        uStack_30 = in_XMM1_Dc;
        uStack_2c = in_XMM1_Dd;
        if ((int)CONCAT71(in_register_00000031, param_5) == 0) {
            local_28 = (float)param_1->FRandS(param_2);
            local_38 = (float)param_1->FRandS(local_38);
            param_4 = (float)param_1->FRandS(param_4);
        LAB_100c642f3:
            fVar2 = local_38;
            goto LAB_100c642f8;
        }
        local_28 = param_2;
        uStack_24 = in_XMM0_Db;
        uStack_20 = in_XMM0_Dc;
        uStack_1c = in_XMM0_Dd;
        uVar1 = param_1->Rand(6);
        switch (uVar1) {
        case 0:
            local_28 = -local_28;
            uStack_24 = uStack_24 ^ 2147483648;
            uStack_20 = uStack_20 ^ 2147483648;
            uStack_1c = uStack_1c ^ 2147483648;
        case 1:
            local_38 = (float)param_1->FRandS(local_38);
            param_4 = (float)param_1->FRandS(param_4);
            goto LAB_100c642f3;
        case 2:
            local_28 = (float)param_1->FRandS(local_28);
            local_38 = -local_38;
            uStack_34 = uStack_34 ^ 2147483648;
            uStack_30 = uStack_30 ^ 2147483648;
            uStack_2c = uStack_2c ^ 2147483648;
            break;
        case 3:
            local_28 = (float)param_1->FRandS(local_28);
            break;
        case 4:
            local_28 = (float)param_1->FRandS(local_28);
            fVar2 = (float)param_1->FRandS(local_38);
            param_4 = -param_4;
            goto LAB_100c642f8;
        case 5:
            local_28 = (float)param_1->FRandS(local_28);
            fVar2 = (float)param_1->FRandS(local_38);
            goto LAB_100c642f8;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/GeometryUtils.cpp",
                70, (char*)0);
        }
        param_4 = (float)param_1->FRandS(param_4);
        fVar2 = local_38;
    LAB_100c642f8:
        new (&local_48) ColourHSL(local_28, fVar2, param_4);
        uVar3._0_4_ = local_48.field_0;
        uVar3._4_4_ = local_48.field_4;
        return uVar3;
    }

} // namespace jag::math
