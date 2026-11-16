// libs/math/curves/Easings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::math::easings {
    // 0x100009e70: Linear(float) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1009014f0
    void PowerIn(float arg1, int arg2) {
        pow(arg1, (float)arg2);
    }

    // 0x100901500
    float PowerOut(float arg1, int arg2) {
        float fVar1 = (float)pow(1.0 - arg1, (float)arg2);
        return 1.0 - fVar1;
    }

    // 0x100901530
    float PowerInOut(float arg1, int arg2) {
        float fVar1;
        float fVar2;

        if (0.5 <= arg1) {
            fVar2 = (float)pow(2.0 - (arg1 + arg1), (float)arg2);
            fVar2 = fVar2 * -0.5 + 1.0;
        } else {
            fVar1 = (float)pow(2.0, (float)arg2 - 1.0);
            fVar2 = (float)pow(arg1, (float)arg2);
            fVar2 = fVar2 * fVar1;
        }
        return fVar2;
    }

    // 0x1009015c0
    float SineIn(float arg1) {
        float fVar1 = (float)::cos(arg1 * 1.5707964f);
        return 1.0 - fVar1;
    }

    // 0x1009015f0
    void SineOut(float arg1) {
        ::sin(arg1 * 1.5707964f);
        return;
    }

    // 0x100901610
    unsigned long SineInOut(float arg1) {
        float arg2 = (float)::cos(arg1 * 3.1415927f);
        return fma(0.5, arg2, -0.5) ^ 9223372039002259456;
    }

    // 0x100901650
    void ExpoIn(float arg1, int arg2) {
        uint64_t uVar1 = 0;
        if (1.1920929e-07 < arg1) {
            uVar1 = pow(2.0, arg1 * (float)arg2 - (float)arg2);
        }
        return uVar1;
    }

    // 0x100901690
    float ExpoOut(float arg1, int arg2) {
        float fVar1;

        if (arg1 < 0.9999999f) {
            fVar1 = (float)pow(2.0, (float)-arg2 * arg1);
            return 1.0 - fVar1;
        }
        return 1.0;
    }

    // 0x1009016d0
    float ExpoInOut(float arg1, int arg2) {
        float fVar2;

        float fVar1 = 0.0;
        if (1.1920929e-07 < arg1) {
            if (0.9999999f <= arg1) {
                return 1.0;
            }
            fVar1 = (float)arg2;
            fVar2 = (fVar1 + fVar1) * arg1;
            if (arg1 < 0.5) {
                fVar1 = (float)pow(2.0, fVar2 - fVar1);
                return fVar1 * 0.5;
            }
            fVar1 = (float)pow(2.0, fVar1 - fVar2);
            fVar1 = (float)fma(0.5, -fVar1, 1.0);
        }
        return fVar1;
    }

    // 0x100901760
    float CircularIn(float arg1) {
        float fVar1 = (float)pow(arg1, 2.0);
        fVar1 = (float)::sqrt(1.0 - fVar1);
        return 1.0 - fVar1;
    }

    // 0x1009017a0
    void CircularOut(float arg1) {
        float fVar1;

        fVar1 = (float)pow(arg1 - 1.0, 2.0);
        ::sqrt(1.0 - fVar1);
    }

    // 0x1009017d0
    void CircularInOut(float arg1) {
        float fVar1;

        if (0.5 <= arg1) {
            fVar1 = (float)pow(2.0 - (arg1 + arg1), 2.0);
            fVar1 = (float)::sqrt(1.0 - fVar1);
        } else {
            fVar1 = (float)pow(arg1 + arg1, 2.0);
            fVar1 = (float)::sqrt(1.0 - fVar1);
            fVar1 = -fVar1;
        }
        fma(0.5, fVar1, 0.5);
    }

    // 0x100901850
    float OvershootIn(float arg1) {
        return (arg1 * 3.0 - 2.0) * arg1 * arg1;
    }

    // 0x100901880
    float OvershootOut(float arg1) {
        float fVar1 = (float)pow(arg1 - 1.0, 3.0);
        float fVar2 = (float)pow(arg1 - 1.0, 2.0);
        return fVar2 + fVar2 + fVar1 * 3.0 + 1.0;
    }

    // 0x1009018e0
    unsigned long OvershootInOut(float arg1) {
        float fVar1;
        float fVar2;
        unsigned long uVar3;

        if (arg1 <= 0.5) {
            fVar1 = (float)pow(arg1 + arg1, 2.0);
            uVar3 = (unsigned long)(unsigned int)((arg1 * 4.0 - 1.5) * fVar1);
        } else {
            fVar1 = (float)pow(arg1 + arg1 - 2.0, 2.0);
            fVar2 = (float)fma(arg1, 2.0, -2.0);
            uVar3 = fma(0.5, fVar1 * (fVar2 * 4.0 + 3.0), 1.0);
        }
        return uVar3;
    }

    // 0x100901990
    void ElasticIn(float arg1) {
        uint64_t uVar2;

        float fVar1 = 0.0;
        uint32_t uVar3 = 0;
        if (1.1920929e-07 < arg1) {
            if (0.9999999f <= arg1) {
                fVar1 = 1.0;
                uVar3 = 0;
            } else {
                fVar1 = (float)pow(2.0, arg1 * 10.0 - 10.0);
                uVar2 = ::sin(arg1 * 20.94395f - 22.514748f);
                uVar3 = (uint32_t)((unsigned long)uVar2 >> 32);
                fVar1 = (float)uVar2 * -fVar1;
            }
        }
        return (((uint64_t)uVar3 << 32) | (uint32_t)fVar1);
    }

    // 0x100901a10
    void ElasticOut(float arg1) {
        float arg1_00;
        float arg2;

        uint64_t uVar1 = 0;
        if (1.1920929e-07 < arg1) {
            if (0.9999999f <= arg1) {
                uVar1 = 1065353216;
            } else {
                arg1_00 = (float)pow(2.0, arg1 * -10.0);
                arg2 = (float)::sin(arg1 * -20.94395 - 1.5707964f);
                uVar1 = fma(arg1_00, arg2, 1.0);
            }
        }
        return uVar1;
    }

    // 0x100901aa0
    float ElasticInOut(float arg1) {
        float fVar1;

        float fVar2 = 0.0;
        if (1.1920929e-07 < arg1) {
            if (0.9999999f <= arg1) {
                fVar2 = 1.0;
            } else if (0.5 <= arg1) {
                fVar2 = (float)pow(2.0, 10.0 - arg1 * 20.0);
                fVar1 = (float)::sin(arg1 * 27.92527f - 15.533431f);
                fVar2 = (float)fma(0.5, fVar2 * fVar1, 1.0);
            } else {
                fVar1 = (float)pow(2.0, arg1 * 20.0 - 10.0);
                fVar2 = (float)::sin(arg1 * 27.92527f - 15.533431f);
                fVar2 = fVar2 * fVar1 * -0.5;
            }
        }
        return fVar2;
    }

    // 0x100901b90
    float BounceIn(float arg1) {
        float fVar1 = (float)BounceOut(1.0 - arg1);
        return 1.0 - fVar1;
    }

    // 0x100901bc0
    void BounceOut(float arg1) {
        float* pfVar1;
        unsigned long uVar2;
        unsigned long uVar3;
        bool bVar4;
        uint32_t in_XMM0_Db;

        if (0.36363637f <= arg1) {
            uVar3 = 0;
            do {
                bVar4 = uVar3 < 2;
                if (uVar3 == 2)
                    goto LAB_100901c22;
                uVar2 = uVar3 + 1;
                pfVar1 =
                    (float*)(&reinterpret_cast<const uint64_t*>(&OVERRIDE_INTERFACE_SCALE_LIMIT_HEIGHT)[1] + uVar3);
                uVar3 = uVar2;
            } while (*pfVar1 <= arg1);
        } else {
            bVar4 = true;
            uVar2 = 0;
        }
        float fVar5 = (arg1 - (float)(&DAT_100d4b890)[uVar2]) * (arg1 - (float)(&DAT_100d4b890)[uVar2]) * 7.5625 +
                      (float)(&DAT_100d4b8a0)[uVar2];
        if (!bVar4) {
        LAB_100901c22:
            fVar5 = (arg1 - 0.95454544f) * (arg1 - 0.95454544f) * 7.5625 + 0.984375f;
        }
        return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)fVar5);
    }

    // 0x100901c50
    void BounceInOut(float arg1) {
        float fVar1;

        if (0.5 <= arg1) {
            fVar1 = (float)BounceOut(arg1 + arg1 - 1.0);
        } else {
            fVar1 = (float)BounceOut(1.0 - (arg1 + arg1));
            fVar1 = -fVar1;
        }
        fma(0.5, fVar1, 0.5);
    }

} // namespace jag::math::easings

