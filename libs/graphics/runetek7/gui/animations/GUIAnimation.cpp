// libs/graphics/runetek7/gui/animations/GUIAnimation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GUIAnimation.h"

namespace jag::graphics {
    // 0x100066b70: GUIAnimation::GetTarget() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1001117e0: GUIAnimation::GetTargetMode() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x1008f4b20
    GUIAnimation::GUIAnimation(PacketT<Array<unsigned char>>& arg1, const Array<GUIAnimationCurve>& guiAnimationCurves)
        : field_0(nullptr), m_target(8), m_targetMode(3) {
        LoadFromPacket(arg1, guiAnimationCurves);
    }

    // 0x1008f4b90
    void GUIAnimation::LoadFromPacket(PacketT<Array<unsigned char>>& arg1,
                                      const Array<GUIAnimationCurve>& guiAnimationCurves) {
        unsigned int uVar1;
        short arg2;
        short arg3;
        int iVar6;
        int iVar7;
        uint8_t local_40[8];
        float local_38;
        uint32_t local_34;

        char cVar2 = arg1.g1();
        if (cVar2 == '\x02') {
            field_8 = arg1.g4();
            cVar2 = arg1.g1();
            field_12 = (unsigned int)(cVar2 == '\x01');
        } else {
            if (cVar2 != '\x01') {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/gui/animations/GUIAnimation.cpp",
                                61, nullptr);
            }
            iVar6 = arg1.g4s();
            iVar7 = guiAnimationCurves.end();
            if (iVar7 <= iVar6) {
                LogAssert("curvePackID < (int)animationCurves.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "animations/GUIAnimation.cpp",
                          50, nullptr);
            }
            field_0 = &guiAnimationCurves[(long)iVar6];
        }
        uint8_t bVar3 = arg1.g1();
        uint8_t bVar4 = arg1.g1();
        short sVar5 = arg1.g2();
        if (7 < bVar3) {
            LogAssert("target < (uint8)GUIAnimationTarget::_COUNT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      69, nullptr);
        }
        if (2 < bVar4) {
            LogAssert("targetMode < (uint8)GUIAnimationTargetMode::_COUNT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      70, nullptr);
        }
        m_target = (unsigned int)bVar3;
        m_targetMode = (unsigned int)bVar4;
        field_24.clear();
        if (sVar5 != 0) {
            do {
                uVar1 = m_target;
                if ((uVar1 == 0) || (uVar1 == 3)) {
                    iVar6 = arg1.g4s();
                    iVar7 = arg1.g4s();
                    if (m_targetMode == 2) {
                        new (local_40) math::Point((float)iVar6 * 0.001, (float)iVar7 * 0.001);
                        AddOutputImpl<math::Vector2T<float>>(this, (Vector2T<float>*)local_40);
                    } else {
                        new (local_40) oldscape::sidebars::SideBarData(iVar6, iVar7);
                        AddOutputImpl<math::Vector2T<int>>(this, (Vector2T<int>*)local_40);
                    }
                } else if (uVar1 == 6) {
                    local_34 = arg1.g4s();
                    arg2 = arg1.g4s();
                    arg3 = arg1.g4s();
                    new (local_40) GUIAnimationRGB((short)local_34, arg2, arg3);
                    AddOutputImpl<GUIAnimationRGB>(this, (GUIAnimationRGB*)local_40);
                } else {
                    local_40._0_4_ = arg1.g4s();
                    if (m_targetMode == 2) {
                        local_38 = (float)(int)local_40._0_4_ * 0.001;
                        AddOutputImpl<float>(this, &local_38);
                    } else {
                        AddOutputImpl<int&>(this, (int*)local_40);
                    }
                }
                sVar5 = sVar5 - 1;
            } while (sVar5 != 0);
        }
    }

    // 0x1008f4e40
    GUIAnimation::GUIAnimation(const GUIAnimationCurve& guiAnimationCurve, GUIAnimationTarget guiAnimationTarget,
                               GUIAnimationTargetMode guiAnimationTargetMode)
        : field_0(guiAnimationCurve), m_target(guiAnimationTarget), m_targetMode(guiAnimationTargetMode) {}

    // 0x1008f4e70
    GUIAnimation::GUIAnimation(math::EasingType easingType, bool arg2, GUIAnimationTarget guiAnimationTarget,
                               GUIAnimationTargetMode guiAnimationTargetMode)
        : field_0(nullptr), field_8(easingType) {
        uint32_t in_register_00000011;

        field_12 = (((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2);
        m_target = guiAnimationTarget;
        m_targetMode = guiAnimationTargetMode;
        new (&field_24) eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                   math::Vector2T<int>, GUIAnimationRGB>,
                                      BucketAllocatorEASTL>();
    }

    // 0x1008f4eb0
    void GUIAnimation::AddOutput(int arg1) {
        uint32_t in_EAX;
        uint64_t in_R8;
        uint64_t in_R9;
        int aiStackY_218[128];

        if ((7 < m_target) || ((182U >> (m_target & 31) & 1) == 0)) {
            LogAssert("(m_target == GUIAnimationTarget::POSITION_X) || (m_target == GUIAnimationTarget::POSITION_Y) || "
                      "(m_target == GUIAnimationTarget::SIZE_X) || (m_target == GUIAnimationTarget::SIZE_Y) || "
                      "(m_target == GUIAnimationTarget::ALPHA)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      30, nullptr, in_R8, in_R9, (((uint64_t)arg1 << 32) | (uint32_t)in_EAX));
        }
        AddOutputImpl<int&>(this, aiStackY_218 + 129);
    }

    // 0x1008f4fe0
    void GUIAnimation::AddOutput(float arg1) {
        uint32_t in_EAX;
        uint64_t in_R8;
        uint64_t in_R9;
        float afStackY_218[128];

        if ((7 < m_target) || ((134U >> (m_target & 31) & 1) == 0)) {
            LogAssert("(m_target == GUIAnimationTarget::SIZE_X) || (m_target == GUIAnimationTarget::SIZE_Y) || "
                      "(m_target == GUIAnimationTarget::ALPHA)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      36, nullptr, in_R8, in_R9, (((uint64_t)arg1 << 32) | (uint32_t)in_EAX));
        }
        AddOutputImpl<float&>(this, afStackY_218 + 129);
    }

    // 0x1008f54d0
    GUIAnimation* GUIAnimation::Evaluate(float arg1) const {
        EasingType easingType;
        unsigned int uVar1;
        uint64_t uVar2;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            pvVar3;
        uint64_t* puVar6;
        float* pfVar7;
        unsigned long uVar8;
        unsigned long uVar9;
        unsigned long arg1_00;
        uint64_t* in_RSI;
        GUIAnimation* this_00;
        float arg2;
        uint8_t auVar10[12];
        float local_34;
        float local_30;

        GUIAnimation* this_01 = (GUIAnimation*)(in_RSI + 3);
        float local_2c = arg1;
        if (this_01->empty() != '\0') {
            LogAssert("!m_outputs.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      123, nullptr);
        }
        long lVar5 = this_01->size();
        if (lVar5 == 1) {
        LAB_1008f5526:
            puVar6 = (uint64_t*)this_01->back();
            field_0 = (GUIAnimationCurve*)*puVar6;
            field_8 = *(EasingType*)(puVar6 + 1);
            puVar6 = (uint64_t*)this_01->back();
            uVar2 = *puVar6;
            field_12 = (int)uVar2;
            m_target = (int)((unsigned long)uVar2 >> 32);
            m_targetMode = *(unsigned int*)(puVar6 + 1);
            field_24 = 0.0;
        } else {
            if ((GUIAnimationCurve*)*in_RSI == nullptr) {
                easingType = *(EasingType*)(in_RSI + 1);
                arg2 = (float)math::LoopEasing(local_2c, *(EasingLoopMode*)((long)in_RSI + 12));
                local_30 = (float)math::EvalEasing(easingType, arg2);
            } else {
                local_30 = (float)(*in_RSI)->Eval(local_2c);
            }
            if (0.0 <= local_30) {
                local_2c = local_30;
                uVar8 = this_01->size();
                if (local_2c <= (float)uVar8) {
                    local_2c = local_30;
                    uVar8 = this_01->size();
                    if ((float)uVar8 == local_2c)
                        goto LAB_1008f5526;
                    local_2c = local_30;
                    uVar8 = this_01->size();
                    local_2c = (float)modf(((float)uVar8 - 1.0) * local_2c, &local_34);
                    arg1_00 = (long)(local_34 - 9.223372e+18) & (long)local_34 >> 63 | (long)local_34;
                    uVar8 = arg1_00 + 1;
                    uVar9 = this_01->size();
                    if (uVar8 != uVar9) {
                        puVar6 = (uint64_t*)(*this_01)[arg1_00];
                        field_0 = (GUIAnimationCurve*)*puVar6;
                        field_8 = *(EasingType*)(puVar6 + 1);
                        puVar6 = (uint64_t*)(*this_01)[uVar8];
                        uVar2 = *puVar6;
                        field_12 = (int)uVar2;
                        m_target = (int)((unsigned long)uVar2 >> 32);
                        m_targetMode = *(unsigned int*)(puVar6 + 1);
                        goto LAB_1008f56d4;
                    }
                    local_2c = local_30;
                    puVar6 = (uint64_t*)this_01->back();
                    field_0 = (GUIAnimationCurve*)*puVar6;
                    field_8 = *(EasingType*)(puVar6 + 1);
                    if (local_2c <= 1.0) {
                        puVar6 = (uint64_t*)this_01->back();
                        uVar2 = *puVar6;
                        field_12 = (int)uVar2;
                        m_target = (int)((unsigned long)uVar2 >> 32);
                        m_targetMode = *(unsigned int*)(puVar6 + 1);
                        field_24 = 1.0;
                        return this;
                    }
                } else {
                    local_34 = 2.0;
                    pfVar7 = std::min<float>(local_30, local_34);
                    local_30 = *pfVar7;
                    puVar6 = (uint64_t*)this_01->back();
                    field_0 = (GUIAnimationCurve*)*puVar6;
                    field_8 = *(EasingType*)(puVar6 + 1);
                }
                puVar6 = (uint64_t*)this_01->back();
                pvVar3 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)*puVar6;
                uVar1 = *(unsigned int*)(puVar6 + 1);
                lVar5 = this_01->size();
                (*this_01)[lVar5 - 2];
                auVar10 = GenerateNextOutputInSequence(
                    this_01, pvVar3,
                    (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                             GUIAnimationRGB>*)(unsigned long)uVar1);
                field_12 = auVar10._0_4_;
                m_target = auVar10._4_4_;
                m_targetMode = auVar10._8_4_;
                local_2c = local_30 - 1.0;
            } else {
                local_34 = -1.0;
                pfVar7 = std::max<float>(local_30, local_34);
                local_30 = *pfVar7;
                puVar6 = (uint64_t*)(*this_01)[0];
                pvVar3 = (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                  GUIAnimationRGB>*)*puVar6;
                uVar1 = *(unsigned int*)(puVar6 + 1);
                this_00 = this_01;
                (*this_01)[1];
                auVar10 = GenerateNextOutputInSequence(
                    this_00, pvVar3,
                    (variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                             GUIAnimationRGB>*)(unsigned long)uVar1);
                field_0 = (GUIAnimationCurve*)auVar10._0_8_;
                field_8 = auVar10._8_4_;
                puVar6 = (uint64_t*)(*this_01)[0];
                m_targetMode = *(unsigned int*)(puVar6 + 1);
                uVar2 = *puVar6;
                field_12 = (int)uVar2;
                m_target = (int)((unsigned long)uVar2 >> 32);
                local_2c = local_30 + 1.0;
            }
        LAB_1008f56d4:
            field_24 = local_2c;
        }
        return this;
    }

    // 0x1008f5d00
    uint8_t[16] GUIAnimation::GenerateNextOutputInSequence(
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>
            arg1,
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>
            arg2) const {
        float fVar1;
        uint8_t bVar2;
        uint16_t uVar3;
        uint16_t uVar4;
        uint16_t uVar6;
        uint16_t uVar7;
        uint32_t uVar9;
        int iVar10;
        unsigned int uVar11;
        unsigned int arg2_00;
        uint8_t* pbVar13;
        int* piVar14;
        float* pfVar15;
        Vector2T<float>* pVVar16;
        Vector2T<int>* pVVar17;
        GUIAnimationRGB* pGVar18;
        uint8_t auVar19[16];
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>
            local_68;
        uint64_t local_58;
        variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>*
            local_50;
        uint32_t local_48;
        uint8_t local_40[8];
        uint8_t local_28[8];
        uint64_t local_20;
        uint16_t uStack_1a;

        switch ((arg1).index()) {
        case 0:
            pbVar13 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(local_68);
            bVar2 = *pbVar13;
            pbVar13 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(arg1);
            local_20._0_4_ = (unsigned int)*pbVar13 * 2 - (unsigned int)bVar2;
            local_28 = (uint8_t[8])((unsigned long)(unsigned int)local_28._4_4_ << 32);
            local_40._0_4_ = 255;
            iVar10 = math::Clamp<int>(local_20, *local_28, *local_40);
            local_58 = (((uint64_t)local_58._1_7_ << 8) | (uint8_t)((char)iVar10));
            local_50.variant<unsigned char, 0, 0, 0, unsigned char, 0ul, 0>(local_58);
            break;
        default:
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      231, "Cannot generate next sequence output - unknown types. Returning current value.");
            local_48 = (uint32_t)arg2;
            local_50 = arg1;
            break;
        case 2:
            piVar14 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                               GUIAnimationRGB>(local_68);
            iVar10 = *piVar14;
            piVar14 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                               GUIAnimationRGB>(arg1);
            local_20._0_4_ = *piVar14 * 2 - iVar10;
            local_50.variant<int, 0, 0, 0, int, 2ul, 0>(local_20);
            break;
        case 3:
            pfVar15 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(local_68);
            fVar1 = *pfVar15;
            pfVar15 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(arg1);
            local_20._0_4_ = (*pfVar15 + *pfVar15) - fVar1;
            local_50.variant<float, 0, 0, 0, float, 3ul, 0>(local_20);
            break;
        case 4:
            pVVar16 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(local_68);
            _local_20 = *(uint64_t*)pVVar16;
            pVVar16 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(arg1);
            local_28 = *(uint8_t(*)[8])pVVar16;
            local_58 = *local_28 - local_20;
            local_40 = (uint8_t[8]) * local_28 + local_58;
            local_50.variant<math::Vector2T<float>, 0, 0, 0, math::Vector2T<float>, 4ul, 0>(*local_40);
            break;
        case 5:
            pVVar17 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(local_68);
            _local_20 = *(uint64_t*)pVVar17;
            pVVar17 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(arg1);
            local_28 = *(uint8_t(*)[8])pVVar17;
            local_58 = *local_28 - local_20;
            local_40 = (uint8_t[8]) * local_28 + local_58;
            local_50.variant<math::Vector2T<int>, 0, 0, 0, math::Vector2T<int>, 5ul, 0>(*local_40);
            break;
        case 6:
            pGVar18 = std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(local_68);
            uVar9 = stack0xffffffffffffffe4;
            uVar3 = pGVar18->field_0;
            uVar4 = pGVar18->field_2;
            local_20._4_2_ = pGVar18->field_4;
            local_20._2_2_ = uVar4;
            local_20._0_2_ = uVar3;
            uStack_1a = (uint16_t)(uVar9 >> 16);
            pGVar18 = std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(arg1);
            uVar6 = pGVar18->field_0;
            uVar7 = pGVar18->field_2;
            local_28._4_2_ = pGVar18->field_4;
            local_28._2_2_ = uVar7;
            local_28._0_2_ = uVar6;
            uVar11 = local_20.AsUint();
            arg2_00 = local_28->AsUint();
            uVar11 = local_28->EvalDelta(uVar11, arg2_00);
            new (local_40) GUIAnimationRGB(uVar11);
            local_50.variant<GUIAnimationRGB, 0, 0, 0, GUIAnimationRGB, 6ul, 0>(*local_40);
        }
        auVar19._8_4_ = local_48;
        auVar19._0_8_ = local_50;
        auVar19._12_4_ = 0;
        return auVar19;
    }

} // namespace jag::graphics
