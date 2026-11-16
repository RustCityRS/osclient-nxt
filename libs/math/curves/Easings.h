// libs/math/curves/Easings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::math::easings {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Linear(float);

    // 0x1009014f0, 16 bytes, inline, placed by class name
    // PowerIn(float, int)
    void PowerIn(float param_1, int param_2) {
        pow(param_1, (float)param_2);
    }

    // 0x100901500, 48 bytes, inline, placed by class name
    // PowerOut(float, int)
    float PowerOut(float param_1, int param_2) {
        float fVar1;

        fVar1 = (float)pow(1.0 - param_1, (float)param_2);
        return 1.0 - fVar1;
    }

    // 0x100901530, 144 bytes, inline, placed by class name
    // PowerInOut(float, int)
    float PowerInOut(float param_1, int param_2) {
        float fVar1;
        float fVar2;

        if (0.5 <= param_1) {
            fVar2 = (float)pow(2.0 - (param_1 + param_1), (float)param_2);
            fVar2 = fVar2 * -0.5 + 1.0;
        } else {
            fVar1 = (float)pow(2.0, (float)param_2 + -1.0);
            fVar2 = (float)pow(param_1, (float)param_2);
            fVar2 = fVar2 * fVar1;
        }
        return fVar2;
    }

    // 0x1009015c0, 48 bytes, inline, placed by class name
    // SineIn(float)
    float SineIn(float param_1) {
        float fVar1;

        fVar1 = (float)::cos(param_1 * 1.5707964);
        return 1.0 - fVar1;
    }

    // 0x1009015f0, 32 bytes, inline, placed by class name
    // SineOut(float)
    void SineOut(float param_1) {
        ::sin(param_1 * 1.5707964);
        return;
    }

    // 0x100901610, 64 bytes, inline, placed by class name
    // SineInOut(float)
    ulong SineInOut(float param_1) {
        float fVar2;

        fVar2 = (float)::cos(param_1 * 3.1415927);
        return fma(0.5, fVar2, -0.5) ^ 9223372039002259456;
    }

    // 0x100901650, 64 bytes, inline, placed by class name
    // ExpoIn(float, int)
    undefined8 ExpoIn(float param_1, int param_2) {
        undefined8 uVar1;

        uVar1 = 0;
        if (1.1920929e-07 < param_1) {
            uVar1 = pow(2.0, param_1 * (float)param_2 - (float)param_2);
        }
        return uVar1;
    }

    // 0x100901690, 64 bytes, inline, placed by class name
    // ExpoOut(float, int)
    float ExpoOut(float param_1, int param_2) {
        float fVar1;

        if (param_1 < 0.9999999) {
            fVar1 = (float)pow(2.0, (float)-param_2 * param_1);
            return 1.0 - fVar1;
        }
        return 1.0;
    }

    // 0x1009016d0, 144 bytes, inline, placed by class name
    // ExpoInOut(float, int)
    float ExpoInOut(float param_1, int param_2) {
        float fVar1;
        float fVar2;

        fVar1 = 0.0;
        if (1.1920929e-07 < param_1) {
            if (0.9999999 <= param_1) {
                return 1.0;
            }
            fVar1 = (float)param_2;
            fVar2 = (fVar1 + fVar1) * param_1;
            if (param_1 < 0.5) {
                fVar1 = (float)pow(2.0, fVar2 - fVar1);
                return fVar1 * 0.5;
            }
            fVar1 = (float)pow(2.0, fVar1 - fVar2);
            fVar1 = (float)fma(0.5, -fVar1, 1.0);
        }
        return fVar1;
    }

    // 0x100901760, 64 bytes, inline, placed by class name
    // CircularIn(float)
    float CircularIn(float param_1) {
        float fVar1;

        fVar1 = (float)pow(param_1, 2.0);
        fVar1 = (float)::sqrt(1.0 - fVar1);
        return 1.0 - fVar1;
    }

    // 0x1009017a0, 48 bytes, inline, placed by class name
    // CircularOut(float)
    void CircularOut(float param_1) {
        float fVar1;

        fVar1 = (float)pow(param_1 + -1.0, 2.0);
        ::sqrt(1.0 - fVar1);
    }

    // 0x1009017d0, 128 bytes, inline, placed by class name
    // CircularInOut(float)
    void CircularInOut(float param_1) {
        float fVar1;

        if (0.5 <= param_1) {
            fVar1 = (float)pow(2.0 - (param_1 + param_1), 2.0);
            fVar1 = (float)::sqrt(1.0 - fVar1);
        } else {
            fVar1 = (float)pow(param_1 + param_1, 2.0);
            fVar1 = (float)::sqrt(1.0 - fVar1);
            fVar1 = -fVar1;
        }
        fma(0.5, fVar1, 0.5);
    }

    // 0x100901850, 48 bytes, inline, placed by class name
    // OvershootIn(float)
    float OvershootIn(float param_1) {
        return (param_1 * 3.0 + -2.0) * param_1 * param_1;
    }

    // 0x100901880, 96 bytes, inline, placed by class name
    // OvershootOut(float)
    float OvershootOut(float param_1) {
        float fVar1;
        float fVar2;

        fVar1 = (float)pow(param_1 + -1.0, 3.0);
        fVar2 = (float)pow(param_1 + -1.0, 2.0);
        return fVar2 + fVar2 + fVar1 * 3.0 + 1.0;
    }

    // 0x1009018e0, 176 bytes, inline, placed by class name
    // OvershootInOut(float)
    ulong OvershootInOut(float param_1) {
        float fVar1;
        float fVar2;
        ulong uVar3;

        if (param_1 <= 0.5) {
            fVar1 = (float)pow(param_1 + param_1, 2.0);
            uVar3 = (ulong)(uint)((param_1 * 4.0 + -1.5) * fVar1);
        } else {
            fVar1 = (float)pow(param_1 + param_1 + -2.0, 2.0);
            fVar2 = (float)fma(param_1, 2.0, -2.0);
            uVar3 = fma(0.5, fVar1 * (fVar2 * 4.0 + 3.0), 1.0);
        }
        return uVar3;
    }

    // 0x100901990, 128 bytes, inline, placed by class name
    // ElasticIn(float)
    undefined8 ElasticIn(float param_1) {
        float fVar1;
        undefined4 uVar3;
        undefined8 uVar2;

        fVar1 = 0.0;
        uVar3 = 0;
        if (1.1920929e-07 < param_1) {
            if (0.9999999 <= param_1) {
                fVar1 = 1.0;
                uVar3 = 0;
            } else {
                fVar1 = (float)pow(2.0, param_1 * 10.0 + -10.0);
                uVar2 = ::sin(param_1 * 20.94395 + -22.514748);
                uVar3 = (undefined4)((ulong)uVar2 >> 32);
                fVar1 = (float)uVar2 * -fVar1;
            }
        }
        return CONCAT44(uVar3, fVar1);
    }

    // 0x100901a10, 144 bytes, inline, placed by class name
    // ElasticOut(float)
    undefined8 ElasticOut(float param_1) {
        float fVar1;
        float fVar2;
        undefined8 uVar3;

        uVar3 = 0;
        if (1.1920929e-07 < param_1) {
            if (0.9999999 <= param_1) {
                uVar3 = 1065353216;
            } else {
                fVar1 = (float)pow(2.0, param_1 * -10.0);
                fVar2 = (float)::sin(param_1 * -20.94395 + -1.5707964);
                uVar3 = fma(fVar1, fVar2, 1.0);
            }
        }
        return uVar3;
    }

    // 0x100901aa0, 240 bytes, inline, placed by class name
    // ElasticInOut(float)
    float ElasticInOut(float param_1) {
        float fVar1;
        float fVar2;

        fVar2 = 0.0;
        if (1.1920929e-07 < param_1) {
            if (0.9999999 <= param_1) {
                fVar2 = 1.0;
            } else if (0.5 <= param_1) {
                fVar2 = (float)pow(2.0, 10.0 - param_1 * 20.0);
                fVar1 = (float)::sin(param_1 * 27.92527 + -15.533431);
                fVar2 = (float)fma(0.5, fVar2 * fVar1, 1.0);
            } else {
                fVar1 = (float)pow(2.0, param_1 * 20.0 + -10.0);
                fVar2 = (float)::sin(param_1 * 27.92527 + -15.533431);
                fVar2 = fVar2 * fVar1 * -0.5;
            }
        }
        return fVar2;
    }

    // 0x100901b90, 48 bytes, inline, placed by class name
    // BounceIn(float)
    float BounceIn(float param_1) {
        float fVar1;

        fVar1 = (float)BounceOut(this, 1.0 - param_1);
        return 1.0 - fVar1;
    }

    // 0x100901bc0, 144 bytes, inline, placed by class name
    // BounceOut(float)
    /* WARNING: Removing unreachable block (ram,4304411722) */
    /* BounceOut(float) */

    undefined8 BounceOut(float param_1) {
        float* pfVar1;
        ulong uVar2;
        ulong uVar3;
        bool bVar4;
        undefined4 in_XMM0_Db;
        float fVar5;

        if (0.36363637 <= param_1) {
            uVar3 = 0;
            do {
                bVar4 = uVar3 < 2;
                if (uVar3 == 2)
                    goto LAB_100901c22;
                uVar2 = uVar3 + 1;
                pfVar1 = (float*)(&DAT_100d4b8f0 + uVar3);
                uVar3 = uVar2;
            } while (*pfVar1 <= param_1);
        } else {
            bVar4 = true;
            uVar2 = 0;
        }
        fVar5 = (param_1 - (float)(&DAT_100d4b890)[uVar2]) * (param_1 - (float)(&DAT_100d4b890)[uVar2]) * 7.5625 +
                (float)(&DAT_100d4b8a0)[uVar2];
        if (!bVar4) {
        LAB_100901c22:
            fVar5 = (param_1 + -0.95454544) * (param_1 + -0.95454544) * 7.5625 + 0.984375;
        }
        return CONCAT44(in_XMM0_Db, fVar5);
    }

    // 0x100901c50, 96 bytes, inline, placed by class name
    // BounceInOut(float)
    void BounceInOut(float param_1) {
        float fVar1;

        if (0.5 <= param_1) {
            fVar1 = (float)BounceOut(this, param_1 + param_1 + -1.0);
        } else {
            fVar1 = (float)BounceOut(this, 1.0 - (param_1 + param_1));
            fVar1 = -fVar1;
        }
        fma(0.5, fVar1, 0.5);
    }

} // namespace jag::math::easings