namespace jag::math {
    // 0x1008f5a20
    void EvalEasing(EasingType easingType, float arg2) {
        uint32_t in_register_0000003c;

        switch (easingType) {
        case 0:
            ((AutoSingleton<ShaderThreadPoolSingleton>*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)easingType))
                ->~AutoSingleton();
            break;
        case 1:
            easings::PowerIn(arg2, 2);
            break;
        case 2:
            easings::PowerOut(arg2, 2);
            break;
        case 3:
            easings::PowerInOut(arg2, 2);
            break;
        case 4:
            easings::PowerIn(arg2, 3);
            break;
        case 5:
            easings::PowerOut(arg2, 3);
            break;
        case 6:
            easings::PowerInOut(arg2, 3);
            break;
        case 7:
            easings::SineIn(arg2);
            break;
        case 8:
            easings::SineOut(arg2);
            break;
        case 9:
            easings::SineInOut(arg2);
            break;
        case 10:
            easings::ExpoIn(arg2, 10);
            break;
        case 11:
            easings::ExpoOut(arg2, 10);
            break;
        case 12:
            easings::ExpoInOut(arg2, 10);
            break;
        case 13:
            easings::CircularIn(arg2);
            break;
        case 14:
            easings::CircularOut(arg2);
            break;
        case 15:
            easings::CircularInOut(arg2);
            break;
        case 16:
            easings::OvershootIn(arg2);
            break;
        case 17:
            easings::OvershootOut(arg2);
            break;
        case 18:
            easings::OvershootInOut(arg2);
            break;
        case 19:
            easings::ElasticIn(arg2);
            break;
        case 20:
            easings::ElasticOut(arg2);
            break;
        case 21:
            easings::ElasticInOut(arg2);
            break;
        case 22:
            easings::BounceIn(arg2);
            break;
        case 23:
            easings::BounceOut(arg2);
            break;
        case 24:
            easings::BounceInOut(arg2);
            break;
        default:
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/Easings.h", 388,
                nullptr);
        }
    }

    // 0x1008f5bd0
    float LoopEasing(float arg1, EasingLoopMode easingLoopMode) {
        float fVar1;
        float fVar2;
        float local_14;
        float local_10;

        float local_c = arg1;
        switch (easingLoopMode) {
        case 0:
            local_10 = 0.0;
            local_14 = 1.0;
            fVar1 = Clamp<float>(&local_c, &local_10, &local_14);
            return fVar1;
        case 1:
            local_10 = 0.0;
            local_14 = 1.0;
            fVar1 = Clamp<float>(&local_c, &local_10, &local_14);
            fVar1 = fVar1 + fVar1;
            if (fVar1 <= 1.0) {
                return fVar1;
            }
            fVar2 = 2.0;
            break;
        case 2:
            fVar1 = (float)modf(arg1 + arg1, &local_10);
            fVar1 = (float)fabs(fVar1);
            if ((int)local_10 % 2 != 1) {
                return fVar1;
            }
            fVar2 = 1.0;
            break;
        case 3:
            fVar1 = (float)modf(arg1, &local_10);
            fVar1 = (float)fabs(fVar1);
            return fVar1;
        default:
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/Easings.h", 347,
                nullptr);
        }
        return fVar2 - fVar1;
    }

    // 0x1008f6190
    Vector2T<int> operator+ <int>(const Vector2T<int>& vector21, const Vector2T<int>& vector22) {
        uint64_t uVar1;
        uint8_t local_10[8];

        new (local_10) oldscape::sidebars::SideBarData(*(int*)vector22 + *(int*)vector21,
                                                       *(int*)(vector22 + 4) + *(int*)(vector21 + 4));
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

    // 0x1008f61c0
    Vector2T<int> operator- <int>(const Vector2T<int>& vector21, const Vector2T<int>& vector22) {
        uint64_t uVar1;
        uint8_t local_10[8];

        new (local_10) oldscape::sidebars::SideBarData(*(int*)vector21 - *(int*)vector22,
                                                       *(int*)(vector21 + 4) - *(int*)(vector22 + 4));
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

    // 0x1008f63e0
    bool operator== <float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22) {
        return *(float*)(vector21 + 4) == *(float*)(vector22 + 4) && *(float*)vector21 == *(float*)vector22;
    }

    // 0x1008f64a0
    Vector2T<float> CubicBezier<float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22,
                                       const Vector2T<float>& vector23, const Vector2T<float>& vector24, float arg5) {
        uint64_t local_68;
        uint64_t local_60;
        uint64_t local_58;
        uint64_t local_50;
        uint64_t local_48;
        uint64_t local_40;
        float local_34;
        float local_30;

        if ((0.0 <= arg5) && (arg5 <= 1.0)) {
            local_34 = 1.0 - arg5;
            local_30 = local_34 * local_34;
            local_58 = vector21 * (local_30 * local_34);
            local_50 = vector22 * (arg5 * 3.0 * local_30);
            local_60 = local_58 + local_50;
            local_30 = arg5 * arg5;
            local_48 = vector23 * (local_30 * 3.0 * local_34);
            local_68 = local_60 + local_48;
            local_40 = vector24 * (local_30 * arg5);
            local_68 + local_40;
            return;
        }
        LogAssert("(t >= 0.f) && (t <= 1.f)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/BezierCurve.h", 47,
                  nullptr);
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1008f6060
    unsigned int GUIAnimationRGB::EvalDelta(unsigned int arg1, unsigned int arg2) const {
        int local_3c[3];

        local_3c[0] = (int)field_0 + ((arg2 >> 16 & 255) - (arg1 >> 16 & 255));
        local_3c[1] = 0;
        local_3c[2] = 255;
        int iVar1 = math::Clamp<int>(*local_3c, *(local_3c + 1), *(local_3c + 2));
        local_3c[0] = ((arg2 >> 8 & 255) - (arg1 >> 8 & 255)) + (int)(short)field_2;
        local_3c[1] = 0;
        local_3c[2] = 255;
        int iVar2 = math::Clamp<int>(*local_3c, *(local_3c + 1), *(local_3c + 2));
        local_3c[0] = (int)field_4 + ((arg2 & 255) - (arg1 & 255));
        local_3c[1] = 0;
        local_3c[2] = 255;
        return math::Clamp<int>(*local_3c, *(local_3c + 1), *(local_3c + 2)) | iVar2 << 8 | iVar1 << 16;
    }

    // 0x1008f6140
    unsigned int GUIAnimationRGB::AsUint() const {
        return (unsigned int)(uint8_t)field_4 | (field_2 & 255) << 8 | (unsigned int)(uint8_t)field_0 << 16;
    }

} // namespace jag::graphics

// 0x1008f5fd0
void modf(float arg1, float* arg2) {
    _modff();
}
