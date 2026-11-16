// libs/graphics/runetek7/gui/animations/GUIAnimationCurve.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GUIAnimationCurve.h"

namespace jag::graphics {
    // 0x1008f5890
    float GUIAnimationCurve::Eval(float arg1) const {
        Vector2T<float>* pVVar3;
        Vector2T<float>* vector21;
        float fVar4;
        float extraout_XMM0_Db;
        float arg5;

        if (empty() != '\0') {
            LogAssert("!m_points.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationCurve.cpp",
                      38, nullptr);
        }
        if ((arg1 < 0.0) || (1.0 < arg1)) {
            LogAssert("(interpolationT >= 0.f) && (interpolationT <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationCurve.cpp",
                      39, nullptr);
        }
        long lVar2 = size();
        if ((lVar2 == 1) || (arg1 == 1.0)) {
            lVar2 = back();
            fVar4 = *(float*)(lVar2 + 4);
        } else {
            pVVar3 = (Vector2T<float>*)HeapBeginPtr();
            do {
                vector21 = pVVar3;
                pVVar3 = (Vector2T<float>*)end();
                if (vector21 + 20 == pVVar3)
                    break;
                pVVar3 = vector21 + 20;
            } while (*(float*)(vector21 + 20) <= arg1 && arg1 != *(float*)(vector21 + 20));
            if (*(float*)(vector21 + 20) - *(float*)vector21 == 0.0) {
                LogAssert("(endPt->m_position.m_X - startPt->m_position.m_X) != 0.f",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "animations/GUIAnimationCurve.cpp",
                          65, nullptr);
            }
            fVar4 = *(float*)vector21;
            arg5 = (arg1 - fVar4) / (*(float*)(vector21 + 20) - fVar4);
            if (vector21[36] == (Vector2T<float>)0) {
                fVar4 = (float)math::CubicBezierCalcInterpolator(
                    fVar4, *(float*)(vector21 + 8), *(float*)(vector21 + 28), *(float*)(vector21 + 20), arg5);
                math::CubicBezier<float>(*vector21, *(vector21 + 8), *(vector21 + 28), *(vector21 + 20), fVar4);
                fVar4 = extraout_XMM0_Db;
            } else {
                fVar4 = math::Lerp<float, float>(*((vector21 + 4)), *((vector21 + 24)), arg5);
            }
        }
        return fVar4;
    }

    // 0x1008f6220
    void GUIAnimationCurve::LoadFromPacket(PacketT<Array<unsigned char>>& arg1) {
        bool bVar1;
        bool bVar3;
        unsigned long uVar6;
        bool bVar7;
        unsigned long uVar8;
        uint64_t local_78;
        uint64_t local_70;
        uint8_t local_68;
        uint64_t local_60;
        uint64_t local_58;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        clear();
        uint8_t bVar2 = arg1.g1();
        reserve((unsigned long)bVar2);
        if (capacity() != 0) {
            uVar8 = 1;
            bVar7 = false;
            do {
                local_40 = (float)arg1.gFloat();
                local_3c = (float)arg1.gFloat();
                local_38 = (float)arg1.gFloat();
                local_34 = (float)arg1.gFloat();
                new (&local_60) math::Point(local_40, local_3c);
                new (&local_58) math::Point(local_38, local_34);
                bVar3 = local_60 == local_58;
                local_78 = local_60;
                local_70 = local_58;
                local_68 = bVar7 & bVar3;
                push_back(local_78);
                uVar6 = capacity();
                bVar1 = uVar8 < uVar6;
                uVar8 = (unsigned long)((int)uVar8 + 1);
                bVar7 = bVar3;
            } while (bVar1);
        }
        if (empty() != '\0') {
            LogAssert("!m_points.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationCurve.cpp",
                      33, nullptr);
        }
    }

} // namespace jag::graphics
