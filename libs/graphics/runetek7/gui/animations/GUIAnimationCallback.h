// libs/graphics/runetek7/gui/animations/GUIAnimationCallback.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.ui

namespace jag::graphics {
    // 0x1006ccf20, 224 bytes, placed by debug map only (low confidence)
    // void DefaultAnimationAdvanceCallback<int, float>(std::variant<unsigned char*, int*>&, float, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&, GUIAnimationTargetMode)
    /* void DefaultAnimationAdvanceCallback<int, float>(std::variant<unsigned char*,
   int*>&, float, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
   math::Vector2T<int>, GUIAnimationRGB>*, std::variant<unsigned char, unsigned
   int, int, float, math::Vector2T<float>, math::Vector2T<int>,
   GUIAnimationRGB> const&, std::variant<unsigned char, unsigned int, int, float,
   math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&,
   GUIAnimationTargetMode) */

    void DefaultAnimationAdvanceCallback<int, float>(float param_2, variant* param_1, variant* param_3,
                                                     variant* param_4, variant* param_5, int param_6) {
        int* piVar1;
        int iVar2;
        float* pfVar3;
        int** ppiVar4;
        int* piVar5;
        float fVar6;
        float local_34;
        float local_30;
        float local_2c;

        local_2c = param_2;
        pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                          GUIAnimationRGB>(param_4);
        local_34 = *pfVar3;
        pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                          GUIAnimationRGB>(param_5);
        local_30 = *pfVar3;
        ppiVar4 = std::get<int*, unsigned char*, int*>(param_1);
        piVar1 = *ppiVar4;
        if (param_6 == 2) {
            piVar5 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>(param_3);
            iVar2 = *piVar5;
            fVar6 = math::Lerp<float, float>(&local_34, &local_30, local_2c);
            fVar6 = fVar6 * (float)iVar2;
        } else {
            if (param_6 == 1) {
                local_2c = math::Lerp<float, float>(&local_34, &local_30, local_2c);
                pfVar3 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                  math::Vector2T<int>, GUIAnimationRGB>(param_3);
                fVar6 = *pfVar3;
                *pfVar3 = local_2c;
                iVar2 = (int)(local_2c - fVar6) + *piVar1;
                goto LAB_1006ccfeb;
            }
            fVar6 = math::Lerp<float, float>(&local_34, &local_30, local_2c);
        }
        iVar2 = (int)fVar6;
    LAB_1006ccfeb:
        *piVar1 = iVar2;
    }

    // 0x1006cd000, 192 bytes, placed by debug map only (low confidence)
    // void DefaultAnimationAdvanceCallback<int, int>(std::variant<unsigned char*, int*>&, float, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&, GUIAnimationTargetMode)
    /* void DefaultAnimationAdvanceCallback<int, int>(std::variant<unsigned char*,
   int*>&, float, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
   math::Vector2T<int>, GUIAnimationRGB>*, std::variant<unsigned char, unsigned
   int, int, float, math::Vector2T<float>, math::Vector2T<int>,
   GUIAnimationRGB> const&, std::variant<unsigned char, unsigned int, int, float,
   math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB> const&,
   GUIAnimationTargetMode) */

    void DefaultAnimationAdvanceCallback<int, int>(float param_2, variant* param_1, variant* param_3, variant* param_4,
                                                   variant* param_5, int param_6) {
        int iVar1;
        int iVar2;
        int* piVar3;
        int** ppiVar4;
        int* piVar5;
        int local_34;
        int local_30;

        piVar3 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                          GUIAnimationRGB>(param_4);
        local_34 = *piVar3;
        piVar3 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                          GUIAnimationRGB>(param_5);
        local_30 = *piVar3;
        ppiVar4 = std::get<int*, unsigned char*, int*>(param_1);
        piVar3 = *ppiVar4;
        if (param_6 == 2) {
            piVar5 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>(param_3);
            iVar1 = *piVar5;
            iVar2 = math::Lerp<int, float>(&local_34, &local_30, param_2);
            iVar2 = iVar2 * iVar1;
        } else if (param_6 == 1) {
            iVar2 = math::Lerp<int, float>(&local_34, &local_30, param_2);
            piVar5 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                              GUIAnimationRGB>(param_3);
            iVar1 = *piVar5;
            *piVar5 = iVar2;
            iVar2 = (iVar2 - iVar1) + *piVar3;
        } else {
            iVar2 = math::Lerp<int, float>(&local_34, &local_30, param_2);
        }
        *piVar3 = iVar2;
    }

} // namespace jag::graphics
