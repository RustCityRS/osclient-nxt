// libs/graphics/runetek7/gui/animations/GUIAnimationCurve.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GUIAnimationCurve.h"

namespace jag::graphics {
    // 0x1008f5890, 400 bytes, placed by class name and debug map
    // GUIAnimationCurve::Eval(float) const
    float GUIAnimationCurve::Eval(float param_1) {
        char cVar1;
        long lVar2;
        Vector2T* pVVar3;
        Vector2T* pVVar4;
        float fVar5;
        float extraout_XMM0_Db;
        float fVar6;

        cVar1 = empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_points.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationCurve.cpp",
                      38, (char*)0);
        }
        if ((param_1 < 0.0) || (1.0 < param_1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(interpolationT >= 0.f) && (interpolationT <= 1.f)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationCurve.cpp",
                      39, (char*)0);
        }
        lVar2 = size();
        if ((lVar2 == 1) || (param_1 == 1.0)) {
            lVar2 = back();
            fVar5 = *(float*)(lVar2 + 4);
        } else {
            pVVar3 = (Vector2T*)HeapBeginPtr();
            do {
                pVVar4 = pVVar3;
                pVVar3 = (Vector2T*)end();
                if (pVVar4 + 20 == pVVar3)
                    break;
                pVVar3 = pVVar4 + 20;
            } while (*(float*)(pVVar4 + 20) <= param_1 && param_1 != *(float*)(pVVar4 + 20));
            if (*(float*)(pVVar4 + 20) - *(float*)pVVar4 == 0.0) {
                /* WARNING: Subroutine does not return */
                LogAssert("(endPt->m_position.m_X - startPt->m_position.m_X) != 0.f",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "animations/GUIAnimationCurve.cpp",
                          65, (char*)0);
            }
            fVar5 = *(float*)pVVar4;
            fVar6 = (param_1 - fVar5) / (*(float*)(pVVar4 + 20) - fVar5);
            if (pVVar4[36] == (Vector2T)0) {
                fVar5 = (float)math::CubicBezierCalcInterpolator(fVar5, *(float*)(pVVar4 + 8), *(float*)(pVVar4 + 28),
                                                                 *(float*)(pVVar4 + 20), fVar6);
                math::CubicBezier<float>(pVVar4, pVVar4 + 8, pVVar4 + 28, pVVar4 + 20, fVar5);
                fVar5 = extraout_XMM0_Db;
            } else {
                fVar5 = math::Lerp<float, float>((float*)(pVVar4 + 4), (float*)(pVVar4 + 24), fVar6);
            }
        }
        return fVar5;
    }

    // 0x1008f6220, 336 bytes, placed by class name
    // GUIAnimationCurve::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    void GUIAnimationCurve::LoadFromPacket(PacketT* param_1) {
        bool bVar1;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        byte bVar2;
        bool bVar3;
        char cVar4;
        long lVar5;
        ulong uVar6;
        bool bVar7;
        ulong uVar8;
        undefined8 local_78;
        undefined8 local_70;
        byte local_68;
        undefined8 local_60;
        undefined8 local_58;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* local_50;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        bVar2 = param_1->g1();
        reserve((ulong)bVar2);
        lVar5 = capacity();
        if (lVar5 != 0) {
            uVar8 = 1;
            bVar7 = false;
            local_50 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1;
            do {
                this_00 = local_50;
                local_40 = (float)local_50->gFloat();
                local_3c = (float)this_00->gFloat();
                local_38 = (float)this_00->gFloat();
                local_34 = (float)this_00->gFloat();
                new (&local_60) math::Point<float>(local_40, local_3c);
                new (&local_58) math::Point<float>(local_38, local_34);
                bVar3 = math::operator==((Vector2T*)&local_60, (Vector2T*)&local_58);
                local_78 = local_60;
                local_70 = local_58;
                local_68 = bVar7 & bVar3;
                ((GUIAnimationCurve*)this)->push_back((Point*)&local_78);
                uVar6 = ((GUIAnimationCurve*)this)->capacity();
                bVar1 = uVar8 < uVar6;
                uVar8 = (ulong)((int)uVar8 + 1);
                bVar7 = bVar3;
            } while (bVar1);
        }
        cVar4 = ((GUIAnimationCurve*)this)->empty();
        if (cVar4 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_points.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationCurve.cpp",
                      33, (char*)0);
        }
    }

} // namespace jag::graphics