namespace jag::math {
    // 0x1008f5a20, 432 bytes, inline, placed by debug map only (low confidence)
    // EvalEasing(EasingType, float)
    void EvalEasing(float param_1, easings* param_2) {
        switch ((ulong)param_2 & 4294967295) {
        case 0:
            AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton();
            break;
        case 1:
            easings::PowerIn(param_1, 2);
            break;
        case 2:
            easings::PowerOut(param_1, 2);
            break;
        case 3:
            easings::PowerInOut(param_1, 2);
            break;
        case 4:
            easings::PowerIn(param_1, 3);
            break;
        case 5:
            easings::PowerOut(param_1, 3);
            break;
        case 6:
            easings::PowerInOut(param_1, 3);
            break;
        case 7:
            easings::SineIn(param_1);
            break;
        case 8:
            easings::SineOut(param_1);
            break;
        case 9:
            easings::SineInOut(param_1);
            break;
        case 10:
            easings::ExpoIn(param_1, 10);
            break;
        case 11:
            easings::ExpoOut(param_1, 10);
            break;
        case 12:
            easings::ExpoInOut(param_1, 10);
            break;
        case 13:
            easings::CircularIn(param_1);
            break;
        case 14:
            easings::CircularOut(param_1);
            break;
        case 15:
            easings::CircularInOut(param_1);
            break;
        case 16:
            easings::OvershootIn(param_1);
            break;
        case 17:
            easings::OvershootOut(param_1);
            break;
        case 18:
            easings::OvershootInOut(param_1);
            break;
        case 19:
            easings::ElasticIn(param_1);
            break;
        case 20:
            easings::ElasticOut(param_1);
            break;
        case 21:
            easings::ElasticInOut(param_1);
            break;
        case 22:
            param_2->BounceIn(param_1);
            break;
        case 23:
            param_2->BounceOut(param_1);
            break;
        case 24:
            param_2->BounceInOut(param_1);
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/Easings.h", 388,
                (char*)0);
        }
    }

    // 0x1008f5bd0, 288 bytes, inline, placed by debug map only (low confidence)
    // LoopEasing(float, EasingLoopMode)
    float LoopEasing(float param_1, undefined4 param_2) {
        float fVar1;
        float fVar2;
        float local_14;
        float local_10;
        float local_c;

        local_c = param_1;
        switch (param_2) {
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
            fVar1 = (float)modf(param_1 + param_1, &local_10);
            fVar1 = (float)fabs(fVar1);
            if ((int)local_10 % 2 != 1) {
                return fVar1;
            }
            fVar2 = 1.0;
            break;
        case 3:
            fVar1 = (float)modf(param_1, &local_10);
            fVar1 = (float)fabs(fVar1);
            return fVar1;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/Easings.h", 347,
                (char*)0);
        }
        return fVar2 - fVar1;
    }

    // 0x1008f6190, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int> operator+<int>(Vector2T<int> const&, Vector2T<int> const&)
    /* Vector2T<int> TEMPNAMEPLACEHOLDERVALUE(Vector2T<int> const&,
   Vector2T<int> const&) */

    undefined8 operator+(Vector2T* param_1, Vector2T* param_2) {
        undefined8 uVar1;
        undefined1 local_10[8];

        new (local_10) oldscape::sidebars::SideBarData(*(int*)param_2 + *(int*)param_1,
                                                       *(int*)(param_2 + 4) + *(int*)(param_1 + 4));
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

    // 0x1008f61c0, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int> operator-<int>(Vector2T<int> const&, Vector2T<int> const&)
    /* Vector2T<int> TEMPNAMEPLACEHOLDERVALUE(Vector2T<int> const&,
   Vector2T<int> const&) */

    undefined8 operator-(Vector2T* param_1, Vector2T* param_2) {
        undefined8 uVar1;
        undefined1 local_10[8];

        new (local_10) oldscape::sidebars::SideBarData(*(int*)param_1 - *(int*)param_2,
                                                       *(int*)(param_1 + 4) - *(int*)(param_2 + 4));
        uVar1._0_4_ = local_10._0_4_;
        uVar1._4_4_ = local_10._4_4_;
        return uVar1;
    }

    // 0x1008f63e0, 32 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<float>(Vector2T<float> const&, Vector2T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector2T<float> const&,
   Vector2T<float> const&) */

    bool operator==(Vector2T* param_1, Vector2T* param_2) {
        return *(float*)(param_1 + 4) == *(float*)(param_2 + 4) && *(float*)param_1 == *(float*)param_2;
    }

    // 0x1008f64a0, 288 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> CubicBezier<float>(Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&, float)
    void CubicBezier<float>(Vector2T* param_1, Vector2T* param_2, Vector2T* param_3, Vector2T* param_4, float param_5) {
        undefined8 local_68;
        undefined8 local_60;
        undefined8 local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        float local_34;
        float local_30;

        if ((0.0 <= param_5) && (param_5 <= 1.0)) {
            local_34 = 1.0 - param_5;
            local_30 = local_34 * local_34;
            local_58 = operator*(local_30 * local_34, param_1);
            local_50 = operator*(param_5 * 3.0 * local_30, param_2);
            local_60 = operator+((Vector2T*)&local_58, (Vector2T*)&local_50);
            local_30 = param_5 * param_5;
            local_48 = operator*(local_30 * 3.0 * local_34, param_3);
            local_68 = operator+((Vector2T*)&local_60, (Vector2T*)&local_48);
            local_40 = operator*(local_30 * param_5, param_4);
            operator+((Vector2T*)&local_68, (Vector2T*)&local_40);
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(t >= 0.f) && (t <= 1.f)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/BezierCurve.h", 47,
                  (char*)0);
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1008f6060, 224 bytes, inline, placed by debug map only (low confidence)
    // GUIAnimationRGB::EvalDelta(unsigned int, unsigned int) const
    uint GUIAnimationRGB::EvalDelta(uint param_1, uint param_2) {
        int iVar1;
        int iVar2;
        int local_3c[3];

        local_3c[0] = (int)field_0 + ((param_2 >> 16 & 255) - (param_1 >> 16 & 255));
        local_3c[1] = 0;
        local_3c[2] = 255;
        iVar1 = math::Clamp<int>(local_3c, local_3c + 1, local_3c + 2);
        local_3c[0] = ((param_2 >> 8 & 255) - (param_1 >> 8 & 255)) + (int)(short)field_2;
        local_3c[1] = 0;
        local_3c[2] = 255;
        iVar2 = math::Clamp<int>(local_3c, local_3c + 1, local_3c + 2);
        local_3c[0] = (int)field_4 + ((param_2 & 255) - (param_1 & 255));
        local_3c[1] = 0;
        local_3c[2] = 255;
        return math::Clamp<int>(local_3c, local_3c + 1, local_3c + 2) | iVar2 << 8 | iVar1 << 16;
    }

    // 0x1008f6140, 32 bytes, inline, placed by debug map only (low confidence)
    // GUIAnimationRGB::AsUint() const
    uint GUIAnimationRGB::AsUint() {
        return (uint)(byte)field_4 | (field_2 & 255) << 8 | (uint)(byte)field_0 << 16;
    }

    // 0x1008f6160, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GUIAnimationRGB::GUIAnimationRGB(unsigned int): jumps straight to the base-object constructor

} // namespace jag::graphics

// 0x1008f5fd0, 16 bytes, placed by debug map only (low confidence)
// modf(float, float*)
void modf(float param_1, float* param_2) {
    _modff();
}
