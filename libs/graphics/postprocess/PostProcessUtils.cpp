// libs/graphics/postprocess/PostProcessUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    // 0x1009ad2c0, 352 bytes, placed by debug map only (low confidence)
    // Calc2x2OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 2ul>&, int, int)
    /* Calc2x2OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 2ul>&,
   int, int) */

    void Calc2x2OffsetsNearestNeighbour(array* param_1, int param_2, int param_3) {
        QuaternionT<float>* pQVar1;
        vector* pvVar2;
        float* pfVar3;
        type* ptVar4;
        Point<float> local_38[8];
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        math::Point<float>::Point(local_38, 1.0 / (float)param_2, 1.0 / (float)param_3);
        ptVar4 = (type*)0;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 2ul>::operator[](
            (array<math::Vector4T<float>, 2ul>*)param_1, 0);
        pvVar2 = local_38->SSOBeginPtr(ptVar4);
        local_2c = -0.5;
        local_28 = *(float*)pvVar2 * -0.5;
        pfVar3 = (float*)local_38->y();
        local_24 = *pfVar3 * -0.5;
        pvVar2 = local_38->SSOBeginPtr(ptVar4);
        local_30 = *(float*)pvVar2 * 0.5;
        pfVar3 = (float*)local_38->y();
        pQVar1->Set(local_28, local_24, local_30, *pfVar3 * -0.5);
        ptVar4 = (type*)&DAT_00000001;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 2ul>::operator[](
            (array<math::Vector4T<float>, 2ul>*)param_1, 1);
        pvVar2 = local_38->SSOBeginPtr(ptVar4);
        local_2c = local_2c * *(float*)pvVar2;
        pfVar3 = (float*)local_38->y();
        local_28 = *pfVar3 * 0.5;
        pvVar2 = local_38->SSOBeginPtr(ptVar4);
        local_24 = *(float*)pvVar2 * 0.5;
        pfVar3 = (float*)local_38->y();
        pQVar1->Set(local_2c, local_28, local_24, *pfVar3 * 0.5);
    }

    // 0x1009ad430, 528 bytes, placed by debug map only (low confidence)
    // Calc3x3OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 5ul>&, int, int)
    /* Calc3x3OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 5ul>&,
   int, int) */

    void Calc3x3OffsetsNearestNeighbour(array* param_1, int param_2, int param_3) {
        QuaternionT<float>* pQVar1;
        vector* pvVar2;
        float* pfVar3;
        type* ptVar4;
        Point<float> local_60[8];
        float local_58;
        undefined4 uStack_54;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        float local_48;
        undefined4 uStack_44;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        float local_38;
        undefined4 uStack_34;
        undefined4 uStack_30;
        undefined4 uStack_2c;

        math::Point<float>::Point(local_60, 1.0 / (float)param_2, 1.0 / (float)param_3);
        ptVar4 = (type*)0;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 5ul>::operator[](
            (array<math::Vector4T<float>, 5ul>*)param_1, 0);
        pvVar2 = local_60->SSOBeginPtr(ptVar4);
        local_38 = -*(float*)pvVar2;
        uStack_34 = 2147483648;
        uStack_30 = 2147483648;
        uStack_2c = 2147483648;
        pfVar3 = (float*)local_60->y();
        local_48 = *pfVar3;
        local_60->SSOBeginPtr(ptVar4);
        pfVar3 = (float*)local_60->y();
        pQVar1->Set(local_38, local_48, 0.0, *pfVar3);
        ptVar4 = (type*)&DAT_00000001;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 5ul>::operator[](
            (array<math::Vector4T<float>, 5ul>*)param_1, 1);
        pvVar2 = local_60->SSOBeginPtr(ptVar4);
        local_38 = *(float*)pvVar2;
        pfVar3 = (float*)local_60->y();
        local_48 = *pfVar3;
        pvVar2 = local_60->SSOBeginPtr(ptVar4);
        local_58 = -*(float*)pvVar2;
        uStack_54 = 2147483648;
        uStack_50 = 2147483648;
        uStack_4c = 2147483648;
        local_60->y();
        pQVar1->Set(local_38, local_48, local_58, 0.0);
        ptVar4 = (type*)2;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 5ul>::operator[](
            (array<math::Vector4T<float>, 5ul>*)param_1, 2);
        local_60->SSOBeginPtr(ptVar4);
        local_60->y();
        pvVar2 = local_60->SSOBeginPtr(ptVar4);
        local_38 = *(float*)pvVar2;
        local_60->y();
        pQVar1->Set(0.0, 0.0, local_38, 0.0);
        ptVar4 = (type*)3;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 5ul>::operator[](
            (array<math::Vector4T<float>, 5ul>*)param_1, 3);
        pvVar2 = local_60->SSOBeginPtr(ptVar4);
        local_38 = -*(float*)pvVar2;
        uStack_34 = 2147483648;
        uStack_30 = 2147483648;
        uStack_2c = 2147483648;
        pfVar3 = (float*)local_60->y();
        local_48 = -*pfVar3;
        uStack_44 = 2147483648;
        uStack_40 = 2147483648;
        uStack_3c = 2147483648;
        local_60->SSOBeginPtr(ptVar4);
        pfVar3 = (float*)local_60->y();
        pQVar1->Set(local_38, local_48, 0.0, -*pfVar3);
        ptVar4 = (type*)4;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 5ul>::operator[](
            (array<math::Vector4T<float>, 5ul>*)param_1, 4);
        pvVar2 = local_60->SSOBeginPtr(ptVar4);
        local_38 = *(float*)pvVar2;
        pfVar3 = (float*)local_60->y();
        pQVar1->Set(local_38, -*pfVar3, 0.0, 0.0);
    }

    // 0x1009ad650, 1168 bytes, placed by debug map only (low confidence)
    // Calc4x4OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 8ul>&, int, int)
    /* Calc4x4OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 8ul>&,
   int, int) */

    void Calc4x4OffsetsNearestNeighbour(array* param_1, int param_2, int param_3) {
        QuaternionT<float>* pQVar1;
        vector* pvVar2;
        float* pfVar3;
        type* ptVar4;
        Point<float> local_40[8];
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        math::Point<float>::Point(local_40, 1.0 / (float)param_2, 1.0 / (float)param_3);
        ptVar4 = (type*)0;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 0);
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_38 = -1.5;
        local_34 = *(float*)pvVar2 * -1.5;
        pfVar3 = (float*)local_40->y();
        local_24 = *pfVar3 * -1.5;
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_30 = -0.5;
        local_28 = *(float*)pvVar2 * -0.5;
        pfVar3 = (float*)local_40->y();
        pQVar1->Set(local_34, local_24, local_28, *pfVar3 * -1.5);
        ptVar4 = (type*)&DAT_00000001;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 1);
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_34 = 0.5;
        local_24 = *(float*)pvVar2 * 0.5;
        pfVar3 = (float*)local_40->y();
        local_28 = *pfVar3 * -1.5;
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_2c = *(float*)pvVar2 * 1.5;
        pfVar3 = (float*)local_40->y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar3 * -1.5);
        ptVar4 = (type*)2;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 2);
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_24 = *(float*)pvVar2 * -1.5;
        pfVar3 = (float*)local_40->y();
        local_28 = *pfVar3 * -0.5;
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_2c = *(float*)pvVar2 * -0.5;
        pfVar3 = (float*)local_40->y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar3 * -0.5);
        ptVar4 = (type*)3;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 3);
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_24 = *(float*)pvVar2 * 0.5;
        pfVar3 = (float*)local_40->y();
        local_28 = *pfVar3 * -0.5;
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_2c = *(float*)pvVar2 * 1.5;
        pfVar3 = (float*)local_40->y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar3 * -0.5);
        ptVar4 = (type*)4;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 4);
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_24 = *(float*)pvVar2 * -1.5;
        pfVar3 = (float*)local_40->y();
        local_28 = *pfVar3 * 0.5;
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_2c = *(float*)pvVar2 * -0.5;
        pfVar3 = (float*)local_40->y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar3 * 0.5);
        ptVar4 = (type*)5;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 5);
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_24 = *(float*)pvVar2 * 0.5;
        pfVar3 = (float*)local_40->y();
        local_28 = *pfVar3 * 0.5;
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_2c = *(float*)pvVar2 * 1.5;
        pfVar3 = (float*)local_40->y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar3 * 0.5);
        ptVar4 = (type*)6;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 6);
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_38 = local_38 * *(float*)pvVar2;
        pfVar3 = (float*)local_40->y();
        local_24 = *pfVar3 * 1.5;
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_30 = local_30 * *(float*)pvVar2;
        pfVar3 = (float*)local_40->y();
        pQVar1->Set(local_38, local_24, local_30, *pfVar3 * 1.5);
        ptVar4 = (type*)7;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 7);
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_34 = local_34 * *(float*)pvVar2;
        pfVar3 = (float*)local_40->y();
        local_38 = *pfVar3 * 1.5;
        pvVar2 = local_40->SSOBeginPtr(ptVar4);
        local_30 = *(float*)pvVar2 * 1.5;
        pfVar3 = (float*)local_40->y();
        pQVar1->Set(local_34, local_38, local_30, *pfVar3 * 1.5);
    }

    // 0x1009adaf0, 304 bytes, placed by debug map only (low confidence)
    // Calc4x4OffsetsBilinear(std::array<math::Vector4T<float>, 2ul>&, int, int)
    /* Calc4x4OffsetsBilinear(std::array<math::Vector4T<float>, 2ul>&, int, int)
    */

    void Calc4x4OffsetsBilinear(array* param_1, int param_2, int param_3) {
        QuaternionT<float>* pQVar1;
        vector* pvVar2;
        float* pfVar3;
        type* ptVar4;
        Point<float> local_50[8];
        float local_48;
        undefined4 uStack_44;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        float local_38;
        undefined4 uStack_34;
        undefined4 uStack_30;
        undefined4 uStack_2c;
        float local_24;

        math::Point<float>::Point(local_50, 1.0 / (float)param_2, 1.0 / (float)param_3);
        ptVar4 = (type*)0;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 2ul>::operator[](
            (array<math::Vector4T<float>, 2ul>*)param_1, 0);
        pvVar2 = local_50->SSOBeginPtr(ptVar4);
        local_48 = -*(float*)pvVar2;
        uStack_44 = 2147483648;
        uStack_40 = 2147483648;
        uStack_3c = 2147483648;
        pfVar3 = (float*)local_50->y();
        local_38 = -*pfVar3;
        uStack_34 = 2147483648;
        uStack_30 = 2147483648;
        uStack_2c = 2147483648;
        pvVar2 = local_50->SSOBeginPtr(ptVar4);
        local_24 = *(float*)pvVar2;
        pfVar3 = (float*)local_50->y();
        pQVar1->Set(local_48, local_38, local_24, -*pfVar3);
        ptVar4 = (type*)&DAT_00000001;
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 2ul>::operator[](
            (array<math::Vector4T<float>, 2ul>*)param_1, 1);
        pvVar2 = local_50->SSOBeginPtr(ptVar4);
        local_48 = -*(float*)pvVar2;
        uStack_44 = 2147483648;
        uStack_40 = 2147483648;
        uStack_3c = 2147483648;
        pfVar3 = (float*)local_50->y();
        local_38 = *pfVar3;
        pvVar2 = local_50->SSOBeginPtr(ptVar4);
        local_24 = *(float*)pvVar2;
        pfVar3 = (float*)local_50->y();
        pQVar1->Set(local_48, local_38, local_24, *pfVar3);
    }

    // 0x1009adc20, 80 bytes, placed by debug map only (low confidence)
    // ComputeGaussianWeight(float, float, float)
    float ComputeGaussianWeight(float param_1, float param_2, float param_3) {
        float fVar1;

        fVar1 = (float)_expf(((param_1 - param_2) * -(param_1 - param_2)) / (param_3 * param_3 + param_3 * param_3));
        return (fVar1 * 0.3989423) / ABS(param_3);
    }

    // 0x1009adc70, 80 bytes, placed by debug map only (low confidence)
    // GaussianDistribution(float, float, float)
    float GaussianDistribution(float param_1, float param_2, float param_3) {
        float fVar1;

        fVar1 = (float)_expf(-(param_1 * param_1 + param_2 * param_2) / (param_3 * param_3 + param_3 * param_3));
        return (fVar1 * 0.3989423) / ABS(param_3);
    }

    // 0x1009adcc0, 432 bytes, placed by debug map only (low confidence)
    // CalcGaussianOffsetsWeights13Tap(std::array<math::Vector4T<float>, 13ul>&, int, int, float)
    /* CalcGaussianOffsetsWeights13Tap(std::array<math::Vector4T<float>, 13ul>&,
   int, int, float) */

    void CalcGaussianOffsetsWeights13Tap(array* param_1, int param_2, int param_3, float param_4) {
        QuaternionT<float>* pQVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this;
        float* pfVar2;
        long lVar3;
        ulong uVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float local_24;

        fVar7 = 0.0;
        fVar8 = 0.0;
        if (0 < param_2) {
            fVar8 = 1.0 / (float)param_2;
        }
        if (0 < param_3) {
            fVar7 = 1.0 / (float)param_3;
        }
        local_24 = (float)GaussianWeight(0.0, param_4);
        pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 13ul>::operator[](
            (array<math::Vector4T<float>, 13ul>*)param_1, 6);
        pQVar1->Set(0.0, 0.0, local_24, 1.0);
        uVar4 = 5;
        lVar3 = 0;
        do {
            fVar6 = (float)(int)lVar3 + 1.0;
            fVar5 = (float)GaussianWeight(fVar6, param_4);
            pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 13ul>::operator[](
                (array<math::Vector4T<float>, 13ul>*)param_1, uVar4);
            pQVar1->Set(fVar6 * fVar8, fVar6 * fVar7, fVar5, 1.0);
            pQVar1 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 13ul>::operator[](
                (array<math::Vector4T<float>, 13ul>*)param_1, lVar3 + 7);
            pQVar1->Set(fVar6 * -fVar8, fVar6 * -fVar7, fVar5, 1.0);
            local_24 = local_24 + fVar5 + fVar5;
            lVar3 = lVar3 + 1;
            uVar4 = uVar4 - 1;
        } while (lVar3 != 6);
        uVar4 = 0;
        do {
            this = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                        eastl::allocator, 0>*)
                std::array<math::Vector4T<float>, 13ul>::operator[]((array<math::Vector4T<float>, 13ul>*)param_1,
                                                                    uVar4);
            pfVar2 = (float*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this);
            *pfVar2 = *pfVar2 / local_24;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 13);
    }

    // 0x1009ade70, 96 bytes, inline, placed by debug map only (low confidence)
    // GaussianWeight(float, float)
    undefined8 GaussianWeight(float param_1, float param_2) {
        float fVar1;
        undefined8 uVar2;
        undefined4 uVar3;

        if (param_2 == 0.0) {
            fVar1 = 1.0;
            uVar3 = 0;
        } else {
            uVar2 = _expf((-param_1 * param_1) / (param_2 * param_2 + param_2 * param_2));
            uVar3 = (undefined4)((ulong)uVar2 >> 32);
            fVar1 = (float)uVar2 / (param_2 * 2.5066283);
        }
        return CONCAT44(uVar3, fVar1);
    }

    // 0x1009adee0, 208 bytes, placed by debug map only (low confidence)
    // SelectPingPongSrcDstPair(render::Texture const*, render::RenderTargets const*, render::RenderTargets const*, int, int)
    undefined1[16] SelectPingPongSrcDstPair(Texture* param_1, RenderTargets* param_2, RenderTargets* param_3,
                                            int param_4, int param_5) {
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar1;
        undefined8* puVar2;
        RenderTargets* pRVar3;
        undefined1 auVar4[16];
        pair<float*, float*> local_40[16];
        RenderTargets* local_30;
        Texture* local_28;

        local_28 = (Texture*)0;
        local_30 = (RenderTargets*)0;
        if ((param_5 & 1U) == 0) {
            if (param_4 == 0) {
                local_28 = param_1;
            } else {
                if ((param_4 & 1U) == 0) {
                    pRVar3 = param_2;
                } else {
                    pRVar3 = param_3;
                }
                pvVar1 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar3->GetColourTargetTextures();
                puVar2 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar1, 0);
                local_28 = (Texture*)*puVar2;
            }
            if ((param_4 & 1U) == 0) {
                param_2 = param_3;
            }
        } else {
            if (param_4 == 0) {
                local_28 = param_1;
            } else {
                if ((param_4 & 1U) == 0) {
                    pRVar3 = param_3;
                } else {
                    pRVar3 = param_2;
                }
                pvVar1 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar3->GetColourTargetTextures();
                puVar2 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar1, 0);
                local_28 = (Texture*)*puVar2;
            }
            if ((param_4 & 1U) != 0) {
                param_2 = param_3;
            }
        }
        local_30 = param_2;
        param_2->Invalidate();
        eastl::pair<float*, float*>::pair<float*&, float*&, void>(local_40, (float**)&local_28, (float**)&local_30);
        auVar4[0] = local_40[0];
        auVar4[1] = local_40[1];
        auVar4[2] = local_40[2];
        auVar4[3] = local_40[3];
        auVar4[4] = local_40[4];
        auVar4[5] = local_40[5];
        auVar4[6] = local_40[6];
        auVar4[7] = local_40[7];
        auVar4[8] = local_40[8];
        auVar4[9] = local_40[9];
        auVar4[10] = local_40[10];
        auVar4[11] = local_40[11];
        auVar4[12] = local_40[12];
        auVar4[13] = local_40[13];
        auVar4[14] = local_40[14];
        auVar4[15] = local_40[15];
        return auVar4;
    }

} // namespace jag::postprocess
