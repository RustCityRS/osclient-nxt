// libs/graphics/runetek7/gui/animations/GUIAnimation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GUIAnimation.h"

namespace jag::graphics {
    // 0x100066b70: the linker folded this into oldscape::widgets::Widget::GetTextColour() const, which has identical code
    GUIAnimation::GetTarget() const;

    // 0x1001117e0: the linker folded this into oldscape::jagex3::Js5::GetIndexCrc() const, which has identical code
    GUIAnimation::GetTargetMode() const;

    // 0x1008f4b20, 96 bytes, base-object constructor, placed by class name
    // GUIAnimation::GUIAnimation(PacketT<Array<unsigned char, eastl::allocator> >&, Array<GUIAnimationCurve, eastl::allocator> const&)
    void GUIAnimation::GUIAnimation(PacketT* param_1, Array* param_2) {
        field_0 = 0;
        field_16 = 8;
        field_20 = 3;
        eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                   GUIAnimationRGB>,
                      BucketAllocatorEASTL>::vector();
        LoadFromPacket(this, param_1, param_2);
    }

    // 0x1008f4b90, 656 bytes, placed by class name
    // GUIAnimation::LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&, Array<GUIAnimationCurve, eastl::allocator> const&)
    void GUIAnimation::LoadFromPacket(PacketT* param_1, Array* param_2) {
        uint uVar1;
        char cVar2;
        byte bVar3;
        byte bVar4;
        short sVar5;
        short sVar6;
        short sVar7;
        int iVar8;
        int iVar9;
        long lVar10;
        undefined1 local_40[12];
        undefined4 local_34;

        cVar2 = param_1->g1();
        if (cVar2 == '\x02') {
            iVar8 = param_1->g4();
            field_8 = iVar8;
            cVar2 = param_1->g1();
            field_12 = (uint)(cVar2 == '\x01');
        } else {
            if (cVar2 != '\x01') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/gui/animations/GUIAnimation.cpp",
                                61, (char*)0);
            }
            iVar8 = param_1->g4s();
            iVar9 = param_2->end();
            if (iVar9 <= iVar8) {
                /* WARNING: Subroutine does not return */
                LogAssert("curvePackID < (int)animationCurves.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "animations/GUIAnimation.cpp",
                          50, (char*)0);
            }
            lVar10 = Array<GUIAnimationCurve, eastl::allocator>::operator[](
                (Array<GUIAnimationCurve, eastl::allocator>*)param_2, (long)iVar8);
            field_0 = lVar10;
        }
        bVar3 = param_1->g1();
        bVar4 = param_1->g1();
        sVar5 = param_1->g2();
        if (7 < bVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("target < (uint8)GUIAnimationTarget::_COUNT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      69, (char*)0);
        }
        if (2 < bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("targetMode < (uint8)GUIAnimationTargetMode::_COUNT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      70, (char*)0);
        }
        field_16 = (uint)bVar3;
        field_20 = (uint)bVar4;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if (sVar5 != 0) {
            do {
                uVar1 = field_16;
                if ((uVar1 == 0) || (uVar1 == 3)) {
                    iVar8 = param_1->g4s();
                    iVar9 = param_1->g4s();
                    if (field_20 == 2) {
                        new (local_40) math::Point<float>((float)iVar8 * 0.001, (float)iVar9 * 0.001);
                        AddOutputImpl<math::Vector2T<float>>((Vector2T*)this);
                    } else {
                        new (local_40) oldscape::sidebars::SideBarData(iVar8, iVar9);
                        AddOutputImpl<math::Vector2T<int>>((Vector2T*)this);
                    }
                } else if (uVar1 == 6) {
                    local_34 = param_1->g4s();
                    sVar6 = param_1->g4s();
                    sVar7 = param_1->g4s();
                    new (local_40) GUIAnimationRGB((int)(short)local_34, (int)sVar6, (int)sVar7);
                    AddOutputImpl<GUIAnimationRGB>((GUIAnimationRGB*)this);
                } else {
                    local_40._0_4_ = param_1->g4s();
                    if (field_20 == 2) {
                        local_40._8_4_ = (float)(int)local_40._0_4_ * 0.001;
                        AddOutputImpl<float>((float*)this);
                    } else {
                        AddOutputImpl<int&>((int*)this);
                    }
                }
                sVar5 = sVar5 + -1;
            } while (sVar5 != 0);
        }
    }

    // 0x1008f4e30, 16 bytes, complete-object constructor, placed by class name
    // GUIAnimation::GUIAnimation(PacketT<Array<unsigned char, eastl::allocator> >&, Array<GUIAnimationCurve, eastl::allocator> const&): jumps straight to the base-object constructor

    // 0x1008f4e40, 32 bytes, base-object constructor, placed by class name
    // GUIAnimation::GUIAnimation(GUIAnimationCurve const&, GUIAnimationTarget, GUIAnimationTargetMode)
    void GUIAnimation::GUIAnimation(long param_1, uint param_3, uint param_4) {
        field_0 = param_1;
        field_16 = param_3;
        field_20 = param_4;
        eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                   GUIAnimationRGB>,
                      BucketAllocatorEASTL>::vector();
    }

    // 0x1008f4e60, 16 bytes, complete-object constructor, placed by class name
    // GUIAnimation::GUIAnimation(GUIAnimationCurve const&, GUIAnimationTarget, GUIAnimationTargetMode): jumps straight to the base-object constructor

    // 0x1008f4e70, 48 bytes, base-object constructor, placed by class name
    // GUIAnimation::GUIAnimation(math::EasingType, bool, GUIAnimationTarget, GUIAnimationTargetMode)
    void GUIAnimation::GUIAnimation(int param_2, uint param_3, uint param_4, uint param_5) {
        field_0 = 0;
        field_8 = param_2;
        field_12 = param_3;
        field_16 = param_4;
        field_20 = param_5;
        eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                                   GUIAnimationRGB>,
                      BucketAllocatorEASTL>::vector();
    }

    // 0x1008f4ea0, 16 bytes, complete-object constructor, placed by class name
    // GUIAnimation::GUIAnimation(math::EasingType, bool, GUIAnimationTarget, GUIAnimationTargetMode): jumps straight to the base-object constructor

    // 0x1008f4eb0, 96 bytes, placed by class name
    // GUIAnimation::AddOutput(int)
    void GUIAnimation::AddOutput(int param_1) {
        undefined4 in_EAX;
        undefined8 in_R8;
        undefined8 in_R9;

        if ((7 < field_16) || ((182U >> (field_16 & 31) & 1) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_target == GUIAnimationTarget::POSITION_X) || (m_target == GUIAnimationTarget::POSITION_Y) || "
                      "(m_target == GUIAnimationTarget::SIZE_X) || (m_target == GUIAnimationTarget::SIZE_Y) || "
                      "(m_target == GUIAnimationTarget::ALPHA)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      30, (char*)0, in_R8, in_R9, CONCAT44(param_1, in_EAX));
        }
        AddOutputImpl<int&>((int*)this);
    }

    // 0x1008f4fe0, 96 bytes, placed by class name
    // GUIAnimation::AddOutput(float)
    void GUIAnimation::AddOutput(float param_1) {
        undefined4 in_EAX;
        undefined8 in_R8;
        undefined8 in_R9;

        if ((7 < field_16) || ((134U >> (field_16 & 31) & 1) == 0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("(m_target == GUIAnimationTarget::SIZE_X) || (m_target == GUIAnimationTarget::SIZE_Y) || "
                      "(m_target == GUIAnimationTarget::ALPHA)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      36, (char*)0, in_R8, in_R9, CONCAT44(param_1, in_EAX));
        }
        AddOutputImpl<float&>((float*)this);
    }

    // 0x1008f54d0, 896 bytes, placed by class name
    // GUIAnimation::Evaluate(float) const
    GUIAnimation* GUIAnimation::Evaluate(float param_1) {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        undefined4 uVar1;
        undefined8 uVar2;
        long lVar4;
        long* plVar5;
        undefined8* puVar6;
        float* pfVar7;
        ulong uVar8;
        ulong uVar9;
        ulong uVar10;
        undefined8* in_RSI;
        undefined1 auVar11[12];
        float local_34;
        float local_30;
        float local_2c;

        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(in_RSI + 3);
        local_2c = param_1;
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_00) != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_outputs.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimation.cpp",
                      123, (char*)0);
        }
        lVar4 = this_00->size();
        if (lVar4 == 1) {
        LAB_1008f5526:
            plVar5 = (long*)this_00->back();
            field_0 = *plVar5;
            field_8 = (int)plVar5[1];
            puVar6 = (undefined8*)this_00->back();
            uVar2 = *puVar6;
            field_12 = (int)uVar2;
            field_16 = (int)((ulong)uVar2 >> 32);
            field_20 = *(uint*)(puVar6 + 1);
            field_24 = 0.0;
        } else {
            if ((GUIAnimationCurve*)*in_RSI == (GUIAnimationCurve*)0) {
                uVar1 = *(undefined4*)(in_RSI + 1);
                math::LoopEasing(local_2c, *(undefined4*)((long)in_RSI + 12));
                local_30 = (float)math::EvalEasing(uVar1);
            } else {
                local_30 = (float)(*in_RSI)->Eval(local_2c);
            }
            if (0.0 <= local_30) {
                local_2c = local_30;
                uVar8 = this_00->size();
                if (local_2c <= (float)uVar8) {
                    local_2c = local_30;
                    uVar8 = this_00->size();
                    if ((float)uVar8 == local_2c)
                        goto LAB_1008f5526;
                    local_2c = local_30;
                    uVar8 = this_00->size();
                    local_2c = (float)modf(((float)uVar8 + -1.0) * local_2c, &local_34);
                    uVar10 = (long)(local_34 - 9.223372e+18) & (long)local_34 >> 63 | (long)local_34;
                    uVar8 = uVar10 + 1;
                    uVar9 = this_00->size();
                    if (uVar8 != uVar9) {
                        plVar5 = (long*)
                            eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                       math::Vector2T<int>, GUIAnimationRGB>,
                                          BucketAllocatorEASTL>::
                            operator[](
                                (vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                     math::Vector2T<int>, GUIAnimationRGB>,
                                        BucketAllocatorEASTL>*)this_00,
                                uVar10);
                        field_0 = *plVar5;
                        field_8 = (int)plVar5[1];
                        puVar6 = (undefined8*)
                            eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                       math::Vector2T<int>, GUIAnimationRGB>,
                                          BucketAllocatorEASTL>::
                            operator[](
                                (vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                     math::Vector2T<int>, GUIAnimationRGB>,
                                        BucketAllocatorEASTL>*)this_00,
                                uVar8);
                        uVar2 = *puVar6;
                        field_12 = (int)uVar2;
                        field_16 = (int)((ulong)uVar2 >> 32);
                        field_20 = *(uint*)(puVar6 + 1);
                        goto LAB_1008f56d4;
                    }
                    local_2c = local_30;
                    plVar5 = (long*)this_00->back();
                    field_0 = *plVar5;
                    field_8 = (int)plVar5[1];
                    if (local_2c <= 1.0) {
                        puVar6 = (undefined8*)this_00->back();
                        uVar2 = *puVar6;
                        field_12 = (int)uVar2;
                        field_16 = (int)((ulong)uVar2 >> 32);
                        field_20 = *(uint*)(puVar6 + 1);
                        field_24 = 1.0;
                        return this;
                    }
                } else {
                    local_34 = 2.0;
                    pfVar7 = std::min<float>(&local_30, &local_34);
                    local_30 = *pfVar7;
                    plVar5 = (long*)this_00->back();
                    field_0 = *plVar5;
                    field_8 = (int)plVar5[1];
                }
                this_00->back();
                lVar4 = this_00->size();
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this_00,
                           lVar4 - 2);
                auVar11 = GenerateNextOutputInSequence();
                field_12 = auVar11._0_4_;
                field_16 = auVar11._4_4_;
                field_20 = auVar11._8_4_;
                local_2c = local_30 + -1.0;
            } else {
                local_34 = -1.0;
                pfVar7 = std::max<float>(&local_30, &local_34);
                local_30 = *pfVar7;
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this_00,
                           0);
                eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                           math::Vector2T<int>, GUIAnimationRGB>,
                              BucketAllocatorEASTL>::
                operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                math::Vector2T<int>, GUIAnimationRGB>,
                                   BucketAllocatorEASTL>*)this_00,
                           1);
                auVar11 = GenerateNextOutputInSequence();
                field_0 = auVar11._0_8_;
                field_8 = auVar11._8_4_;
                puVar6 = (undefined8*)
                    eastl::vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                               math::Vector2T<int>, GUIAnimationRGB>,
                                  BucketAllocatorEASTL>::
                    operator[]((vector<std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                    math::Vector2T<int>, GUIAnimationRGB>,
                                       BucketAllocatorEASTL>*)this_00,
                               0);
                field_20 = *(uint*)(puVar6 + 1);
                uVar2 = *puVar6;
                field_12 = (int)uVar2;
                field_16 = (int)((ulong)uVar2 >> 32);
                local_2c = local_30 + 1.0;
            }
        LAB_1008f56d4:
            field_24 = local_2c;
        }
        return this;
    }

    // 0x1008f5d00, 640 bytes, placed by class name
    // GUIAnimation::GenerateNextOutputInSequence(std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>, std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>) const
    /* GUIAnimation::GenerateNextOutputInSequence(std::variant<unsigned char, unsigned
   int, int, float, math::Vector2T<float>, math::Vector2T<int>,
   GUIAnimationRGB>, std::variant<unsigned char, unsigned int, int, float,
   math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>) const */

    undefined1[16] GUIAnimation::GenerateNextOutputInSequence(undefined8 param_1, undefined8 param_2,
                                                              undefined4 param_3, undefined8 param_4,
                                                              undefined4 param_5) {
        float fVar1;
        byte bVar2;
        undefined2 uVar3;
        undefined2 uVar4;
        undefined2 uVar6;
        undefined2 uVar7;
        undefined4 uVar9;
        int iVar10;
        uint uVar11;
        uint uVar12;
        undefined8 uVar13;
        byte* pbVar14;
        int* piVar15;
        float* pfVar16;
        Vector2T* pVVar17;
        GUIAnimationRGB* pGVar18;
        undefined1 auVar19[16];
        undefined8 local_68;
        undefined4 local_60;
        undefined8 local_58;
        GUIAnimationRGB local_50;
        undefined1 local_40[8];
        GUIAnimationRGB local_38;
        undefined1 local_28[8];
        undefined6 local_20;
        undefined2 uStack_1a;

        local_68 = param_4;
        local_60 = param_5;
        local_38._0_8_ = param_2;
        local_38._8_4_ = param_3;
        uVar13 = ((local_40 + 8))->index();
        switch (uVar13) {
        case 0:
            pbVar14 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)&local_68);
            bVar2 = *pbVar14;
            pbVar14 = std::get<unsigned char, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)(local_40 + 8));
            local_20._0_4_ = (uint)*pbVar14 * 2 - (uint)bVar2;
            local_28 = (undefined1[8])((ulong)(uint)local_28._4_4_ << 32);
            local_40._0_4_ = 255;
            iVar10 = math::Clamp<int>((int*)&local_20, (int*)local_28, (int*)local_40);
            local_58 = CONCAT71(local_58._1_7_, (char)iVar10);
            std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                         GUIAnimationRGB>::variant<unsigned char, 0, 0, 0, unsigned char, 0ul, 0>((uchar*)&local_50);
            break;
        default:
            uVar13 = logger::default_logger();
            logger::Logger::Log(uVar13, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/gui/animations/GUIAnimation.cpp",
                                231, "Cannot generate next sequence output - unknown types. Returning current value.");
            local_50._8_4_ = local_38._8_4_;
            local_50.field_0 = local_38.field_0;
            local_50.field_2 = local_38.field_2;
            local_50.field_4 = local_38.field_4;
            local_50._6_2_ = local_38._6_2_;
            break;
        case 2:
            piVar15 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                               GUIAnimationRGB>((variant*)&local_68);
            iVar10 = *piVar15;
            piVar15 = std::get<int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                               GUIAnimationRGB>((variant*)(local_40 + 8));
            local_20._0_4_ = *piVar15 * 2 - iVar10;
            std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                         GUIAnimationRGB>::variant<int, 0, 0, 0, int, 2ul, 0>((int*)&local_50);
            break;
        case 3:
            pfVar16 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)&local_68);
            fVar1 = *pfVar16;
            pfVar16 = std::get<float, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)(local_40 + 8));
            local_20._0_4_ = (*pfVar16 + *pfVar16) - fVar1;
            std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                         GUIAnimationRGB>::variant<float, 0, 0, 0, float, 3ul, 0>((float*)&local_50);
            break;
        case 4:
            pVVar17 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)&local_68);
            _local_20 = *(undefined8*)pVVar17;
            pVVar17 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)(local_40 + 8));
            local_28 = *(undefined1(*)[8])pVVar17;
            local_58 = math::operator-((Vector2T*)local_28, (Vector2T*)&local_20);
            local_40 = (undefined1[8])math::operator+((Vector2T*)local_28, (Vector2T*)&local_58);
            std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                         GUIAnimationRGB>::variant<math::Vector2T<float>, 0, 0, 0, math::Vector2T<float>, 4ul,
                                                   0>((Vector2T*)&local_50);
            break;
        case 5:
            pVVar17 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)&local_68);
            _local_20 = *(undefined8*)pVVar17;
            pVVar17 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)(local_40 + 8));
            local_28 = *(undefined1(*)[8])pVVar17;
            local_58 = math::operator-((Vector2T*)local_28, (Vector2T*)&local_20);
            local_40 = (undefined1[8])math::operator+((Vector2T*)local_28, (Vector2T*)&local_58);
            std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                         GUIAnimationRGB>::variant<math::Vector2T<int>, 0, 0, 0, math::Vector2T<int>, 5ul,
                                                   0>((Vector2T*)&local_50);
            break;
        case 6:
            pGVar18 = std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)&local_68);
            uVar9 = stack0xffffffffffffffe4;
            uVar3 = pGVar18->field_0;
            uVar4 = pGVar18->field_2;
            local_20._4_2_ = pGVar18->field_4;
            local_20._2_2_ = uVar4;
            local_20._0_2_ = uVar3;
            uStack_1a = SUB42(uVar9, 2);
            pGVar18 = std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>((variant*)(local_40 + 8));
            uVar6 = pGVar18->field_0;
            uVar7 = pGVar18->field_2;
            local_28._4_2_ = pGVar18->field_4;
            local_28._2_2_ = uVar7;
            local_28._0_2_ = uVar6;
            uVar11 = local_20.AsUint();
            uVar12 = local_28->AsUint();
            uVar11 = local_28->EvalDelta(uVar11, uVar12);
            new (local_40) GUIAnimationRGB(uVar11);
            std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                         GUIAnimationRGB>::variant<GUIAnimationRGB, 0, 0, 0, GUIAnimationRGB, 6ul, 0>(&local_50);
        }
        auVar19._8_4_ = local_50._8_4_;
        auVar19._0_2_ = local_50.field_0;
        auVar19._2_2_ = local_50.field_2;
        auVar19._4_2_ = local_50.field_4;
        auVar19._6_2_ = local_50._6_2_;
        auVar19._12_4_ = 0;
        return auVar19;
    }

} // namespace jag::graphics
