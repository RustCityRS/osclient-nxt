// libs/math/geometry/GeometryUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

namespace jag::math {
    // 0x100c63f70
    array<Vector3T<float>, _8ul>* GetBoxEdges(const std::array<Vector3T<float>, 8ul>& vector3s) {
        int* piVar1;
        Vector3T<float>* vector31;
        Vector3T<float>* vector32;
        pair<Vector3T<float>, Vector3T<float>>* pair;
        array<Vector3T<float>, 8ul>* in_RSI;
        ReturnValue local_b0;
        pair<Vector3T<float>, Vector3T<float>> local_50;

        BOX_EDGE_LINE_INDICES<int>(&local_b0);
        new (vector3s) std::array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>();
        unsigned long arg1_00 = 1;
        unsigned long arg1 = 0;
        do {
            piVar1 = &local_b0[arg1_00 - 1];
            vector31 = (Vector3T<float>*)(*in_RSI)[(long)*piVar1];
            piVar1 = &local_b0[arg1_00];
            vector32 = (Vector3T<float>*)(*in_RSI)[(long)*piVar1];
            local_50.pair<true, false>(*vector31, *vector32);
            pair = &vector3s[arg1];
            *pair = local_50;
            arg1 = arg1 + 1;
            arg1_00 = arg1_00 + 2;
        } while (arg1 != 12);
        return vector3s;
    }

    // 0x100c64240
    void GetRandomPointBox(Random& random, float arg2, float arg3, float arg4, bool arg5) {
        uint64_t in_register_00000031;
        float arg2_00;
        unsigned int in_XMM0_Db;
        uint64_t uVar2;
        unsigned int in_XMM0_Dc;
        unsigned int in_XMM0_Dd;
        unsigned int in_XMM1_Db;
        unsigned int in_XMM1_Dc;
        unsigned int in_XMM1_Dd;
        float local_28;

        float local_38 = arg3;
        unsigned int uStack_34 = in_XMM1_Db;
        unsigned int uStack_30 = in_XMM1_Dc;
        unsigned int uStack_2c = in_XMM1_Dd;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg5) == 0) {
            local_28 = (float)random.FRandS(arg2);
            local_38 = (float)random.FRandS(local_38);
            arg4 = (float)random.FRandS(arg4);
        LAB_100c642f3:
            arg2_00 = local_38;
            goto LAB_100c642f8;
        }
        local_28 = arg2;
        unsigned int uStack_24 = in_XMM0_Db;
        unsigned int uStack_20 = in_XMM0_Dc;
        unsigned int uStack_1c = in_XMM0_Dd;
        switch (random.Rand(6)) {
        case 0:
            local_28 = -local_28;
            uStack_24 = uStack_24 ^ 2147483648;
            uStack_20 = uStack_20 ^ 2147483648;
            uStack_1c = uStack_1c ^ 2147483648;
        case 1:
            local_38 = (float)random.FRandS(local_38);
            arg4 = (float)random.FRandS(arg4);
            goto LAB_100c642f3;
        case 2:
            local_28 = (float)random.FRandS(local_28);
            local_38 = -local_38;
            uStack_34 = uStack_34 ^ 2147483648;
            uStack_30 = uStack_30 ^ 2147483648;
            uStack_2c = uStack_2c ^ 2147483648;
            break;
        case 3:
            local_28 = (float)random.FRandS(local_28);
            break;
        case 4:
            local_28 = (float)random.FRandS(local_28);
            arg2_00 = (float)random.FRandS(local_38);
            arg4 = -arg4;
            goto LAB_100c642f8;
        case 5:
            local_28 = (float)random.FRandS(local_28);
            arg2_00 = (float)random.FRandS(local_38);
            goto LAB_100c642f8;
        default:
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/geometry/GeometryUtils.cpp",
                70, nullptr);
        }
        arg4 = (float)random.FRandS(arg4);
        arg2_00 = local_38;
    LAB_100c642f8:
        ColourHSL local_48(local_28, arg2_00, arg4);
        uVar2._0_4_ = local_48.field_0;
        uVar2._4_4_ = local_48.field_4;
        return uVar2;
    }

} // namespace jag::math
