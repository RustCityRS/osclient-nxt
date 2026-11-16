// libs/game/runetek5/camera/position/PositionEntity.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PositionEntity.h"

namespace jag::game {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    PositionEntity::GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);

    // 0x10036ce20: the linker folded this into eastl::optional<eastl::vector_set<unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<unsigned short, eastl::allocator> > >::operator bool() const, which has identical code
    PositionEntity::Ready() const;

    // 0x1004491e0: the linker folded this into math::Sphere2D::IsValid() const, which has identical code
    PositionEntity::CamLocked() const;

    // 0x100615fe0, 320 bytes, placed by class name and debug map
    // PositionEntity::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* PositionEntity::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void PositionEntity::ProcessServerUpdate(PacketT* param_1, function* param_2) {
        uint uVar1;
        byte bVar2;
        char cVar3;
        ushort uVar4;
        ulonglong uVar5;
        QuaternionT<float> local_70[16];
        Vector3T<float> local_60[16];
        shared_ptr local_50[2];

        bVar2 = param_1->g1();
        uVar4 = param_1->g2();
        field_32 = (uint)bVar2;
        field_36 = (uint)uVar4;
        std::function<shared_ptr<Entity>(CameraTrackableType, int)>::operator()(local_50, param_2, (uint)bVar2);
        weak_ptr<Entity>::operator=((weak_ptr<Entity>*)&field_16, local_50);
        local_50->~shared_ptr();
        math::Vector3T<float>::Vector3T(local_60, param_1, false);
        math::QuaternionT<float>::QuaternionT(local_70, param_1, false);
        cVar3 = param_1->g1();
        field_204 = cVar3 == '\x01';
        uVar4 = param_1->g2();
        field_208 = (uint)uVar4;
        uVar4 = param_1->g2();
        field_212 = (uint)uVar4;
        math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)local_50, (Vector3T*)local_60);
        uVar1 = field_212;
        uVar5 = FrameTime::GetCurrentTimeMS();
        (&field_48, (Vector3T*)local_50, (long)(int)uVar1, uVar5)->SetValue();
        new (local_50) math::QuaternionT<double>(local_70);
        uVar1 = field_212;
        uVar5 = FrameTime::GetCurrentTimeMS();
        (&field_112, (QuaternionT*)local_50, (long)(int)uVar1, uVar5)->SetValue();
        field_40 = true;
    }

    // 0x1006161a0, 96 bytes, placed by class name and debug map
    // PositionEntity::UpdatePositionEntity(std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* PositionEntity::UpdatePositionEntity(std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void PositionEntity::UpdatePositionEntity(function* param_1) {
        shared_ptr local_28;

        if ((field_40 != false) && (field_32 != 4294967295)) {
            std::function<shared_ptr<Entity>(CameraTrackableType, int)>::operator()(&local_28, param_1, field_32,
                                                                                    field_36);
            weak_ptr<Entity>::operator=((weak_ptr<Entity>*)&field_16, &local_28);
            local_28.~shared_ptr();
        }
    }

    // 0x100616200, 224 bytes, placed by class name and debug map
    // PositionEntity::GetOrientationOffset(math::QuaternionT<double>&, math::Point<int>&)
    void PositionEntity::GetOrientationOffset(QuaternionT* param_1, Point* param_2) {
        undefined1* this_00;
        int iVar1;
        uint uVar2;
        QuaternionT* pQVar3;
        vector* pvVar4;
        undefined4* puVar5;
        int* piVar6;
        Point<int> local_38[8];
        int local_30;
        undefined4 local_2c;

        pQVar3 = (QuaternionT*)(&field_112)->GetMaterial();
        math::QuaternionT<double>::operator=((QuaternionT<double>*)param_1, pQVar3);
        CameraHelpers::QuaternionToOldJagexAngles(&local_30, (int*)(type*)&local_2c, param_1);
        pvVar4 = param_2->SSOBeginPtr((type*)&local_2c);
        *(int*)pvVar4 = local_30;
        puVar5 = (undefined4*)param_2->y();
        *puVar5 = local_2c;
        if (field_192 != '\0') {
            pvVar4 = param_2->SSOBeginPtr((type*)&local_2c);
            iVar1 = *(int*)pvVar4;
            this_00 = &field_196;
            pvVar4 = this_00->SSOBeginPtr((type*)&local_2c);
            uVar2 = -(iVar1 - *(int*)pvVar4);
            if ((int)uVar2 < 0) {
                uVar2 = iVar1 - *(int*)pvVar4;
            }
            if (uVar2 < 3) {
                piVar6 = (int*)param_2->y();
                iVar1 = *piVar6;
                piVar6 = (int*)this_00->y();
                uVar2 = -(iVar1 - *piVar6);
                if ((int)uVar2 < 0) {
                    uVar2 = iVar1 - *piVar6;
                }
                if (uVar2 < 3) {
                    math::Point<int>::Point(local_38, (Point*)this_00);
                    math::Point<int>::operator=((Point<int>*)param_2, local_38);
                    return;
                }
            }
            field_192 = 0;
        }
    }

    // 0x1006162e0, 80 bytes, placed by class name and debug map
    // PositionEntity::SetOrientationOffset(math::QuaternionT<double> const&)
    void PositionEntity::SetOrientationOffset(QuaternionT* param_1) {
        uint uVar1;
        ulonglong uVar2;

        uVar1 = field_212;
        uVar2 = FrameTime::GetCurrentTimeMS();
        (&field_112, param_1, (long)(int)uVar1, uVar2)->SetValue();
        field_192 = 0;
    }

    // 0x100616330, 112 bytes, placed by class name and debug map
    // PositionEntity::SetOrientationOffset(math::QuaternionT<double> const&, int, int)
    void PositionEntity::SetOrientationOffset(QuaternionT* param_1, int param_2, int param_3) {
        uint uVar1;
        ulonglong uVar2;
        vector* pvVar3;
        int* piVar4;

        uVar1 = field_212;
        uVar2 = FrameTime::GetCurrentTimeMS();
        (&field_112, param_1, (long)(int)uVar1, uVar2)->SetValue();
        pvVar3 = (&field_196, (type*)param_1)->SSOBeginPtr();
        *(int*)pvVar3 = param_2;
        piVar4 = (int*)(&field_196)->y();
        *piVar4 = param_3;
        field_192 = 1;
    }

    // 0x1006163a0, 240 bytes, placed by class name and debug map
    // PositionEntity::SetPositionEntity(shared_ptr<Entity> const&, math::Vector3T<double> const&, math::QuaternionT<double> const&, bool, int, int)
    void PositionEntity::SetPositionEntity(shared_ptr* param_1, Vector3T* param_2, QuaternionT* param_3, bool param_4,
                                           int param_5, int param_6) {
        uint uVar1;
        long* plVar3;
        Entity* this_00;
        ulonglong uVar4;

        field_40 = true;
        weak_ptr<Entity>::operator=((weak_ptr<Entity>*)&field_16, param_1);
        plVar3 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        uVar1 = (**(code**)(*plVar3 + 232))(plVar3);
        field_36 = uVar1;
        plVar3 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        uVar1 = (**(code**)(*plVar3 + 224))(plVar3);
        field_32 = uVar1;
        field_192 = 0;
        field_204 = param_4;
        field_208 = param_5;
        field_212 = param_6;
        this_00 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        field_272 = this_00->GetHeightMapLevel();
        uVar1 = field_212;
        uVar4 = FrameTime::GetCurrentTimeMS();
        (&field_48, param_2, (long)(int)uVar1, uVar4)->SetValue();
        uVar1 = field_212;
        uVar4 = FrameTime::GetCurrentTimeMS();
        (&field_112, param_3, (long)(int)uVar1, uVar4)->SetValue();
    }

    // 0x100616490, 272 bytes, placed by class name and debug map
    // PositionEntity::SetPositionEntity(shared_ptr<Entity> const&, math::Vector3T<double> const&, math::QuaternionT<double> const&, bool, int, int, int, int)
    void PositionEntity::SetPositionEntity(shared_ptr* param_1, Vector3T* param_2, QuaternionT* param_3, bool param_4,
                                           int param_5, int param_6, int param_7, int param_8) {
        uint uVar1;
        long* plVar3;
        vector* pvVar4;
        int* piVar5;
        Entity* this_00;
        ulonglong uVar6;

        field_40 = true;
        weak_ptr<Entity>::operator=((weak_ptr<Entity>*)&field_16, param_1);
        plVar3 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        uVar1 = (**(code**)(*plVar3 + 232))(plVar3);
        field_36 = uVar1;
        plVar3 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        uVar1 = (**(code**)(*plVar3 + 224))(plVar3);
        field_32 = uVar1;
        pvVar4 = (&field_196, (type*)param_1)->SSOBeginPtr();
        *(int*)pvVar4 = param_7;
        piVar5 = (int*)(&field_196)->y();
        *piVar5 = param_8;
        field_192 = 1;
        field_204 = param_4;
        field_208 = param_5;
        field_212 = param_6;
        this_00 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        field_272 = this_00->GetHeightMapLevel();
        uVar1 = field_212;
        uVar6 = FrameTime::GetCurrentTimeMS();
        (&field_48, param_2, (long)(int)uVar1, uVar6)->SetValue();
        uVar1 = field_212;
        uVar6 = FrameTime::GetCurrentTimeMS();
        (&field_112, param_3, (long)(int)uVar1, uVar6)->SetValue();
    }

    // 0x1006165a0, 688 bytes, placed by class name and debug map
    // PositionEntity::GetPositionData(PositionData&, double)
    ulong PositionEntity::GetPositionData(PositionData* param_1, double param_2) {
        bool bVar2;
        undefined7 extraout_var;
        Entity* this_00;
        GraphNode* this_01;
        QuaternionT* pQVar3;
        vector* pvVar4;
        undefined8* puVar5;
        double* pdVar6;
        long* plVar7;
        type* ptVar8;
        game* pgVar9;
        double dVar10;
        undefined4 uVar11;
        undefined1 local_d0[24];
        game local_98;
        double local_78;
        double dStack_70;
        double local_68;
        double dStack_60;
        double local_58;
        undefined8 uStack_50;
        shared_ptr local_48;
        double local_38;

        local_38 = param_2;
        if ((*(code*)field_0[4])() == '\0') {
            return 0;
        }
        new ((local_d0 + 24)) math::QuaternionT<double>();
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar2 = shared_ptr::operator_cast_to_bool(&local_48);
        if (!bVar2)
            goto LAB_100616811;
        field_216 = local_38 == 1.0;
        if (field_204 == false) {
            pQVar3 = (QuaternionT*)(&field_112)->GetMaterial();
            math::QuaternionT<double>::operator=((QuaternionT<double>*)(local_d0 + 24), pQVar3);
        } else {
            this_00 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)&local_48);
            this_01 = (GraphNode*)this_00->GetNode();
            pQVar3 = (QuaternionT*)this_01->GetRotation();
            new (&local_98) math::QuaternionT<double>(pQVar3);
            ptVar8 = (type*)PTR_LOOK_100ee66b8;
            math::operator*((math*)local_d0, (Vector3T*)PTR_LOOK_100ee66b8, (QuaternionT*)&local_98);
            pvVar4 = local_d0->SSOBeginPtr(ptVar8);
            local_58 = *(double*)pvVar4;
            puVar5 = (undefined8*)local_d0->GetScreen();
            dVar10 = (double)_atan2(local_58, (int)*puVar5);
            ((local_d0 + 24))->FromAxisAngle(PTR_UP_100ee66b0, dVar10);
            pdVar6 = (double*)(&field_112)->GetMaterial();
            local_78 = *pdVar6;
            dStack_70 = pdVar6[1];
            local_68 = pdVar6[2];
            dStack_60 = pdVar6[3];
            math::QuaternionT<double>::operator*=((QuaternionT<double>*)(local_d0 + 24), (QuaternionT*)&local_78);
        }
        uVar11 = SUB84(local_38, 0);
        if (local_38 == 1.0) {
            pgVar9 = (game*)(local_d0 + 24);
        LAB_1006167ae:
            math::QuaternionT<double>::operator=((QuaternionT<double>*)&field_304, (QuaternionT*)pgVar9);
        } else {
            local_58 = local_38;
            uStack_50 = 0;
            dVar10 = (double)FrameTime::GetFrameDeltaD();
            local_38 = SQRT(dVar10 * 50.0) * ABS(local_58);
            local_98.field_0._0_1_ = false;
            local_98.field_0._1_1_ = false;
            local_98.field_0._2_1_ = false;
            local_98.field_0._3_5_ = 0;
            local_78 = 1.0;
            local_38 = math::Clamp<double>(&local_38, (double*)&local_98, &local_78);
            uVar11 = 0;
            if (0.0 < local_38) {
                uVar11 = 2696277389;
                JagSlerp<math::QuaternionT<double>, double>(&local_98, (QuaternionT*)&field_304,
                                                            (QuaternionT*)(local_d0 + 24), local_38, 1e-06);
                pgVar9 = &local_98;
                goto LAB_1006167ae;
            }
        }
        plVar7 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)&local_48);
        local_78 = (double)(**(code**)(*plVar7 + 144))(plVar7);
        dStack_70 = (double)CONCAT44(dStack_70._4_4_, uVar11);
        math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)&local_98, (Vector3T*)&local_78);
        math::Vector3T<double>::operator=((Vector3T<double>*)field_248, (Vector3T*)&local_98);
        *(undefined1**)param_1 = field_224;
        *(undefined1**)(param_1 + 8) = field_248;
        *(undefined1**)(param_1 + 16) = field_280;
    LAB_100616811:
        local_48.~shared_ptr();
        return CONCAT71(extraout_var, bVar2) & 4294967295;
    }

    // 0x100616b30, 160 bytes, placed by class name and debug map
    // PositionEntity::GetPosition(math::Vector3T<double>&, unsigned long long) const
    Vector3T* PositionEntity::GetPosition(Vector3T* param_1, ulonglong param_2) {
        Vector3T* pVVar1;
        Transitionable<math::Vector3T<double>> local_58[24];
        Vector3T local_40[24];

        if (field_216 == '\0') {
            local_58->GetValue((ulonglong)&field_48);
            math::operator*((math*)local_40, (Vector3T*)local_58, (QuaternionT*)&field_304);
        } else {
            pVVar1 = (Vector3T*)(&field_48)->get_overflow_allocator();
            math::operator*((math*)local_40, pVVar1, (QuaternionT*)&field_304);
        }
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, local_40);
        math::Vector3T<double>::operator+=((Vector3T<double>*)param_1, (Vector3T*)field_224);
        return param_1;
    }

    // 0x100616bd0, 208 bytes, placed by class name and debug map
    // PositionEntity::GetScaledPosition(math::Vector3T<double>&, unsigned long long, float) const
    Vector3T* PositionEntity::GetScaledPosition(Vector3T* param_1, ulonglong param_2, float param_3) {
        Vector3T* pVVar1;
        Transitionable<math::Vector3T<double>> local_78[24];
        Vector3T local_60[24];
        undefined1 local_48[28];

        if (field_216 == '\0') {
            local_78->GetValue((ulonglong)&field_48);
            math::operator*((math*)local_48, (Vector3T*)local_78, param_3);
            math::operator*((math*)local_60, (Vector3T*)local_48, (QuaternionT*)&field_304);
        } else {
            pVVar1 = (Vector3T*)(&field_48)->get_overflow_allocator();
            math::operator*((math*)local_48, pVVar1, param_3);
            math::operator*((math*)local_60, (Vector3T*)local_48, (QuaternionT*)&field_304);
        }
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, local_60);
        math::Vector3T<double>::operator+=((Vector3T<double>*)param_1, (Vector3T*)field_224);
        return param_1;
    }

    // 0x100616ce0, 112 bytes, placed by class name and debug map
    // PositionEntity::GetDestinationPosition(math::Vector3T<double>&) const
    Vector3T* PositionEntity::GetDestinationPosition(Vector3T* param_1) {
        Vector3T* pVVar1;
        QuaternionT* pQVar2;
        undefined1 local_40[24];

        pVVar1 = (Vector3T*)(&field_48)->get_overflow_allocator();
        pQVar2 = (QuaternionT*)(&field_112)->GetMaterial();
        math::operator*((math*)local_40, pVVar1, pQVar2);
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)local_40);
        math::Vector3T<double>::operator+=((Vector3T<double>*)param_1, (Vector3T*)field_248);
        return param_1;
    }

    // 0x100616d50, 176 bytes, placed by class name and debug map
    // PositionEntity::GetPositionFine(CoordFine&, unsigned long long) const
    void PositionEntity::GetPositionFine(CoordFine* param_1, ulonglong param_2) {
        vector* pvVar1;
        double* pdVar2;
        NXTPixToolkit* pNVar3;
        undefined1 local_58[24];
        ColourHSL local_40;
        float local_30;
        float local_2c;

        param_1->field_0 = field_272;
        new (local_58) oldscape::dash3d::ModelLit::AABB();
        pNVar3 = (NXTPixToolkit*)local_58;
        (*(code*)field_0[10])(this, (NXTPixToolkit*)local_58, param_2);
        pvVar1 = local_58->SSOBeginPtr(pNVar3);
        local_30 = (float)*(double*)pvVar1;
        pdVar2 = (double*)local_58->second();
        local_2c = (float)*pdVar2;
        pdVar2 = (double*)local_58->GetScreen();
        new (&local_40) math::ColourHSL(local_30, local_2c, (float)*pdVar2);
        (&param_1->field_4, (Vector3T*)&local_40)->SetXYZ();
    }

    // 0x100616e00, 160 bytes, placed by class name and debug map
    // PositionEntity::UpdateOrientationOffset(math::QuaternionT<double> const&, unsigned long long)
    void PositionEntity::UpdateOrientationOffset(QuaternionT* param_1, ulonglong param_2) {
        QuaternionT* pQVar1;
        QuaternionT<double> local_58[32];
        int local_38;
        int local_34;

        pQVar1 = (QuaternionT*)(&field_112)->GetMaterial();
        math::operator*((math*)local_58, param_1, pQVar1);
        CameraHelpers::QuaternionToOldJagexAngles(&local_34, &local_38, (QuaternionT*)local_58);
        if ((field_12 == '\0') || ((127 < local_34 && (local_34 < 385)))) {
            local_58->Normalise();
            (&field_112, (QuaternionT*)local_58, (long)(int)field_212, param_2)->SetValue();
        }
    }

    // 0x1006171a0, 768 bytes, placed by class name and debug map
    // PositionEntity::TestAndResolveCollision(HeightMap const*, LinkMap const*, bool, bool)
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* PositionEntity::TestAndResolveCollision(HeightMap const*,
   LinkMap const*, bool, bool) */

    void PositionEntity::TestAndResolveCollision(HeightMap* param_1, LinkMap* param_2, bool param_3, bool param_4) {
        uint uVar1;
        double dVar2;
        undefined8 this_00;
        char cVar3;
        bool bVar4;
        int iVar6;
        int iVar7;
        Entity* this_01;
        HitmarkType* this_02;
        QuaternionT* pQVar8;
        undefined8* puVar9;
        ulonglong uVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined1 local_158[32];
        undefined1 local_138[32];
        undefined8 local_118;
        undefined8 uStack_110;
        undefined8 local_108;
        undefined8 uStack_100;
        double local_f8;
        undefined8 uStack_f0;
        undefined1 local_e0[24];
        undefined1 local_c8[72];
        GeometryBatchInstance* local_70;
        double local_60;
        int local_54;
        uint local_4c;
        double local_40;
        int local_34;

        cVar3 = (*(code*)field_0[4])();
        if (((cVar3 != '\0') && (param_1 != (HeightMap*)0)) && (param_3)) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar4 = ((local_c8 + 72))->operator_cast_to_bool();
            if (bVar4) {
                this_01 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)(local_c8 + 72));
                iVar6 = this_01->GetHeightMapLevel();
                field_272 = iVar6;
                this_02 = (HitmarkType*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)(local_c8 + 72));
                iVar7 = this_02->GetDuration();
                if (iVar6 == iVar7) {
                    bVar4 = field_272 < 3;
                } else {
                    bVar4 = false;
                }
                local_4c = (uint)bVar4;
                if ((CollisionTestHeightDiff(this, &local_34, param_1, param_2, param_4, bVar4) & 0 < local_34) != 0) {
                    local_70 = (GeometryBatchInstance*)&field_112;
                    pQVar8 = (QuaternionT*)local_70->GetMaterial();
                    math::operator*((math*)local_e0, (Vector3T*)PTR_LOOK_100ee66b8, pQVar8);
                    local_c8._16_8_ = local_e0._16_8_;
                    local_c8._0_8_ = local_e0._0_8_;
                    local_c8._8_8_ = local_e0._8_8_;
                    local_c8._64_8_ = this;
                    puVar9 = (undefined8*)local_c8->second();
                    *puVar9 = 0;
                    local_c8->Normalize();
                    local_60 = math::Vector3Dot<double>((Vector3T*)local_e0, (Vector3T*)local_c8);
                    local_40 = 1.570796327;
                    iVar6 = 10;
                    do {
                        uVar11 = 0;
                        uVar12 = 0;
                        local_c8._56_8_ = (local_60 + local_40) * 0.5;
                        local_f8 = (double)local_c8._56_8_ - local_60;
                        uStack_f0 = 0;
                        dVar2 = local_f8;
                        if (0 < local_34) {
                            dVar2 = (double)((ulong)local_f8 ^ (ulong)DAT_100d99950);
                            uVar11 = DAT_100d99950._8_4_;
                            uVar12 = DAT_100d99950._12_4_;
                        }
                        local_c8._40_4_ = uVar11;
                        local_c8._32_8_ = dVar2;
                        local_c8._44_4_ = uVar12;
                        local_54 = iVar6;
                        puVar9 = (undefined8*)local_70->GetMaterial();
                        local_118 = *puVar9;
                        uStack_110 = puVar9[1];
                        local_108 = puVar9[2];
                        uStack_100 = puVar9[3];
                        math::operator*((math*)local_138, (Vector3T*)PTR_RIGHT_100ee66c8, (QuaternionT*)&local_118);
                        math::Vector3T<double>::operator=((Vector3T<double>*)local_e0, (Vector3T*)local_138);
                        new (local_138) math::QuaternionT<double>();
                        local_138->FromAxisAngle(local_e0, (double)local_c8._32_8_);
                        math::operator*((math*)local_158, (QuaternionT*)local_138, (QuaternionT*)&local_118);
                        this_00 = local_c8._64_8_;
                        uVar1 = *(uint*)(local_c8._64_8_ + 212);
                        uVar10 = FrameTime::GetCurrentTimeMS();
                        local_70->SetValue(local_158, (long)(int)uVar1, uVar10);
                        cVar3 = CollisionTestHeightDiff((PositionEntity*)this_00, &local_34, param_1, param_2,
                                                        SUB41((uint)param_4, 0), SUB41(local_4c, 0));
                        if (cVar3 != '\0') {
                            if (local_34 < 1) {
                                local_40 = local_40 - local_f8;
                            } else {
                                local_60 = (double)local_c8._56_8_;
                            }
                        }
                    } while ((cVar3 != '\0') && (iVar6 = local_54 + -1, iVar6 != 0));
                }
            }
            ((local_c8 + 72))->~shared_ptr();
        }
    }

    // 0x1006174a0, 288 bytes, placed by class name and debug map
    // PositionEntity::CollisionTestHeightDiff(int&, HeightMap const*, LinkMap const*, bool, bool)
    undefined8 PositionEntity::CollisionTestHeightDiff(int* param_1, HeightMap* param_2, LinkMap* param_3, bool param_4,
                                                       bool param_5) {
        double dVar1;
        undefined* puVar2;
        char cVar3;
        uint uVar4;
        vector* pvVar5;
        double* pdVar6;
        undefined* puVar7;
        undefined** ppuVar8;
        AABB* this_00;
        undefined7 in_register_00000081;
        undefined7 in_register_00000089;
        int iVar9;
        AABB local_58;
        uint local_38;
        int local_34;

        local_38 = (uint)CONCAT71(in_register_00000081, param_4);
        this_00 = &local_58;
        oldscape::dash3d::ModelLit::AABB::AABB(this_00);
        (*(code*)field_0[12])(this);
        iVar9 = field_272;
        if ((int)CONCAT71(in_register_00000089, param_5) != 0) {
            pvVar5 = local_58.SSOBeginPtr(this_00);
            this_00 = (AABB*)((ulong)(long)*(double*)pvVar5 >> 7 & 33554431);
            pdVar6 = (double*)local_58.GetScreen();
            cVar3 = param_3->IsLinkBelow((int)this_00, (uint)((ulong)(long)*pdVar6 >> 7) & 33554431);
            if (cVar3 != '\0') {
                iVar9 = field_272 + 1;
            }
        }
        pvVar5 = local_58.SSOBeginPtr(this_00);
        dVar1 = *(double*)pvVar5;
        pdVar6 = (double*)local_58.GetScreen();
        puVar7 = (undefined*)param_2->GetFineHeight(&local_34, iVar9, (int)dVar1, (int)*pdVar6, 1, local_38 & 255);
        iVar9 = local_34;
        puVar2 = DataStatus::NOTLOADED;
        ppuVar8 = &DataStatus::NOTLOADED;
        if (puVar7 != DataStatus::NOTLOADED) {
            local_34 = local_34 + 153;
            pdVar6 = (double*)local_58.second();
            uVar4 = (iVar9 - (int)*pdVar6) + 153;
            ppuVar8 = (undefined**)(ulong)uVar4;
            *param_1 = uVar4;
        }
        return CONCAT71((int7)((ulong)ppuVar8 >> 8), puVar7 != puVar2);
    }

    // 0x1006175c0, 112 bytes, placed by class name and debug map
    // PositionEntity::GetFollowAngle() const
    ulong PositionEntity::GetFollowAngle() {
        Vector3T* pVVar1;
        double* pdVar2;
        undefined1 local_38[24];
        double local_20;

        pVVar1 = (Vector3T*)(&field_48)->get_overflow_allocator();
        math::operator*((math*)local_38, pVVar1, (QuaternionT*)&field_304);
        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)local_38, 0);
        local_20 = *pdVar2;
        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)local_38, 2);
        return math::conversion::JagAtan2(local_20, *pdVar2) ^ 9223372036854775808;
    }

    // 0x100617630, 160 bytes, placed by class name and debug map
    // PositionEntity::GetFollowAngle(math::Point<int>&) const
    ulong PositionEntity::GetFollowAngle(Point* param_1) {
        Vector3T* pVVar1;
        double* pdVar2;
        undefined1 local_48[24];
        Point<int> local_30[8];
        double local_28;

        math::Point<int>::Point(local_30, (Point*)&field_196);
        math::Point<int>::operator=((Point<int>*)param_1, local_30);
        pVVar1 = (Vector3T*)(&field_48)->get_overflow_allocator();
        math::operator*((math*)local_48, pVVar1, (QuaternionT*)&field_304);
        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)local_48, 0);
        local_28 = *pdVar2;
        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)local_48, 2);
        return math::conversion::JagAtan2(local_28, *pdVar2) ^ 9223372036854775808;
    }

    // 0x1006176d0, 48 bytes, placed by class name and debug map
    // PositionEntity::GetDeclination() const
    double PositionEntity::GetDeclination() {
        float fVar1;
        int local_10;
        int local_c;

        CameraHelpers::QuaternionToOldJagexAngles(&local_c, &local_10, (QuaternionT*)&field_304);
        fVar1 = (float)math::conversion::OldJagexAngleToRadians(local_c);
        return (double)fVar1;
    }

    // 0x100617700, 336 bytes, placed by class name and debug map
    // PositionEntity::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    undefined8 PositionEntity::ToString(fixed_string* param_1) {
        char cVar2;
        int iVar3;
        HitmarkType* this_00;
        Entity* pEVar4;
        Vector3T* pVVar5;
        undefined8 uVar6;
        char* pcVar7;
        undefined1 local_a8[16];
        fixed_string<char, 64, true, eastl::allocator> local_88[104];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (((local_a8 + 16))->operator_cast_to_bool()) {
            this_00 = (HitmarkType*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)(local_a8 + 16));
            iVar3 = this_00->GetDuration();
            pEVar4 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)(local_a8 + 16));
            pVVar5 = (Vector3T*)pEVar4->GetWorldPosition();
            new (local_a8) CoordFine(iVar3, pVVar5);
            eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_88);
            pEVar4 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)(local_a8 + 16));
            cVar2 = pEVar4->GetEntityType();
            uVar6 = GetEntityTypeString((int)cVar2);
            pcVar7 = CoordFine::ToString<64, true>((CoordFine*)local_a8, (fixed_string*)local_88);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)param_1, "{ PositionEntity : %s @ %s }", uVar6, pcVar7);
            /* WARNING: Subroutine does not return */
            local_88->~fixed_string();
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{ PositionEntity : expired }");
        uVar6 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        ((local_a8 + 16))->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar6;
    }

} // namespace jag::game

