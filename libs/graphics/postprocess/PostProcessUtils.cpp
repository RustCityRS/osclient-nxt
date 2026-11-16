// libs/graphics/postprocess/PostProcessUtils.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    // 0x1009ad2c0
    void Calc2x2OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 2ul>& vector4s, int arg2, int arg3) {
        Point<float> local_38(1.0 / (float)arg2, 1.0 / (float)arg3);
        QuaternionT<float>* pQVar1 = &vector4s[0];
        auto pfVar2 = local_38.SSOBeginPtr();
        float local_2c = -0.5;
        float local_28 = *pfVar2 * -0.5;
        pfVar2 = (float*)local_38.y();
        float local_24 = *pfVar2 * -0.5;
        pfVar2 = (float*)local_38.SSOBeginPtr();
        float local_30 = *pfVar2 * 0.5;
        pfVar2 = (float*)local_38.y();
        pQVar1->Set(local_28, local_24, local_30, *pfVar2 * -0.5);
        pQVar1 = &vector4s[1];
        pfVar2 = (float*)local_38.SSOBeginPtr();
        local_2c = local_2c * *pfVar2;
        pfVar2 = (float*)local_38.y();
        local_28 = *pfVar2 * 0.5;
        pfVar2 = (float*)local_38.SSOBeginPtr();
        local_24 = *pfVar2 * 0.5;
        pfVar2 = (float*)local_38.y();
        pQVar1->Set(local_2c, local_28, local_24, *pfVar2 * 0.5);
    }

    // 0x1009ad430
    void Calc3x3OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 5ul>& vector4s, int arg2, int arg3) {
        Point<float> local_60(1.0 / (float)arg2, 1.0 / (float)arg3);
        QuaternionT<float>* pQVar1 = &vector4s[0];
        auto pfVar2 = local_60.SSOBeginPtr();
        float local_38 = -*pfVar2;
        uint32_t uStack_34 = 2147483648;
        uint32_t uStack_30 = 2147483648;
        uint32_t uStack_2c = 2147483648;
        pfVar2 = (float*)local_60.y();
        float local_48 = *pfVar2;
        local_60.SSOBeginPtr();
        pfVar2 = (float*)local_60.y();
        pQVar1->Set(local_38, local_48, 0.0, *pfVar2);
        pQVar1 = &vector4s[1];
        pfVar2 = (float*)local_60.SSOBeginPtr();
        local_38 = *pfVar2;
        pfVar2 = (float*)local_60.y();
        local_48 = *pfVar2;
        pfVar2 = (float*)local_60.SSOBeginPtr();
        float local_58 = -*pfVar2;
        uint32_t uStack_54 = 2147483648;
        uint32_t uStack_50 = 2147483648;
        uint32_t uStack_4c = 2147483648;
        local_60.y();
        pQVar1->Set(local_38, local_48, local_58, 0.0);
        pQVar1 = &vector4s[2];
        local_60.SSOBeginPtr();
        local_60.y();
        pfVar2 = (float*)local_60.SSOBeginPtr();
        local_38 = *pfVar2;
        local_60.y();
        pQVar1->Set(0.0, 0.0, local_38, 0.0);
        pQVar1 = &vector4s[3];
        pfVar2 = (float*)local_60.SSOBeginPtr();
        local_38 = -*pfVar2;
        uStack_34 = 2147483648;
        uStack_30 = 2147483648;
        uStack_2c = 2147483648;
        pfVar2 = (float*)local_60.y();
        local_48 = -*pfVar2;
        uint32_t uStack_44 = 2147483648;
        uint32_t uStack_40 = 2147483648;
        uint32_t uStack_3c = 2147483648;
        local_60.SSOBeginPtr();
        pfVar2 = (float*)local_60.y();
        pQVar1->Set(local_38, local_48, 0.0, -*pfVar2);
        pQVar1 = &vector4s[4];
        pfVar2 = (float*)local_60.SSOBeginPtr();
        local_38 = *pfVar2;
        pfVar2 = (float*)local_60.y();
        pQVar1->Set(local_38, -*pfVar2, 0.0, 0.0);
    }

    // 0x1009ad650
    void Calc4x4OffsetsNearestNeighbour(std::array<math::Vector4T<float>, 8ul>& vector4s, int arg2, int arg3) {
        Point<float> local_40(1.0 / (float)arg2, 1.0 / (float)arg3);
        QuaternionT<float>* pQVar1 = &vector4s[0];
        auto pfVar2 = local_40.SSOBeginPtr();
        float local_38 = -1.5;
        float local_34 = *pfVar2 * -1.5;
        pfVar2 = (float*)local_40.y();
        float local_24 = *pfVar2 * -1.5;
        pfVar2 = (float*)local_40.SSOBeginPtr();
        float local_30 = -0.5;
        float local_28 = *pfVar2 * -0.5;
        pfVar2 = (float*)local_40.y();
        pQVar1->Set(local_34, local_24, local_28, *pfVar2 * -1.5);
        pQVar1 = &vector4s[1];
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_34 = 0.5;
        local_24 = *pfVar2 * 0.5;
        pfVar2 = (float*)local_40.y();
        local_28 = *pfVar2 * -1.5;
        pfVar2 = (float*)local_40.SSOBeginPtr();
        float local_2c = *pfVar2 * 1.5;
        pfVar2 = (float*)local_40.y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar2 * -1.5);
        pQVar1 = &vector4s[2];
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_24 = *pfVar2 * -1.5;
        pfVar2 = (float*)local_40.y();
        local_28 = *pfVar2 * -0.5;
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_2c = *pfVar2 * -0.5;
        pfVar2 = (float*)local_40.y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar2 * -0.5);
        pQVar1 = &vector4s[3];
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_24 = *pfVar2 * 0.5;
        pfVar2 = (float*)local_40.y();
        local_28 = *pfVar2 * -0.5;
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_2c = *pfVar2 * 1.5;
        pfVar2 = (float*)local_40.y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar2 * -0.5);
        pQVar1 = &vector4s[4];
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_24 = *pfVar2 * -1.5;
        pfVar2 = (float*)local_40.y();
        local_28 = *pfVar2 * 0.5;
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_2c = *pfVar2 * -0.5;
        pfVar2 = (float*)local_40.y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar2 * 0.5);
        pQVar1 = &vector4s[5];
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_24 = *pfVar2 * 0.5;
        pfVar2 = (float*)local_40.y();
        local_28 = *pfVar2 * 0.5;
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_2c = *pfVar2 * 1.5;
        pfVar2 = (float*)local_40.y();
        pQVar1->Set(local_24, local_28, local_2c, *pfVar2 * 0.5);
        pQVar1 = &vector4s[6];
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_38 = local_38 * *pfVar2;
        pfVar2 = (float*)local_40.y();
        local_24 = *pfVar2 * 1.5;
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_30 = local_30 * *pfVar2;
        pfVar2 = (float*)local_40.y();
        pQVar1->Set(local_38, local_24, local_30, *pfVar2 * 1.5);
        pQVar1 = &vector4s[7];
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_34 = local_34 * *pfVar2;
        pfVar2 = (float*)local_40.y();
        local_38 = *pfVar2 * 1.5;
        pfVar2 = (float*)local_40.SSOBeginPtr();
        local_30 = *pfVar2 * 1.5;
        pfVar2 = (float*)local_40.y();
        pQVar1->Set(local_34, local_38, local_30, *pfVar2 * 1.5);
    }

    // 0x1009adaf0
    void Calc4x4OffsetsBilinear(std::array<math::Vector4T<float>, 2ul>& vector4s, int arg2, int arg3) {
        Point<float> local_50(1.0 / (float)arg2, 1.0 / (float)arg3);
        QuaternionT<float>* pQVar1 = &vector4s[0];
        auto pfVar2 = local_50.SSOBeginPtr();
        float local_48 = -*pfVar2;
        uint32_t uStack_44 = 2147483648;
        uint32_t uStack_40 = 2147483648;
        uint32_t uStack_3c = 2147483648;
        pfVar2 = (float*)local_50.y();
        float local_38 = -*pfVar2;
        uint32_t uStack_34 = 2147483648;
        uint32_t uStack_30 = 2147483648;
        uint32_t uStack_2c = 2147483648;
        pfVar2 = (float*)local_50.SSOBeginPtr();
        float local_24 = *pfVar2;
        pfVar2 = (float*)local_50.y();
        pQVar1->Set(local_48, local_38, local_24, -*pfVar2);
        pQVar1 = &vector4s[1];
        pfVar2 = (float*)local_50.SSOBeginPtr();
        local_48 = -*pfVar2;
        uStack_44 = 2147483648;
        uStack_40 = 2147483648;
        uStack_3c = 2147483648;
        pfVar2 = (float*)local_50.y();
        local_38 = *pfVar2;
        pfVar2 = (float*)local_50.SSOBeginPtr();
        local_24 = *pfVar2;
        pfVar2 = (float*)local_50.y();
        pQVar1->Set(local_48, local_38, local_24, *pfVar2);
    }

    // 0x1009adc20
    float ComputeGaussianWeight(float arg1, float arg2, float arg3) {
        float fVar1 = (float)_expf(((arg1 - arg2) * -(arg1 - arg2)) / (arg3 * arg3 + arg3 * arg3));
        return (fVar1 * 0.3989423f) / ABS(arg3);
    }

    // 0x1009adc70
    float GaussianDistribution(float arg1, float arg2, float arg3) {
        float fVar1 = (float)_expf(-(arg1 * arg1 + arg2 * arg2) / (arg3 * arg3 + arg3 * arg3));
        return (fVar1 * 0.3989423f) / ABS(arg3);
    }

    // 0x1009adcc0
    void CalcGaussianOffsetsWeights13Tap(std::array<math::Vector4T<float>, 13ul>& vector4s, int arg2, int arg3,
                                         float arg4) {
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this;
        float* pfVar2;
        float arg3_00;
        float arg1;

        float fVar5 = 0.0;
        float fVar6 = 0.0;
        if (0 < arg2) {
            fVar6 = 1.0 / (float)arg2;
        }
        if (0 < arg3) {
            fVar5 = 1.0 / (float)arg3;
        }
        float local_24 = (float)GaussianWeight(0.0, arg4);
        QuaternionT<float>* pQVar1 = &vector4s[6];
        pQVar1->Set(0.0, 0.0, local_24, 1.0);
        unsigned long uVar4 = 5;
        long lVar3 = 0;
        do {
            arg1 = (float)(int)lVar3 + 1.0;
            arg3_00 = (float)GaussianWeight(arg1, arg4);
            pQVar1 = &vector4s[uVar4];
            pQVar1->Set(arg1 * fVar6, arg1 * fVar5, arg3_00, 1.0);
            pQVar1 = &vector4s[lVar3 + 7];
            pQVar1->Set(arg1 * -fVar6, arg1 * -fVar5, arg3_00, 1.0);
            local_24 = local_24 + arg3_00 + arg3_00;
            lVar3 = lVar3 + 1;
            uVar4 = uVar4 - 1;
        } while (lVar3 != 6);
        uVar4 = 0;
        do {
            this = &vector4s[uVar4];
            pfVar2 = (float*)second();
            *pfVar2 = *pfVar2 / local_24;
            uVar4 = uVar4 + 1;
        } while (uVar4 != 13);
    }

    // 0x1009ade70
    void GaussianWeight(float arg1, float arg2) {
        float fVar1;
        uint64_t uVar2;
        uint32_t uVar3;

        if (arg2 == 0.0) {
            fVar1 = 1.0;
            uVar3 = 0;
        } else {
            uVar2 = _expf((-arg1 * arg1) / (arg2 * arg2 + arg2 * arg2));
            uVar3 = (uint32_t)((unsigned long)uVar2 >> 32);
            fVar1 = (float)uVar2 / (arg2 * 2.5066283f);
        }
        return (((uint64_t)uVar3 << 32) | (uint32_t)fVar1);
    }

    // 0x1009adee0
    void SelectPingPongSrcDstPair(const render::Texture* texture, const render::RenderTargets* renderTargets1,
                                  const render::RenderTargets* renderTargets2, int arg4, int arg5) {
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar1;
        uint64_t* puVar2;
        RenderTargets* pRVar3;
        uint8_t auVar4[16];
        pair<float*, float*> local_40[16];

        GPUMemoryAllocatorZone* local_28 = nullptr;
        RenderTargets* local_30 = nullptr;
        if ((arg5 & 1U) == 0) {
            if (arg4 == 0) {
                local_28 = (GPUMemoryAllocatorZone*)texture;
            } else {
                if ((arg4 & 1U) == 0) {
                    pRVar3 = renderTargets1;
                } else {
                    pRVar3 = renderTargets2;
                }
                pvVar1 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar3->GetColourTargetTextures();
                puVar2 = (uint64_t*)(*pvVar1)[0];
                local_28 = (GPUMemoryAllocatorZone*)*puVar2;
            }
            if ((arg4 & 1U) == 0) {
                renderTargets1 = renderTargets2;
            }
        } else {
            if (arg4 == 0) {
                local_28 = (GPUMemoryAllocatorZone*)texture;
            } else {
                if ((arg4 & 1U) == 0) {
                    pRVar3 = renderTargets2;
                } else {
                    pRVar3 = renderTargets1;
                }
                pvVar1 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar3->GetColourTargetTextures();
                puVar2 = (uint64_t*)(*pvVar1)[0];
                local_28 = (GPUMemoryAllocatorZone*)*puVar2;
            }
            if ((arg4 & 1U) != 0) {
                renderTargets1 = renderTargets2;
            }
        }
        local_30 = renderTargets1;
        renderTargets1->Invalidate();
        local_40->pair<float*&, float*&, void>(local_28, local_30);
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