namespace jag::math {
    // 0x100616a00, 48 bytes, inline, placed by debug map only (low confidence)
    // double Clamp<double>(double const&, double const&, double const&)
    double Clamp<double>(double* param_1, double* param_2, double* param_3) {
        double* pdVar1;

        pdVar1 = std::max<double>(param_2, param_1);
        pdVar1 = std::min<double>(param_3, pdVar1);
        return *pdVar1;
    }

    // 0x100616ca0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> operator*<double>(Vector3T<double> const&, float)
    /* Vector3T<double> TEMPNAMEPLACEHOLDERVALUE(Vector3T<double>
   const&, float) */

    math* operator*(Vector3T* param_1, float param_2) {
        new (this) Vector3T<double>(*(double*)param_1 * (double)param_2, *(double*)(param_1 + 8) * (double)param_2,
                                    (double)param_2 * *(double*)(param_1 + 16));
        return this;
    }

    // 0x100616ea0, 768 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double> operator*<double>(QuaternionT<double> const&, QuaternionT<double> const&)
    /* QuaternionT<double> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double>
   const&, QuaternionT<double> const&) */

    math* operator*(QuaternionT* param_1, QuaternionT* param_2) {
        double dVar1;
        double dVar2;
        double dVar3;
        double dVar4;
        double dVar5;
        double dVar6;
        double dVar7;
        double dVar8;
        double dVar9;
        double dVar10;
        double dVar11;
        double dVar12;
        double dVar13;
        double dVar14;
        double dVar15;
        double dVar16;
        double dVar17;
        double dVar18;
        double dVar19;
        double dVar20;
        double dVar21;
        double dVar22;
        double dVar23;
        double dVar24;
        double dVar25;
        double dVar26;
        double dVar27;
        double dVar28;
        double dVar29;
        double dVar30;
        double dVar31;
        double* pdVar32;
        vector* pvVar33;

        pdVar32 = (double*)param_1->second();
        dVar1 = *pdVar32;
        pvVar33 = param_2->SSOBeginPtr(param_1);
        dVar2 = *(double*)pvVar33;
        pvVar33 = param_1->SSOBeginPtr(param_1);
        dVar3 = *(double*)pvVar33;
        pdVar32 = (double*)param_2->second();
        dVar4 = *pdVar32;
        pdVar32 = (double*)param_1->second();
        dVar5 = *pdVar32;
        pdVar32 = (double*)param_2->GetScreen();
        dVar6 = *pdVar32;
        pdVar32 = (double*)param_1->GetScreen();
        dVar7 = *pdVar32;
        pdVar32 = (double*)param_2->second();
        dVar8 = *pdVar32;
        pdVar32 = (double*)param_1->second();
        dVar9 = *pdVar32;
        pdVar32 = (double*)param_2->second();
        dVar10 = *pdVar32;
        pvVar33 = param_1->SSOBeginPtr(param_1);
        dVar11 = *(double*)pvVar33;
        pdVar32 = (double*)param_2->GetScreen();
        dVar12 = *pdVar32;
        pdVar32 = (double*)param_1->second();
        dVar13 = *pdVar32;
        pdVar32 = (double*)param_2->second();
        dVar14 = *pdVar32;
        pdVar32 = (double*)param_1->GetScreen();
        dVar15 = *pdVar32;
        pvVar33 = param_2->SSOBeginPtr(param_1);
        dVar16 = *(double*)pvVar33;
        pdVar32 = (double*)param_1->second();
        dVar17 = *pdVar32;
        pdVar32 = (double*)param_2->GetScreen();
        dVar18 = *pdVar32;
        pvVar33 = param_1->SSOBeginPtr(param_1);
        dVar19 = *(double*)pvVar33;
        pdVar32 = (double*)param_2->second();
        dVar20 = *pdVar32;
        pdVar32 = (double*)param_1->second();
        dVar21 = *pdVar32;
        pvVar33 = param_2->SSOBeginPtr(param_1);
        dVar22 = *(double*)pvVar33;
        pdVar32 = (double*)param_1->GetScreen();
        dVar23 = *pdVar32;
        pdVar32 = (double*)param_2->second();
        dVar24 = *pdVar32;
        pdVar32 = (double*)param_1->second();
        dVar25 = *pdVar32;
        pdVar32 = (double*)param_2->second();
        dVar26 = *pdVar32;
        pvVar33 = param_1->SSOBeginPtr(param_1);
        dVar27 = *(double*)pvVar33;
        pvVar33 = param_2->SSOBeginPtr(param_1);
        dVar28 = *(double*)pvVar33;
        pdVar32 = (double*)param_1->second();
        dVar29 = *pdVar32;
        pdVar32 = (double*)param_2->second();
        dVar30 = *pdVar32;
        pdVar32 = (double*)param_1->GetScreen();
        dVar31 = *pdVar32;
        pdVar32 = (double*)param_2->GetScreen();
        new (this) QuaternionT<double>((dVar5 * dVar6 + dVar3 * dVar4 + dVar1 * dVar2) - dVar7 * dVar8,
                                       dVar15 * dVar16 + dVar13 * dVar14 + (dVar9 * dVar10 - dVar11 * dVar12),
                                       dVar23 * dVar24 + ((dVar19 * dVar20 + dVar17 * dVar18) - dVar21 * dVar22),
                                       dVar25 * dVar26 - (dVar31 * *pdVar32 + dVar29 * dVar30 + dVar27 * dVar28));
        return this;
    }

} // namespace jag::math
